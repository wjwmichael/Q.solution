/*
 * [42] Trapping Rain Water
 *
 * https://leetcode.com/problems/trapping-rain-water
 *
 * Hard (35.74%)
 * Total Accepted:    101760
 * Total Submissions: 284673
 * Testcase Example:  '[]'
 *
 * 
 * Given n non-negative integers representing an elevation map where the width
 * of each bar is 1, compute how much water it is able to trap after
 * raining. 
 * 
 * 
 * 
 * For example, 
 * Given [0,1,0,2,1,0,1,3,2,1,2,1], return 6.
 * 
 * 
 * 
 * 
 * The above elevation map is represented by array [0,1,0,2,1,0,1,3,2,1,2,1].
 * In this case, 6 units of rain water (blue section) are being trapped. Thanks
 * Marcos for contributing this image!
 */
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), i = 0 , j = n-1;

        int x = 0, max_h = 0;
        while (i < j) {
            int h = height[i] >= height[j] ? height[j--] : height[i++];
            if (h >= max_h) max_h = h;
            else x += max_h-h;
        }
        return x;
    }
};
