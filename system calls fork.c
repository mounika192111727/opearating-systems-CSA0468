9.	#include <stdio.h>
10.	#include <stdlib.h>
11.	#include <sys/types.h>
12.	#include <sys/wait.h>
13.	#include <unistd.h>
14.	 
15.	int main(void) {
16.	  pid_t pid = fork();
17.	 
18.	  if(pid == 0) {
19.	    printf("Child => PPID: %d PID: %d\n", getppid(), getpid());
20.	    exit(EXIT_SUCCESS);
21.	  }
22.	  else if(pid > 0) {
23.	    printf("Parent => PID: %d\n", getpid());
24.	    printf("Waiting for child process to finish.\n");
25.	    wait(NULL);
26.	    printf("Child process finished.\n");
27.	  }
28.	  else {
29.	    printf("Unable to create child process.\n");
30.	  }
31.	 
32.	  return EXIT_SUCCESS;
33.	}
34.	 
35.	 
36.	 
37.	