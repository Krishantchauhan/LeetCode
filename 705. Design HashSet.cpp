class MyHashSet {
public:
    
    vector<int> dll;
    int n=1000000;
    MyHashSet() {
        dll.resize(1000000+10,0);
    }
    
    void add(int key) {
        dll[key]=1;
    }
    
    void remove(int key) {
        dll[key]=0;
    }
    
    bool contains(int key) {
        if(dll[key])
            return true;
        else
            return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */