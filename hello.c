#include <stdio.h>
#include <string.h>

union student {
    char name[20];
    int roll;
    float marks;
};

int main() {
  union student s1, s2;

    strcpy(s1.name, "rahul");
    s1.roll = 1040;
    s1.marks = 75.0;



    printf("\n%s %d %.2f", s1.name, s1.roll, s1.marks);

    printf("\n%s ", s1.name);
    printf("\n%d ", s1.roll);
    printf("%.2f", s1.marks);


    return 0;
}
