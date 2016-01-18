#include <stdio.h>
char rupokBoard[3][3];

void drawBoard ();
void getRowCol (int sellectedCell, int* pX, int* pY);
int validateInput (int cell);
int showResult (char ch);
void turnPlayerO (int* pCell);
void turnPlayerX (int* pCell);

int main ()
{
   int x, y , row, col, selectedCell, availableCell;
   x=y=row=col=selectedCell=0; availableCell=9;
   char startchar = '1';
   for (row = 0; row<3; row++)
      for (col = 0; col < 3; col++) rupokBoard[row][col] = startchar++;
   drawBoard();
   while (availableCell >= 0) {
      turnPlayerX(&selectedCell);
      getRowCol(selectedCell, &x, &y);
      rupokBoard[x][y] = 'X';

      availableCell--;

      drawBoard();

      if (showResult('X') == 1) break;
      else if (availableCell == 0) {
         printf("\n Game Drawn\n");
         break;
      }
      turnPlayerO(&selectedCell);
      getRowCol(selectedCell, &x, &y);
      rupokBoard[x][y] = 'O';

      availableCell--;

      drawBoard();

      if (showResult('O') == 1) break;
      else if (availableCell == 0) {
         printf("\n Game Drawn\n");
         break;
      }
   }
   getch();
   return 0;
}
void drawBoard() {
   int i, j;
   printf("\nTIC TAC TOE");
   printf("\n Digits (1-9) indicates valid cell number\n");
   printf("\n   %c | %c | %c", rupokBoard[0][0],rupokBoard[0][1],rupokBoard[0][2]);
   printf("\n  ---|---|---");
   printf("\n   %c | %c | %c", rupokBoard[1][0],rupokBoard[1][1],rupokBoard[1][2]);
   printf("\n  ---|---|---");
   printf("\n   %c | %c | %c", rupokBoard[2][0],rupokBoard[2][1],rupokBoard[2][2]);
}

void turnPlayerX(int* pCell) {
   int cell;
   do {
      printf("\n Player X, \n select valid cell number: ");
      scanf("%d", &cell);
   } while (0 == validateInput(cell));
   *pCell = cell;
}
void turnPlayerO(int* pCell) {
   int cell;
   do {
      printf("\n Player O, \n select valid cell number: ");
      scanf("%d", &cell);
   } while (0 == validateInput(cell));
   *pCell = cell;
}
int validateInput(int cell) {
   int row , col;
   if (cell < 1 || cell > 9) return 0;
   getRowCol(cell, &row, &col);
   if ('O' == rupokBoard[row][col] || 'X' == rupokBoard[row][col]) return 0;
   return 1;
}
void getRowCol (int cell, int* pX, int* pY) {
   *pX = (cell -1) / 3;
   *pY = (cell -1) % 3;
}
int showResult (char ch) {
   int status = 0;
   if (rupokBoard[0][0] == ch && rupokBoard[1][1] == ch && rupokBoard[2][2] == ch) {
      printf("\n Player %c is winner", ch);
      status = 1;
   }
   else if (rupokBoard[0][2] == ch && rupokBoard[1][1] == ch && rupokBoard[2][0] == ch) {
      printf("\n Player %c is winner", ch);
      status = 1;
   }
   else if (rupokBoard[0][0] == ch && rupokBoard[1][0] == ch && rupokBoard[2][0] == ch) {
      printf("\n Player %c is winner", ch);
      status = 1;
   }
   else if (rupokBoard[1][0] == ch && rupokBoard[1][1] == ch && rupokBoard[1][2] == ch) {
      printf("\n Player %c is winner", ch);
      status = 1;
   }
   else if (rupokBoard[2][0] == ch && rupokBoard[2][1] == ch && rupokBoard[2][2] == ch) {
      printf("\n Player %c is winner", ch);
      status = 1;
   }
   else if (rupokBoard[0][0] == ch && rupokBoard[0][1] == ch && rupokBoard[0][2] == ch) {
      printf("\n Player %c is winner", ch);
      status = 1;
   }
   else if (rupokBoard[0][1] == ch && rupokBoard[1][1] == ch && rupokBoard[2][1] == ch) {
      printf("\n Player %c is winner", ch);
      status = 1;
   }
   else if (rupokBoard[0][2] == ch && rupokBoard[1][2] == ch && rupokBoard[2][2] == ch) {
      printf("\n Player %c is winner", ch);
      status = 1;
   }
   return status;
}
