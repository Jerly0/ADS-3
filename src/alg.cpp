// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i = 0;
  int j = size - 1;
  while (i < j) {
    int mid = i + (j - 1) / 2;
    if (arr[mid] == value) {
      return value;
    } else if (arr[mid] > value) {
      j = mid;
    } else {
      i = mid + 1;
    }
  }
  return 0;
}
