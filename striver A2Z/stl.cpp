#include <bits/stdc++.h>
using namespace std;

void explainPair() {
    pair<int,int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl; //1 3

    pair<int,pair<int,int>> q = {2,{3,4}};
    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<endl;  //2 4 3

    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;  //5
}

void explainVector() {
    vector<int> v;     //declares an empty array
    
    v.push_back(1);    //dynamically inserts into the back, increasing size of the array
    v.emplace_back(2); //this is faster than push_back

    vector<pair<int,int>> vec; 

    vec.push_back({1,2}); 
    vec.emplace_back(1,2);  //this automatically assumes that this is a pair

    vector<int> c(5,100);  // this declares an array of size 5 like [100,100,100,100,100]

    vector<int> a(5);  //this declares an empty array of size 5, it is either filled with garbage values and zeroes, depending upon the compiler

    vector<int> v1(5,20); //[20,20,20,20,20]
    vector<int> v2(v1);  //copies the v1 vector into v2

   
    vector<int>::iterator it=v.begin();

    it++;
    cout<<*(it)<<" ";

    it = it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it=v1.end();
    // vector<int>::iterator it1=v1.rend();
    // vector<int>::iterator it2=v1.rbegin();

    cout<<v1[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";

    for (vector<int>::iterator it=v1.begin(); it!=v.end(); it++) {
        cout<<*(it)<<" ";
    }

    for (auto it=v.begin(); it!=v.end(); it++) {
        cout<<*(it)<<" ";
    }


}

int main()
{
    explainPair();
    return 0;
}