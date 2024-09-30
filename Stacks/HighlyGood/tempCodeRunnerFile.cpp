i<7;i++){
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
//   for(int i=0;i<left.size();i++) cout<<left[i]<<" ";
//   cout<<endl;