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

class bmw_car : car{
    public:
    bmw_car(string a,string b) : car("BMW", b){}
};

class audi_car : car{
    public:
    audi_car(string c,string d) : car("AUDI", d){}
};

class benz_car : car{
    public:
    benz_car(string e,string f) : car("BENZ", f){}
};

int main(){
    bmw_car a("BMW","Rear-wheel");
    audi_car b ("AUDI","Front-wheel");
    benz_car c("BENZ","Rear-wheel");
    
    return 0;
    
}
