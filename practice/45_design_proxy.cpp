#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

// インターフェース
class Internet {
    public:
        virtual void connectTo(const string& site) = 0;
        virtual ~Internet() = default;
};

// 実体クラス（本物のインターネット接続）
class RealInternet : public Internet {
    public:
        void connectTo(const string& site) override {
            cout << "「" << site << "」に接続しています...\n";
        }
};

// プロキシクラス（アクセス制御）
class ProxyInternet : public Internet {
    unique_ptr<RealInternet> realInternet;
    vector<string> bannedSites = {"banned.com", "adultsite.com", "fake-news.com"};

    public:
        ProxyInternet(){
            realInternet = make_unique<RealInternet>();
        }

        void connectTo(const string& site) override {
            for(const auto& banned : bannedSites) {
                if(site == banned) {
                    cout << "アクセス拒否：「" << site << "」は禁止サイトです\n";
                }
            }
            realInternet -> connectTo(site);
        }
};

// 使用例
int main(){
    unique_ptr<Internet> net = make_unique<ProxyInternet>();

    // -> はポインタが指すオブジェクトのメンバにアクセスするための演算子。
    net -> connectTo("example.com");
    net -> connectTo("banned.com");
    net -> connectTo("news.com");

}


