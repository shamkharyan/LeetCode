class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int x1 = points[0][0];
        int y1 = points[0][1];

        int x2 = points[1][0];
        int y2 = points[1][1];

        int x3 = points[2][0];
        int y3 = points[2][1];

        // Triangle Area
        // | 1  1  1  |
        // | x1 x2 x3 | * 1/2
        // | y1 y2 y3 |

        //If 0, points are in the straight line
        return (x2 * y3 - y2 * x3) - (x1 * y3 - y1 * x3) + (x1 * y2 - y1 * x2);     
    }
};
