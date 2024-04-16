#include<iostream>
#include<queue>
using namespace std;
int main(){

    //create queue
    queue<string> q;

    q.push("sahil");
    q.push("vaidya");
    q.push("sv");

    cout<<"Size of queue before pop = "<<q.size()<<endl;

    cout<<"The first element = "<<q.front()<<endl;

    q.pop();

    cout<<"The first element = "<<q.front()<<endl;

    cout<<"Size of queue after pop = "<<q.size()<<endl;



}