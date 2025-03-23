#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> v){
    int size = v.size();
    for(int i=0;i<size;i++){
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }cout<<endl;
}


int main(){

    vector<int> myVector;
    //insert--->push_back()
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    print(myVector);
    
    
    //delete begins from end --->pop_back()
    myVector.pop_back();
    myVector.pop_back();
    myVector.pop_back();
    print(myVector);
    //To clear the vector
    // myVector.clear();
    // print(myVector);


    // cout<<"How Size and Capacity is adjusted in Vector"<<endl;
    // vector<int> v;
    // while(1){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<"Capacity : "<<v.capacity()<<" Size: "<<v.size()<<endl;
    // }

    vector<int> arr(5,10);
    print(arr);

    vector<int> arr2 = {1,2,3,4,5,6};
    print(arr2);

    vector<int> arr3{10,20,30,40,50,60};
    print(arr3);
    arr3.pop_back();
    print(arr3);
    


    return 0;
}