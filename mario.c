//mario.c
//Harrison Oates 12/04/19
//This is CS50

#include <cs50.h>
#include <stdio.h>

int main(void);

int get_positive_int(string Height);

//Asks for imput
int main (void)
{
printf("Welcome to Mario Castle Maker!\n");
printf("Please enter in a number between 1 and 8\n");
int i = get_positive_int("Height: ");
    
    

//i is height
//j is space
//k is number of rows
//l is hashes

//loop that makes pyramid.
for (int k = 0; k < i; k++)
{
  for (int j = (i-k); 1 < j ; j--)
    {
    printf(" ");
    }
  for (int l = 1; l <= (k+1); l++)
  {
      printf("#");
  }
    printf("\n");
}
return 0;
}

//prompt for height
int get_positive_int(string Height)
{
    int n;
    do
    {
        n = get_int("%s", Height);
    }
    while ((n <= 0) || (n > 8));
    return n;
}
