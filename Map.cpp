#include<iostream>
#include<map>
using namespace std;
int main(){

    //create
    map<int,string> m;

    //insert
    m[1]="sahil";
    m[2]="vaidya";
    m[3]="sv";

    m.insert( {4,"vro"});

    cout<<"Before earse"<<endl;
    for(auto i:m){
        cout<<i.first<<" " <<i.second<<endl;
    }

    cout<<"finding 3->"<<m.count(3)<<endl;

    // m.erase(4);

    // cout<<"after earse"<<endl;
    // for(auto i:m){
    //     cout<<i.first<<" " <<i.second<<endl;
    // }

    //to find element
    // auto it=m.find(4);
    // for(auto i=it;i!=m;i++){
    //     cout<<(*i).first<<" "<<endl;
    // }

}