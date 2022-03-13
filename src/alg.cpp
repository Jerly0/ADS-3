// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  a[] = *arr;
  s = size;
  v = valeu;
  bool binSearch(int arr[], int size, int value) {
    int i = 0, j = size - 1;
    while(i < j) {
        int mid = i + (j - i) / 2;
        if(arr[mid] == value)
            return value;
        else if(arr[mid] > value)
            j = mid;
        else
            i = mid + 1;
    }
    return 0;
}
  binSearch(a[], s, v);
}
