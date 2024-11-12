class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<pair<int, int>> res;

        for (auto a : arr) {
            res.push_back(make_pair(abs(a - x), a));
        }

        for (int i = 0; i < res.size(); ++i) {
            pq.push(res[i]);
        }

        vector<int> vt;
        while (k--) {
            int ans = pq.top().second;
            vt.push_back(ans);
            pq.pop();
        }

        sort(vt.begin(), vt.end());
        return vt;
    }      
};
