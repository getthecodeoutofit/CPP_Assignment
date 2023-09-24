#include<iostream>

using namespace std;

int main(){
    string Original;
    cout << "Enter the String: ";
    getline(cin,Original);
    cout <<"Enter the character you want to remove: ";
    char c;
    cin >> c;
    int rem =0,len = Original.length();
   
    for(int i=0;i<len;){
        if(Original[i]==c){
            for(int j=i;j<len-rem;j++){
                Original[j]=Original[j+1];
            }
            rem ++;
        }
        else{
            i++;
        }
    }
    cout << Original;
    return 0;
}