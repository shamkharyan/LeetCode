// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution
{
public:
    int rand10()
    {
        // We should find a range where every number is equally likely
        // and divide that range into 10 equally likely groups.
        // We can treat each rand7() result as a coordinate.
        // Using two calls, we can get 7 * 7 = 49 possible outcomes.
        // We can't divide 49 into 10 equal groups, but we can divide 40,
        // so we should discard the last 9 outcomes.

        int n = INT_MAX;
        while (n > 40)
        {
            int y = rand7();
            int x = rand7();
            n = (y - 1) * 7 + x;
        }

        // Ceil
        return (n + 3) / 4;
    }
};
