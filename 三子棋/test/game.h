#pragma once
#define  ROW 3
#define  COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//����������
void InitBoard (char  board [ROW][COL],int row ,int col);
 void displayBoard (char  board[ROW][COL], int row, int col);
 void  playermove(char board[ROW][COL],int row, int col);
 void  computermove(char board[ROW][COL], int row, int col);
 //��������������Ϸ��״̬
 //1.���Ӯ--��*��
 //2.����Ӯ--��#��
 //3.ƽ��---��q��
 //4.��Ϸ����--'c'

 char is_win(char board [ROW][COL], int row,int col);
