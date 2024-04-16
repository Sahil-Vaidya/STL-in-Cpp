#include<iostream>
#include<vector>
using namespace std;
int main(){

    //create vector
    vector<int> v;

    //intialize vector
    vector<int> a(5,1);
    cout<<"print vector = ";
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    //To copy vector
    vector<int> last(a);
    cout<<"print last vector = ";
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity -> "<<v.capacity()<<endl;

    //insert element
    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    cout<<"The index element = "<<v.at(2)<<endl;
    cout<<"The size of vector = "<<v.size()<<endl;

    cout<<"The first element = "<<v.front()<<endl;
    cout<<"The Last Element = "<<v.back()<<endl;
    
//To delete the Element

    cout<<"Befor pop = "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop = "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
//To clear size

    cout<<"Before clear size = "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size = "<<v.size()<<endl;

}