def SelectionSort( arr ):
	size=len(arr)
	for i in range(0, size):
		for j in reversed(range(1, i+1)):
			if arr[j] < arr[j - 1]:
				swp = arr[j]
				arr[j]=arr[j - 1]
				arr[j - 1]=swp
			else:
				break
