//Que2
#include<stdio.h>
int accept_array1(int arr1[3][3]);
int print_array1(int arr1[3][3]);

int accept_array2(int arr2[3][3]);
int print_array2(int arr2[3][3]);

void add_array(int arr1[3][3],int arr2[3][3],int res[3][3]);
void res
int main()
{
	int arr1[3][3];
	int arr2[3][3];
	int res[3][3];
	printf("Array elements\n");

	accept_array1(arr1);
	print_array1(arr1);

	accept_array2(arr2);
	print_array2(arr2);

	add_array(arr1,arr2,res);
//        printf("%d",res[3][3]);
	return 0;
}


int accept_array1(int arr1[3][3])
{
	printf("Enter Array Elements:");
	for(int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{

			printf("Enter arr[%d] arr[%d]:",i,j);
			scanf("%d",&arr1[i][j]);

		}

	}
}

int print_array1(int arr1[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%-4d",arr1[i][j]);
		}
	}
	printf("\n");
}







int accept_array2(int arr2[3][3])
{
	printf("Enter Array Elements:");
	for(int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{

			printf("Enter arr[%d] arr[%d]:",i,j);
			scanf("%d",&arr2[i][j]);

		}

	}
}

int print_array2(int arr2[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%-4d",arr2[i][j]);
		}
	}
	printf("\n");

}


//Addition

void  add_array(int arr1[3][3],int arr2[3][3] ,int res[3][3])
{

	

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			res[i][j]= arr1[i][j]  + arr2[i][j];
			
		}

		//printf("Result=%d",res[3][3]);
	}
	


	printf("\n");


}


void res_array(int res)
{
for(int i=0;i<3;i++)
{
for(int j=0;j<1;j++)
{

printf("Result:%-4d",res[i][j]);

}


}



}













