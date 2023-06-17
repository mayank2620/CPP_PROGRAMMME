#include<iostream>
using namespace std;
//function declaration
void printf(int);//for_loop
void printw(int);//while_loop
void printdw(int);//dowhile_loop
//function defination
void printf(int n)//for_loop
{
    for(int i =1;i<=n;i++){
        cout<<i<<endl;
    }
}

void printw(int n)//while_loop
{
    int i =1;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
}

void printdw(int n)//dowhile_loop
{
    int i =1;
    do{
       cout<<i<<endl;
       i++;
    }
    while(i<=n);
}
int main(){
    
    int n;
    cout<<"ENTER A NUMBER:"<<endl;//this line is for taking input the number till which you want to print series
    printf(n);//for_loop
    printw(n);//while_loop
    printdw(n);//dowhile_loop
    return 0;
}