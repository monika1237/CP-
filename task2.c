#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_MISTAKES 6

const char *words[] = {"mathematics", "books", "undergraduate", "practicum", "apsolvent"};

int main(){

  int wordIndex = rand() % (sizeof(words)/sizeof(words[0]));
  const char *word = words[wordIndex];

  int wordLength = strlen(word);

  char wordBlanks[wordLength + 1];

  for (int i = 0; i < wordLength; i++){

    wordBlanks[i] = '_';
  }

  wordBlanks[wordLength] = '\0';

  int mistakes = 0;
  while(mistakes < MAX_MISTAKES){

    printf("Word: %s\n",wordBlanks);

    printf("Guesses left: %d\n", MAX_MISTAKES - mistakes);

    printf("Enter a letter: ");
    char letter;

    scanf(" %c", &letter);

    int letterFound = 0;
    for (int i = 0; i < wordLength; i++){
      if (word[i] == letter){
        wordBlanks[i] = letter;
        letterFound = 1;
      }
    }

    if(!letterFound){
      mistakes++;

      printf("Incorrect guess\n");

      switch(mistakes){
        case 1:
          printf("   |\n");
          break;
        case 2:
          printf("   |\n   O\n");
          break;
        case 3:
          printf("   |\n   O\n   |\n");
          break;
        case 4:
          printf("   |\n   O\n  /|\n");
          break;
        case 5:
          printf("   |\n   O\n  /|\\\n");
          break;
        case 6:
          printf("   |\n   O\n  /|\\\n  /\n");
          break;
      }
    }

    if (strcmp(word, wordBlanks) == 0){
     
      printf("Congratulations! You won the game!\n");

      break;
    }
  }
 return 0;
}
