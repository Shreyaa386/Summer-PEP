class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = binarySearch(nums, target, true);
        int last  = binarySearch(nums, target, false);
        return {first, last};
    }

    int binarySearch(vector<int>& nums, int target, bool isFirst) {
        int left = 0, right = nums.size() - 1;
        int position = -1;

        while(left <= right) {
            int mid = left + (right - left) / 2;

            if(nums[mid] == target) {
                position = mid;
                if(isFirst)
                    right = mid - 1;   
                else
                    left = mid + 1;   
            }
            else if(nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return position;
    }
};
