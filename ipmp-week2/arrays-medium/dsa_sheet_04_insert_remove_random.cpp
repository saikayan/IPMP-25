class RandomizedSet {
    unordered_set<int> s;
    vector<int> nums;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(s.find(val)==s.end())
        {
            s.insert(val);
            nums.push_back(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(s.find(val)!=s.end())
        {
            s.erase(val);
            nums.erase(find(nums.begin(), nums.end(), val));
            return true;
        }
        return false;
    }
    
    int getRandom() {
          int randomIndex = std::rand() % nums.size();
        return nums[randomIndex];
    }
};