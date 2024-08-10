#include <vector>
#include <map>
#include <queue>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        map<int, int> mp;
        stack<int> st;
        vector<int> vt;

        if (nums.size() == 1) {
            return nums;
        }

        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto x : mp) {
            pq.push(x.second);
            if (pq.size() > k) {
                pq.pop();
            }
        }

        for (auto x : mp) {
            if (x.second >= pq.top()) {
                st.push(x.first);
            }
        }

        while (!st.empty()) {
            vt.push_back(st.top());
            st.pop();
        }

        return vt;
    }
};
