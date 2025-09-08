#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    /* data */
    char *name;
    int age;
    float score;

};
// void Input(SinhVien)

//how to use malloc ?
//include <stdlib.h>
// var = malloc((int) * sizeof(array)) ,int mean size, array mean where to store ?

// struct Student* Student = malloc((n + 1) *  sizeof(struct Student));
// Student[i].name = malloc(100 * sizeof(char));

// int array[100]


int main() {
    int n;
    printf("How many students ? \n");
    scanf("%d",&n);
    struct Student* Student = malloc((n + 1) *  sizeof(struct Student));

    if ( Student == NULL ) {
        printf("No Memory");
        return 1;
    }

    for (int i = 1;i <= n; i++) {
        printf("Enter value for student %d \n",i);
        printf("Name for student %d: \n",i);
        Student[i].name = malloc(100 * sizeof(char));
        getchar();
        fgets(Student[i].name, 100, stdin);
        printf("Age for student %d: \n",i);
        scanf("%d",&Student[i].age);
        printf("Score for student %d: \n",i);
        scanf("%f",&Student[i].score);
    }

    for (int j = 1; j <= n; j++) {
        printf("Student %d, Name: %s, Age: %d, Score: %f \n",j,Student[j].name,Student[j].age,Student[j].score);
    }

    float maxx = Student[0].score;
    char* namee = Student[0].name;

    for (int k = 1; k < n; k++) {
        if (Student[k].score > maxx) {
            maxx = Student[k].score;
            namee = Student[k].name;
        }
    }

    printf("Top Scorer:\nName: %s, Score: %.2f\n", namee, maxx);

    for (int m = 1; m <= n; m++) {
        free(Student[m].name);
    }
    
    free(Student);
}


