int MissingNumber(int arr[], int N) {
    int totalSum = (N * (N + 1)) / 2;  // Calculate the sum of numbers from 1 to N using the formula (N * (N + 1)) / 2
    int actualSum = 0;

    for (int i = 0; i < N; i++) {  // Iterate through the array
        actualSum += arr[i];  // Calculate the sum of the elements in the array
    }

    int missingNumber = totalSum - actualSum;  // Calculate the missing number

    return missingNumber;
}
