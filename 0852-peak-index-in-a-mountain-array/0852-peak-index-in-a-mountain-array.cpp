class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int st = 1, end = a.size() - 2;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (a[mid - 1] < a[mid] && a[mid] > a[mid + 1])
                return mid; // peak index is returned.
            if (a[mid - 1] < a[mid])
                st = mid + 1; // peak index is greater than mid.
            else
                end = mid - 1; // peak index is smaller than mid.
        }
        return -1; // control flag
    }
};