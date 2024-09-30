#include<bits/stdc++.h>
using namespace std;
void NSL(int height[] , vector<int>&leftIndex , int n){ //dont forget to pass vectors with address to avois copy otherwise these li and previous li will treated as two diff vector and output will not be print since un vector me kuch push hi nhi hoga
    stack<pair<int,int>>s;
    int pseudoIndex=-1;
    for(int i=0;i<n;i++){
        if(s.size()==0){
            leftIndex.push_back(pseudoIndex);
        }
        else if(s.size()>0 && s.top().first<height[i]){
          leftIndex.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=height[i]){
            while(s.size()>0 && s.top().first>=height[i]){
                s.pop();
            }
            if(s.size()==0) leftIndex.push_back(pseudoIndex);
            else leftIndex.push_back(s.top().second);
        }
        s.push({height[i],i});
    }
}


void NSR(int height[] , vector<int>&rightIndex ,int n){
    int pseudoIndex = n;
    stack<pair<int,int>>s;
    for(int i=n-1;i>=0;i--){
        if(s.size()==0) rightIndex.push_back(pseudoIndex);
        else if (s.size()>0 && s.top().first<height[i]) rightIndex.push_back(s.top().second);
        else if (s.size()>0 && s.top().first>height[i]){
            while(s.size()>0 && s.top().first>height[i]){
                s.pop();
            }
            if(s.size()==0) rightIndex.push_back(pseudoIndex);
            else rightIndex.push_back(s.top().second);
        }
        s.push({height[i],i});
    }
    reverse(rightIndex.begin(),rightIndex.end());
}
int main(){
    int n;
    cin>>n;
    int height[n];
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    vector<int>leftIndex;
    vector<int>rightIndex;

    NSL(height,leftIndex,n); //for a array of indexs of elem that are nearest smaller to left .
    NSR(height,rightIndex,n);  // to right

    int width[n], area[n];;
    for(int i=0;i<n;i++){
        width[i]=rightIndex[i]-leftIndex[i]-1;  //get the width
        area[i]=width[i]*height[i];  // area corresponding to every height
    }
   int maxArea = *max_element(area,area+n);  
   cout<<maxArea;
    return 0;
}
 


//  //or
// //----------------------------------------------------IMPORTANT FOR INTERVIEW------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[7]={6,2,5,4,5,1,6};

//     //firstly we need to find nearest smaller to left element index  ... so code is:
//     vector<int>left;
//   stack<pair<int,int>>st;
//   for(int i=0;i<7;i++){
//     if(st.size()==0){
//         left.push_back(-1);
//     }
//     else if(st.size()>0 && arr[i]>st.top().first){
//           left.push_back(st.top().second);
//     }
//     else if(st.size()>0 && arr[i]<=st.top().first){
//         while(st.size()>0 && arr[i]<=st.top().first){
//             st.pop();
//         }
//         if(st.size()==0){
//             left.push_back(-1);
//         }
//         else{
//         left.push_back(st.top().second);
//         }
//     }
//     st.push({arr[i],i});
//   }

// // now , we need to calculate nearest smaller to right element index...... so, the code is:
//  vector<int>right;
//   stack<pair<int,int>>s;
//   for(int j=6;j>=0;j--){
//     if(s.size()==0){
//         right.push_back(7);
//     }
//     else if(s.size()>0 && arr[j]>s.top().first){
//           right.push_back(s.top().second);
//     }
//     else if(s.size()>0 && arr[j]<=s.top().first){
//         while(s.size()>0 && arr[j]<=s.top().first){
//             s.pop();
//         }
//         if(s.size()==0){
//             right.push_back(7);
//         }
//         else{
//         right.push_back(s.top().second);
//         }
//     }
//     s.push({arr[j],j});
//   }
//   reverse(right.begin(),right.end());
// // now , we need to calculate width/breadth of vector:
// vector<int>width;
// for(int k=0;k<left.size();k++){
//     int y=right[k]-left[k]-1;
//  width.push_back(y);
// }
// cout<<endl;
// //now, the area is:
// vector<int>area;
// for(int n=0;n<left.size();n++){
//     int r=arr[n]*width[n];
// area.push_back(r);
// }

// int z=*max_element(area.begin(),area.end());

// cout<<"area: "<<z;

//     return 0;
// }
