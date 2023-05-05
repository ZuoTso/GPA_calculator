#include <stdio.h>

int main() {
    //Example input: 1A+3B2A+
    char perCharInString = '0';
    float GPA, gradePoint, sum;
    int credit, totalCredit = 0;

    do {
        if (perCharInString < '1' || perCharInString > '9')
            scanf("%c", &perCharInString);
        if (perCharInString >= '1' && perCharInString <= '9') {
            credit = perCharInString - '0';
            totalCredit += credit;
            scanf("%c", &perCharInString);
            if (perCharInString >= 'A' && perCharInString <= 'F') {
                switch (perCharInString) {
                    case 'A':
                        scanf("%c", &perCharInString);
                        if (perCharInString == '+') {
                            gradePoint = 4.3f;
                            sum += (credit * gradePoint);
                        } else if (perCharInString == '-') {
                            gradePoint = 3.7f;
                            sum += (credit * gradePoint);
                        } else {
                            gradePoint = 4.0f;
                            sum += (credit * gradePoint);
                        }
                        break;
                    case 'B':
                        //printf("b ");
                        scanf("%c", &perCharInString);
                        if (perCharInString == '+') {
                            gradePoint = 3.3f;
                            sum += (credit * gradePoint);
                        } else if (perCharInString == '-') {
                            gradePoint = 2.7f;
                            sum += (credit * gradePoint);
                        } else {
                            gradePoint = 3.0f;
                            sum += (credit * gradePoint);
                        }
                        break;
                    case 'C':
                        //printf("c ");
                        scanf("%c", &perCharInString);
                        if (perCharInString == '+') {
                            gradePoint = 2.3f;
                            sum += (credit * gradePoint);
                        } else if (perCharInString == '-') {
                            gradePoint = 1.7f;
                            sum += (credit * gradePoint);
                        } else {
                            gradePoint = 2.0f;
                            sum += (credit * gradePoint);
                        }
                        break;
                    case 'F':
                        //printf("f ");
                        gradePoint = 0.0f;
                        sum += 0;
                        break;
                }
            }
        }
    } while (perCharInString != '\n');
    //printf("%d %f\n",total_credit,sum);
    if (totalCredit == 0)printf("0.00");
    else {
        GPA = sum / totalCredit;
        printf("%.2f", GPA);
    }
    return 0;
}
