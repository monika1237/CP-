#include <stdio.h>
#include <ctype.h>

int main(){

int current_floor = 0;
int destination_floor = 0;

while(1){

if(destination_floor == -1){
printf("Ending program\n");
break;
}

printf("What floor do you want to go to (0-5) ?\n");
scanf("%d", &destination_floor);

if(destination_floor < 0 || destination_floor > 5){
printf("Enter a valid floor level (1 - 5)\n");
continue;
}

if(destination_floor > current_floor){
printf("Elevator is going up\n");
for(int i = current_floor; i < destination_floor; i++){
current_floor = destination_floor;
}
printf("Right now you are on floor %d\n", current_floor);

}
else
{
printf("Elevator is going down\n");
for(int i = current_floor - 1; i >= destination_floor; i--){
current_floor = destination_floor;

return 0;
}
