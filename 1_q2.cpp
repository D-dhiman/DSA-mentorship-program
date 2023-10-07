#include <iostream>
#include <string>
using namespace std;
int main(){
    int marks;
    cout<<"enter students marks;";
    cin>>marks;
    if( marks>91 && marks<=100){
        cout<<"excelent";
    }
    if( marks>81 && marks<=90){
        cout<<"very good";
    }
    if( marks>71 && marks<=80){
        cout<<"good";
    }
    if( marks>61 && marks<=70){
        cout<<"fine";
    }
    if( marks>51 && marks<=60){
        cout<<"poor";
    }
    if( marks>41 && marks<=50){
        cout<<"very poor";
    }
    if( marks>0 && marks<=40){
        cout<<"fail";
    }

}
