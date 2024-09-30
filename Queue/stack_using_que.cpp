//225. Implement Stack using Queues

// class MyStack {
// public:
// queue<int>q1;
// queue<int>q2;
//     MyStack() {
        
//     }
    
//     void push(int x) {
//         q1.push(x);
//         while(q2.size()>0){
//             q1.push(q2.front());
//             q2.pop();
//         }
//         // while(q1.size()>0){
//         //     q2.push(q1.front());
//         //     q1.pop();
//         // }
//         swap(q1,q2);
//     }
    
//     int pop() {
//         int a = q2.front();
//         q2.pop();
//         return a;
//     }
    
//     int top() {
//        return q2.front(); 
//     }
    
//     bool empty() {
//         if(q1.size()==0 && q2.size()==0) return true;
//         return false;
//     }
// };


//using  only 1 stack

class MyStack {
public:
queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
       for(int i=0;i<q.size()-1;i++){
        q.push(q.front());
        q.pop();
       }
    }

    int pop() {
        int a = q.front();
        q.pop();
        return a;
    }
    
    int top() {
       return q.front(); 
    }
    
    bool empty() {
       return q.size()==0;
        
    }
};
