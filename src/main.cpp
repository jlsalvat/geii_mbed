#include <mbed.h>
DigitalOut led (LED1);
int main(){
    while(1){
    led=1;
wait_us(1000000);
led=0;
wait_us(1000000);
    }


}