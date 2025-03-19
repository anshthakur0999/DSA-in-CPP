#include<iostream>
using namespace std;
int main(){

    int number;
    cout<<"Enter Number:";
    cin>>number;
    if((number & 1)==0){
        cout<<"Number is Even"<<endl;
    }
    else{
        cout<<"Numebr is Odd"<<endl;
    }



    return 0;
}