#include <stdio.h>
struct employee
{
char name[30];
int age;
long int phoneno;
float salary;
};
main()
{
int i,n;
printf("enter number of employees:");
scanf("%d",&n);
struct employee emp[n];
for(i=0;i<n;i++)
{
printf("\nEnter details :\n");
printf("Name:");          
scanf("%s",&emp[i].name);
printf("age:");            
scanf("%d",&emp[i].age);
printf("phone number:");
scanf("%ld",&emp[i].phoneno);
printf("Salary:");        
scanf("%f",&emp[i].salary);
}
printf("\tName\t\t Age\t phone number\t\t salary\n");
for(i=0;i<n;i++)
{
printf("%d\t %s\t\t %d\t %ld\t\t %f\n",i+1,emp[i].name,emp[i].age,emp[i].phoneno,emp[i].salary);
}
}
