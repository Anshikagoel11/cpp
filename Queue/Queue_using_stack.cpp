// class MyQueue {
// public:
// stack<int>s1;
// stack<int>s2;
//     MyQueue() {
        
//     }
    
//     void push(int x) {  //O(n)
//          while(s1.size()>0){
//         s2.push(s1.top());
//         s1.pop();
//      }
//      s1.push(x);
    
//      while(s2.size()>0){
//         s1.push(s2.top());
//         s2.pop();
//      }  
      
//     }
     
//     int pop() {   //O(1)
//       int a = s1.top();
//       s1.pop();
//       return a;  
//     }
    
//     int peek() {    //O(1)
//       return s1.top();  
//     }
    
//     bool empty() {   //O(1)
//     // if(s2.size()==0 && s1.size()==0) return true;
//     // return false;
//     //or
//     return s1.size()==0;
//     }
// };
class MyQueue {  //more efficient method
public:
stack<int>s1;
stack<int>s2;
    MyQueue() {
        
    } 
    void push(int x) { //O(1)
     s1.push(x);   
    }
    //O(n)
    int pop() {   while(s1.size()>0){s2.push(s1.top()); s1.pop();}
      int a = s2.top();
      s2.pop(); while(s2.size()>0){s1.push(s2.top()); s2.pop();}
      return a;  
    }
    
    int peek() { //O(n)
       while(s1.size()>0){s2.push(s1.top()); s1.pop();}
      int a = s2.top();
       while(s2.size()>0){s1.push(s2.top()); s2.pop();}
      return a;   
    }
    
    bool empty() {  //O(1)
    // if(s2.size()==0 && s1.size()==0) return true;
    // return false;
    //or
    return s1.size()==0;
    }
};