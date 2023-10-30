#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    int x;
    cout<<"enter the number:";
    cin>>n;
    while(n>0){
        int z = n%10;
        x=x*10+z;
        n=n/10;
    }
    cout<<"reversed digit is"<<" ";
    cout<<x;
}
