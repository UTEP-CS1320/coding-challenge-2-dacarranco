/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Angel F. Garcia (9/19/2020)
*   
*   Check the // TODO comments to see what is missing and needs to be completed.
*/

#include <stdio.h>

int main(void) {
  int s, d;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);

  // TODO: Complete the rest of the categories
  if(s < d) { //I place this statement first to get this step verify first and save time by not running the other statements
	  printf("ERROR\n");
  }
  else if(s < 120 && d < 80) { //I used ("and") and ("or") to reduce the if statements and have everything in the same statement
      printf("Normal\n");
  }
  else if((s >= 120 && s <= 129 && d < 80)) {
      printf("Elevated\n");
  }
  else if((s >= 130 && s <= 139) || (d >= 80 && d <= 89)) {
	  printf("Stage 1 Hypertension\n");
  }
  else if(s > 140 || d > 90) {
	  printf("Stage 2 Hypertension\n");
  }
  else if(s > 180 || d > 120) { //When I have ("and") and ("or") on the same line i prioritice ("or") because one of the condicionals is enough to apply the statement  
	  printf("Hypertensive Crysis\n");
  }
  return 0;
}
