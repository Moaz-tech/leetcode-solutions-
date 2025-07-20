class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < 3; i++) {                        //So Basically, I have initiated two loops here. 
            for(int j = i + 1; j < nums.size(); j++) {      //nums.size() means it will give me the size of the array or vector and hence I can tell the J variable not to go beyond the size of the array or vector.
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
                else
                    continue;
            }
        }
        return {};                                          //In case if anything wil not be found then it will return empty.
    }
};
