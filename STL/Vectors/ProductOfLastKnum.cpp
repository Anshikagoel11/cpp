class ProductOfNumbers {
public:
int ans=1,count;
  vector<int>v;
    ProductOfNumbers() {
    
    }
    
    void add(int num) {
      v.push_back(num);
    }
    
    int getProduct(int k) {
    //     ans=1,count=0;
    //    while(count<k){
    //     ans*=v[v.size()-1-count];
    //     count++;
    //}
    //or
         int ans=1;
        for(int i=v.size()-k;i<v.size();i++)
        {
            ans*=v[i];
        }
        // return product;
       
     return ans;
    }
};