#include<stdio.h>
#include"Function.h"

int main()
{

	const int x = 2;
	const int y = 2;
	const int z = 2;

	int array[z][y][x] =
	{
		{
			{1,1},
			{1,1}//z=0
		},

		{
			{0,0},
			{0,0}//z=1
		}
	};

	int arrayBox[z][y][x] =
	{
		{
			{3,3},
			{3,3}//z=0
		},
		{
			{3,3},
			{3,3}//z=1
		}
	};

	printf("����ւ���O\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{

				printf("%d,z:%d,y:%d,x:%d\n", array[i][j][k], i, j, k);
			}
		}

	}

	//����ւ���}�b�v�`�b�v��No(����)���擾,�Ⴆ�Έ���a��b
	int a = 0;
	int b = 1;
	//�}�b�v�`�b�v�̓���ւ�
	for (int j = 0; j < 2; j++)
	{
		for (int k = 0; k < 2; k++)
		{
			arrayBox[a][j][k] = array[b][j][k];
			arrayBox[b][j][k] = array[a][j][k];
		}
	}

	printf("����ւ�����\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				array[i][j][k] = arrayBox[i][j][k];
				printf("%d,z:%d,y:%d,x:%d\n", array[i][j][k], i, j, k);
			}
		}

	}



}