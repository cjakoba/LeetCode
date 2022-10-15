#include <stdio.h>
#include <stdlib.h>

// Given string s and integer array indicies of same length.
// Character at ith position moves to indicies[i] in shuffled string.
char *restoreString(char* s, int* indices, int indicesSize) {
	char *ans = (char *) malloc(sizeof(char) * (indicesSize + 1));
	for (int i = 0; i < indicesSize; i++) {	
		ans[indices[i]] = s[i];
	}
	return ans;
}

// Testing...
int main(void) {
	int indices[8] = {4, 5, 6, 7, 0, 2, 1, 3};
	printf("%s\n", restoreString("codeleet", indices, 8));
}
