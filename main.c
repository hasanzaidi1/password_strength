/*
 * The provided C code implements a simple password strength meter that reads potential passwords from three different data files and evaluates their strength based on three defined tests. 
 *
 * Password Strength Meter
 *
 * Author: Hasan Zaidi
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

//test 1 min 10 chars
void test1(char passPotential[80]){
  if(strlen(passPotential)>= 10){
    printf("Test 1 passed for: ");
    printf("%s",passPotential);
  }
  else{
    printf("Test 1 failed for: ");
    printf("%s",passPotential);
  }
}

//Test 2 max 128 chars
void test2(char passPotential[80]){
  if(strlen(passPotential)<= 128){
    printf("Test 2 passed for: ");
    printf("%s",passPotential);
  }
  else{
    printf("Password needs to be lesser than 129 characters\n");
  }
}

//test 3 no repetition
void test3(char passPotential[80]){
  int count = 1;
  for(int i = 0; i <= strlen(passPotential); i++){
      for(int j = i+1; j <= strlen(passPotential); j++){
        
        if(passPotential[i]==passPotential[j]){
          count++;
        } 
      }
    }
  if(count>2){
    printf("Test 3 failed for: %s",passPotential);
  }
  else{
    printf("Test 3 passed for: %s",passPotential);
  }
}



int main(void) {
  
  char  line[80]; /* holds input line from data file */
  char  password[80]; /* holds potential password */
  FILE *dataFile1;
  FILE *dataFile2;
  FILE *dataFile3;
  bool passPhrases;


  dataFile1 = fopen("Proposed passwords #1.txt", "r");
  dataFile2 = fopen("Proposed passwords #2.txt", "r");
  dataFile3 = fopen("Proposed passwords #3.txt", "r");

  
  //Reading from the  data file 1
  printf("\n\n----DATAFILE #1----");
  while(fgets (line, 80, dataFile1) != NULL){
    printf("\nPotential password: %s",line);
    test1(line);
    test2(line);
    test3(line);
    }

  printf("\n\n----DATAFILE #2----");
  //Reading from the  data file 2
  while(fgets (line, 80, dataFile2) != NULL){
    printf("\nPotential password: %s",line);
    test1(line);
    test2(line);
    test3(line);
    }

   printf("\n\n----DATAFILE #3----");
  //Reading from the  data file 3
  while(fgets (line, 80, dataFile3) != NULL){
    printf("\nPotential password: %s",line);
    test1(line);
    test2(line);
    test3(line);
    }
   
  int fclose(FILE *dataFile1);
  int fclose(FILE *dataFile2);
  int fclose(FILE *dataFile3);

  
  return 0;
}


