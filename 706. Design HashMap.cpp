class MyHashMap
{
public:
    int nums[1000001];
    MyHashMap()
    {
        for (int i = 0; i < 1000001; i++)
            nums[i] = -1;
    }

    void put(int key, int value)
    {
        nums[key] = value;
    }

    int get(int key)
    {
        if (nums[key] == -1)
            return -1;
        return nums[key];
    }

    void remove(int key)
    {
        if (nums[key] != -1)
            nums[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */