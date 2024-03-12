#include <iostream>
using namespace std;

int main() {
    int array[100], n, i, j, position, temp;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the numbers: ";

    for (i = 0; i < n; i++)
        cin >> array[i];

    for (i = 0; i < (n - 1); i++) {
        position = i;
        for (j = i + 1; j < n; j++) {
            if (array[position] > array[j])
                position = j;
        }
        if (position != i) {
            temp = array[i];
            array[i] = array[position];
            array[position] = temp;
        }
    }
    cout << "Sorting in ascending order:\n";
    for (i = 0; i < n; i++)
        cout << array[i] << "\n";
    return 0;
}