class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = 46340;
        while (low <= high)
        {
            long long mid = (low + high) / 2;
            if (mid * mid <= x && (mid + 1) * (mid + 1) > x)
                return mid;
            if (mid * mid < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return 0;
    }
};