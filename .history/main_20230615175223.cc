#include <stdio.h>
#include <string.h>

struct InitMember
{
    int first;
    double second;
    char* third;
    float four;
};



int main(int argc, char *argv[])
{
    struct Student s1;
    s1.name = "names1";
    s1.sex = "female";
    s1.age = "19";
    printf("name:%s\nsex:%s\nage:%d\n",s1.name,s1.sex,s1.age);
}
