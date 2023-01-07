#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
int dec=0, a, remainder,p=1;
cout<<"enter binary number:\n";
cin>>a;
while(a!=0){
    remainder=a % 10;
    dec += remainder * p ;
    a = a /10;
    p = p*2; 
}

    cout<<"Answer:\n"<<dec<<endl;
}
