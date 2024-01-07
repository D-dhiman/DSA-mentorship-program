#include <iostream>
using namespace std;
void pattern16(int x){
    for(int i=1; i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=2*(x-i)-1;j++){
            cout<<' ';
        }
        for(int j=i;j>=1;j--){
            if(j==x){
                continue;
            }
            else{
                cout<<j;
            }
        }
        cout<<'\n';
    }
}
int main(){
    int t;
    cout<<"enter the number of rows :";
    cin>>t;
    pattern16(t);
}
