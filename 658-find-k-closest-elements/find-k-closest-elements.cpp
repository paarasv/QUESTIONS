typedef pair<int,int>pi;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pi, vector<pi>,greater<pi>>pq;
        multimap<int,int>mp;
        for(int i=0;i<arr.size(); i++){
            int val = abs(x-arr[i]);
            mp.insert({arr[i] , val});
        }
        for(auto ch : mp){
            pq.push(make_pair(ch.second, ch.first));
        }
        vector<int>temp;
        for(int i = 0; i < k; i++) {
            pair<int, int> ans = pq.top();
            temp.push_back(ans.second);
            pq.pop();
        }
        sort(temp.begin(), temp.end());
        return temp;

    }
};