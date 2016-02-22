void merge(int a[], int temp[], int left, int middle, int right)
{
	int p_left = left;
	int p_right = middle;
	int i = left;
	while (p_left < middle || p_right < right)
	{
		if (p_left >= middle)
		{
			temp[i] = a[p_right];
			p_right++;
		}
		else if (p_right >= right)
		{
			temp[i] = a[p_left];
			p_left++;
		}
		else if (a[p_left] > a[p_right])
		{
			temp[i] = a[p_right];
			p_right++;
		}
		else
		{
			temp[i] = a[p_left];
			p_left++;
		}
		++i;
	}
	for (int i = left; i < right; ++i)
	{
		a[i] = temp[i];
	}
}
void merge_sort(int a[], int temp[], int left, int right)
{
	if (right - left <= 1)
		return;
	int middle = (left + right) / 2;
	merge_sort(a,temp,left, middle);
	merge_sort(a,temp,middle,right);
	merge(a,temp,left,middle,right);
}
void merge_sort(int a[],int length)
{
	int *temp = new int[length];
	merge_sort(a,temp,0,length);
	delete []temp;
}
