import 'dart:io';

void main() {
  for (int i = 1; i <= 5; i++) {

    int square = i * i;

    for (int j = 1; j <= i; j++) {
      stdout.write("$square ");
    }

    print("");
  }
}