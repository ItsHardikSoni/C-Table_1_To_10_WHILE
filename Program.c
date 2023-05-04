// Write a program the table 1 to 10 using (WHILE)


#include<stdio.h>
#include<conio.h>
void main()
{ 
  int i = 1;
  while(i <= 10)
  { int j = 1;
    while(j<=10)
    {
        printf("%d\t", i*j);
        j++;
    }
    printf("\n");
    i++;
  }
 getch();
}
