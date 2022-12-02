class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>z;
        
        
        for(int i=0;i<nums.size();i++)
        z.push_back(nums[i]);
        for(int i=0;i<nums.size();i++)
        z.push_back(nums[i]);
     return z;
        
    }
};
