#include<iostream>
using namespace std;

int linearSearch(int targetValue,int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==targetValue){
            return i;
        }
    }
    return -1;
}


int main(){

    int arr[10];
    int n = 5;
    int targetValue;
    cout<<"Enter value to be searched in an array : ";
    cin>>targetValue;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = linearSearch(8,arr,5);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    



    return 0;
}