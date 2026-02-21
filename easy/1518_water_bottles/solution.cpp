class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int full = numBottles;
        int empty = 0;
        int count = 0;

        while (full || empty >= numExchange)
        {
            empty += full;
            count += full;
            full = empty / numExchange;
            empty = empty % numExchange; 
        }
        return count;
    }
};
