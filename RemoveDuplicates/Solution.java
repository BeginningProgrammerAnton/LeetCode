class Solution {
    public int removeDuplicates(int[] nums) {
        int prevElem = nums[0];
        int count = 0;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == -199) {
                break;
            }
            if (nums[i] == prevElem) {
                ++count;
                if (nums.length - 1 - i >= 0) System.arraycopy(nums, i + 1, nums, i, nums.length - 1 - i);
                nums[nums.length - 1] = -199;
                --i;
            } else {
                prevElem = nums[i];
            }
        }
        return nums.length - count;
    }
}