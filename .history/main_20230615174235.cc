#include <stdio.h>
#include <string.h>
struct Student
{
        char name[10];
        char sex[5];
        int age;
}Stu = {"Mike","man",22};

int main(int argc, char *argv[])
{
        printf("name:%s\nsex:%s\nage:%d\n",Stu.name,Stu.sex,Stu.age);
}
