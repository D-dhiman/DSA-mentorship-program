#include <iostream>
using namespace std;
void pattern14(int x){
    for(int i=1;i<=10;i++){
        cout<<x<<"*"<<i<<"="<<x*i;
        cout<<'\n';
    }
}
int main(){
    int t;
    cout<<"enter the number of rows :";
    cin>>t;
    pattern14(t);
}
