#include<iostream>

int main()
{
	int n;
	std::cin >> n;
	int *love=new int[n];
	int i, j;
	int m;
	for (i = 0; i<n;i++)
	{
		std::cin >> love[i];
	}
	int q;
	std::cin >> q;
	int l, r, k;
	int *result=new int[q];
	for (i = 0; i<q; i++)
	{
		std::cin >> l >> r >> k;
		m = 0;
		for (j = l; j <= r; j++)
		{
			if (love[j - 1] == k)
				m++;
		}
		result[i] = m;
	}
	for (i = 0; i < q; i++)
		std::cout << result[i] << std::endl;
	delete []love;
	delete []result;
	return 0;
}

//评价：算法复杂度太高了，无法在规定时间跑出程序，通过率75%左右
