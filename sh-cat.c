#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
  int c;
  int i;
  FILE *fp;

  if (argc == 1) {
    while ((c=fgetc(stdin)) != EOF)
      fputc(c, stdout);
  }
  else {
    for (i=1; i<argc; i++) {
      if (strcmp(argv[i], "-") == 0)
        fp = stdin;
      else {
        fp = fopen(argv[i], "r");
        if (fp == NULL) {
          fprintf(stderr, "%s: %s: %s\n", argv[0], argv[i], strerror(errno));
          continue;
        }
      }
      while ((c=fgetc(fp)) != EOF)
        fputc(c, stdout);
    }
  }

  return 0;
}
