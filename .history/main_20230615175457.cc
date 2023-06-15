#include <stdio.h>
#include <string.h>

struct InitMember
{
    int first;
    double second;
    char* third;
    float four;
};


int main(int argc, char *argv[]) {
    struct InitMember test;
    test.first = -10;
    test.second = 3.141590;
    test.third = "method two";
    test.four = 0.25;
    printf("name:%f\nsex:%d\nage:%f\n",test.second,test.first,test.four);
}
