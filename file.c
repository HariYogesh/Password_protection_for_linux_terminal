/*
	copy this code 
	and save the file.c
	compile with command in gcc cc file.c -o pas
	after suceess full compilation 
	enter vi .bashrc
	enter i 
	go to last line enter ./pas
	enter esc shift+: wq	
	now its done


*/


#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<signal.h>
main()
{
	char s[10];// to get password from user
	signal(SIGINT,SIG_IGN);	
	signal(SIGQUIT,SIG_IGN);
	printf("Enter the password\n");
	scanf("%s",s);
	if(strcmp(s,"123")==0)// in place of 123 keep you password
	{
		system("clear");// clear the terminal
		printf("welcome\n");
	}
	else
	{
		printf("intruder is not allowed to use terminal\n");
		sleep(1);// delay 1 sec to dispal above message
		kill(getppid(),9);// kill the bash 
	}
}
