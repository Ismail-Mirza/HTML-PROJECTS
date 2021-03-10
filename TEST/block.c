#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int row ;
	printf("Enter rows:");
	scanf("%d",&row);
	for (int i = 1; i<=row; i++){

		for (int j = 1; j<=i;j++)
		{

			printf("%d",j);
		}
		for (int space = 0; space<2*(row-i);space++){
		    printf(" ");
		    
		    
		}
		for (int k=i;k>=1;k--){
		    printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}