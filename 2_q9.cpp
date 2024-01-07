#include <iostream>
using namespace std;
void pattern9(int x){
    for (int i=1; i<=x;i++){
        if(i<(x/2+1)){
            for(int j =1;j<=i-1;j++){
                cout<<'\t';
            }
            cout<<'*';
            for (int j=1; j<=2*(x/2-i+1);j++){
                cout<<'\t';
            }
            cout<<'*'<<'\n';
        }
        else if(i==x/2+1){
            int j=1;
            while(j<x/2+1){
                cout<<'\t';
                j++;
            }
            cout<<'*'<<'\n';
        }
        else{
            for(int j =1;j<=x-i;j++){
                cout<<'\t';
            }
            cout<<'*';
            for(int j=1; j<=2*(x/2-(x-i));j++){
                cout<<'\t';
            }
            cout<<'*'<<'\n';
        }
    }
}
int main(){
    int t;
    cout<<"enter the number of rows :";
    cin>>t;
    pattern9(t);
}
