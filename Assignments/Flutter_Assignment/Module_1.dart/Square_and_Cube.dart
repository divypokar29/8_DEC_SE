import 'dart:io';

void main() {
  print("Enter number:");
  int n = int.parse(stdin.readLineSync()!);

  print("Square = ${n * n}");
  print("Cube = ${n * n * n}");
}
