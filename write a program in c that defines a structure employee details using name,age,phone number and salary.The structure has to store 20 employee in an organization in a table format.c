
#include<stdio.h>
struct employee
{
    int id,age,salary,phn_no;
    char name[25];
}emp[100];
 
void main()
{
    int i,n;
    printf("Enter the no of employees:\n");
    scanf("%d",&n);
    printf("Enter employee info as id , name , age , salary, phn_no\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d %d",&emp[i].id,emp[i].name,&emp[i].age,&emp[i].salary,&emp[i].phn_no);
    }
    printf("\nEMP ID\tEMP NAME\tEMP AGE\t\tEMP SAL\t\tEMP PHN NO.\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\n",emp[i].id,emp[i].name,emp[i].age,emp[i].salary,emp[i].phn_no);
    }
}
