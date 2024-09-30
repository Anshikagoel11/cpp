class Solution {
public:
// only thing not clear is line 11 -tablewithfoodcount[stoi(orders[i][1])][orders[i][2]]++; why used stoi ?? what its function??
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
     //stores all name of fooditems uniquely
        set<string>fooditems; 
//take outer map is orderedmap so that tableno. stores in a sorted manner.
map<int,unordered_map<string,int>>tablewithfoodcount;                                 
   for(int i=0;i<orders.size();i++){
    fooditems.insert(orders[i][2]);
   tablewithfoodcount[stoi(orders[i][1])][orders[i][2]]++; //stores each fooditems count for each table oreders[i][1] is table no and oreders[i][2] is fooditems and ++ is count of every food items;
   }   
   vector<string>header{"Table"};
   for(auto it :fooditems){
    header.push_back(it); // header of displayTable
   }
  vector<vector<string>>TableOrders{header};
  for(auto x:tablewithfoodcount){
    int n=header.size();
    vector<string>temp(n,"0"); //stores string since displayTable(DT) vector stores string as declared above because DT have fooditems names as well that can only stores in string;
    temp[0]=to_string(x.first);  //put tableno. at zero index of temp (after converting it into string since first taken as int so that it(tableno.) stores into sorted manner) vector(each row) then for all foodcount->
    for(auto y:x.second){
        int pos =find(header.begin(),header.end(),y.first)-header.begin(); //index of fooditems 
        temp[pos] = to_string(y.second); // then at that index we place the count of that fooditem
    }
    TableOrders.push_back(temp); //pushes each row temp into the final table
  }
  return TableOrders;
    }
};