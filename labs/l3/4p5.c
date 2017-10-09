#include <stdio.h>

int main(void)
{
	int i1, i2, i3, i4,
	    i5, i6, i7, i8,
	    i9, i10, i11, i12,
	    i13, i14, i15, i16,
	    row_sum1, row_sum2,row_sum3, row_sum4,
	    col_sum1, col_sum2, col_sum3,col_sum4,
	    dia_sum1, dia_sum2;
	
	printf("Enter the numbers from 1 to 16 in any order:\n");
	if (scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
	&i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11,
	&i12, &i13, &i14, &i15, &i16) == 16)
	{

		row_sum1 = i1 + i2 + i3 + i4;
		row_sum2 = i5 + i6 + i7 + i8;
		row_sum3 = i9 + i10 + i11 + i12;
		row_sum4 = i13 + i14 + i15 + i16;

		col_sum1 = i1 +i5 + i9 + i13;
		col_sum2 = i2 + i6 + i10 + i14;
		col_sum3 = i3 + i7 + i11 + i15;
		col_sum4 = i4 + i8 + i12 + i16;

		dia_sum1 = i1 + i6 + i11 + i16;
		dia_sum2 = i4 + i7 + i10 + i13;
		printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",
		i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14,
		i15, i16);
		printf("Row sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3,
		row_sum4);
		printf("Column sums: %d %d %d %d\n", col_sum1, col_sum2, col_sum3,
		col_sum4);
		printf("Diagonal sums: %d %d\n", dia_sum1, dia_sum2);
	} else {
		printf("Invalid entry. Exiting...\n");
	}
	return 0;

}

	
