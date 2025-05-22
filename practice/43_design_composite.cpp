#include <iostream>
#include <vector>
#include <memory>
using namespace std;

// 共通インターフェース
class MenuComponent {
    public:
        virtual void display(int indent = 0) const = 0;
        virtual ~MenuComponent() = default;
};

// 単品料理（Leaf）
class MenuItem: public MenuComponent{
    string name;
    int price;

    public:
        // 文字列を参照渡しで受け取る　＆は参照の記号。値をコピーせず元の変数を直接参照する。
        MenuItem(const string& name, int price) : name(name), price(price){}

        void display(int indent = 0) const override {
            cout << string(indent, ' ') << "- " << name << " : ￥" << price << "\n";
        }
};

// メニュー（Composite）
class Menu: public MenuComponent{
    string title;
    vector < shared_ptr <MenuComponent> > items;

    public:
        Menu(const string& title) : title(title){}

        void add(const shared_ptr <MenuComponent> & item){
            items.push_back(item);
        }

        void display(int indent = 0) const override {
            cout << string(indent, ' ') << "+ " << title << "\n";
            for(const auto& item : items){
                item -> display(indent + 2);
            }
        }
};

// 使用例
int main() {
    // make_shared<T>(...)は、std::shared_ptr<T>を作成する関数。通常、shared_ptrを使う場合、
    // shared_ptr<Menu> menu = shared_ptr<Menu>(new Menu("Main Menu"));と書く必要があるところを短くして書く時、make_shared<T>を使用する。
    auto mainMenu = make_shared<Menu>("Main Menu");
    auto lunchSet = make_shared<Menu>("Lunch Set");

    lunchSet -> add(make_shared<MenuItem>("Hamburger", 800));
    lunchSet -> add(make_shared<MenuItem>("Salad", 300));
    lunchSet -> add(make_shared<MenuItem>("Drink", 200));

    mainMenu -> add(lunchSet);
    mainMenu -> add(make_shared<MenuItem>("Pasta", 900));
    mainMenu -> add(make_shared<MenuItem>("Steak", 1500));

    mainMenu -> display();

    return 0;
}