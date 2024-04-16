#include<iostream>
#include<list>
using namespace std;
int main(){
    //create list
    list<int> l;

    list<int> n(5,100);
    cout<<"printing list"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before erase = "<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"after erase = "<<l.size()<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size of list = "<<l.size()<<endl;
}