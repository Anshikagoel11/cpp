#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>qe;
    qe.push(2);
    qe.push(7);
    qe.push(3);
    qe.push(5);
    qe.push(1);
    while(!qe.empty()){
        cout<<qe.front()<<endl;
        qe.pop();
    }
    return 0;
}