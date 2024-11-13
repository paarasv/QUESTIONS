class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int, int>> res;
         for (auto a : arr) {
            res.push_back(make_pair(abs(a - x), a));
        }

        priority_queue<pair<int, int>, vector < pair<int, int>>, greater<pair<int, int>>> pq;
        for (auto a : res) {
            pq.push(a);
        }
        vector<int>vt;
        while(k--){
           int ans = pq.top().second;
           vt.push_back(ans);
           pq.pop();
        }
       sort(vt.begin(), vt.end());
        return vt;
    }
};