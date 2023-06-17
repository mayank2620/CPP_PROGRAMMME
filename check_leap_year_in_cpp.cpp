#include<iostream>
using namespace std;
//function declaration
void greeting();
bool isleapyear(int);
void check(int);
//function defination
void greeting(){
    cout<< "hello" <<endl;
}
bool isleapyear(int year){
    if(year%100==0){
        if(year%400==0){
            return true;
        }
        else{
            return false;
        }}
    else if(year%4==0){
        return true;
    }
    else{
        return false;
    }
    }

void check(int year){
    if(isleapyear(year)){
        cout<<year<<" is a leap year"<<endl;
    }
    else{
        cout<<year<<" is not a leap year"<<endl;
    }
}
int main(){
    int year;
    cout<<"ENTER A YEAR:"<<endl;
    cin>>year;
    greeting();
    check(year);
    
    return 0;
}
