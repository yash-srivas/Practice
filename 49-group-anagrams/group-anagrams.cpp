class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,string>> v;
        for(auto x:strs){
            string t=x;
            sort(t.begin(),t.end());
        v.push_back({t,x});
        }
        sort(v.begin(),v.end());
        vector<string> d1;
        vector<vector<string>> d2;
        d1.push_back(v[0].second);
        for(int i=1;i<v.size();i++){
            if(v[i].first==v[i-1].first){
                d1.push_back(v[i].second);
            }
            else{
            d2.push_back(d1);
            d1={v[i].second};
            }
        }
        d2.push_back(d1);
        return d2;
    }
};