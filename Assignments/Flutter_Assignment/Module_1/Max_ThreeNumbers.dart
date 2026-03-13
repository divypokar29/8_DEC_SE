import 'dart:io';

void main() {
  print("Enter three numbers:");
  int a = int.parse(stdin.readLineSync()!);
  int b = int.parse(stdin.readLineSync()!);
  int c = int.parse(stdin.readLineSync()!);

  if (a > b) {
    if (a > c) {
      print("Max = $a");
    } else {
      print("Max = $c");
    }
  } else {
    if (b > c) {
      print("Max = $b");
    } else {
      print("Max = $c");
    }
  }
}