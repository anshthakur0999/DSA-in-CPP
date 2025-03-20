#include<iostream>
using namespace std;

void primeCheck(int n){
    int count = 2;
    for(int i=2;i<n;i++){
        if(n%i == 0){
            count+=1;
        }
    }
    if(count == 2){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a prime"<<endl;
    }

}

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    primeCheck(n);




    return 0;
}