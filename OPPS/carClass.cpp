#include <iostream>
using namespace std;

class Car {
public:
    string name;
    int price;
    string type;
    int seats;
};

// Passing Object to Functions
void print(Car c){
    cout << c.name << "\t" << c.price << "\t" << c.seats << "\t" << c.type << endl;
};

// PassbyValue and Pass by reference

void change(Car c){
    c.name = "Audi A8";
};

void change2(Car& c){
    c.name = "Audi A8";
};

int main()
{   
    Car c1;
    c1.name = "Honda City";
    c1.price = 10000000;
    c1.type = "6th gen";
    c1.seats = 5;

    print(c1);
    change(c1); // pass by Value; value Not change.
    change2(c1); // pass by Reference; value is change.
    print(c1);


    Car c2;
    c2.name = "Maruti Swift";
    c2.price = 700000;
    c2.type = "Hatchback";
    c2.seats = 5;

    Car c3;
    c3.name = "Toyota briks";
    c3.price = 1700000;
    c3.type = "SUV";
    c3.seats = 8;

    // cout << c1.name << "\t" << c1.price << "\t" << c1.seats << "\t" << c1.type << endl;
    
    // Call Print Function;
    
    print(c1);
    print(c2);
    print(c3);
}