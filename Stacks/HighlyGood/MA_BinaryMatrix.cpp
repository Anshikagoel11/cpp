#include<bits/stdc++.h>
using namespace std;

void NSL(vector<int>v , vector<int>&li , int N){  //dont forget to pass vectors with address to avois copy otherwise these li and previous li will treated as two diff vector and output will not be print since un vector me kuch push hi nhi hoga
    int pseudoIndex=-1;
    stack<pair<int,int>>s;
for(int i=0;i<N;i++){
if(s.size()==0) li.push_back(pseudoIndex);
else if(s.size()>0 && s.top().first<v[i]) li.push_back(s.top().second);
else if(s.size()>0 && s.top().first>=v[i]){
    while(s.size()>0 && s.top().first>=v[i]){
        s.pop();
    }
    if(s.size()==0) li.push_back(pseudoIndex);
    else {
        li.push_back(s.top().second);
    }
}
s.push({v[i],i});
}
}


void NSR(vector<int>v , vector<int>&Ri , int N){
    int pseudoIndex=N;
    stack<pair<int,int>>s;
for(int i=N-1;i>=0;i--){
if(s.size()==0) Ri.push_back(pseudoIndex);
else if(s.size()>0 && s.top().first<v[i]) Ri.push_back(s.top().second);
else if(s.size()>0 && s.top().first>=v[i]){
    while(s.size()>0 && s.top().first>=v[i]){
        s.pop();
    }
    if(s.size()==0) Ri.push_back(pseudoIndex);
    else {
        Ri.push_back(s.top().second);
    }
}
s.push({v[i],i});
}
reverse(Ri.begin(),Ri.end());
}


int MAH(vector<int>v){
int N = v.size();
vector<int>li;  // vector that will store index of NSL 
vector<int>Ri;
NSL(v,li,N);
NSR(v,Ri,N);

int width[N],area[N];
for(int i=0;i<N;i++){
    width[i]=Ri[i]-li[i]-1;
    area[i]=v[i]*width[i];
}
int maxArea=*max_element(area,area+N);
return maxArea;
}


int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];  //input should be binary - 0,1 elm only
        }
    }
    vector<int>v;
    for(int j=0;j<m;j++){
        v.push_back(arr[0][j]); //first row of matrix
    }

    int mx = MAH(v);

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
         if(arr[i][j]==0) v[j]=0;
         else v[j]=v[j]+arr[i][j];
        }
         mx = max(mx,MAH(v));
    }
    cout<<"Maximum-Area : " << mx;
    return 0;
}