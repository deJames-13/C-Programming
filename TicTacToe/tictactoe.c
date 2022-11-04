#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
char board[3][3] = {{0}};
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

void resetBoard();
void gameBoard();
void playerMove();
void printWinner(char winner);
void botMove();
char checkWin();
int gameStatus();

int main(){
    char winner = 'T';
    resetBoard();
    printf("%d\n", winner=='T');

    while(winner=='T'&&gameStatus()!=0){
        printf("Enter your move!\n");
        gameBoard();
        playerMove();
        winner = checkWin();
        if(winner!='T'||gameStatus()==0){break;}

        botMove();
        winner = checkWin();
        if(winner!='T'||gameStatus()==0){break;}
    }
    gameBoard();
    printWinner(winner);

    return 0;
}

void helloWorld(){
    printf("Hello, World\n");
}

void resetBoard(){
    printf("TIC TAC TOE\n");
    for(int i = 0; i < 3; i++){
        for (int j=0; i < 3; j++){
            board[i][j] = ' ';
        }
    }
}
void gameBoard(){
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}
int gameStatus(){
    int free = 9;
    for(int i = 0; i < 3; i++){
        for (int j = 0; i < 3; i++){
            if (board[i][j]!=' ') {
                free--;
            }
        }
    }
    return free;
}
void playerMove(){
    int x,y;
    do {
    printf("Enter row: ");
    scanf("%d", &x);
    printf("Enter column: ");
    scanf("%d", &y);
    x--; y--;
    if (board[x][y]==' '){
        printf("INVALID MOVE!");
    }
    else {
        board[x][y] = PLAYER1;
        break;
    }
    }while (board[x][y]==' ');

}

char checkWin(){
    for (int i = 0; i < 3; i++){
        if(board[i][0]==board[i][1] && board[i][0]==board[i][2]){return board[i][0];}
    }
    for (int i = 0; i < 3; i++){
        if(board[0][i]==board[1][i] && board[0][i]==board[2][i]){return board[0][i];}
    }
    if(board[0][0]==board[1][1] && board[0][0]==board[2][2]){return board[0][0];}
    if(board[0][2]==board[1][1] && board[0][2]==board[2][0]){return board[0][2];}
}
void botMove(){
    srand(time(0));
    int x, y;
    if(gameStatus()>0){
        do {
            x = rand()%3;
            y = rand()%3;
        }while (board[x][y]==' ');
        board[x][y] = PLAYER2;
    }
    else {
        printWinner('T');
    }
}

void printWinner(char winner){
    if(winner == PLAYER1){
        printf("\nYOU WON!\n");
    }
    else if(winner==PLAYER2){
        printf("\nYOU LOST!\n");
    }
    else {
        printf("\nDRAW!\n");
    }
}

