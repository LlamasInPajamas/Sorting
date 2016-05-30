public class Selection {

	public static void sort(int array[], int size) {
		int min; // variable to be used as minimum
		int minPos; // variable to use as the position of min
		for (int i = 0; i < size; i++) { // changing the position of the change going from the first to the end
			min = array[i]; // resetting variables
			minPos = i;
			for (int j = i; j < size; j++) { // rushing through variables to select which to change
				if (array[j] < min) { // if find any better than the one we have now
					min = array[j]; // change it with the other
					minPos = j;
				}
			}
			int aux = array[i]; // swap w the best match
			array[i] = array[minPos];
			array[minPos] = aux;
		}
	}

}
