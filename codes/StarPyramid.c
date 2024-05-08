#include<stdio.h>
#include<stdlib.h>

int main() {

	int row;

	printf("Enter the row of the pyramid : ");
	scanf("%d", &row);

	for( int i = 0; i < row; i++ ) {

		for ( int j = row; j > i; j-- ) {

			printf(" ");

		}

		for ( int k = 0; k <= i; k++ ) {

			printf(" *");

		}

		printf("\n");

	}

	return EXIT_SUCCESS;

}
