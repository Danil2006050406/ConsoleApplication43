#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;


class Car {
protected:
    string color;

public:
    Car() : color("Невизначений") {}

    virtual void displayInfo() {
        cout << "Це автомобіль кольору " << color << endl;
    }

    void paint(string newColor) {
        color = newColor;
        cout << "Автомобіль був пофарбований у " << newColor << " колір." << endl;
    }

    void resetColor() {
        color = "Невизначений";
        cout << "Інформація про колір автомобіля була скинута." << endl;
    }
};


class SportsCar : public Car {
public:
    SportsCar() : Car() {}

    void displayInfo() override {
        cout << "Це спортивний автомобіль кольору " << color << endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Car genericCar;
    genericCar.displayInfo();
    genericCar.paint("Червоний");
    genericCar.displayInfo();
    genericCar.resetColor();
    genericCar.displayInfo();

    SportsCar sportsCar;
    sportsCar.displayInfo();
    sportsCar.paint("Синій");
    sportsCar.displayInfo();

    return 0;
}
