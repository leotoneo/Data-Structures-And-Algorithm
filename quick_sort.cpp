void quick_sort(int a[],int begin, int end)
{
	if (begin>=end)
		return;
	int left = begin;
	int right = end;
	int src = a[left];
	while (left < right)
	{
		if (src>a[left + 1])
		{
			a[left] = a[left+1];
			left++;
		}
		else
		{
			int temp = a[left+1];
			a[left+1] = a[right];
			a[right] = temp;
			right--;
		}
	}
	a[left] = src;
	quick_sort(a,begin,left-1);
	quick_sort(a,left+1,right);
}
