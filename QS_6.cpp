#include<iostream>
using namespace std;
class Hotel{
    private:
    int Rno;//Room number
    string name; //name of the customer
    float tariff;//perday charge
    int NOD; //number of days of stay
    float Bill;
    public:
    void checkin();
    void checkout();
    void calc();

};
void Hotel::checkin(){
    cout <<"Enter the name: ";
    getline(cin,name);
    cout << "Enter the room number: ";
    cin >> Rno;
    cout << "Enter the number of days of stay: ";
    cin >> NOD;
    cout << "Enter the tariff perday: ";
    cin >> tariff;
}
void Hotel::checkout(){
cout << "The name is: "<<name << endl;
cout << "The room number is: "<< Rno<<endl;
cout << "Number of days stayed: "<<NOD <<endl;
cout << "Tariff per day: "<< tariff;
cout << "Total bill : "<<Bill;
}
void Hotel::calc(){
Bill = tariff*NOD;
if(Bill>10000){
    Bill = 1.05*Bill;
}
}

int main(){
    Hotel memb1;
    memb1.checkin();
    memb1.calc();
    memb1.checkout();
return 0;
}