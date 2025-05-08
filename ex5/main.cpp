#include <iostream>

using namespace std;

class car{
    public:
    string m_brand;
    string m_model;
    int m_year;
    int m_MaxSeating;
    string m_drivemode;

    car(string x,string y,int z,int s,string k){
        m_brand = x;
        m_model = y;
        m_year = z;
        m_MaxSeating = s;
        m_drivemode = k;
        cout <<"constructing ";
        cout <<m_brand;
        cout <<"_car\n";
        cout <<m_brand;
        cout <<" : drive mode = ";
        cout <<m_drivemode;
        cout <<"\n";
    }
    
    int get_m_MaxSeating(){
        return m_MaxSeating;
    }
};

int main(){
    car bmw_car("BMW","aa",2021,3,"Rear-wheel");
    car audi_car("AUDI","bb",2022,4,"Front-wheel");
    car benz_car("BENZ","cc",2023,5,"Rear-wheel");
    
    return 0;
    
}
