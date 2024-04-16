#include<iostream>
#include<deque>
using namespace std;
int main(){

    //create deque
    deque<int> d;

    //insert element
    d.push_back(1);
    d.push_front(2);

    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    //delete element

    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    //To print first index

    cout<<"Print the first index element= "<<d.at(1)<<endl;

    cout<<"The first element = "<<d.front()<<endl;
    cout<<"The Last Element = "<<d.back()<<endl;

     cout<<"empty or not = "<<d.empty()<<endl;

     //To earase element
     cout<<"before erase = "<<d.size()<<endl;

    d.erase(d.begin(),d.begin()+1);

     cout<<"after erase = "<<d.size()<<endl;

     for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
}