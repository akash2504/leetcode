#include<vector>

class Solution {
public:
    int wiggleMaxLength(std::vector<int>& nums) {
    	if(nums.size() < 2)
    		return nums.size();
    	int len = 1;
    	for(int i=1;i<nums.size();i++){
    		if(nums[i]>nums[i-1]){
    			len++;
    			while(i<nums.size() && nums[i+1]>=nums[i])
    				i++;
    		}
    		else if(nums[i]<nums[i-1]){
    			len++;
    			while(i<nums.size() && nums[i+1]<=nums[i])
    				i++;
    		}
    	}
        return len;
    }
};