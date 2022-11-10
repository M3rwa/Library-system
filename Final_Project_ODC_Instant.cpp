#include <iostream>
#include <stack>
using namespace std;

// Constant variables to define cost of borrowing any books for a day
const double PricePerDay = 5;

// ===========================================================================================
// Classes for Books(Parent Class) << Three child Classes from Parent class for Books Ctegory
// ===========================================================================================

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

// ======================================================================================================
// Classes for our Employees and Two classes for our two types of Employee(Fixed Employess and Dynamic)
// ======================================================================================================

class Employee
{
protected:
    string name;
public:
    string get_name() {
        return name;
    }
};

class FixedEmployee : public Employee
{
public:
    string features = "Life long contract";
    FixedEmployee(string name)
    {
        this->name = name;
    }
};

class DynamicEmployee : public Employee
{
public:
    string features = "Daily payment";
    DynamicEmployee(string name)
    {
        this->name = name;
    }
};


// ======================================================================================================
// Function overriding to borrow books from any Category
// ======================================================================================================

void BorrowBooks(stack<EngineeringBooks>& Eng, int days = 1)
{
    if (Eng.size() == 0)
    {
        cout << "Out of Stock" << endl;
    }
    else
    {
        cout << endl << "Book Name: " << Eng.top().get_name() << endl
             << "Total Price: " << PricePerDay * days << endl;
        Eng.pop();
        cout << "Stock: " << Eng.size() << endl;
    }
}

void BorrowBooks(stack<MedicalBooks>& Med, int days = 1)
{
    if (Med.size() == 0)
    {
        cout << "Out of Stock" << endl;
    }
    else
    {
        cout <<endl<< "Book Name: " << Med.top().get_name() << endl
            << "Total Price: " << PricePerDay * days << endl;
        Med.pop();
        cout << "Stock: " << Med.size() << endl;
    }
}

void BorrowBooks(stack<ReligiousBooks>& Reg, int days = 1)
{
    if (Reg.size() == 0)
    {
        cout << "Out of Stock" << endl;
    }
    else
    {
        cout <<endl<< "Book Name: " << Reg.top().get_name() << endl
            << "Total Price: " << PricePerDay * days << endl;
        Reg.pop();
        cout << "Stock: " << Reg.size() << endl;
    }
}

void BorrowMagazines(stack<Magazines>& Mag, int days = 1)
{
    if (Mag.size() == 0)
    {
        cout << "There is no more magazines for buying or borrow!" << endl;
    }
    else
    {
        cout <<endl<< "Magazine Name: " << Mag.top().get_name() << endl <<
            "Total Price: " << PricePerDay * days << endl;
        Mag.pop();
        cout << "Stock: " << Mag.size() << endl;
    }
}

void BorrowShortStories(stack<ShortStories> SS, int days = 1)
{
    if (SS.size() == 0)
    {
        cout << "There is no more magazines for buying or borrow!" << endl;
    }
    else
    {
        cout <<endl<< "Short Story Name: " << SS.top().get_name() << endl
            << "Total Price: " << PricePerDay * days << endl;
        SS.pop();
        cout << "Stock: " << SS.size() << endl;
    }
}

// ======================================================================================================
// Function overriding to sell books
// ======================================================================================================

void SellBooks(stack<EngineeringBooks>& Eng)
{
    if (Eng.size() == 3)
    {
        cout << "Out of Stock" << endl;
    }
    else
    {
        cout <<endl<< "Book Name: " << Eng.top().get_name() << endl
            << "Price: " << Eng.top().get_price() << endl;
        Eng.pop();
        cout << "Stock: " << Eng.size() << endl;
    }
}

void SellBooks(stack<MedicalBooks>& Med)
{
    if (Med.size() == 3)
    {
        cout << "Out of Stock" << endl;
    }
    else
    {
        cout <<endl<< "Book Name: " << Med.top().get_name() << endl
            << "Price: " << Med.top().get_price() << endl;
        Med.pop();
        cout << "Stock: " << Med.size() << endl;
    }
}

