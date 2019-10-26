//
//  main.c
//  gradeconvert
//
//  Created by Akeem Bacchus on 12/14/17.
//  Copyright © 2017 Akeem Bacchus. All rights reserved.
//



#include <stdio.h>

float readGradeNumber();
void convertAndPrint(float grade);

int main()
{   //This function is complete do not change it.
    printf("hey you");
    float grade = readGradeNumber();
    convertAndPrint(grade);
    return 0;
    
}

float readGradeNumber() //Do not change this line
{   //Complete this function
    float gradenumber;
    printf(" Enter a positive grade number ");
    scanf("%f",&gradenumber);
    return gradenumber;
}

void convertAndPrint(float grade)  //Do not change this line
{   //Complete this function
    if( grade>=90 && grade<=100)
        printf("A");
    else if (grade>=80 && grade<90)
        printf("B");
    else if (grade>=70 && grade<80)
        printf("C");
    else if (grade >=60 && grade<70)
        printf("D");
    else if (grade <=50)
        printf("F");
}
