#include<iostream>
using namespace std;

bool iseven(int);
bool iseven(int n){
    if(n%2==0){
        
        return true;
    }
    else{
        
        return false;
    }
}

bool isneg(int);
bool isneg(int m){
    if(m<0){
        
        return true;
    }
    else {
        
        return false;
    }
    
}
void out(int);
void out(int k){
    if (isneg(k)){
        cout<<k<<" IS A NEGATIVE NUMBER"<<endl;
    }
    else{
        cout<<k<<" IS A POSITIVE NUMBER"<<endl;
    }
    
    if (iseven(k)){
        cout<<k<<" IS A EVEN NUMBER"<<endl;
        
    }
    else{
        cout<<k<<" IS A ODD NUMBER"<<endl;
    }
}
int main(){
    int a;
    cout<<"ENTER A NUMBER:";
    cin>>a;
    out(a);
    
    
    return 0;
}