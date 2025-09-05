#include <stdio.h>

 int main(){

    struct time {
        int minute;
        int seconds;
    };
    struct time t1,t2,t3;
    int TotalSeconds;

        printf("Time input (m:s): ");
        scanf("%d:%d",&t1.minute, &t1.seconds);
        printf("Time input (m:s): ");
        scanf("%d:%d",&t2.minute, &t2.seconds);
        printf("Time input (m:s): ");
        scanf("%d:%d",&t3.minute, &t3.seconds);

      TotalSeconds =  (t1.minute * 60 + t1.seconds)+(t2.minute * 60 + t2.seconds)+
                        (t3.minute * 60 + t3.seconds);
        
        printf("Total time elasped: %d second(s)\n", TotalSeconds);

        return 0;
    
}