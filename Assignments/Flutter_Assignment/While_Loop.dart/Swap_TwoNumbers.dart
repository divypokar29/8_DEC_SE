import 'dart:io';

void main() {
  print("Enter first number:");
  int a = int.parse(stdin.readLineSync()!);

  print("Enter second number:");
  int b = int.parse(stdin.readLineSync()!);

  a = a + b;
  b = a - b;
  a = a - b;

  print("After Swap: a=$a b=$b");
}