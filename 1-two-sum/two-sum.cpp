class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=nums.size();
        for(int i=0;i<a;i++){
            int b=nums[i];
            int target1=target-b;
            auto c=find(nums.begin()+i+1,nums.end(),target1);
            int d=c-nums.begin();
            if(d==a)
            continue;
            return{i,d};
        }
    return{};
    }
};