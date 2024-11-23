class Solution {
public:
    bool isSameAfterReversals(int num) {
        return (num < 10)? true : num % 10;
    }
};