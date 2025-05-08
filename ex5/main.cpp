#include <iostream>
#include <string>
using namespace std;

class car {
    protected:
    string m_DriveMode;
    string m_brand;
    public:
   
    car(string brand, string driveMode) {
        m_brand = brand;
        m_DriveMode = driveMode;
    }
    string get_brand() {
        return m_brand;
    }
    string get_driveMode() {
        return m_DriveMode;
    }
};
class BMW_car : public car{
    public:
    BMW_car() : car("BMW", "Rear-wheel") {}
};
class AUDI_car : public car{
    public:
    AUDI_car() : car("AUDI", "Front-wheel") {}
};
class BENZ_car : public car{
    public:
    BENZ_car() : car("BENZ", "Front-wheel") {}
};
int main() {
    BMW_car bmw;
    AUDI_car audi;
    BENZ_car benz;
    cout << "Constructing BMW_car" <<endl;
    cout << bmw.get_brand() << ": Drive Mode = " << bmw.get_driveMode() << endl;
    cout << "Constructing AUDI_car" <<endl;
    cout << audi.get_brand() << ": Drive Mode = " << audi.get_driveMode() << endl;
    cout << "Constructing BENZ_car" <<endl;
    cout << benz.get_brand() << ": Drive Mode = " << benz.get_driveMode() << endl;
    return 0;
}
