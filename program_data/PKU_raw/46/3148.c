//*********************************************
//** ??: ???????? **
//** ??: ??? 1300012722 **
//** ??: 2013.11.1 **
//*********************************************
int main()
{
	int row, col, n, i, j, count = 0, sum;     //??????row,???col, ??????????????????n????????count 
	int array[120][120],times;                 //??????,????times
	cin >> row >> col;                         //?????????
	sum = row * col;                           //???????????sum
	for (i = 1; i <= row; i++)
		for (j = 1; j <= col; j++)
			cin >> array[i][j];                //???????row??col????????????
	i = 1;
	j = 1;                                     //?i?j????????????array[1][1]
	while (1)                  
	{
		n = i;
		for (j = n; j <= col - n + 1; j++)
		{
			cout << array[i][j] << endl;       //???????????
			count++;
		}
		j--;
		i++;
		if (count >= sum)
			break;                             //???????????????
		for ( ; i <= row - n + 1; i++)
		{
		    cout << array[i][j] << endl;       //????????????
			count++;
		}
		if (count >= sum)
			break;                             //???????????????
		i--;
		j--;
        for ( ; j >= n; j--)
		{
			cout << array[i][j] << endl;       //????????????
	        count++;
		}
		if (count >= sum)
			break;                             //???????????????
		j++;
		i--;
        for ( ; i > n; i--)
		{
	    	cout << array[i][j] << endl;       //??????????? 
			count++;
		}
		if (count >= sum)
	    	break;                             //???????????????
		i++;
		j++;
	}
	return 0;
}