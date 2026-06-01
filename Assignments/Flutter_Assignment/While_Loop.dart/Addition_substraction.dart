import 'dart:io';

void main() {
  print("Enter first number:");
  int a = int.parse(stdin.readLineSync()!);

  print("Enter second number:");
  int b = int.parse(stdin.readLineSync()!);

  print("Addition = ${a + b}");
  print("Subtraction = ${a - b}");
  print("Multiplication = ${a * b}");
  print("Division = ${a / b}");
}