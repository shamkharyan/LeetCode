class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int a1 = abs(rec1[0] - rec1[2]);
        int b1 = abs(rec1[1] - rec1[3]);
        int a2 = abs(rec2[0] - rec2[2]);
        int b2 = abs(rec2[1] - rec2[3]);
        int a3 = min(rec1[2], rec2[2]) - max(rec1[0], rec2[0]);
        int b3 = min(rec1[3], rec2[3]) - max(rec1[1], rec2[1]);
        return (a3 > 0 && b3 > 0);
    }
};