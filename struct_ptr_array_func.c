#include<stdio.h>

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
    printf("Enter strength \n");
    scanf("%d",&n);
    struct student s[n];
    for (i=0;i<n;i++)
      {
        enter(&s[i]);
      }
      
    for (i=0;i<n;i++)
      {
          display(&s[i]);
      }
    return 0;
}

void enter(struct student *ptr)
{
  printf("Name\n");
  scanf("%s",ptr->name);
  printf("Roll\n");
  scanf("%d",&ptr->roll);
  printf("Marks\n");
  scanf("%f",&ptr->marks);
}

void display(struct student *ptr)
{
  printf("Name %s\n",ptr->name);
  printf("Roll %d\n",ptr->roll);
  printf("Marks %f\n",ptr->marks);
}
