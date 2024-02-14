/*
 In the following app I create the TODO app. Here is the design of the current project:
 - the app will be working on files, more specified the filenames will be using the dates as the file name
   the file name format will be as follows: DD-MM-YYYY with zeros includes in the filename (i.e.08_01_2023)

We have to add the functionality of working with files:
  while working with files the tastsk will be divided by priority
  the program will be priting on demand different groups of tasks
  (there might be implemented as well the fuctionality of coloring the tasts importance priority)

  (we have to get more knowledge about working with files)
  the files should be open inside the current program and be able to be edited as well

  important questions:
  How to edit the file inside the program?

  There will be groped lines of text like this:
  -Extremely important (have to do)RED
  -Important (better do today)YELLOW
  -Good to be done (nice to be done today)GREEN
  
  - notes paragraph NEON

  the program will be reading the file by grepping the word with the paragraph name
  than it will print the desired lines untill the end of the paragraph

  the tasks will be added by entering the short line of text (less than 80 characters)

  edition mode will include the removing of the tasks
  the removed tasks will be copied toward the completed tab or removed (to track your progress)

*/
#include <stdlib.h>
#include <stdio.h>
void start(char fileName[11]);
int main(void){
  char fileName[11];
  start(fileName);
  // printf("%s", fileName); // for testing, works s expected
}
void start(char fileName[11]){ // work on the string passed by refference
  //char fileName[11]; // needs 11 character because of '\0' at the end of the string
  printf("Hello! Welcome in TODO app, which will help you to get more organized an optimize your day.\n");
  printf("Please enter the date to see your previous TODO files or create the new file for present day...\n");
  printf("(the date format should be typed as DD_MM_YYYY), enter the file name: ");
  scanf("%s", fileName); // stores the filename in format DD_MM_YYYY
  // unneccessary return fileName;
}
