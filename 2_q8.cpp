#include <iostream>
using namespace std;
void pattern8(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            cout<<'\t';
        }
        cout<<'*'<<'\n';
    }   
}
int main(){
    int t;
    cout<<"enter the number of rows :";
    cin>>t;
    pattern8(t);
}
