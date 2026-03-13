import 'dart:io';

void main() {
  print("Enter number:");
  int n = int.parse(stdin.readLineSync()!);

  int last = n % 10;
  int first = n;

  while (first >= 10) {
    first ~/= 10;
  }

  int sum = first + last;

  print("Sum of first and last digit = $sum");
}