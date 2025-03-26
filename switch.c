//WAP to print day using switch statement.
#include<stdio.h>
int main()
{
    int day;
    printf("Enter any day 1-7 :");
    scanf("%d",&day);
    switch(day)
   {
     case 1:
      printf("Day is Sunday");
      break;
    case 2:
      printf("Day is Monday");
      break;
    case 3:
      printf("Day is Thuesday");
      break;
    case 4:
      printf("Day is Wednesday");
      break;
    case 5:
      printf("Day is Thursday");
      break;
    case 6:
      printf("Day is Friday");
      break;
    case 7:
      printf("Day is Saturday");
      break;
    default:
      printf("wrong input");
    }
    return 0;
}
