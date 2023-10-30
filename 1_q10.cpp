#include <iostream>
using namespace std;
int main() {
    int n;
    int i;
    int j;
    cout<<"enter the number:";
    cin>>n;
    int factors[n];
    for(int i=2; i<n;i++){
        if(n%i==0){
            factors[i-2]=i;
        }
    }
    cout<<factors;
    int prime_factors[n];
    for (i=0;i<=n;i++){
        for(j=2;j<=i+2;j++){
            if (factors[i]%j==0){
                break;
            }else{
                prime_factors[i]=j;
                break;
            }
        }
    }
    for(int l;l<n;l++){
        cout<<prime_factors[l];
    }
}
