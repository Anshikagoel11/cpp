// -----------------------vector of any datatype-----------------------------------------
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     vector<int>v;
//     int N;
//     cin>>N;
//     for(int i=0;i<N;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i=0;i<N;i++){
//         cout<<v[i]<<endl;

//     }
//     //  or   for(int i=0;i<N;i++){
//     //     int x;
//     //     cin>>x;
//     //     v.push_back(x);
//     //      cout<<v[i]<<endl;
//     // }
//     return 0;
// }


// ------------------------vector array-----------------------------------------------

// int main(){
//     int N,n=0;
//     cin>>N; //cannot vary
//     vector<int>v[N];
//     for(int i=0;i<N;i++){
//         cin>>n;  //can vary
//         for(int j=0;j<n;j++){
//             int x;
//             cin>>x;
//             v[i].push_back(x);
//         }
//     }
//         for(int i=0;i<N;i++){
//             cout<<v[i].size()<<endl;
//            for(int j=0;j<v[i].size();j++){ 
//           cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//         }
//     return 0;
// }


//---------------------------vectors of vector--------------------------

// int main(){
//     vector<vector<int>>v;  // at this v is empty just an internal structure of vector is formed
//     int N; // can vary
//     cin>>N;
//     for(int i=0;i<N;i++){
//         int n; // can vary 
//         cin>>n;
//     vector<int>temp;
//     for(int j=0;j<n;j++){
//         int x;
//         cin>>x;
//         temp.push_back(x);
//     }
//     temp.push_back(5);
//   // can push as many since size is dynamic - its a vector
//    v.push_back(temp);
//     }
//     for(int i=0;i<N;i++){
//         for(int j=0;j<v[i].size();j++){
//             cout<<v[i][j]<<" ";
//         }
//     }
//     return 0;
// }


//---------------------------vector of vectors that stores pairs-------------------------------- 

int main(){
    vector<vector<pair<int,string>>>v;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        vector<pair<int,string>>temp;
        for(int j=0;j<n;j++){
            int x; string s;
            cin>>x>>s;
            temp.push_back({x,s});
        }
        v.push_back(temp);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<"first:"<<v[i][j].first<<" "<<"second:"<<v[i][j].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}