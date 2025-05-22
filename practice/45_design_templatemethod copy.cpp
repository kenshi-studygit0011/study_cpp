#include <iostream>
#include <vector>
#include <memory>
#include <string>
using namespace std;

// 観測者（observer）インターフェース
class Observer {
    public:
        virtual void update(const string& weather) = 0;
        virtual ~Observer() = default;
};

// 監視対象（Subject）インターフェース
class Subject {
    public:
        virtual void addObserver(shared_ptr<Observer> observer) = 0;
        virtual void removeObserver(shared_ptr<Observer> observer) = 0;
        virtual void notifyObservers() = 0;
        virtual ~Subject() = default;
};

// 具体的なSubject(天気観測所)
class WeatherStation : public Subject {
    string currentWeather;
    vector<shared_ptr<Observer>> observers;

    public:
        void setWeather(const string& weather) {
            currentWeather = weather;
            notifyObservers();
        }

        void addObserver(shared_ptr<Observer> observer) override {
            observers.push_back(observer);
        }

        void removeObserver(shared_ptr<Observer> observer) override {
            observers.erase(
                remove_if(observers.begin(), observers.end(),
                    [&observer](const shared_ptr<Observer>& o) {
                        return o == observer;
                    }
                ),
                observers.end()
            );
        }

        void notifyObservers() override {
            for(const auto& observer: observers){
                observer -> update(currentWeather);
            }
        }
};

// 具体的な Observer（表示装置A）
class PhoneDisplay : public Observer {
public:
    void update(const string& weather) override {
        cout << "[Phone Display] 天気が更新されました: " << weather << endl;
    }
};

// 具体的な Observer（表示装置B）
class TVDisplay : public Observer {
public:
    void update(const string& weather) override {
        cout << "[TV Display] 天気情報: " << weather << endl;
    }
};

// 使用例（main関数）
int main() {
    auto station = make_shared<WeatherStation>();
    auto phone = make_shared<PhoneDisplay>();
    auto tv = make_shared<TVDisplay>();

    // 観測者を追加
    station->addObserver(phone);
    station->addObserver(tv);

    // 最初の通知
    station->setWeather("晴れ");

    // PhoneDisplay を削除（通知対象から外す）
    station->removeObserver(phone);

    // 再度通知（PhoneDisplay には通知されない）
    station->setWeather("雨");

    return 0;
}
