class Solution {
    static int indexof(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (target == arr[i]) {
                return i;
            }
        }

        return -1;
    }

    public int[] twoSum(int[] nums, int target) {
        int result[] = new int[2];

        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            int complementindex = indexof(nums, complement);

            if (complementindex != -1 && complementindex != i) {
                result[0] = i;
                result[1] = complementindex;

                return result;
            }
        }

        return new int[] { -1, -1 };
    }
}


