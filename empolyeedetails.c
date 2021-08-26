#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
	char empname[30];
	char depname[30];
    int empage;
    int phoneno;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("empname: ");
        scanf("%s",employees[i].empname);
       //Employee Department
        printf("depname: ");
        scanf("%s",employees[i].depname);
        //Employee age
        printf("empage: ");
        scanf("%d",&employees[i].empage);
        //Employee PhoneNo
        printf("phoneno: ");
        scanf("%d",&employees[i].phoneno);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].empname);
        
        printf("department \t: ");
        printf("%s \n",employees[i].depname);
 
        printf("age \t: ");
        printf("%d \n",employees[i].empage);
 
         printf("phoneno \t: ");
        printf("%d \n",employees[i].phoneno);
        
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
