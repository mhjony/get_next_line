# include <stdio.h>
int main( )
{
   FILE *fp ;
   char c ;
   printf( "Opening the file test.c in read mode" ) ;
   fp = fopen ( "foo.txt", "r" ) ; // opening an existing file
   printf("%d\n", fp);
   if ( fp == NULL )
   {
     printf ( "Could not open file test.c" ) ;
     return 1;
   }
   printf( "Reading the file test.c\n" ) ;
   while ( 1 )
   {
     c = fgetc ( fp ) ; // reading the file
     if ( c == EOF )
     break ;
     printf ( "%c", c ) ;
   }
   printf("\nClosing the file test.c") ;
   fclose ( fp ) ; // Closing the file
   return 0;
}