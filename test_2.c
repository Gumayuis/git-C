#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//数组向右旋转
void revolve(int* arr, int left, int right)
{
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++;
		right--;
	}

}
int main()
{
	int k = 0;
	scanf("%d", &k);
	int arr[] = { 1, 2, 3, 4, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	if (k >= sz)
	{
		k %= sz;
	}
	//前sz - k 的逆置
	revolve(arr, 0, sz - k -1);
	//后sz - k 到sz - 1的逆置
	revolve(arr, sz - k, sz - 1);
	//然后再整体逆置
	revolve(arr, 0, sz - 1);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}