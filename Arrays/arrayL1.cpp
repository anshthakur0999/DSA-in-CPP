#include<iostream>
using namespace std;
int main(){

    // int arr[100];
    // char ch[100];
    // bool flags[100];
    // cout<<"Array created successfully"<<endl;

    // int a = 5;
    // cout<<"Address of a : "<<&a<<endl;

    // int arr[100];
    // cout<<"Base address of arr : "<<&arr<<endl;
    // cout<<"Base address of arr : "<<arr<<endl;

    // cout<<"Size of arr : "<<sizeof(arr)<<endl;


    // int brr[]={1,2,3,4,5,6,7,8,9};
    // cout<<"Size of brr : "<<sizeof(brr)<<endl;

    // int crr[5]={1,2};
    // for(int i=0;i<5;i++){
    //     cout<<"Value at crr["<<i<<"]: "<<crr[i]<<endl;
    // }


    // int zrr[5];
    // for(int i=0;i<5;i++){
    //     cin>>zrr[i];
    // }

    int arr[5];
    int n=5;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum of all values of array arr is : "<<sum<<endl;

    return 0;
}