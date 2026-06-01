import 'dart:io';

void main() {
  print("Enter limit:");
  int n = int.parse(stdin.readLineSync()!);

  int a = 0, b = 1;

  print(a);
  print(b);

  for (int i = 3; i <= n; i++) {
    int c = a + b;
    print(c);
    a = b;
    b = c;
  }
}