void SellBooks(stack<ReligiousBooks>& Reg)
{
    if (Reg.size() == 3)
    {
        cout << "Out of Stock" << endl;
    }
    else
    {
        cout <<endl<< "Book Name: " << Reg.top().get_name() << endl
            << "Price: " << Reg.top().get_price() << endl;
        Reg.pop();
        cout << "Stock: " << Reg.size() << endl;
    }
}

void SellMagazines(stack<Magazines>& Mag)
{
    if (Mag.size() == 0)
    {
        cout << "Out of Stock" << endl;
    }
    else
    {
        cout <<endl<< "Book Name: " << Mag.top().get_name() << endl
            << "Price: " << Mag.top().get_price() << endl;
        Mag.pop();
        cout << "Stock: " << Mag.size() << endl;
    }
}

void SellShortStories(stack<ShortStories>& SS)
{
    if (SS.size() == 0)
    {
        cout << "Out of Stock" << endl;
    }
    else
    {
        cout <<endl<< "Book Name: " << SS.top().get_name() << endl
            << "Price: " << SS.top().get_price() << endl;
        SS.pop();
        cout << "Stock: " << SS.size() << endl;
    }
}

// Array of Names for our Employees(Fixed and Dynamic)

FixedEmployee FixedEmpNames[10] = { FixedEmployee("Femployee1"), FixedEmployee("Femployee2"),
                                    FixedEmployee("Femployee3"), FixedEmployee("Femployee4"),
                                    FixedEmployee("Femployee5"), FixedEmployee("Femployee6"),
                                    FixedEmployee("Femployee7"), FixedEmployee("Femployee8"),
                                    FixedEmployee("Femployee9"), FixedEmployee("Femployee10") };

DynamicEmployee DynamicEmpNames[6] = { DynamicEmployee("Demployee1"), DynamicEmployee("Demployee2"),
                                       DynamicEmployee("Demployee3"), DynamicEmployee("Demployee4"),
                                       DynamicEmployee("Demployee5"), DynamicEmployee("Demployee6") };

// ======================================================================================================
// Define stacks of objects for our books
// ======================================================================================================

stack<EngineeringBooks> Eng1;
stack<MedicalBooks> Med1;
stack<ReligiousBooks> Reg1;
stack<Magazines> Mag1;
stack<ShortStories> SS1;


