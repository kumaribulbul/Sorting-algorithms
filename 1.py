def main():
    array = []
    n = int(input("Enter the number of elements: "))
    
    print("Enter the numbers: ")
    for _ in range(n):
        array.append(int(input()))

    for i in range(n - 1):
        position = i
        for j in range(i + 1, n):
            if array[position] > array[j]:
                position = j
        if position != i:
            temp = array[i]
            array[i] = array[position]
            array[position] = temp

    print("Sorting in ascending order:")
    for i in range(n):
        print(array[i])

if __name__ == "__main__":
    main()