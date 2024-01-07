#include <iostream>
using namespace std;
void pattern10(int x){
    for (int i = 1; i <= x; i++)
    {
        if (i <= (x / 2) + 1)
        {
            for (int s = (x / 2) - i + 1; s > 0; s--)
            {
                cout << '\t';
            }
            cout << "*\t";
            if (i != 1)
            {  
                for (int s = 2*i-3; s >0 ; s--)
                {
                    cout << "\t";
                }
                cout << "*\t";
            }
            
        }

else
        {
            for (int s = (x / 2) - (x - i + 1) + 1; s > 0; s--)
            {
                cout << '\t';
            }
            cout << "*\t";
            if (i != x)
            {
                for (int s = 2*(x-i+1)-3; s >0 ; s--)
                {
                    cout << "\t";
                }
                cout << "*\t";
            }
        }
        cout << endl;
    }
}
int main(){
    int t;
    cout<<"enter the number of rows :";
    cin>>t;
    pattern10(t);
}
