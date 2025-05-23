class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        std::vector<int> numCoins(amount + 1, INT_MAX);
        numCoins[0] = 0;

        for (int i = 0; i <= amount; ++i)
        {
            for (int coin : coins)
            {
                if (i - coin >= 0 && numCoins[i - coin] != INT_MAX)
                    if (numCoins[i] > numCoins[i - coin] + 1)
                        numCoins[i] = numCoins[i - coin] + 1;
            }
        }
        return numCoins[amount] == INT_MAX? -1 : numCoins[amount];
    }
};
