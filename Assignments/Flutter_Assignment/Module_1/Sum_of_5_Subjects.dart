import 'dart:io';

void main() {
  int total = 0;

  for (int i = 1; i <= 5; i++) {
    print("Enter marks of subject $i:");
    total += int.parse(stdin.readLineSync()!);
  }

  double percentage = total / 5;

  print("Total = $total");
  print("Percentage = $percentage");
}