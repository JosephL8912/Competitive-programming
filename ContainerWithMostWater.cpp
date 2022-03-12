class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int begin = 0;
        int end = height.size() - 1;
        while (begin <= end) {

            if (height[begin] >= height[end]) {
                area = max(area, (end - begin) * height[end]);
                end--;
            }
            else {
                area = max(area, (end - begin) * height[begin]);
                begin++;
            }
        }
        return area;
    }
};