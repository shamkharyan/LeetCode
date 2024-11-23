class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1;
        int high = pow(2, 16);
        while (low <= high)
        {
            long long mid = (low + high) / 2;
            if (mid * mid == num)
                return true;
            if (mid * mid > num)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return false;
    }
};