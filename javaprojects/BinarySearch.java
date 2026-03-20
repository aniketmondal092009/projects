
class BinarySearch {
    static int binarysearch(int[] arr, int target) {
        int lb = 0;
        int ub = arr.length - 1;

        while (lb <= ub) {
            int mid = lb + (ub - lb)/2;

            if (arr[mid] == target) {
                return mid;
            } else if (lb < mid) {
                lb = mid + 1;
            } else {
                ub = mid - 1;
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {1, 3, 5, 7, 9};
        int target = 5;
        System.out.println(binarysearch(arr, target)); // prints 2
    }
}


