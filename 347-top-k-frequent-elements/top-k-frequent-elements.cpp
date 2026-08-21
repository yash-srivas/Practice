class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        multiset<int> m1(nums.begin(),nums.end());
        set<int> temp(nums.begin(),nums.end());
        vector<int> m2(temp.begin(),temp.end());
        vector<pair<int,int>> m3;
        for(int i=0;i<m2.size();i++){
        int cnt=m1.count(m2[i]);
        m3.push_back({cnt,m2[i]});
        }
        sort(m3.begin(),m3.end(),greater<pair<int,int>>());
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(m3[i].second);
        }
        return res;
    }
};