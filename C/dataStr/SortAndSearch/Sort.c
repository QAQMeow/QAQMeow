#include<stdio.h>
#include"SortAndSearch.h"

int A[20] = {10,3,11,7,19,1,6,14,5,18,9,15,2,12,16,13,4,17,8,20};
int LEN =  sizeof(A)/sizeof(int);	

//输出数组
void PrintArray(int ARRAY[]);

//直接插入排序
/*
初始假设第一个元素(下标0)是已排好序列，从下标(i = 1)开始，与已排好的序列依次(从j = 0开始)比较，若比排好的序列中的j元素小，则已排好的序列从j往后顺移一位，将i元素插入j位置
*/
void DirectInsertionSort(int ARRAY[])
{
	int B[LEN];
	for(int i = 0;i < LEN;i++)
	B[i] = A[i];

	int t;			// 临时记录选取比较的i元素
	int i;			// 未排列的元素下标
	int j; 			// 已排列的元素下标
	int k;			// 往后顺移时记录位置

	for(i = 1;i < LEN;i++)
	{
		for(j = 0;j < i;j++)
		{
			t = B[i];
			if(t < B[j])
			{
				for(int k = i;k > j ;k--)
				{
					B[k] = B[k-1];
				}
				B[j] = t;
			}
		
		}
	}		

		PrintArray(B);
}

//折半插入排序
/*

*/
void BinaryInsertionSort(int ARRAY[])
{
	int B[LEN];
	for(int i = 0;i < LEN;i++)
	B[i] = A[i];

}

//希尔排序
/*

*/
void ShellSort(int ARRAY[])
{
	int B[LEN];
	for(int i = 0;i < LEN;i++)
	B[i] = A[i];
	for(int i = 0;i < LEN;i++)
	B[i] = A[i];


	PrintArray(B);

}

//冒泡排序
/*
排序为从小到达
每次都从下标j=0开始，每排序一次，最大值都排到最后一位，下次需要排序的个数-1
*/
void BubbleSort(int ARRAY[])
{
	int B[LEN];
	for(int i = 0;i < LEN;i++)
	B[i] = A[i];

	int i,j;
	int t;
	for(i = 0;i < LEN-1;i++)
	{
		for(j = 0;j < LEN-i-1;j++)       //注意 j< LEN-1-i
		{
			
			if(B[j] > B[j+1])
			{
				t = B[j];
				B[j] = B[j+1];
				B[j+1] = t;
			}
		}
	}
	PrintArray(B);
}

//快速排序
/*
选取第一个为参考值，将序列分为比该值小和比该值大两序列，再对这两序列进行同样的操作
*/
void QuickSort(int ARRAY[])
{ 	
	int B[LEN];
	for(int i = 0;i < LEN;i++)
	B[i] = A[i];

	int left = 0;
	int right = LEN - 1;
	int T = B[left];
	int k;
	int nright,nleft;
	void sort(int left,int right,int T)
	{
		int i = 0,j = 0;		//记录移动增量，方便计算下一次排序序列位置，可只用一个变量记录
		while(left <right)
		{	

			if(B[left] < T)
			{
			 	left++;
			 	i++;
			}
			if(B[right] > T)
			{
				right--;
				j++;
			}	
			k = B[left];
			B[left] = B[right];
			B[right] = k;	

			/*	left-i：下一次左边排序序列第一个元素位置
				left-1：下一次左边排序最后一个元素位置
				right+1：下一次右边序列排序第一个元素位置
				right+j：下一次右边排序最后一个元素位置
			*/
			sort(left-i,left-1,B[left-i]);
			sort(right+1,right+j, B[right+1]);
		}
		
	}

	sort(left,right,B[0]);
	
	PrintArray(B);
}

//简单选择排序
/*

*/
void SimpleSelectionSort(int ARRAY[])
{
	int B[LEN];
	for(int i = 0;i < LEN;i++)
	B[i] = A[i];

	int i,j,t;

	for(i = 0;i<LEN - 1;i++)
	{
		for(j = i;j<LEN - 1;j++)
		{
			if(B[j] <= B[i])
			{
				t = B[j];
				B[j] = B[i];
				B[i] = t;
			}
		}
	}
	PrintArray(B);
}

//堆排序
void HeapSort(int ARRAY[])
{
	int B[LEN];
	for(int i = 0;i < LEN;i++)
	B[i] = A[i];
}

//归并排序
void MergeSort(int ARRAY[])
{
	int B[LEN];
	for(int i = 0;i < LEN;i++)
	B[i] = A[i];
}

//基数排序
void RadixSort(int ARRAY[])
{
	int B[LEN];
	for(int i = 0;i < LEN;i++)
	B[i] = A[i];

}

//输出数组
void PrintArray(int ARRAY[])
{	
	
	for(int i = 0;i<LEN;i++)
	printf("%d ",ARRAY[i]);
	
	printf("\n");
}
