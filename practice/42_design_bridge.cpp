#include <iostream>
#include <memory>
using namespace std;

// 実装側インターフェース
class Notifier{
    public:
        // 抽象メソッド（サブクラスでそのメソッドを必ず実装する）
        virtual void notify(const string& message) = 0;
        virtual ~Notifier() = default;
};

// 実装クラス
class EmailNotifier : public Notifier{
    public:
        void notify(const string& message) override {
            cout << "[SMS]" << message << "\n";
        }
};

class SlackNotifier : public Notifier {
    public:
        void notify(const string& message) override {
            cout << "[Slack]" << message << "\n";
        }
};

// 抽象側
class Notification {
    protected:
        shared_ptr<Notifier> notifier;
    public:
        // 抽象メソッドを定義し、実装はサブクラスに任せる。
        Notification(shared_ptr<Notifier> notifier) : notifier(notifier){}
        virtual void send(const string& message) = 0;
        virtual ~Notification() = default;
};

// 抽象の具体クラス
class ErrorNotification : public Notification {
    public:
        ErrorNotification(shared_ptr<Notifier> notifier) : Notification(notifier) {}
        void send(const string& message) override {
            notifier -> notify("[Error]" + message);
        }
};

class NormalNotification : public Notification{
    public:
        NormalNotification(shared_ptr<Notifier> notifier) : Notification(notifier){}
        void send(const string& message) override {
            notifier -> notify("[INFO] " + message);
        }
};

// 使用例
int main(){
    // 通常通知をEmailで送信
    auto email = make_shared<EmailNotifier>();
    unique_ptr<Notification> normal = make_unique<NormalNotification>(email);
    normal -> send("システムが起動しました。");

    // エラー通知をSlackで送信
    auto slack = make_shared<SlackNotifier>();
    unique_ptr<Notification> error = make_unique<ErrorNotification>(slack);
    error -> send("接続エラーが発生しました！");

    return 0;
}