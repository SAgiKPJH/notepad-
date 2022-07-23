#include<stdio.h> //Use For Printf, FILE*, fopen_s, fgets, fclose
#include<windows.h>  //Use For system("pause")

int main() {

	{ //Use fopen_s
		char line[255];
		FILE* fr1 = fopen("noteANSI.txt", "r");
		if (fr1 == NULL)
			printf("Failed Loaded noteANSI.txt\n");

		while (fgets(line, sizeof(line), fr1) != NULL) {
			printf("%s", line);
			
		fclose(fr1);
		printf("\n");
	} //end
	
	{ //Use fopen
		char line[255];
		FILE* fr1 = fopen("noteANSI.txt", "r");
		if (fr1 == NULL)
			printf("Failed Loaded noteANSI.txt\n");

		while (fgets(line, sizeof(line), fr1) != NULL) {
			printf("%s", line);
			
		fclose(fr1);
		printf("\n");
	} //end

	

	system("pause");
	return 0;
}


