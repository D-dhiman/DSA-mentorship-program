#include <iostream>
using namespace std;
void pattern11(int x){
    int k=1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k;
            k++;
            
        }
        cout << endl;
    }
}
int main(){
    int t;
    cout<<"enter the number of rows :";
    cin>>t;
    pattern11(t);
}
