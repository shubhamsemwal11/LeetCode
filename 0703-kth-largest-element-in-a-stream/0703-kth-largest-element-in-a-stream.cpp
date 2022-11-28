class KthLargest {
public:
    
    int K;
    priority_queue<int, vector<int>, greater<int>> minh;
    
    KthLargest(int k, vector<int>& nums) {
        
        this -> K = k;
        for(int x: nums)
            add(x);
    }
    
    int add(int val) {
        
        if(minh.size() < K)
            minh.push(val);
        
        else {
            
            if(val > minh.top()) {
                
                minh.pop();
                minh.push(val);
            }
        }
        
        return minh.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */