#include <iostream>
using namespace std;
// class for Short Stories

class ShortStories {
private:
    string name;
    int price;
public:
    ShortStories(string name, int price) {
        this->name = name;
        this->price = price;
    }
    string get_name() {
        return name;
    }
    int get_price() {
        return price;
    }
};
