#include <stdio.h>
void main()
{
    char *p = "Mizzou";
  //  p[ 3 ] = 'P';			Got rid of this, it redefines p. And Mizzou is better than a letter
    printf("%s",p);
}
