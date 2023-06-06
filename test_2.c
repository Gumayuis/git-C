#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����������ת
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
	//ǰsz - k ������
	revolve(arr, 0, sz - k -1);
	//��sz - k ��sz - 1������
	revolve(arr, sz - k, sz - 1);
	//Ȼ������������
	revolve(arr, 0, sz - 1);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}