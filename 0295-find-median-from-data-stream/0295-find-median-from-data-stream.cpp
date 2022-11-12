class MedianFinder {
public:
    priority_queue<int> maxh;
    priority_queue<int, vector<int>, greater<int>> minh;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        
        if(maxh.empty() || maxh.top() > num)
            maxh.push(num);
        
        else
            minh.push(num);
        
        if(maxh.size() > minh.size() + 1) {
            
            minh.push(maxh.top());
            maxh.pop();
        }
        
        if(minh.size() > maxh.size() + 1) {
            
            maxh.push(minh.top());
            minh.pop();
        }
    }
    
    double findMedian() {
        
        if(maxh.size() > minh.size())
            return (double)maxh.top();
        
        else if(minh.size() > maxh.size())
            return (double)minh.top();
        
        else
            return (double)(minh.top() + maxh.top()) / 2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */