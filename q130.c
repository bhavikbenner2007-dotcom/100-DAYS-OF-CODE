#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("File error\n");
        return 1;
    }
    fprintf(fp, "Alice 1 85\n");
    fprintf(fp, "Bob 2 90\n");
    fprintf(fp, "Charlie 3 78\n");
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("File error\n");
        return 1;
    }
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s Roll: %d Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}