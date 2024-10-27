#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{

    char name[50];
    int id;
    float grade_1 , grade_2 , grade_3;

} Student ;

void init_student(struct Student *s, const char *name, int id, float g1, float g2, float g3);

int main(){

    Student *uncc_student;
    char *my_name = "Mansoor";
    init_student(&uncc_student, &my_name, 324244, 23.3, 32, 32);

    printf("Name = %s\n", uncc_student->name);
    printf("Id = %d\n", &uncc_student->id);
    printf("Grade1 = %f\n", &uncc_student->grade_1);
    return 0;
}

void init_student(Student *s, const char *name, int id, float g1, float g2, float g3){
    strcpy(s->name, name);
    s->id = id;
    s->grade_1 = g1;
    s->grade_2 = g2;
    s->grade_3 = g3;

}