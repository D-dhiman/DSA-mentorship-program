#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    int i;
    int j;
    cout<<"enter the number:";
    cin>>n;
    cout<<2<<" ";
    for (i=2;i<=n;i++){
        for(j=2;j<=i;j++){
            if (i%j==0){
                break;
            }else{
                cout<<i<<" ";
                break;
            }
        }
    }
}
