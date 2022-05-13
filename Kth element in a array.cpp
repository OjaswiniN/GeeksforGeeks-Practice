int kthSmallest(int arr[], int n, int k)
{
	// Sort the given array
	sort(arr, arr + n);

	// Return k'th element in the sorted array
	return arr[k - 1];
}


