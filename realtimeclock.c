#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{ 
    time_t a, val=1;
    struct tm* current_time;
    
    a=time(NULL);

    current_time= localtime(&a);
   

    while(1){

        system("clear");

        printf("%02d : %02d : %02d",current_time->tm_hour, current_time->tm_min, current_time->tm_sec);

    fflush(stdout);
    current_time->tm_sec ++ ;

    if(current_time->tm_sec==60){
       current_time->tm_min+=1;
        current_time->tm_sec=0;
    }
    if(current_time->tm_min==60){

        current_time->tm_hour+=1;
        current_time->tm_min=0; 

    }if(current_time->tm_hour==24){

        current_time->tm_hour=0;
        current_time->tm_min=0;
        current_time->tm_sec=0;
    }
    sleep(1);

    }

return 0;
}