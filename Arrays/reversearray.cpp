#include<iostream>
using namespace std;


void reverseArray(int arr[],int size){
    int left = 0;
    int right = size-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    // int n=5;
    // int arr[]={1,2,3,4,5};
    // int brr[n];
    // int j=n-1;
    // for(int i=0;i<5;i++){
    //     brr[j]=arr[i];
    //     j--;
    // }

    // for(int i=0;i<5;i++){
    //     cout<<brr[i]<<" ";
    // }

    int arr[6]={10,20,30,40,50,60};
    int size = 6;
    reverseArray(arr,size);
    return 0;
}