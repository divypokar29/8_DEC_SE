import 'dart:io';

void main() {
  int total = 0;

  for (int i = 1; i <= 5; i++) {
    print("Enter marks of subject $i:");
    total += int.parse(stdin.readLineSync()!);
  }

  double per = total / 5;

  print("Percentage = $per");

  if (per > 75) {
    print("Distinction");
  } else if (per > 60) {
    print("First Class");
  } else if (per > 50) {
    print("Second Class");
  } else if (per > 35) {
    print("Pass Class");
  } else {
    print("Fail");
  }
}