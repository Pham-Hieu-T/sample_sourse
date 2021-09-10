/*
 * Updated 2/25/2021 - Alexandra Stefan
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "list.h"


/*
compile with -g to collect debugging info needed for Valgrind:
gcc -g bucket_sort.c list.c

run with Valgrind:
valgrind --leak-check=full --show-leak-kinds=all ./a.out

run without Valgrind:
./a.out
*/

void print_array(int arr[], int N);

/* // recommended helper functions:
// function to insert a new node in a sorted list.
nodePT insert_sorted(nodePT L, nodePT newP);
//  function to sort an array sing bucket sort
void bucket_sort(int arr[], int N)
*/

void print_array(int arr[], int N){
	int j;
	printf("\n array: ");
	for(j= 0; j<N; j++){
		printf("%5d,", arr[j]);
	}
	printf("\n");
}

//-------------------------------------------------------------
bool get_data_to_array(int *arr, int *N)
{
	FILE *fp;
	char fname[100];
	int i;

	printf("Enter the filename: ");
	scanf("%s",fname);
	fp = fopen(fname,"r");
	if (fp == NULL)
	{
		printf("File could not be opened.\n");
		return false;
	}
	fscanf(fp,"%d",&N);
	arr = realloc(arr,sizeof(int*N));
	for(i = 0; i < N; i++)
		fscanf(fp,"%d ",arr[i]);
	return true;
}
int min_array(int arr[], int N)
{
	int min = arr[0];
	int i;
	for(i <0; i < N-1;i++)
	{
		if(min > arr[i+1])
		{
			min = arr[i+1];
			i++;
		}
	}
	return min;
}
int max_array(int arr[], int N)
{
	int max = arr[0];
	int i;
	for(i <0; i < N-1;i++)
	{
		if(max < arr[i+1])
		{
			max = arr[i+1];
			i++;
		}
	}
	return max;
}
int index_buckets(int N, int min, int max, int arr[], int index_array)
{
	return (()(arr[index_array]-1)*N)/(max-min+1));
}
NodePT* fillBuckets( int arr[], int N, int min, int max)
{
	int i,j,indx;
	struct NodePT **buckets;
	for(i = 0; i < N; i++)
	{
		buckets[i] = NULL;
	}
	for(i=0; i < N ; i++)
	{
		indx = index_buckets(N, min, max, arr[], i);
		for(j = 0; j < N; j++)
		{
			if(j == indx)
			{
				if(buckets[j]==NULL)
					buckets[j] = new_node(arr[i]);
				else
				{
					while(buckets[j] != NULL)
					{
						if()
					}
				}
			}
		}

	}
	return buckets;
}
void bucket_sort_process(int *arr,int N);
{
	int min = min_array(arr,N);
	int max = max_array(arr,N);
	int i,j;
	printf("Bucket sort: min = %d, max = %d, N = %d buckets\n",min,max,N);




}
void run1(){
  // Fill in your code here. You should not write everything in this function.
  // Write some helper functions to separate the work.
	printf("\n-------run1 - this is a place holder. You need to edit this function.------ \n");
	if(get_data_to_array(arr, N))
	{
		print_array(arr, N);
		bucket_sort_process(arr, N);
		print_array(arr, N);
	}
}

int main()
{
	printf("This program will read a file name, load data for an array from there and print the sorted array.\n");
	printf("The array is sorted using bucket sort.\n");
	printf("This will be repeated as long as the user wants.\n");
	int option;
	do {
		run1();
		printf("\nDo you want to repeat? Enter 1 to repeat, or 0 to stop) ");
		scanf("%d",&option);
	} while (option == 1);

   return 0;
}
