#include <stdio.h>
int main() {
struct sheet{
    char name[20];
    double score;
};
struct sheet student[3] = {
    {"Amy", 85.5},
    {"Bob", 92.0},
    {"John", 78.5}
};
for (int i = 0; i < 3; i++) {
    printf("Name:%s, Score:%lf\n", student[i].name, student[i].score);
}
return 0;
}