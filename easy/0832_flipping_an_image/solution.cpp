class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for (int i = 0; i < n; ++i)
        {
            int left = 0;
            int right = n - 1;
            while (left < right)
                swap(image[i][left++], image[i][right--]);
            for (int j = 0; j < n; ++j)
                image[i][j] = !image[i][j];
        }
        return image;
    }
};
