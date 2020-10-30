import java.util.Scanner;

public class merge_sort_manjitlal {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");

        int length = sc.nextInt();
        int[] intArray = new int[length];

        System.out.print("Enter the array elements: ");

        for (int i = 0; i < intArray.length; i++) {
            intArray[i] = sc.nextInt();
        }

        mergeSort(intArray, 0, intArray.length);

        System.out.print("Sorted array: ");
        for (int i = 0; i < intArray.length; i++) {
            System.out.print(intArray[i] + " ");
        }
    }

    public static void mergeSort(int[] input, int start, int end) {

        if(end - start < 2) {
            return;
        }

        int mid = (start + end) / 2;
        mergeSort(input, start, mid);
        mergeSort(input, mid, end);
        merge(input, start, mid, end);
    }

    public static void merge(int[] input, int start, int mid, int end) {

        if(input[mid - 1] <= input[mid]) {
            return;
        }

        int i = start;
        int j = mid;
        int tempIndex = 0;

        int[] temp = new int[end - start];
        while (i < mid && j < end) {
            temp[tempIndex++] = input[i] <= input[j] ? input[i++] : input[j++];
        }

        System.arraycopy(input, i, input, start + tempIndex, mid - i);

        System.arraycopy(temp, 0, input, start, tempIndex);

    }
}