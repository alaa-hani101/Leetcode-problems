class Solution {
public:
    int search(vector<int>& arr, int key) {
        int left = 0, right = arr.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (key == arr[mid])
                return mid;
            else if (key < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        return -1;
    }
};
