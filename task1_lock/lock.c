#include <stdio.h>
#include <string.h>





int main( int argc, const char* argv[] )
{
	const int MAX_PASSWD_LEN = 100;
	char str[100];
   	int i;
	char password[20] = "takumi";

	printf( "enter password to continue:\n" );
	while(1==1) {
		fgets(str, MAX_PASSWD_LEN, stdin);

		if ((strlen(str) > 0) && (str[strlen (str) - 1] == '\n'))
        		str[strlen (str) - 1] = '\0';

		if(strcmp(str, password) == 0) {
				printf("acces granted!\n");
				return 0;
		}
		else {
				printf("wrong! try again...\n");		
		}
	}
}
