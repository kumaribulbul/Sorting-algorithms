function main() {
    var array = [];
    var n, i, j, position, temp;

    n = parseInt(prompt("Enter the number of elements:"));

    // Assuming the user will input space-separated numbers
    var inputNumbers = prompt("Enter the numbers (space-separated):");
    var inputArray = inputNumbers.split(" ");

    for (i = 0; i < n; i++) {
        array.push(parseInt(inputArray[i]));
    }

    for (i = 0; i < n - 1; i++) {
        position = i;
        for (j = i + 1; j < n; j++) {
            if (array[position] > array[j]) {
                position = j;
            }
        }
        if (position !== i) {
            temp = array[i];
            array[i] = array[position];
            array[position] = temp;
        }
    }

    console.log("Sorting in ascending order:");
    for (i = 0; i < n; i++) {
        console.log(array[i]);
    }
}

main();