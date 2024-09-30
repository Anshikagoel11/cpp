#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string>s;
    s.push("2");
    s.push("3");
    s.push("hye");
    s.push("abc");
    s.push("#%");
    //s.top();  //not print the top(LIFO) element
     //cout<< s.top(); //print the top element
    while(!s.empty()){
     cout<<s.top()<<endl;  //print top element
     s.pop();  //then pop out it so that next element can now become the top element
    }
    return 0;
}