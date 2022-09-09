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
        sort(nums.begin(), nums.end());
        int answer = nums[0];
        int result = 0;
        int test = 1;
        int temp =nums[0];
        
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


// 2)  Kth Largest element in an Array 
// Given an integer array nums and an integer k, return the kth largest element in the array. 
// Note that it is the kth largest element in the sorted order, not the kth distinct element. 
// You must solve it in O(n) time complexity. 
//  Example 1: 
// Input: nums = [3,2,1,5,6,4], k = 2 
// Output: 5 
// Example 2: 
// Input: nums = [3,2,3,1,2,4,5,5,6], k = 4 
// Output: 4 
//  Constraints: 
// • 1 <= k <= nums.length <= 105 
// • -104 <= nums[i] <= 104 


 int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = nums.size() - k;
        return nums[count];
    }


// 3)  Maximum Gap Given an integer array nums, return the maximum difference between two successive elements in its sorted 
// form. If the array contains less than two elements, return 0. 
// You must write an algorithm that runs in linear time and uses linear extra space. 
//  Example 1: 
// Input: nums = [3,6,9,1] 
// Output: 3 
// Explanation: The sorted form of the array is [1,3,6,9], either (3,6) or (6,9) 
// has the maximum difference 3. 
// Example 2: 
// Input: nums = [10] 
// Output: 0 
// Explanation: The array contains less than 2 elements, therefore return 0. 
// Constraints: 
// • 1 <= nums.length <= 105 
// • 0 <= nums[i] <= 109 


    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        int sub = nums[0];
        int result = 0;
        int gap = 0;
        sort(nums.begin(), nums.end());
        for(int i = 1; i<nums.size(); i++){
            gap = nums[i] - sub;
            if(gap>result){
                result = gap;
            }
            sub = nums[i];
        }
        return result;
    }


// 4)  Remove duplicate letters Given a string s, remove duplicate letters so that every letter appears once and only once. You must make 
// sure your result is the smallest in lexicographical order among all possible results. 
// Example 1: 
// Input: s = "bcabc" 
// Output: "abc" 
// Example 2: 
// Input: s = "cbacdcbc" 
// Output: "acdb" 
// Constraints: 
// • 1 <= s.length <= 104 
// • s consists of lowercase English letters. 

    string removeDuplicateLetters(string s) {
        vector<int>last(26);
        vector<int>vis(26);
        string ans = "";
        int n = s.length();
        
        for(int i = 0; i<n;i++)
            last[s[i]-'a'] = i;
        
        for(int i = 0; i<n; i++){
            if(vis[s[i] - 'a'])
                continue;
            while(!ans.empty() && ans.back() > s[i] && last[ans.back()-'a'] > i){
                vis[ans.back() - 'a'] = false;
                ans.pop_back();
                
            }
            ans.push_back(s[i]);
            vis[s[i] - 'a'] = true;
            
        }
        return ans;
       
            
            
// 5)  Shortest Subarray with Sum at Least K Given an integer array nums and an integer k, return the length of the shortest non-empty subarray of 
// nums with a sum of at least k. If there is no such subarray, return -1. 
// A subarray is a contiguous part of an array. 
// Example 1: 
// Input: nums = [1], k = 1 
// Output: 1 
// Example 2: 
// Input: nums = [1,2], k = 4 
// Output: -1 
// Example 3: 
// Input: nums = [2,-1,2], k = 3 
// Output: 3 
// Constraints: 
// • 1 <= nums.length <= 105 
// • -105 <= nums[i] <= 105 
// • 1 <= k <= 109 
