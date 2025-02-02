//Program to demo pipes

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/stats.h>
#include <sys/types.h>
#include <fcntl.h>


#define BUFFER_SIZE 100



int main(){
    
    int fd[2];
    char buff[BUFFER_SIZE] = "";


    char myfifo[BUFFER_SIZE]="/tmp/myfifo";

    printf("Enter the message to be passed : \n");
    read(0,buff, BUFFER_SIZE);


    
    //fork a child pro
    pid = fork();

    if(pid>0){
        close(fdy[READ_END]);


        write(fd[WRITE_END],write_msg,strlen(write_msg)+1);

        close(fd[WRITE_END]);

        wait(NULL);
    }

    else if(pid==0){
        close(fd[WRITE_END]);

        read(fd[READ_END],read_msg, BUFFER_SIZE);
        printf("child process read-%s\n",read_msg);

        close(fd[READ_END]);
    }

    else{
        printf("Fork failed \n");
        return 1;
    }
}