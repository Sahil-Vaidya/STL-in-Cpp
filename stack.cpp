#include<iostream>
#include<stack>
using namespace std;
int main(){

    //create stack
    stack<string> s;

    s.push("sahil");
    s.push("vaidya");
    s.push("sv");

    //to check top element 
    cout<<"The top element = "<<s.top()<<endl;

    //pop element
    s.pop();
    cout<<"The top element = "<<s.top()<<endl;

    cout<<"Size of stack = "<<s.size()<<endl;

    cout<<"empty or not = "<<s.empty()<<endl;
}