#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int low = 0;
        int high = citations.size() - 1;
        int len = citations.size();
        int mid = (low + high) / 2;
        while (low < high) {
            if (citations[mid] >= len - mid) {
                high = mid;
            }
            else low = mid + 1;
            mid = (low + high) / 2;
        }
        if (citations[mid] >= len - mid) {
            return len - mid;
        }
        return 0;
    }
};