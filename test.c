#include<stdio.h>
#include<stdafx.h>
void MaxSum(int array[], unsigned int len)
{
	if (NULL == array || len <= 0) {
		return;
	}
	int cursum = 0, maxsum = 0;
	int index_start = 0, index_end = 0;
	int i = 0;
	for (i = 0; i < len; i++) {
		cursum += array[i];
		if (cursum < 0) {
			cursum = 0;
			index_start = i + 1;
		}
		if (cursum > maxsum) {
			maxsum = cursum;
			index_end = i;
		}
	}
	if (maxsum == 0)
	{
		maxsum = arrat[0];
		index_start = index_end = 0;
		for (i = 1; i < len; i++) {
			if (array[i] > maxsum) {
				maxsum = array[];
				index_start = index_end = i;
			}
		}
	}printf("index_start:%d\n index_end:%d\n", index_start, index_end);
	for (i = index_start; i <= index_end; i++) {
		printf("%d\t", array[i]);
	}
	printf("\n\maxsum:%d", maxsum);
}
void main() {
	char array[4][4];
	int i, j;
	FILE *fp;
	fp = (FILE*)fopen("data.txt", "r");
	for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		fscanf(fp, '%d', &array[i][j]);
	MaxSum(array[i][j],sizeof(array[i][j]));}}
	fclose(fp);
}