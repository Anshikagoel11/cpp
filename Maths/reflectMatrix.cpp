// transpose then right reflection of a matrix 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m; //size
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
       cin>>arr[i][j];
        }       
    }
 cout<<"Given matrix is:"<<endl;
 for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
     cout<<arr[i][j]<<" ";
        }  
        cout<<endl;     
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<m;j++){
           int temp = arr[i][j];
           arr[i][j]=arr[m-1-i][j];
           arr[m-1-i][j]=temp;
        }
    }
   cout<<"refection from right:"<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}