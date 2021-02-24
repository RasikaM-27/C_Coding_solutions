// GRADING STUDENTS
//Every student receives a grade in the inclusive range from 0 to 100.
//Any grade less than 40 is a failing grade.
//Sam is a professor at the university and likes to round each student's grade according to these rules:

//If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of 5 .
//If the value of grade is less than 38 , no rounding occurs as the result will still be a failing grade.
# include<stdio.h>
# include<stdlib.h>
 int main()
 {
     int i, n, z;
     int m[60];
     scanf("%d", &n);
     for(i=0; i<n; i++)
     {
         scanf("%d\n", &m[i]);
     }
     for(i=0; i<n; i++)
     {  if(m[i]>35)
        {   z=((m[i]/5)+1)*5;
            if((z-m[i])<3)
            {
                m[i]=z;
            }
        }
     }
    for(i=0; i<n; i++)
    {
        printf("%d\n",m[i]);
    }
 }
