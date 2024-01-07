#include <iostream>
using namespace std;
void pattern4(int x){
    for(int i=0;i<x;i++){
        for(int j=0;j<=i-1;j++){
            cout<<" "<< '\t';
        }
        for(int j=0;j<x-i;j++){
            cout<<"*"<< '\t';
        }
        cout<<'\n';
    }
}
int main(){
    int t;
    cout<<"enter the number of rows :";
    cin>>t;
    pattern4(t);
}
