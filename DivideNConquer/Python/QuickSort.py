def QuickSort(arr, start, end):
	if start >= end:
		return
	pivot = start
	i = start + 1
	j = end
	while i < j:
		while i < j and arr[i] < arr[pivot]:
			i = i + 1
		while j > i and arr[i] > arr[pivot]:
			j = j - 1
		if i > j:
			swp = arr[i]
			arr[i] = arr[j]
			arr[j] = swp
			i = i + 1
	if arr[j] < arr[pivot]:
		swp = arr[pivot]
		arr[pivot] = arr[j]
		arr[j] = swp
		pivot = j
	else:
		swp = arr[pivot]
		arr[pivot] = arr[j - 1]
		arr[j - 1] = swp
		pivot = j -1
	QuickSort(arr, start, pivot - 1)
	QuickSort(arr, pivot + 1, end)

