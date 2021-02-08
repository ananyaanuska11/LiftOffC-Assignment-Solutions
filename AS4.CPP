

#include <stdio.h>
void main ( )

{

int m1, m2, m3, m4, m5, total =0;
float avg =0.00;
printf ("\n Enter the marks in Physics :");
scanf ("%d", &m1);
printf ("\n Enter the marks in Chemistry :");
scanf ("%d", &m2);
printf ("\n Enter the marks in Biology :");
scanf ("%d", &m3);
printf ("\n Enter the marks in Mathematics :");
scanf ("%d", &m4);
printf ("\n Enter the marks in Computer :");
scanf ("%d", &m5);
total = m1+m2+m3+m4+m5;
avg = (float) total/5;
printf ("\n percentage = %f", avg);

if (avg >= 90)
printf ("\n Grade A");
else if (avg >= 80)
printf ("\n Grade B");
else if (avg >= 70)
printf ("\n Grade C");
else if (avg >= 60)
printf ("\n Grade D");
else if (avg >= 40)
printf ("\n Grade E");
else if (avg < 40)
printf ("\n Grade F");

}

