//finding non repeating character
#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int charcount=0,k=0;
    string orign;
    char result[40];
    cout << "Enter the string: ";
    getline(cin,orign);
    int len =orign.length();
    for(int i=0;i<len;i++){
        charcount=0;
        for(int j=0;j<len;j++){
            if(orign[i] == orign[j]){
                charcount ++;
            }
        }
        
        if(charcount == 1){
            result[k++]= orign[i];
        }
    }
    result[k]='\0'; //now sorting;
    for(int i=0;i<strlen(result);i++){
        for(int j=0;j<strlen(result)-1-i;j++){
            if(result[j]>result[j+1]){
                char temp = result[j];
                result[j]= result[j+1];
                result[j+1]=temp;
            }
        }
    }
    string main = (string)result;
    cout << "\nThe string is: " <<main << endl;
    return 0;
}