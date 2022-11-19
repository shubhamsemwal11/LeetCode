class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     
        stack<int> st;
        
        unordered_map<int, int> mp;
        int x;
        
        vector<int> result;
        
        int n = nums2.size();
        
        for(int i = n - 1; i >= 0; i--) {
            
            x = nums2[i];
            
            while(!st.empty() && st.top() <= x)
                st.pop();
            
            if(st.empty())
                mp[x] = -1;
            
            else
                mp[x] = st.top();
            
            st.push(x);
        }
        
        for(int x: nums1)
            result.push_back(mp[x]);
        
        return result;
    }
};