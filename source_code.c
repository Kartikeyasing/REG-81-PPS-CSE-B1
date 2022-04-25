// A program By Kartikeya Singh
// Registration no. : RA2111003010081
// Class/sec : CSE-B1

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

  char rock[6][100]={
                    "    _______",
                    "---'   ____)",
                    "      (_____)",
                    "      (____)",
                    "      (____)",
                    "---.__(___)"
                      
                    };

    char paper[6][100]={
                    "    _______",
                    "---'   ____)____",
                    "          ______)",
                    "          _______)",
                    "          _______)",
                    "---.__________)"
                    };

    char scissor[6][100]={
                     "   _______",
                    "---'   ____)____",
                    "          ______)",
                    "          _______)",
                    "      (____)",
                    "---.__(___)"
    };

void display(int x)
{
    int i;
if(x==0)
{
for(i=0;i<6;i++)
printf("%s\n",rock[i]);
}
else if(x==1)
{
for(i=0;i<6;i++)
printf("%s\n",paper[i]);
}
else if (x==2)
{
 for(i=0;i<6;i++)
 printf("%s\n",scissor[i]);
}
else
printf("Invalid Input");
}
int main() {
      int i;
  int uc,cc;
     printf("Enter 0 for Stone, 1 for Paper, 2 for Scissor\n");
    scanf("%d",&uc);

  srand(time(NULL));
    cc = rand() % 3;
   
   printf("YOUR CHOICE:\n");
   display(uc);
   printf("COMPUTER'S CHOICE:\n");
   display(cc);
   printf("\n\n");
    switch (uc)
{
    case 0:
        if(cc==1)
        {
            printf("You Lost 😔😔");
        }
        else
        if(cc==2)
        {
            printf("You Won 😊😊");
        }
        else
            printf("draw 😑😑");
        break;
    case 1:
            if(cc==2)
        {
            printf("You Lost 😔😔");
        }
        else
        if(cc==0)
        {
            printf("You Won 😊😊");
        }
        else
            printf("draw 😑😑");
        break;
    case 2:
            if(cc==0)
        {
            printf("You Lost 😔😔");
        }
        else
        if(cc==1)
        {
            printf("You Won 😊😊");
        }
        else
            printf("draw 😑😑");
        break;    
    default:
       printf("invalid input");
        break;
    }
    
    
  return 0;
}
