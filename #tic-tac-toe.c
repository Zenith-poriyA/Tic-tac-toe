#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int i,j,r,c,player=1,ch,counter=0;
    char box[3][3],p1[20],p2[20],first,second,again[3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            box[i][j]='-';
        }
    }
    printf("--> Tic-Tac-Toe\n\n");
    printf("--> 1.-'X' and 2.-'O' and 3.-'Exit'\n--> Player 1 enter your choice : ");
    a:
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            first='X';
            second='O';
            break;
        case 2:
            first='O';
            second='X';
            break;
        case 3:
            exit(0);
        default :
            printf("\n--> Invalid choice please enter again : ");
            goto a;
            break;
    }
    printf("\n--> Player 1 enter your name (don't write space' '): ");
    scanf("%s",&p1);
    printf("\n--> Please 2 enter your name (don't write space' '): ");
    scanf("%s",&p2);
    printf("--> %s your sign is '%c'",p2,second);
    printf("\n\n-->Let's start the game : \n");
    printf("-->Enter row and column number with dashed(-) : ");
    while(1)
    {
        printf("\n\n\t %c | %c | %c \n",box[0][0],box[0][1],box[0][2]);
        printf("\t---+---+---\n");
        printf("\t %c | %c | %c \n",box[1][0],box[1][1],box[1][2]);
        printf("\t---+---+---\n");
        printf("\t %c | %c | %c \n\n",box[2][0],box[2][1],box[2][2]);

        if(box[0][0]==first && box[1][0]==first && box[2][0]==first)
        {
            printf("--> Congratulation!, %s you won",p1);
            break;
        }
        else if(box[0][1]==first && box[1][1]==first && box[2][1]==first)
        {
            printf("--> Congratulation!, %s you won",p1);
            break;
        }
        else if(box[0][2]==first && box[1][2]==first && box[2][2]==first)
        {
            printf("--> Congratulation!, %s you won",p1);
            break;
        }
        else if(box[0][0]==first && box[0][1]==first && box[0][2]==first)
        {
            printf("--> Congratulation!, %s you won",p1);
            break;
        }
        else if(box[1][0]==first && box[1][1]==first && box[1][2]==first)
        {
            printf("--> Congratulation!, %s you won",p1);
            break;
        }
        else if(box[2][0]==first && box[2][1]==first && box[2][2]==first)
        {
            printf("--> Congratulation!, %s you won",p1);
            break;
        }
        else if(box[0][0]==first && box[1][1]==first && box[2][2]==first)
        {
            printf("--> Congratulation!, %s you won",p1);
            break;
        }
        else if(box[0][2]==first && box[1][1]==first && box[2][0]==first)
        {
            printf("--> Congratulation!, %s you won",p1);
            break;
        }


        else if(box[0][0]==second && box[1][0]==second && box[2][0]==second)
        {
            printf("--> Congratulation!, %s you won",p2);
            break;
        }
        else if(box[0][1]==second && box[1][1]==second && box[2][1]==second)
        {
            printf("--> Congratulation!, %s you won",p2);
            break;
        }
        else if(box[0][2]==second && box[1][2]==second && box[2][2]==second)
        {
            printf("--> Congratulation!, %s you won",p2);
            break;
        }
        else if(box[0][0]==second && box[0][1]==second && box[0][2]==second)
        {
            printf("--> Congratulation!, %s you won",p2);
            break;
        }
        else if(box[1][0]==second && box[1][1]==second && box[1][2]==second)
        {
            printf("--> Congratulation!, %s you won",p2);
            break;
        }
        else if(box[2][0]==second && box[2][1]==second && box[2][2]==second)
        {
            printf("--> Congratulation!, %s you won",p2);
            break;
        }
        else if(box[0][0]==second && box[1][1]==second && box[2][2]==second)
        {
            printf("--> Congratulation!, %s you won",p2);
            break;
        }
        else if(box[0][2]==second && box[1][1]==second && box[2][0]==second)
        {
            printf("--> Congratulation!, %s you won",p2);
            break;
        }
        else if(counter==9)
        {
            printf("--> Match draw!");
            break;
        }
        while(1)
        {
            if(player==1)
            {
                printf("--> %s enter your position : ",p1);
                scanf("%d-%d",&r,&c);
                if(r<4 && r>0 && c>0 && c<4 && box[r-1][c-1]=='-')
                {
                    box[r-1][c-1]=first;
                    player=2;
                    counter++;
                    break;
                }
                else
                {
                    printf("--> Invalid choice please enter again.\n");
                    continue;
                }
            }
            else
            {
                printf("--> %s enter your position : ",p2);
                scanf("%d-%d",&r,&c);
                if(r<4 && r>0 && c>0 && c<4 && box[r-1][c-1]=='-')
                {
                    box[r-1][c-1]=second;
                    player=1;
                    counter++;
                    break;
                }
                else
                {
                    printf("--> Invalid choice please enter again.\n");
                    continue;
                }
            }
        }
    }
    printf("\n\n**************Press Enter-Enter**************");
    getch();
}
