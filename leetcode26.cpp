class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        int t = 0;//紀錄重複的數字
        int count = 0;//紀錄下一個可以放的位置離目前有多遠
        int val = nums[0];

        for(int i=1;i<nums.size();i++){// 0 0 0 1
            if(val == nums[i]){// 相同就++
                count++;
                t++;
                nums[i] = -101;
            }
            else if(val != nums[i] && nums[i] != -101){//不同就換數字
                val = nums[i];
                nums[i-count] = val;
            }            
        }
        int ans = nums.size() - t;
        return ans;
    }
};
