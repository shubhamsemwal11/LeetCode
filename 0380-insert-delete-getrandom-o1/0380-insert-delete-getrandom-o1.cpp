class RandomizedSet {
public:
    
    vector<int> nums;
    unordered_map<int, int> mp;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        
        if(mp.find(val) == mp.end()) {
            
            mp[val] = nums.size();
            nums.push_back(val);
            return true;
        }
        
        return false;
    }
    
    bool remove(int val) {
        
        if(mp.find(val) != mp.end()) {
            
            int valIndex = mp[val];
            int lastValue = nums[nums.size() - 1];
            
            nums[valIndex] = lastValue;
            
            nums.pop_back();
            
            mp[lastValue] = valIndex;
            mp.erase(val);
            return true;
        }
        
        return false;
    }
    
    int getRandom() {
        
        int result= rand() % nums.size();
        
        return nums[result];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */