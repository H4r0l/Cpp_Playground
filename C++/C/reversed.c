#include <stdio.h>

char *strrev (char *string)
{
  int sizeS = 0;
  while(string[sizeS] != '\0'){
    sizeS++;
  }
  char *reversed = malloc(sizeS + 1); 
  if(reversed == NULL){
    return NULL;
  }
  for(int i = 0; i < sizeS; i++){
    reversed[i] = string[sizeS - 1 - i];
  }
  reversed[sizeS] = '\0';
  for(int i = 0; i < sizeS; i++){
    string[i] = reversed[i];
  }
  return string; // reverse the string in place and return it
}