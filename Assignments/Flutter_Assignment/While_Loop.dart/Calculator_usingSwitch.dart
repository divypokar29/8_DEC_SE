import 'dart:io';

void main() {
  print("Enter first number:");
  double a = double.parse(stdin.readLineSync()!);

  print("Enter second number:");
  double b = double.parse(stdin.readLineSync()!);

  print("1.Addition 2.Subtraction 3.Multiplication 4.Division");
  int choice = int.parse(stdin.readLineSync()!);

  switch (choice) {
    case 1:
      print("Addition = ${a + b}");
      break;

    case 2:
      print("Subtraction = ${a - b}");
      break;

    case 3:
      print("Multiplication = ${a * b}");
      break;

    case 4:
      print("Division = ${a / b}");
      break;

    default:
      print("Invalid Choice");
  }
}