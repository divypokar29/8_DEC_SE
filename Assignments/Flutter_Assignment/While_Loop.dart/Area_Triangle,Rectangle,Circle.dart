import 'dart:io';

void main() {
  print("1.Circle 2.Rectangle 3.Triangle");
  int choice = int.parse(stdin.readLineSync()!);

  if (choice == 1) {
    print("Enter radius:");
    double r = double.parse(stdin.readLineSync()!);
    print("Area = ${3.14 * r * r}");
  } 
  else if (choice == 2) {
    print("Enter length:");
    double l = double.parse(stdin.readLineSync()!);

    print("Enter breadth:");
    double b = double.parse(stdin.readLineSync()!);

    print("Area = ${l * b}");
  } 
  else if (choice == 3) {
    print("Enter base:");
    double base = double.parse(stdin.readLineSync()!);

    print("Enter height:");
    double h = double.parse(stdin.readLineSync()!);

    print("Area = ${0.5 * base * h}");
  } 
  else {
    print("Invalid Choice");
  }
}