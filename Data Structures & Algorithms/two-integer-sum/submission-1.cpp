class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>ans;
        for(int i = 0;i<nums.size();i++){
            mp[i]=nums[i];
        }

        for(int i = 0 ;i <nums.size();i++){

            int find = target - nums[i];
            int j = i+1;
            
            while(j<nums.size()){
                if(mp[j]==find){
                    ans.push_back(i);
                    ans.push_back(j);

                    break;
                    
                }
                else j++;
            }
        }

        return ans;
    }
};
