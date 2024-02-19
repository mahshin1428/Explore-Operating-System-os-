#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);

    int pid;

    pid = fork();
    if (pid < 0 ){
        printf("child process is not created");
        return 0;
    }

    else if (pid == 0){
        int sum = 0;
        for(int i =1;i<=n;i=i+2){
            sum = sum + i;
        }
        printf("child process odd sum:%d\n",sum);

    }
    else{
        int sum = 0;
        for(int i = 2 ;i<= n;i=i+2){
            sum = sum + i;
        }
        printf("parent process sum:%d\n",sum);
    }
    return 0;
}
