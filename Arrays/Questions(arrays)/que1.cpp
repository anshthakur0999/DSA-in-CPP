#include<iostream>
using namespace std;

//2 pointer approach
void shiftnegativeoneside(int arr[],int size){
    int j=0;
    for(int index=0;index<size;index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }   
    cout<<endl;
}



//Sort approach
void sort(int arr[],int size){
    for(int i=0;i<size;i++){
        for( int j=i;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }   
    cout<<endl;
}


int main(){

    int arr[]={23,-7,12,-10,-11,40,60};
    int size=7;
    // sort(arr,size);
    shiftnegativeoneside(arr,size);


    return 0;
}