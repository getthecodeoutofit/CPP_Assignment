#include<iostream>
using namespace std;
int main(){
    int n;
    int unit,temp;
    float bill=0.0;
    cout << "Enter the number of house hold: ";
    cin >> n;
    for(int i=0;i<n;i++){
    string name;
    cout << "Enter the customer - "<<i+1<< " name: ";
    cin.ignore();
    getline(cin,name);
    cout << "Enter the unit Consumed: ";
    cin >> unit;
    temp =unit;
  
    if(unit >= 100){
        bill += 100*0.6;
        unit = unit-100;
        if(unit>=200){
        bill += 200*0.8;
        unit = unit-200;
            if(unit>0){
            bill = bill+(unit * 0.9);
            unit =0;
            }
        }
        else{
            bill += unit * 0.8;
        }
    }
    else{
        if(unit*0.6<50){
        bill += 50.00;
        }
        else{
            bill += unit*0.6;
        }
    }
    cout << "Consumer: "<<name;
    cout << "\nThe bill for the unit "<< temp <<" is = "<< bill<< " "<< endl;
    }
    return 0;
}