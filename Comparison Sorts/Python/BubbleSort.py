def BubbleSort(arr):#we pass the array as an argument
	size = len(arr)#get the size of it
	for i in reversed(range(1, size)):# this for goes from the arrays end to the beginning to limit the end of the next one
		for j in range(0, i):# this one goes from the begining to the to end defined by previous for
			if(arr[j] > arr[j + 1]):# now the idea is to compare every element with the next
				swp = arr[j]# and swap them if the first one is more then the second
				arr[j] = arr[j + 1]
				arr[j + 1] = swp
