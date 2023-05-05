#include <stdio.h>

int main() {
    char str='0';
    float GPA,gradePoint,sum;
    int credit,total_credit=0;
    do{
        if(str<'1'||str>'9')scanf("%c",&str);
        if(str>='1'&&str<='9') {
            credit = str - '0';
            total_credit+=credit;
            scanf("%c",&str);
            if(str>='A'&&str<='F'){
                switch (str) {
                    case 'A':
                        scanf("%c",&str);
                        if(str=='+') {
                            gradePoint = 4.3f;
                            sum+=(credit*gradePoint);
                        }
                        else if(str=='-') {
                            gradePoint = 3.7f;
                            sum+=(credit*gradePoint);
                        }
                        else {gradePoint=4.0f;sum+=(credit*gradePoint);}
                        break;
                    case 'B':
                        //printf("b ");
                        scanf("%c",&str);
                        if(str=='+') {
                            gradePoint = 3.3f;
                            sum+=(credit*gradePoint);
                        }
                        else if(str=='-') {
                            gradePoint = 2.7f;
                            sum+=(credit*gradePoint);
                        }
                        else {gradePoint=3.0f;sum+=(credit*gradePoint);}
                        break;
                    case 'C'://printf("c ");
                        scanf("%c",&str);
                        if(str=='+') {
                            gradePoint = 2.3f;
                            sum+=(credit*gradePoint);
                        }
                        else if(str=='-') {
                            gradePoint = 1.7f;
                            sum += (credit * gradePoint);
                        }
                        else {gradePoint=2.0f;sum+=(credit*gradePoint);}
                        break;
                    case 'F'://printf("f ");
                        gradePoint=0.0f;
                        sum+=0;
                        break;
                }
            }
        }
    }while(str!='\n');
    //printf("%d %f\n",total_credit,sum);
    if(total_credit==0)printf("0.00");
    else{GPA=sum/total_credit;
    printf("%.2f",GPA);}
    return 0;
}
