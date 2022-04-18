#include <stdio.h>

int main(int argc, char* argv[]) {
  FILE *reader = fopen(argv[1], "r");
  FILE *writer = fopen(argv[2], "w");

  printf("Reader is %s\n", argv[1]);
  if (!reader) {
    printf("Cannot open file: %s\n", argv[1]);

    return -1;
  }

  printf("Writer is %s\n", argv[2]);
  if (!writer) {
    printf("Cannot open file: %s\n", argv[2]);

    return -1;
  }

  int i;
  while ((i = fgetc(reader)) != 0 && i != EOF) {
    if (i != '\r') {
      fprintf(writer, "%c", i);
    }
  }

  return 0;
}
