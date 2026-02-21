class Solution
{
public:
    int countSegments(string s) 
    {
        bool onSegment = false;
        int count = 0;

        for (char c : s)
        {
            if (c != ' ' && !onSegment)
            {
                onSegment = true;
                ++count;
            }
            else if (c == ' ' && onSegment)
                onSegment = false;
        }

        return count;
    }
};
