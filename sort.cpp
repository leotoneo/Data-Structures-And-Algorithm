#include <iostream>

using namespace std;
//冒泡排序 
template <typename T>

int sort_buddle(T a[], int length)
{
	if (a == NULL || length < 0)
		return -1;
	for (int i = 0; i < length - 1; ++i)
	{
		for (int j = 0; j < length - 1 - i; ++j)
		{
			if (a[j + 1] < a[j])
			{
				T temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	return 0;
}
//选择排序
template <typename T>
int sort_change(T a[],int length)
{
	if (a == NULL || length < 0)
		return -1;
	for (int i = 0; i < length - 1; ++i)
	{
		for (int j = i + 1; j < length ; ++j)
		{
			if (a[i]>a[j])
			{
				T temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return 0;
}

int main()
{
	int a[] = {6,2,7,1,0,3};
	sort_change(a,6);
	for (int i = 0; i < 6; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
