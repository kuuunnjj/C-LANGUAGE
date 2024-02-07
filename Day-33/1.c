// Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
// - stu_id
// - stu_name
// - stu_age
// - stu_course
// - stu_city
// - stu_standard
// - stu_school

#include <stdio.h>

struct student{
    int stu_id;
    char stu_name[100];
    int stu_age;
    char stu_course[100];
    char stu_city[100];
    int stu_standard;
    char stu_school[100];
};


int main(){

    struct student door[1000];
    
    int store;
    printf("ENTER NUMBER OF THE DATA OF STUDENTS : ");
    scanf("%d",&store);

    for (int i = 0; i < store; i++)
    {
        printf("ID : ");
        scanf("%d",&door[i].stu_id);

        printf("NAME : ");
        scanf("%s",&door[i].stu_name);

        printf("AGE : ");
        scanf("%d",&door[i].stu_age);

        printf("COURSE : ");
        scanf("%s",&door[i].stu_course);

        printf("CITY : ");
        scanf("%s",&door[i].stu_city);

        printf("STD : ");
        scanf("%d",&door[i].stu_standard);

        printf("SCHOOL-NAME : ");
        scanf("%s",&door[i].stu_school);
    }
    
    for (int i = 0; i < store; i++)
    {   
        printf("-------------------------- \n");
        printf("ID : %d \n",door[i].stu_id);
        printf("NAME : %s \n",door[i].stu_name);
        printf("AGE : %d \n",door[i].stu_age);
        printf("COURSE : %s \n",door[i].stu_course);
        printf("CITY : %s \n",door[i].stu_city);
        printf("STD : %d \n",door[i].stu_standard);
        printf("SCHOOL-NAME : %s \n",door[i].stu_school);
    }
    
}