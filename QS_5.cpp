//Data abstraction...
#include<iostream>
using namespace std;
class detail{
    private:
    string name;
    int ronum;
    int DOB_YY;

    public:
    void input();
    void Display();

};
void detail::input(){
    cout << "Enter the name: ";
    getline(cin,name);
    cout <<"Enter the roll number: ";
    cin >> ronum;
    cout << "Enter year of birth: ";
    cin >> DOB_YY;
}
void detail::Display(){
    cout << "The name is :"<<name<<endl;
    cout << "The roll number is: " << ronum<<endl;
    cout << "The Dob year is: "<< DOB_YY<<endl;
}
//in this we are hiding the important properties of class and using other ways to get the data with the help of methods:
int main(){

    detail s1; //here we had created an object which contain all the properties reciding reciding class

    //now by just calling the funtions/methods of the class into an object
    s1.input();
    //all the properties/data will stored in perticular obejct
    s1.Display();
    return 0;
}