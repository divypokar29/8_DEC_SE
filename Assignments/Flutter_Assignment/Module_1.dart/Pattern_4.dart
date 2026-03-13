import 'dart:io';

void main() {
  for (int i = 1; i <= 5; i++) {

    for (int s = 1; s <= 5 - i; s++) {
      stdout.write(" ");
    }

    for (int j = 1; j <= i; j++) {
      stdout.write("*");
    }

    print("");
  }
}