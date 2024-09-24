// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h>

int main() {
    
    char questions[][100] = {"1.What is after A?: ", "2.Where is Malaysia?; ", "What is after B?: "};
    
    char options[][100] = { "A. B", "B. C", "C. D", "A. Indonesia", "B. Singapura", "C. Korea", "A. O", "B. P", "C. Q"
    };
    
    char answer[3] = {'A', 'B', 'C'};
    int NOQ = sizeof(questions)/sizeof(questions[0]);
    
    char guess;
    int score;
    
    printf("Quiz Game\n");
    
    for (int i = 0; i < NOQ; i++)
    {
        printf("***********************\n");
        printf("%s\n", questions[i]);
        printf("***********************\n");
        
        for (int j = (i *3); j<(i*3)+3; j++)
        {
            printf("%s\n",options[j]);
        }
        
        printf("guess: ");
        scanf("%c", &guess);
        scanf("%c");
        
        guess = toupper(guess);
        
        if(guess == answer[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONGG!\n");
        }
    }
      printf("******************************************\n");
        printf("FINAL SCORE: %d / %d\n", score,NOQ);
        printf("******************************************\n");
    return 0;
}
