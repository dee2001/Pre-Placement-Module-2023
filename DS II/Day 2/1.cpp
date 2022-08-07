class MyHashMap {
public:
    int arr[1000001] = {0};             // very simple hash
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        arr[key] = value+1;
    }
    
    int get(int key) {
        return arr[key]-1;
    }
    
    void remove(int key) {
        arr[key] = 0;
    }
};
