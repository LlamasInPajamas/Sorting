def SelectionSort( arr ):
	size=len(arr)
	for i in range(0, size):
		minim = arr[i]
		minimPos = i
		for j in range(i, size):
			if arr[j] < minim:
				minim = arr[j]
				minimPos = j
		arr[minimPos] = arr[i]
		arr[i] = minim
