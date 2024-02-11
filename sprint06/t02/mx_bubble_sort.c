int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
	int num = 0;
	for (int k = 0; k < size - 1; k++) {
		for (int d = 0; d < size - 1 - k; d++) {
			if (mx_strcmp(arr[d], arr[d + 1]) > 0) {
				char *swap = arr[d];
				arr[d] = arr[d + 1];
				arr[d + 1] = swap;
				num += 1;
			}
		}
	}
	return num;
}

