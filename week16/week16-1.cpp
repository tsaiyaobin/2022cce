class MyHashSet {
public:
    int a[1000001];
    MyHashSet() {
        for(int i=0;i<=1000000;i++){
            a[i]=0;
        }
    }

    void add(int key) {
        a[key] = 1;
    }

    void remove(int key) {
        a[key] = 0;
    }

    bool contains(int key) {
        if(a[key]==1) return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
