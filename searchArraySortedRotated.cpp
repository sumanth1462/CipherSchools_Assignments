#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int searchArraySortedRotated(int a1[], int n, int x)
{
   	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(a1[mid] == x)
			return mid;
		if(a1[low] < a1[mid])
		{
			if(x >= a1[low] && x < a1[mid])
				high = mid - 1;
			else 
				low = mid + 1;
		}
		else
		{
			if(x > a1[mid] && x <= a1[high])
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	

	return -1;
}

int main() {
    int a1[] = {10, 20, 40, 60, 5, 8};
    int n=sizeof(a1)/sizeof(a1[0]);
    int x = 5;

    cout << searchArraySortedRotated(a1, n, x);

	return 0;
}
