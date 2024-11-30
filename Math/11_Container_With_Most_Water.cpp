class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n - 1;
        int maxArea = 0;
        while (i < j)
        {
            int area = (j - i) * min(height[i], height[j]);
            if (area > maxArea)
                maxArea = area;
            if (height[i] < height[j])
                ++i;
            else if (height[i] > height[j])
                --j;
            else
            {
                ++i;
                --j;
            }
        }
        return maxArea;
    }
};
