#include<stdio.h>


//creating a structure for student list consisting of a string of Name, integer of Roll number and  float of marks
struct student
{
char name[30];
int roll; 
float marks; 
};

void enter(struct student *);
void display(struct student *);

int main()
{
    int n,i; 
    printf("Enter strength \n");        //entering the length of the array
    scanf("%d",&n);
    struct student s[n];                //defining a array of structure of the given length
    for (i=0;i<n;i++)                   //loop untill the end of the structure to enter the details of student, call by referance, passes as the adress of the elements
      {
        enter(&s[i]);
      }
      
    for (i=0;i<n;i++)                    //loop untill the end of the structure to show the details of student, call by referance, passes as the adress of the elements
      {
          display(&s[i]);
      }
    return 0;
}

void enter(struct student *ptr)         //taking the adress of the array of structure to the pointer *ptr to access the structure objects
{
  printf("Name\n");
  scanf("%s",ptr->name);                //dereferancing to thr members of the array of structure using pointer
  printf("Roll\n");
  scanf("%d",&ptr->roll);
  printf("Marks\n");
  scanf("%f",&ptr->marks);
}

void display(struct student *ptr)       //taking the adress of the array of structure to the pointer *ptr to access the structure objects
{
  printf("Name %s\n",ptr->name);        //dereferancing to thr members of the array of structure using pointer
  printf("Roll %d\n",ptr->roll);
  printf("Marks %f\n",ptr->marks);
}
