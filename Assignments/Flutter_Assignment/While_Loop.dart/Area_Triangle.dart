import 'dart:io';

void main() {
  print("Enter base:");
  double b = double.parse(stdin.readLineSync()!);

  print("Enter height:");
  double h = double.parse(stdin.readLineSync()!);

  double area = 0.5 * b * h;

  print("Area of Triangle = $area");
}