def SelectionSort( arr ):
	size=len(arr)
	for i in range(0, size):#changing the position of the change going from the first to the end
		minim = arr[i]#resetting the minim
		minimPos = i#resetting the position of the minim
		for j in range(i, size):#rushing through variables to select which to change
			if arr[j] < minim:#if find any better than the one we have now
				minim = arr[j]#change it w the other
				minimPos = j
		arr[minimPos] = arr[i]#swaaaap with the best match
		arr[i] = minim
