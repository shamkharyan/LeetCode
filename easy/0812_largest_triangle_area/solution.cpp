class Solution {
public:
    double area(vector<int>& a, vector<int>& b, vector<int>& c)
    {
        return fabs((a[0] - c[0]) * (b[1] - c[1]) - (b[0] - c[0]) * (a[1] - c[1])) / 2.0;
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double max_area = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                for (int k = j; k < n; ++k)
                {
                    double curr_area = area(points[i], points[j], points[k]);
                    if (max_area < curr_area)
                        max_area = curr_area;
                }
            }
        }
        return max_area;
    }
};
