// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        while (left <= right)
        {
            int mid = right + (left - right) / 2;
            if (isBadVersion(mid) != isBadVersion(mid - 1))
                return mid;
            if (isBadVersion(mid))
                right = mid - 1;
            else
                left = mid + 1;
        }
        return 0;
    }
};
