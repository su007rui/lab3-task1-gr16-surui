/* hello.c */
#include <stdio.h>

/*Sourse fils with structure
*studentDate
*/

struct StudentData{
char *stu_name;
int stu_id;
int stu_age;
};
int main ()
{
  /*student is the varible of stucture StudentData*/
  struct StudentData student;
  /*Assinging the valuse to StudentData*/
  student.stu_name="SuRui";
  student.stu_id=20102000;
  student.stu_age=21;

  /*Displaying the values of struct nember*/
  printf("Hello,%s",student.stu_name);
  printf("\nStudent Id is: %d" ,student.stu_id);
  printf("\nStudent Age is: %d",student.stu_age);
  printf("\nGoodbye!");
  return 0;
}