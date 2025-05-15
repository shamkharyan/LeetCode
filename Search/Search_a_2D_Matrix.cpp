class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int cols = matrix[0].size();       
        int k_left = 0;
        int k_right = matrix.size() * cols - 1;

        while (k_left <= k_right)
        {
            int k_mid = (k_left + k_right) / 2;
            if (matrix[k_mid / cols][k_mid % cols] == target)
                return true;
            else if (matrix[k_mid / cols][k_mid % cols] > target)
                k_right = k_mid - 1;
            else
                k_left = k_mid + 1;
        }
        return false;
    }
};
