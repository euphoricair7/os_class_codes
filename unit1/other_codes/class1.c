#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

int main()
{
	int pid,status;
pid=fork();

if(pid<0){
printf("fork failure\n");
exit(1);
}
else if(pid==0){
printf("child process\n");
printf("id of parent=%d, id of child=%d\n", getppid(), getpid());
}
else{
execl("/bin/ls","ls",NULL);
//sleep(5);
wait(NULL);
//int w1=wait(&status);
//printf("%d",w1);
//int w2=waitpid(pid,&status,0);
//printf("%d",w2);
printf("parent process\n");
//printf("child process\n");
printf("id of parent=%d, id of child=%d\n", getpid(), pid);
}
return 0;
}

