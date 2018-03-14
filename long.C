#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define NO_OF_CHARS 256

int min(int a, int b);

int longestUniqueSubsttr(char *str)
{
	int n = strlen(str);
	int curr_len = 1; 
	int max_len = 1; 
	int pre_index; 
	int i;
	int *visited = (int *)malloc(sizeof(int)*NO_OF_CHARS);

	for (i = 0; i < NO_OF_CHARS; i++)
		visited[i] = -1;

	visited[str[0]] = 0;

	
	for (i = 1; i < n; i++)
	{
		pre_index = visited[str[i]];

		
		if (pre_index == -1 || i - curr_len > pre_index)
			curr_len++;

		else
		{

			if (curr_len > max_len)
				max_len = curr_len;

			curr_len = i - pre_index;
		}

		visited[str[i]] = i;
	}

	if (curr_len > max_len)
		max_len = curr_len;

	free(visited); 
	return max_len;
}

int min(int a, int b)
{
	return (a>b)?b:a;
}

int main()
{
	char str[] = "ABDEFGABEF";
	printf("The input string is %s n", str);
	int len = longestUniqueSubsttr(str);
	printf("The length of the longest non-repeating "
		"character substring is %d", len);
	return 0;
}
