class MedianFinder {
public:
    priority_queue<int>pqmx;
    priority_queue<int,vector<int>,greater<int>>pqmn;
    
    double median;
    
    MedianFinder() {
        median =-1.00;

    }
    
    void addNum(int num) {
        if(pqmx.empty() || pqmx.top() >= num)
            pqmx.push(num);
        else
            pqmn.push(num);
        if(pqmx.size() > pqmn.size()+1){
            pqmn.push(pqmx.top());
            pqmx.pop();
        }
        else if(pqmx.size() < pqmn.size()){
            pqmx.push(pqmn.top());
            pqmn.pop();
        }
    }
    
    double findMedian() {
        if(pqmx.size() == pqmn.size())
            return (pqmx.top()+pqmn.top())/2.0;
        return pqmx.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */