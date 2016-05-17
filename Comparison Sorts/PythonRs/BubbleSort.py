def BubbleSort(arr):
	size = len(arr)
	for i in reversed(range(1, size)):
		for j in range(0, i):
			if(arr[j] > arr[j + 1]):
				swp = arr[j]
				arr[j] = arr[j + 1]
				arr[j + 1] = swp
