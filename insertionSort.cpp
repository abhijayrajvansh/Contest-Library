/**
*    author:  abhijayrajvansh
*    created: 09.03.2022  13:51:53
**/
#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr)
{
    int n = arr.size();
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
        // arr[i] = key;
	}
}

int main()
{
	vector<int> arr = {100, 12, 11, 13, 5, 6, 55, 0};

	insertionSort(arr);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << '\n';

	return 0;
}
