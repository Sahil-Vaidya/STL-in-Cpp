#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){


    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(11);
    v.push_back(3);
    v.push_back(2);
    v.push_back(6);

     // Sorting the vector before using binary_search
    sort(v.begin(), v.end());

    //binary search
    cout << "Search element = " << binary_search(v.begin(), v.end(), 5) << endl;

    //upper and lower bound
    cout<<"upper bound = "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<"lower bound = "<<lower_bound(v.begin(),v.end(),11)-v.begin()<<endl;

    int a=3;
    int b=5;

    //find min , max

    cout<<"find max = "<<max(a,b)<<endl;
    cout<<"find min = "<<min(a,b)<<endl;

    //swap
    swap(a,b);
    cout<<"a = "<<a<<endl;

    //reverse
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string = "<<abcd<<endl;

    //rotate
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"after rotate = "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}