#include<iostream>
#include<set>
using namespace std;
int main(){

    //create set
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

//To check element

    cout<<"Element present or not = "<<s.count(5)<<endl;

    // set<int>::iterator itr=s.find(5);
    // for(auto it=itr;it=5;it++){
    //     cout<<s.end()<<" ";
    // } 
}