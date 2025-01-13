namespace Leetcode;
public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        for(int i = 0; i < nums.Length; i++){
            int j = nums.ToList().Select(x => x + nums[i] == target).ToList().IndexOf(true);
            if(i!=j && j>=0) return [i,j];
        }
        return [];
    }
}