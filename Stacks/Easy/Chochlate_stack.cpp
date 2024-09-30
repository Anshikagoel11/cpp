// //hackerearth
// Problem
// A shop has a stack of chocolate boxes each containing a positive number of chocolates. Initially, the stack is empty. During the next N minutes, either of these two things may happen:
// The box of chocolates on top of the stack gets sold You receive a box of chocolates from the warehouse and put it on top of the stack.
// Determine the number of chocolates in the sold box each time he sells a box.

// Notes

// If C[i] = 0, he sells a box. If C[i] > 0, he receives a box containing C[i] chocolates.
// It is confirmed that he gets a buyer only when he has a non-empty stack.
// The capacity of the stack is infinite.

// Input
// N = 4
// C = [2, 1, 0, 0]
// Output: 1 2

// explaination- no. of minutes(time) N given h aur N hi num given h  then denotes ki every min kya hua h , aur vhi num also denotes ki box me kitne chochlate h, like if num>0 hai toh new box stack m add hua h aur agar num==0 hai means box sell hua h toh hume no. of chochlate return krne h jo box me the jo box sell hue h everytime.

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int C[n];
    for(int i=0;i<n;i++){
      cin>>C[i];
    }
    stack<int>st;
   vector<int>v; //to store no. of choch since kuch size ka nhi pta box kitne sell hue honga aur kitne add so we took vector(dynamic in nature)
    for(int i=0;i<n;i++){
      if(C[i]>0){                   //means box add hua h stack m
      st.push(C[i]);
    }
    else if(C[i]==0){           //means box is sell so stack ka top hi sell hua hoga uske choch store karane h vector m
    v.push_back(st.top());     //top wala sell hua hoga na toh uske choch
    st.pop();            // vo sell ho gya toh box se remove ho gya 
    }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}