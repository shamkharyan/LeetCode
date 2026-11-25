class Solution
{
public:
    int minBishopMoves(vector<int>& source, vector<int>& target)
    {
        if (source[0] == target[0] && source[1] == target[1])
            return 0;

        if (abs(source[0] - target[0]) == abs(source[1] - target[1]))
            return 1;

        bool isWhiteS = source[0] % 2 == source[1] % 2;
        bool isWhiteT = target[0] % 2 == target[1] % 2;
      
        if (isWhiteS == isWhiteT)
            return 2;
        
        return -1;
    }
};
