/*************************************************************
compile meesage:
this filename is ex1.c, the next is the compile command lines.

**************************************************************
$ make ex1
cc --Wall -g ex1.c -o ex1
$ ./ex1
You are 100 miles away.

Create Makefile withe the content of the next.
****************
CFLAGS=-Wall -g

clean:
  rm -f ex1
***************
Then you will see the result above.

$ make clean
$ make ex1

Warning:
In the Makefile, make sure you are only entering TAB, not mixtures of TAB and spaces.

***************************************************************/


#include <stdio.h>

/* This is a comment. */
int main(int argc, char **argv)
{   int distance = 100;

    // this is also a comment.
    printf("You are %d miles away.\n", distance);
    
    return 0;
}
