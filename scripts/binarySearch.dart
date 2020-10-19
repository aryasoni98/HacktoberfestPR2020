import 'dart:io';

int binarySearch(List sortedList, int value) {
  int min = 0;
  int max = sortedList.length;
  while (min < max) {
    final int mid = min + ((max - min) >> 1);
    final int element = sortedList[mid];
    final int comp = element.compareTo(value);
    if (comp == 0) {
      return mid;
    }
    if (comp < 0) {
      min = mid + 1;
    } else {
      max = mid;
    }
  }
  return -1;
}

void main() {
  print("Enter number of elements: ");
  int n = int.parse(stdin.readLineSync());
  var arr = new List(n);
  for (var i = 0; i < n; i++) {
    arr[i] = int.parse(stdin.readLineSync());
  }
  print("Enter element to search: ");
  int ele = int.parse(stdin.readLineSync());
  int s = binarySearch(arr, ele);
  print("$s");
}
