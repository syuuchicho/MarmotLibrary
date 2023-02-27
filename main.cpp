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
			{1,1},{1,1}//z=0
		},

		{
			{0,0},{0,0}//z=1
		}
	};

	int arrayBox[z][y][x] =
	{
		{
			{3,3},{3,3}//z=0
		},
		{
			{3,3},{3,3}//z=1
		}
	};

	printf("入れ替える前\n");
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





	for (int j = 0; j < 2; j++)
	{
		for (int k = 0; k < 2; k++)
		{
			//マップチップを一時保存	マウスクリックした/してない方
			//arrayBox[0][j][k]=array[1][j][k];3,3,3,3,0,0,0,0,
			arrayBox[0][j][k] = array[1][j][k];
			//マウスでクリックした/してない方とマップチップを変更
			//array[1][j][k]=array[0][j][k];1,1,1,1,1,1,1,1
			array[1][j][k] = array[0][j][k];
			//
			//array[0][j][k]=arrayBox[0][j][k];0,0,0,0,1,1,1,1
			array[0][j][k] = arrayBox[0][j][k];

			//printf("%d,z:%d,y:%d,x:%d\n", array[i][j][k], i, j, k);
		}
	}


	printf("入れ替えた後\n");
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



}