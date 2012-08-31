/**
man.c
jspc - 20120518

Plays better with Man pages
**/


#include <stdio.h>
#include <unistd.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


int main(int argc, char const *argv[]) {
  
  if ( argc < 2 ){
    printf( ANSI_COLOR_RED  "You must include a valid man page to search"   ANSI_COLOR_RESET "\n" );
    return -1;
  }

  if ( argc > 2 ){
    printf( ANSI_COLOR_RED  "Please; one at a time"   ANSI_COLOR_RESET "\n" );
    return -2;
  }

  printf( ANSI_COLOR_MAGENTA "Man page for: " ANSI_COLOR_GREEN "%s\n\n" ANSI_COLOR_RESET, argv[1] );
  printf( "-----------------------------------------\n" );
  
  printf( ANSI_COLOR_RED "I actually can't be arsed to explain this command. Try google.\n" ANSI_COLOR_RESET );

  printf( "-----------------------------------------\n\n" );

  return 0;
}
