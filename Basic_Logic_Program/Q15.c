//Q15)=Convert school’s name in abbreviated form

#include <stdio.h>

int main()
{

  char fullname[20], medname[20], lname[20];
  printf("Enter The School First Name, Middle Name and Last Name: \n");
  scanf("%s %s %s", fullname, medname, lname);
  printf("Abbreviated Name: ");
  printf("%c. %c. %s\n", fullname[0], medname[0], lname);
  return 0;
}