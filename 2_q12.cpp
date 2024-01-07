#include <iostream>
using namespace std;
void pattern12(int x){
    int a=1,b=0,f=0;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            if (i==1){
                cout<<b<<" ";
            }
            else if (i==2&&j==1){
                cout<<a<<" ";
            }
            else {
                 f=a+b;
                 cout<<f<<" ";
                 b=a;
                 a=f;
            }
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cout<<"enter the number of rows :";
    cin>>t;
    pattern12(t);
}
