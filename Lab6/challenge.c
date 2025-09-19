#include <stdio.h>

struct Student {
    char name[20];
    int id;
    int math, eng, sci, hist;
    float avg;
};

int main() {
    struct Student s[3];
    float subjectMath = 0, subjectEng = 0, subjectSci = 0, subjectHist = 0;

    // input
    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d: ", i + 1);
        scanf("%s %d %d %d %d %d", s[i].name, &s[i].id, &s[i].math, &s[i].eng, &s[i].sci, &s[i].hist);

        s[i].avg = (s[i].math + s[i].eng + s[i].sci + s[i].hist) / 4.0;

        subjectMath += s[i].math;
        subjectEng += s[i].eng;
        subjectSci += s[i].sci;
        subjectHist += s[i].hist;
    }

    printf("\nStudent Averages:\n");
    int topStudent = 0;
    for (int i = 0; i < 3; i++) {
        printf("%s (ID: %d): %.2f\n", s[i].name, s[i].id, s[i].avg);
        if (s[i].avg > s[topStudent].avg) {
            topStudent = i;
        }
    }

    printf("\nTop Student: %s with %.2f\n", s[topStudent].name, s[topStudent].avg);

    // subject averages
    subjectMath /= 3;
    subjectEng /= 3;
    subjectSci /= 3;
    subjectHist /= 3;

    printf("\nSubject Averages:\n");
    printf("Math: %.2f\n", subjectMath);
    printf("English: %.2f\n", subjectEng);
    printf("Science: %.2f\n", subjectSci);
    printf("History: %.2f\n", subjectHist);

    // find top subject
    float topAvg = subjectMath;
    char topSub[20] = "Math";

    if (subjectEng > topAvg) { topAvg = subjectEng; sprintf(topSub, "English"); }
    if (subjectSci > topAvg) { topAvg = subjectSci; sprintf(topSub, "Science"); }
    if (subjectHist > topAvg) { topAvg = subjectHist; sprintf(topSub, "History"); }

    printf("\nTop Subject: %s with average %.2f\n", topSub, topAvg);

    return 0;
}
