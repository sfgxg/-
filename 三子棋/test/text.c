//������������Ϸ
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("******************************\n");
	printf("******1.play   0. exit   *****\n");
	printf("******************************\n");
}
//��Ϸ������ʵ��
void game()
{
	char ret = 0;
	//��������--����߳���������Ϣ
	char board[ROW][COL] = {0};//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL); 
	//��ӡ����
	displayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		playermove(board,ROW,COL);
		displayBoard(board, ROW, COL);
		ret=is_win(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		//�ж�����Ƿ�Ӯ
		
		//��������
		computermove(board, ROW, COL);
		displayBoard(board, ROW, COL);
		ret=is_win(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		//�жϵ����Ƿ�Ӯ
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}


}
void text()
{
	int input = 0;
	srand((unsigned int )time(NULL));
	do
	{

		menu();
		printf("��ѡ��");
			scanf_s("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;

			}
		
	} while (input);
}
int main()
{
	text();
	return 0;
}