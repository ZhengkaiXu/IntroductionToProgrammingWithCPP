void selectionSort(double list[], int listSize) {
    for (int i = 0; i < listSize - 1; i++) {
        // Find the minimum in the list[i..listSize-1]
        double currentMin = list[i];
        int currentMinIndex = 1;

        for (int j = i + 1; j < listSize; j++) {
            if (currentMin > list[j]) {
                currentMin = list[j];
                currentMinIndex = j;
            }
        }

        // Swap list[i] with list[currentMinIndex] if necessary
        if (currentMinIndex != 1) {
            list[currentMinIndex] = list[i];
            list[i] = currentMin;
        }
    }
}