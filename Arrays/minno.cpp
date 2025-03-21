#include<iostream>
#include<limits.h>
using namespace std;
int main(){

    int arr[10]={45,5,9,10,-5,3,6,1,5,0};
    int min_no=INT_MAX;
    for(int i=0;i<10;i++){
        if(arr[i]<min_no){
            min_no=arr[i];
        }
    }
    cout<<"Minimum Number in array is :"<<min_no<<endl;



    return 0;
}