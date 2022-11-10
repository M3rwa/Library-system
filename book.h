// ===========================================================================================
// Classes for Books(Parent Class) << Three child Classes from Parent class for Books Ctegory
// ===========================================================================================

#include <iostream>
using namespace std;

class books {
protected:
    string name;
    double price;
public:
    string get_name() {
        return name;
    }
    int get_price() {
        return price;
    }
};

// Engineering Books class

class EngineeringBooks : public books {
private:
    const string category = "Engineering";
public:
    EngineeringBooks(string name, int price)
    {
        this->name = name;
        this->price = price;
    }
};

// Medical Books class

class MedicalBooks : public books {
private:
    const string category = "Medical";
public:
    MedicalBooks(string name, int price)
    {
        this->name = name;
        this->price = price;
    }
};

// Religious Books class

class ReligiousBooks : public books {
private:
    const string category = "Religious";
public:
    ReligiousBooks(string name, int price)
    {
        this->name = name;
        this->price = price;
    }
};