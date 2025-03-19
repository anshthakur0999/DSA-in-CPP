#include<iostream>
using namespace std;
int main(){

    int number;
    cin>>number;
    // int setBitCount = 0;
    // while(number>0){
    //     int bitcount = number&1;
    //     if(bitcount == 1){
    //         setBitCount+=1;
    //     }
    //     number = number>>1;
    // }
    // cout<<"Number of Set bits:"<<setBitCount<<endl;

    int count = 0;
    while (number > 0) {
        // Check the least significant bit
        count += number & 1;
        // Right shift to check the next bit
        number >>= 1;
    }
    cout<<"Number of Set bits:"<<count<<endl;

    return 0;
}