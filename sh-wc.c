#include <stdio.h>

int main(int argc, char *argv[])
{
  int c;
  int nc;
  int nl;

  nc = 0;
  nl = 0;
  while ((c=getchar()) != EOF) {
    nc++;
    if (c == '\n')
      nl++;
  }
  printf("%d %d\n", nl, nc);

  return 0;
}
