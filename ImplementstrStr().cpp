class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int j = 0;
        int haySize = haystack.size();
        int nSize = needle.size();
        while (i <= haySize - nSize){
            j = 0;
            while (haystack[i + j] == needle[j] && j < nSize){
                j++;
            }
            if (j == nSize) {
                return i;
            }
            i++;
        }
        return -1;
    }
};