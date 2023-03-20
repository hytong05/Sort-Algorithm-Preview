// Heap Sort in C

#include <bits/stdc++.h>
using namespace std;

// Function to swap the position of two elements

// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapify(float arr[], int N, int i)
{
	// Find largest among root, left child and right child

	// Initialize largest as root
	int largest = i;

	// left = 2*i + 1
	int left = 2 * i + 1;

	// right = 2*i + 2
	int right = 2 * i + 2;

	// If left child is larger than root
	if (left < N && arr[left] > arr[largest])

		largest = left;

	// If right child is larger than largest
	// so far
	if (right < N && arr[right] > arr[largest])

		largest = right;

	// Swap and continue heapifying if root is not largest
	// If largest is not root
	if (largest != i) {

		swap(arr[i], arr[largest]);

		// Recursively heapify the affected
		// sub-tree
		heapify(arr, N, largest);
	}
}

// Main function to do heap sort
void heapSort(float arr[], int N)
{

	// Build max heap
	for (int i = N / 2 - 1; i >= 0; i--)

		heapify(arr, N, i);

	// Heap sort
	for (int i = N - 1; i >= 0; i--) {

		swap(arr[0], arr[i]);

		// Heapify root element to get highest element at
		// root again
		heapify(arr, i, 0);
	}
}

// A utility function to print array of size n


// Driver's code
int main()
{
	freopen("TEST10.txt","r",stdin);
    int N=1e5+100;
	float arr[N];
	for (int i=0;i<N;i++)
        cin >> arr[i];
	heapSort(arr, N);
}

// This code is contributed by _i_plus_plus_.
