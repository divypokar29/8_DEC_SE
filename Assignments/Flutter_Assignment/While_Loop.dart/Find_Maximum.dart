import 'dart:io';

void main() {
  print("Enter number:");
  int n = int.parse(stdin.readLineSync()!);

  int max = 0;

  while (n > 0) {
    int digit = n % 10;

    if (digit > max) {
      max = digit;
    }

    n ~/= 10;
  }

  print("Max digit = $max");
}