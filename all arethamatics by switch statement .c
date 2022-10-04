#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,j;
  clrscr();
  
  printf("1.addition\n2.multiplacation\n3.division\n4.substracation\n");
  printf("please enter the value of a&b");
  scanf("%d,%d",&a,&b);
  printf("please enter your choise j");
  scanf("%d",&j);
 switch(j)
 {
    case  1:
      c=a+b;
      printf("%d is addition of two numbers",c);                             
      break;
    
    case  2:
       c=a*b ;
       printf("%d is multiplication of two numbers",c);
       break ;
    
    case  3:
       c=a/b;
       printf("%d is division of two numbers",c);
       break;
    
    case  4:
       c=a-b;
       printf("%d is substraction of two numbers",c);
       break;
    
    default :
       printf(" enter the correct number ");
       break ;
 }
 getch();
}


















            
            
            
            
 
            
            
            
            
            
            
            
            
            