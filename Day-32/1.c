// Q1. Make structure of student add 3 attributes.

#include <stdio.h>

struct student{
    int id;
    char name[100];
    int age;
};


int main(){
    struct student s;
    struct student t;
    struct student u;

    s.id = 1;
    strcpy(s.name , "KUNJ");
    s.age = 20;
    
    printf("ID : %d\n",s.id);
    printf("NAME : %s\n",s.name);
    printf("AGE : %d\n",s.age);
    
    
    printf("--------------\n");
    
    
    t.id = 2;
    strcpy(t.name , "MEET");
    t.age = 23;
    
    printf("ID : %d\n",t.id);
    printf("NAME : %s\n",t.name);
    printf("AGE : %d\n",t.age);
    
    printf("--------------\n");
    
    u.id = 1;
    strcpy(u.name , "VIRAJ");
    u.age = 22;
    
    printf("ID : %d\n",u.id);
    printf("NAME : %s\n",u.name);
    printf("AGE : %d\n",u.age);

    
}