int main() {
    //using push function we will insert our books name and price to their stack
    Eng1.push(EngineeringBooks("EBook1", 57));
    Eng1.push(EngineeringBooks("EBook2", 60));
    Eng1.push(EngineeringBooks("EBook3", 97));
    Eng1.push(EngineeringBooks("EBook4", 57));
    Eng1.push(EngineeringBooks("EBook5", 40));
    Eng1.push(EngineeringBooks("eBook6", 37));
    Eng1.push(EngineeringBooks("eBook7", 55));
    Eng1.push(EngineeringBooks("eBook8", 62));
    Eng1.push(EngineeringBooks("eBook9", 77));

    Med1.push(MedicalBooks("mBook1", 57));
    Med1.push(MedicalBooks("mBook2", 60));
    Med1.push(MedicalBooks("mBook3", 97));
    Med1.push(MedicalBooks("mBook4", 57));
    Med1.push(MedicalBooks("mBook5", 60));
    Med1.push(MedicalBooks("mBook6", 97));
    Med1.push(MedicalBooks("mBook7", 57));
    Med1.push(MedicalBooks("mBook8", 60));
    Med1.push(MedicalBooks("mBook9", 97));

    Reg1.push(ReligiousBooks("rBook1", 57));
    Reg1.push(ReligiousBooks("rBook2", 60));
    Reg1.push(ReligiousBooks("rBook3", 97));
    Reg1.push(ReligiousBooks("rBook4", 57));
    Reg1.push(ReligiousBooks("rBook5", 60));
    Reg1.push(ReligiousBooks("rBook6", 97));
    Reg1.push(ReligiousBooks("rBook7", 57));
    Reg1.push(ReligiousBooks("rBook8", 60));
    Reg1.push(ReligiousBooks("rBook9", 97));

    Mag1.push(Magazines("Magazine1", 10));
    Mag1.push(Magazines("Magazine2", 15));
    Mag1.push(Magazines("Magazine3", 20));

    SS1.push(ShortStories("Short Stories1", 5));
    SS1.push(ShortStories("Short Stories2", 10));
    SS1.push(ShortStories("Short Stories3", 13));

    string type, name, process, category, oneMore;
    int choice1, choice2, days;
    bool checker = true, checkName = false;
    cout << "\t\t\t\t\t(: Welcome to our Library System :)"<<endl;
    cout <<endl<< "Please enter your position (fixed/dynamic) employee: ";
    cin >> type;

    if (type == "fixed" || type == "dynamic") {
        cout << endl << "Welcome our Employee!" << endl;
    }
    else
    {
        do {
            cout << endl << "Please Enter your position agian: ";
            cin >> type;
            if (type == "dynamic") {
                break;
            }
        } while (type != "fixed");
    }

    // Privilgious for our Fixed Employees

    if (type == "fixed") {
        cout << endl << "Please Enter your name: ";

    InvalidNameFixed:

        cin >> name;
        for (int i = 0; i < 10; i++) {
            if (name == FixedEmpNames[i].get_name()) {
                cout << endl << "You are allowed!" << endl;
                checkName = true;

            ContinueWhileFixed:

                while (checker) {
                    do {
                        cout << endl << "Do you want to lend or sell? ";
                        cin >> process;
                        if (process == "sell") {
                            break;
                        }
                    } while (process != "lend");

                ChoseProductCategoryFixed:

                    cout << endl
                        << "Chose product category: " << endl << endl
                        << "\t1. Books (Engineering/Medical/Religious)" << endl
                        << "\t2. Magazines" << endl
                        << "\t3. Short Story" << endl
                        << "Choice [1 / 2 / 3]: ";
                    cin >> choice1;

                    switch (choice1)
                    {

                    ChoseBookCategoryFixed:

                    case 1:

                        cout << endl
                            << "Chose book category:" << endl << endl
                            << "\t1. Engineering" << endl
                            << "\t2. Medical" << endl
                            << "\t3. Religious" << endl
                            << "Choice [1 / 2 / 3]: ";
                        cin >> choice2;
                        switch (choice2)
                        {
                        case 1:
                            if (process == "lend") {
                                cout << endl << "How many days do you want lend this book? ";
                                cin >> days;
                                while (days <= 0) {
                                    cout << endl << "Not valid value, please enter valid value: ";
                                    cin >> days;
                                }
                                BorrowBooks(Eng1, days);
                            }
                            else {
                                SellBooks(Eng1);
                            }
                            break;

                        case 2:
                            if (process == "lend") {
                                cout << endl << "How many days do you want lend this book? ";
                                cin >> days;
                                while (days <= 0) {
                                    cout << endl << "Not valid value, please enter valid value: ";
                                    cin >> days;
                                }
                                BorrowBooks(Med1, days);
                            }
                            else {
                                SellBooks(Med1);
                            }
                            break;

                        case 3:
                            if (process == "lend") {
                                cout << endl << "How many days do you want lend this book? ";
                                cin >> days;
                                while (days <= 0) {
                                    cout << endl << "Not valid value, please enter valid value: ";
                                    cin >> days;
                                }
                                BorrowBooks(Reg1, days);
                            }
                            else {
                                SellBooks(Reg1);
                            }
                            break;

                        default:
                            cout << endl << "Not valid choice!";
                            goto ChoseBookCategoryFixed;
                        }
                        break;

                    case 2:
                        if (process == "lend") {
                            cout << endl << "How many days do you want lend this book? ";
                            cin >> days;
                            while (days <= 0) {
                                cout << endl << "Not valid value, please enter valid value: ";
                                cin >> days;
                            }
                            BorrowMagazines(Mag1, days);
                        }
                        else {
                            SellMagazines(Mag1);
                        }
                        break;

                    case 3:
                        if (process == "lend") {
                            cout << endl << "How many days do you want lend this book? ";
                            cin >> days;
                            while (days <= 0) {
                                cout << endl << "Not valid value, please enter valid value: ";
                                cin >> days;
                            }
                            BorrowShortStories(SS1, days);
                        }
                        else {
                            SellShortStories(SS1);
                        }
                        break;

                    default:
                        cout << endl << "Not valid choice!";
                        goto ChoseProductCategoryFixed;
                    }

                    cout << "Do you want to do another process?" << endl;

                TopOneMoreFixed:

                    cout << "[yes/no]: ";
                    cin >> oneMore;
                    if (oneMore == "yes") {
                        checker = true;
                        goto ContinueWhileFixed;
                    }
                    else if (oneMore == "no") {
                        cout << "Thanks for Being here" << endl;
                        checker = false;
                        break;
                    }
                    else {
                        cout << "Invalid choice!";
                        goto TopOneMoreFixed;
                    }
                }
            }
        }
        if (checkName == false) {
            cout << endl << "Name not found, please enter name: ";
            goto InvalidNameFixed;
        }

    }
    else {
        cout << endl << "Pleae Enter your name : " << endl;

    InvalidNameDynamic:

        cin >> name;
        for (int i = 0; i < 6; i++) {
            if (name == DynamicEmpNames[i].get_name()) {

                cout << endl << "You are allowed to lend only" << endl;
                checkName = true;

            ContinueWhileDynamic:

                while (checker) {

                ChoseProductCategoryDynamic:

                    cout << endl
                        << "Chose product category: " << endl << endl
                        << "\t1. Books (Engineering/Medical/Religious)" << endl
                        << "\t2. Magazines" << endl
                        << "\t3. Short Story" << endl
                        << "Choice [1 / 2 / 3]: ";
                    cin >> choice1;

                    switch (choice1)
                    {

                    ChoseBookCategoryDynamic:

                    case 1:
                        cout << endl
                            << "Chose book category:" << endl << endl
                            << "\t1. Engineering" << endl
                            << "\t2. Medical" << endl
                            << "\t3. Religious" << endl
                            << "Choice [1 / 2 / 3]: ";
                        cin >> choice2;
                        switch (choice2)
                        {
                        case 1:
                            cout << endl << "How many days do you want lend this book? ";
                            cin >> days;
                            while (days <= 0) {
                                cout << endl << "Not valid value, please enter valid value: ";
                                cin >> days;
                            }
                            BorrowBooks(Eng1, days);
                            break;

                        case 2:
                            cout << endl << "How many days do you want lend this book? ";
                            cin >> days;
                            while (days <= 0) {
                                cout << endl << "Not valid value, please enter valid value: ";
                                cin >> days;
                            }
                            BorrowBooks(Med1, days);
                            break;

                        case 3:
                            cout << endl << "How many days do you want lend this book? ";
                            cin >> days;
                            while (days <= 0) {
                                cout << endl << "Not valid value, please enter valid value: ";
                                cin >> days;
                            }
                            BorrowBooks(Reg1, days);
                            break;

                        default:
                            cout << endl << "Not valid choice!" << endl;
                            goto ChoseBookCategoryDynamic;
                        }
                        break;

                    case 2:
                        cout << endl << "How many days do you want lend this book? ";
                        cin >> days;
                        while (days <= 0) {
                            cout << endl << "Not valid value, please enter valid value: ";
                            cin >> days;
                        }
                        BorrowMagazines(Mag1, days);
                        break;

                    case 3:
                        cout << endl << "How many days do you want lend this book? ";
                        cin >> days;
                        while (days <= 0) {
                            cout << endl << "Not valid value, please enter valid value: ";
                            cin >> days;
                        }
                        BorrowShortStories(SS1, days);
                        break;

                    default:
                        cout << "Not valid choice!" << endl;
                        goto ChoseProductCategoryDynamic;
                    }

                    cout << "Do you want to do another process?" << endl;

                TopOneMoreDynamic:

                    cout << "[yes/no]: ";
                    cin >> oneMore;
                    if (oneMore == "yes") {
                        checker = true;
                        goto ContinueWhileDynamic;
                    }
                    else if (oneMore == "no") {
                        cout << "Thanks for Being here!" << endl;
                        checker = false;
                        break;
                    }
                    else {
                        cout << "Invalid choice!";
                        goto TopOneMoreDynamic;
                    }
                }
            }
        }
        if (checkName == false) {
            cout << endl << "Your Name is not found, please enter a valid name: ";
            goto InvalidNameDynamic;
        }
    }
    return 0;
}