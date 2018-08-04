#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
  char *token = strtok(argv[1], argv[2]);

  while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, argv[2]);
  }

  return 0;
}
