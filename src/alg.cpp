// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  int k = 1;
  int i = 0;
  int j = size - 1;
  while (i < j) {
    int mid = (i + j) / 2;
    if (arr[mid] == value) {
      count += 1;
      j = mid;
      break;
    } else if (arr[mid] > value) {
      j = mid;
    } else {
      i = mid + 1;
    }
  }
  while ((j + k <= size) && (arr[j + k] == value)) {
    count += 1;
    k += 1;
  }
  while ((j - k >= 0) && (arr[j - k] == value)) {
    count += 1;
    k += 1;
  }

  if (count > 0) {
    return count;
  } else {
    return 0;
  }
}
