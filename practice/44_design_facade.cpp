#include <iostream>
using namespace std;

// サブシステム1
class Light {
    public:
        void turnOff() {
            cout << "ライトを消します\n";
        }
};

// サブシステム2
class Projector {
    public:
        void turnOn(){
            cout << "プロジェクターを起動します\n";
        }
};

// サブシステム3
class SoundSystem {
    public:
        void setSurroundSound(){
            cout << "サラウンドサウンドを設定します\n";
        }
};

// Facade クラス
class HomeTheaterFacade {
    private:
        Light light;
        Projector projector;
        SoundSystem sound;

    public:
        void watchMovie(){
            cout << "映画を見る準備をします\n";
            light.turnOff();
            projector.turnOn();
            sound.setSurroundSound();
            cout << "準備完了!映画を楽しんでください\n";
        }
};

int main() {
    HomeTheaterFacade homeTheater;
    homeTheater.watchMovie();

    return 0;
}
