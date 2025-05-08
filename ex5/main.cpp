#include <iostream>

using namespace std;

class car{
    public:
    string m_brand;
    string m_drivemode;

    car(string x,string y){
        m_brand = x;
        m_drivemode = y;
        cout <<"constructing ";
        cout <<m_brand;
        cout <<"_car\n";
        cout <<m_brand;
        cout <<" : drive mode = ";
        cout <<m_drivemode;
        cout <<"\n";
    }
};

int main(){
    car bmw_car("BMW","Rear-wheel");
    car audi_car("AUDI","Front-wheel");
    car benz_car("BENZ","Rear-wheel");
    
    return 0;
    
}
