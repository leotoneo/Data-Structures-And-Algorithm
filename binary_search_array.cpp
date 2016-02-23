#include <iostream>

using namespace std;


//递归
int binary_search_array(int a[], int key, int begin, int end)
{

	if (begin >= end)
		return -1;
	int middle = (begin + end) / 2;
	if (key <a[middle])
		return binary_search_array(a,key,begin, middle);
	else if (key>a[middle])
		return binary_search_array(a,key, middle + 1, end);
	else
		return middle;
}

//非递归

int binary_search_loop(int a[], int key, int begin, int end)
{
	int middle;
	while (begin < end)
	{
		middle = (begin + end) / 2;
		if (key>a[middle])
			begin = middle + 1;
		else if (key < a[middle])
			end = middle;
		else
			return middle;
	}
	return -1;
}
int main()
{
	int a[] = {1,3,5,7,9,11,13};
	cout << binary_search_loop(a,13,0,7) << endl;
	//cout<<binary_search_array(a,13,0,7)<<endl;
	return 0;
}
