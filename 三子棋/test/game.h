#pragma once
#define  ROW 3
#define  COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//函数的声明
void InitBoard (char  board [ROW][COL],int row ,int col);
 void displayBoard (char  board[ROW][COL], int row, int col);
 void  playermove(char board[ROW][COL],int row, int col);
 void  computermove(char board[ROW][COL], int row, int col);
 //告诉我们四种游戏的状态
 //1.玩家赢--‘*’
 //2.电脑赢--‘#’
 //3.平局---‘q’
 //4.游戏继续--'c'

 char is_win(char board [ROW][COL], int row,int col);
