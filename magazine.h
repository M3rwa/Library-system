#include <iostream>
using namespace std;

// class for Magazines

class Magazines {
private:
    string name;
    int price;
public:
    Magazines(string name, int price) {
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
