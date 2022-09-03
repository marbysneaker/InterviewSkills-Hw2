// 1)  Majority Element 
// Given an array nums of size n, return the majority element. 
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that 
// the majority element always exists in the array. Solve this problem in Linear time. 
//  Example 1: 
// Input: nums = [3,2,3] 
// Output: 3 
// Example 2: 
// Input: nums = [2,2,1,1,1,2,2] 
// Output: 2 
//  Constraints: 
// • n == nums.length 
// • 1 <= n <= 5 * 104 
// • -109 <= nums[i] <= 109 
int majorityElement(vector<int>& nums) {
        int answer = nums[0];
        int result = 0;
        int test = 1;
        int temp =nums[0];
        sort(nums.begin(), nums.end());
        for(int i = 1; i<nums.size(); i++){
            if(temp == nums[i]){
                test++;
            }
            else{
                temp = nums[i];
                test = 1;
            }
            if( test>result){
                result = test;
                answer =  temp;
            }
            
        }
        return answer;
    }
