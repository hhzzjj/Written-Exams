#include <iostream>
#include <vector>
#include <map>
using namespace std;


//将相同喜好值（k）的用户，放在同一个容器里面，放入的编号即输入用户的编号。因此，最后查找对应喜好值用户的时候，只需要在相应喜好值的容器里面查询即可
int main()
{
	int n;
	std::cin >> n;
	int love;
	map< int, vector<int> >a;     //关键步骤
	int i, j;
	int m;
	for (i = 1; i<=n; i++)
	{
		cin >> love;
		a[love].push_back(i);
	}
	int q;
	cin >> q;
	int l, r, k;
	int *result = new int[q];
	for (i = 0; i<q; i++)
	{
		cin >> l >> r >> k;
		m = 0;
		for (j = 0; j <a[k].size(); j++)
		{
			if (a[k][j] >= l&&a[k][j] <= r)
				m++;
		}
		result[i] = m;
	}
	for (i = 0; i < q; i++)
		cout << result[i] << endl;
	system("pause");
	delete[]result;
	return 0;
  
//改进后的代码，可以在规定时间跑出来
