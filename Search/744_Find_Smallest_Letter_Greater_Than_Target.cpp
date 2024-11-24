class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 1;
        int right = letters.size() - 1;
        while (left <= right)
        {
            int mid = right + (left - right) / 2;
            cout << mid << endl;
            if (letters[mid] > target && letters[mid - 1] <= target)
                return letters[mid];
            if (letters[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return letters[0];
    }
};
