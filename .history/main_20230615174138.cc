#include <stdio.h>
#include <string.h>
//定义Student结构体
struct Student
{
        char name[10];
        char sex[5];
        int age;
}Stu ;

void print(struct Student stu)
{
        printf("Student name:%s\n",stu.name);
        printf("Student sex:%s\n",stu.sex);
        printf("Student age:%d\n",stu.age);
}

int main(int argc, char *argv[])
{
        struct Student stu1;
        strcpy(stu1.name,"will");
        strcpy(stu1.sex,"man");
        stu1.age = 20;
        print(stu1);
        //Stu
        Stu.age=11;
        print(Stu);
}                 