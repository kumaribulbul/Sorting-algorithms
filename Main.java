import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] array = new int[100];
        int n, i, j, position, temp;

        System.out.print("Enter the number of elements: ");
        n = scanner.nextInt();

        System.out.println("Enter the numbers: ");
        for (i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
        }

        for (i = 0; i < (n - 1); i++) {
            position = i;
            for (j = i + 1; j < n; j++) {
                if (array[position] > array[j]) {
                    position = j;
                }
            }
            if (position != i) {
                temp = array[i];
                array[i] = array[position];
                array[position] = temp;
            }
        }
        System.out.println("Sorting in ascending order:");
        for (i = 0; i < n; i++) {
            System.out.println(array[i]);
        }
    }
}
