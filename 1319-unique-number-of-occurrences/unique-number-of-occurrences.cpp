class Solution {
public:
    
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::unordered_map<int, int> hashMap;
        
        // Count occurrences of each element in arr
        for (int i = 0; i < arr.size(); i++) {
            if (hashMap.find(arr[i]) != hashMap.end()) {
                hashMap[arr[i]]++;
            } else {
                hashMap[arr[i]] = 1;
            }
        }
        
        std::unordered_set<int> hashSet;
        bool flag = true;
        
        // Check if there are unique occurrences
        for (auto& pair : hashMap) {
            if (!hashSet.insert(pair.second).second) {
                flag = false;
                break;
            }
        }
        
        return flag;
    }
};