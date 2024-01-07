#include <iostream>
using namespace std;
void pattern13(int x){
    for (int i = 0; i < x; i++){
        int k = 1;
        for (int j = 0; j <= i; j++){
            cout << k << ("\t");
            k = (k * (i - j)) / (j + 1);
        }
        cout << endl;
    }
}
int main(){
    int t;
    cout<<"enter the number of rows :";
    cin>>t;
    pattern13(t);
}
