#include<iostream>
using namespace std;
int main(){
    //Bitwise AND
    cout<<(2 & 5)<<endl;
    cout<<(3 & 5)<<endl;
    
    //Bitwise OR
    cout<<(3 | 5)<<endl;
    cout<<(2 | 5)<<endl;

    //NOT
    cout<<(~5)<<endl;
    cout<<(~3)<<endl;

    //XOR
    cout<<(2^7)<<endl;
    cout<<(3^9)<<endl;

    // Important Que (Find unique number)
    // cout<<(3^6^7^6^7^3^9)<<endl;

    // << (left Shift)
    cout<<(5<<1)<<endl;
    cout<<(5<<3)<<endl;
    cout<<((-10)<<1)<<endl;

    // >> (right shift)
    cout<<(5>>1)<<endl;
    cout<<(5>>3)<<endl;


    return 0;
}