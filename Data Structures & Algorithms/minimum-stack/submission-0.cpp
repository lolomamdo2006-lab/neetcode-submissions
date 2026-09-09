#include <iostream>
#include <limits.h>
class MinStack {
    private:
    vector<int> v;
    vector<int> m;
public:
    MinStack() {
        
    }
    
    void push(int val) {
       if(m.empty()){
        m.push_back(val);
       }
       else{
        if(m[m.size()-1]>val){
            m.push_back(val);
        }
        else{
            m.push_back(m[m.size()-1]);
        }
       }
        v.push_back(val);
    }
    
    void pop() {
        m.pop_back();
        v.pop_back();
    }
    
    int top() {
        return v[v.size()-1];
    }
    
    int getMin() {
        return m[m.size()-1];
    }
};
