#include<stdio.h> //Use For Printf, FILE*, fopen_s, fgets, fclose
#include<windows.h>  //Use For system("pause")

int main() {

	char line[255];
	FILE* fr1 = fopen("noteANSI.txt", "r");
	if (fr1 == NULL)
		printf("파일 noteANSI.txt를 열 수 없습니다.\n");

	while (fgets(line, sizeof(line), fr1) != NULL) {
		printf("%s", line);
	}

	printf("\n");
	fclose(fr1);

	system("pause");
	return 0;
}


