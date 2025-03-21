#include<iostream>
using namespace std;
int main(){

    int arr[10] = {0,0,0,1,0,1,0,1,1,0};
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<10;i++){
        if(arr[i]==1){
            onecount+=1;
        }
        else if(arr[i]==0){
            zerocount+=1;
        }
    }
    cout<<"No of zeroes : "<<zerocount<<endl;
    cout<<"No of ones : "<<onecount<<endl;


    return 0;
}