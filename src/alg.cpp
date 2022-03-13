// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  *a = *arr;
  s = size;
  v = value
  bool bs(int *arr, int size, int number) {
    int i = 0, j = size - 1;
    while (i < j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] == number)
            return number;
        else if (arr[mid] > number)
            j = mid;
        else
            i = mid + 1;
    }
    return 0;
}
  bs(*arr, s, v);
}
