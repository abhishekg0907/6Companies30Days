class Solution{
public:
    int *findTwoElement(int *arr, int size) {
        int i;
        int *out = new int[2];
        for (i = 0; i < size; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            out[0] = abs(arr[i]);
        }

        for (i = 0; i < size; i++) {
        if (arr[i] > 0)
        out[1] = (i + 1);
        }
        return out;
    }
};
