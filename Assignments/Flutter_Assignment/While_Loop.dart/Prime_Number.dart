import 'dart:io';

void main() {
  print("Enter number:");
  int n = int.parse(stdin.readLineSync()!);

  bool isPrime = true;

  for (int i = 2; i <= n ~/ 2; i++) {
    if (n % i == 0) {
      isPrime = false;
      break;
    }
  }

  if (isPrime) {
    print("Prime Number");
  } else {
    print("Not Prime");
  }
}