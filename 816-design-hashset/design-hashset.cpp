class MyHashSet {
public:
    vector<vector<int>>ht;
    int size=1000;
    MyHashSet() {
        ht.resize(size);
    }
    
    void add(int key) {
        int idx=key%size;
        for(int x:ht[idx]){
            if(x==key) return;
        }
        ht[idx].push_back(key);
    }
    
    void remove(int key) {
        int idx=key%size;
        for (auto it = ht[idx].begin();
             it != ht[idx].end(); it++){
            if(*it==key){
                ht[idx].erase(it);
                return;
            } 
        }
    }
    
    bool contains(int key) {
        int idx=key%size;
        for(int x:ht[idx]){
            if(x==key) return true;
        }
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