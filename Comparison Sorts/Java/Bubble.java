public class Bubble {

	public static void sort(int array[], int size) {
		for (int i = size - 1; i > 0; i--) { // this for goes from the array's end to the beginning, to limit the end of the next one
			for (int j = 0; j < i; j++) { // this one goes from the beginning to the to end defined by previous for
				if (array[j] > array[j + 1]) { // now the idea is to compare every element with the next
					int aux = array[j]; // and swap them if the first one is bigger then the second
					array[j] = array[j + 1];
					array[j + 1] = aux;
				}
			}
		}
	}

}
