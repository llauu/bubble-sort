#include <stdio.h>
#include <stdlib.h>

int printArray(int* array, int size);

int main(void) {
	int array[] = {3, 5, 4, 2, 1, 6, 3, 10};
	int size = 8;
	int tmp;
	int swap;
	int count = 0;

	printf("Unsorted array:");
	printArray(array, size);

	do{
		swap = 0;

		for(int i = 0; i < size-1; i++) {
			count++;

			if(array[i] > array[i+1]){
				tmp = array[i];
				array[i] = array[i+1];
				array[i+1] = tmp;
				swap = 1;
			}
		}

	}while(swap);


	printf("\n\nSorted array:");
	printArray(array, size);
	printf("\n\nTo sort the array %d iterations were perfomed", count);

	return EXIT_SUCCESS;
}


int printArray(int* array, int size) {
	int rtn = -1;

	if(array != NULL && size > 0) {
		printf("\n");

		for(int i = 0; i < size; i++) {
			printf("%d ", array[i]);
		}

		rtn = 0;
	}

	return rtn;
}
