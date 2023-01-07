#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int i =1 ;
    while(n != 0){
        int bit = n % 2;
        ans += bit*i;
        i = i*10;
        n= n/2;
    }
    cout<<"Answer:"<<ans<<endl;
}