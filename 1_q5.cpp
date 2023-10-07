#include <iostream>
#include <string>
using namespace std;
int main(){
    int x;
    int y;
    cout<<"enter a number:";
    cin>>x;
    int count=0;
    while(x>0){
        x=x%10;
        cout<<x;
    }
    
}
