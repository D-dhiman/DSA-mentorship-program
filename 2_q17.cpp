#include <iostream>
using namespace std;
void pattern17(int x){
    for(int i=1;i<=x;i++){
        if(i<x/2+1){
            for(int j=1;j<=x/2;j++){
                cout<<'\t';
            }
            for(int j=1;j<=i;j++){
                cout<<"*"<<'\t';
            }
            cout<<'\n';
        }
        else if(i==x/2+1){
            for(int j=1;j<=x;j++){
                cout<<'*'<<'\t';
            }
            cout<<'\n';
        }
        else{
            for(int j=1;j<=x/2;j++){
                cout<<'\t';
            }
            for(int j=1;j<=x-i+1;j++){
                cout<<"*"<<'\t';
            }
            cout<<'\n';
        }
    }
}
int main(){
    int t;
    cout<<"enter the number of rows :";
    cin>>t;
    pattern17(t);
}
