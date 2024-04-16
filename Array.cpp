#include<iostream>
#include<array>
using namespace std;
int main(){

    int arr[3]={1,2,3};

    array<int,5> a={3,5,1,4,2};
//to check size of array

    int size=a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<" "<<endl;
    }
    cout<<"Size = "<<a.size()<<endl;
//to check the element position

    cout<<"Element at index 2nd ="<<a.at(2)<<endl;

//to check the element empty or not

    cout<<"empty or not = "<<a.empty()<<endl;

//to check the first and last element

    cout<<"The first element = "<<a.front()<<endl;
    cout<<"The Last Element = "<<a.back()<<endl;

}
