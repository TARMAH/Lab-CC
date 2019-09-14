#include <stdio.h>

int main()
{
	char line[] = "/* We have conquered all of Europe\n";

	if (line[0] == '/' && (line[1] == '/' || line[1] == '*'))
	{
		printf("Its a comment\n");
	}
	else printf("Not a comment\n");

	system("PAUSE");

	return 0;
}
