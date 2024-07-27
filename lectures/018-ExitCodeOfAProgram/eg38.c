#include<stdio.h>
int main()
{
	printf("Hello");
	// return 0;
	return 23;
}

/*

C:\himanshu\c\lectures\018-ExitCodeOfAProgram>eg
Hello
C:\himanshu\c\lectures\018-ExitCodeOfAProgram>echo %errorlevel%
0
C:\himanshu\c\lectures\018-ExitCodeOfAProgram>gcc eg38.c -o eg.exe
C:\himanshu\c\lectures\018-ExitCodeOfAProgram>eg
Hello
C:\himanshu\c\lectures\018-ExitCodeOfAProgram>echo %errorlevel%
23

*/