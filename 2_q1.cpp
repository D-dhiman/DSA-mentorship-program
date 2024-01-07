#include <iostream>
using namespace std;
void pattern1(int x){
    for(int i=0;i<x;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<< '\t';
        }
        cout<<'\n';
    }
}
int main(){
    int t;
    cout<<"enter the number of rows :";
    cin>>t;
    pattern1(t);
}
