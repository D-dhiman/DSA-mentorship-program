#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"enter the number to be cheked:";
    cin>>n;
    switch(n<=1){
        case 1: 
        cout<<"wrong input";
        break;
    }
    int i;
    int x;
    for(i=2;i<=n/2;i++){
        if (n%i==0){
            break;
        }else{
            cout<<"prime";
        }
    }
            
}
