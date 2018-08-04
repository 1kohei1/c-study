#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  char buf[1024];

  if ((fp = fopen("a.txt", "r")) == NULL) {
    printf("a.txt cannot be found\n");
    return -1;
  }

  while (1) {
    fgets(buf, sizeof(buf), fp);
    printf("buf: %s", buf);
    if (feof(fp)) {
      break;
    }
  }

  return 0;
}
