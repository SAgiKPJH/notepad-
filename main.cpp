#include<stdio.h> //Use For Printf, FILE*, fopen_s, fgets, fclose
#include<windows.h>  //Use For system("pause")

int main() {

	char line[255];
	FILE* fr1 = fopen("noteANSI.txt", "r");
	if (fr1 == NULL)
		printf("���� noteANSI.txt�� �� �� �����ϴ�.\n");

	while (fgets(line, sizeof(line), fr1) != NULL) {
		printf("%s", line);
	}

	printf("\n");
	fclose(fr1);

	system("pause");
	return 0;
}


