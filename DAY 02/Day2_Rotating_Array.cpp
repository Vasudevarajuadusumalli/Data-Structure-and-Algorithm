#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int k)
{
	int mod = k % n;
	for (int i = 0; i < n; i++)
		cout << (arr[(mod + i) % n]) << " ";
    cout << "\n";
}

int main()
{

	int n;
    int k;
    printf("Enter Number Of Array Element:- ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter Array Element:- ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nHow Many Time You Want To Rotate Array ?");
	scanf("%d",&k);
	leftRotate(arr, n, k);
	return 0;
}
