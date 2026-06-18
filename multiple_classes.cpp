#include<iostream>
#include<string>

using namespace std;

class student
{
public:
    string name;
    int age;
};

class book
{
public:
    string title;
    float price;
};

class laptop
{
public:
    string brand;
    string ram;
};

int main()
{
    student s1;
    s1.name = "sadiya";
    s1.age = 18;

    book b1;
    b1.title = "c++";
    b1.price = 50.0;

    laptop L1;
    L1.brand = "HP";
    L1.ram = "16GB";

    cout << "Name : " << s1.name << endl;
    cout << "Age : " << s1.age << endl;

    cout << "Title : " << b1.title << endl;
    cout << "Price : " << b1.price << endl;

    cout << "Brand : " << L1.brand << endl;
    cout << "RAM : " << L1.ram << endl;

    return 0;
}
