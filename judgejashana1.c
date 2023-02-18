
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main (void){
int timeFormat;//declaring varibles
int timeHour;
int timeHour2;
int timeHour3;
int timeMinute;
int hotel;
int hotelChoice;
float hotelPrice;
int hotelDays;
float discount1;
float discount2;
float flightCost;
float ridePrice;
int birthday;
float taxes;
char ampm;
float cost;
int rideChoice;
int optionNumber;
int x = 5;
int y = 6;
int z = 7;
char percent = '%';
int count =1;
float min;

while (count<=3){

printf("Would you like to enter the time in 12-hour format (enter1) or 24-hour format (enter 2)?");//prompts the user for time format
scanf("%d", &timeFormat);
//task 1 get time from user and convert it to either 12 hour or 24 hour format
if (timeFormat==1){
printf("\nEnter time in 12 hour format\n\n");
    printf("Enter a value between 0 and 12 for hour:");
    scanf("%d", &timeHour);
    printf("Enter a value between 0 and 60 for minutes:");
    scanf("%d", &timeMinute);
    if(timeMinute ==60){
    timeMinute = 00;
    }
    printf("Enter a for am or p for pm:");
    scanf(" %c", &ampm);
    printf("\n---------------------------");
    if (ampm=='p'){
        if (timeHour==12){
        printf("\nYou entered %02d:%02d %cm \n", timeHour, timeMinute, ampm);
        printf("In 24 hour format - you entered %02d:%02d\n", timeHour, timeMinute);
        printf("---------------------------");
        }
        else{
        printf("\nYou entered %02d:%02d %cm \n", timeHour, timeMinute, ampm);
        timeHour = timeHour + 12;
        printf("In 24 hour format - you entered %02d:%02d\n", timeHour, timeMinute);
        printf("---------------------------");
        }
    }

else if(ampm=='a'){
    printf("\nYou entered %02d:%02d %cm \n", timeHour, timeMinute, ampm);
    if (timeHour>12){
    timeHour = timeHour - 12;}
    printf("In 24 hour format - you entered %02d:%02d\n", timeHour, timeMinute);
    printf("---------------------------");

}
}
else if (timeFormat==2){
        printf("\nEnter time in 24 hour format\n\n");
        printf("Enter a value between 0 and 24 for hour(0-24):");
        scanf("%d", &timeHour);
        printf("Enter a value between 0 and 60 for minutes(0-60):");
        scanf("%d", &timeMinute);
        printf("\n---------------------------");

if(timeMinute ==60){
    timeMinute = 00;
    timeHour = timeHour +1;
    }

        if (timeHour==24){
        ampm = 'a';
        timeHour2 = timeHour - 12;
        timeHour3 = timeHour - 24;
        printf("\nYou entered %02d:%02d\n", timeHour3, timeMinute);
        printf("In 12 hour format - you entered %02d:%02d %cm\n", timeHour2, timeMinute, ampm);
        printf("---------------------------");
        }

        else if (timeHour==12){
        ampm = 'p';
        printf("\nYou entered %02d:%02d\n", timeHour, timeMinute);
        printf("In 12 hour format - you entered %02d:%02d %cm\n", timeHour, timeMinute, ampm);
        printf("---------------------------");
        }
        else if (timeHour>12){
        ampm = 'p';
        timeHour2 = timeHour - 12;
        printf("\nYou entered %02d:%02d\n", timeHour, timeMinute);
        printf("In 12 hour format - you entered %02d:%02d %cm\n", timeHour2, timeMinute, ampm);
        printf("---------------------------");}

        else{
        ampm = 'a';
        printf("\nYou entered %02d:%02d\n", timeHour, timeMinute);
        printf("In 12 hour format - you entered %02d:%02d %cm\n", timeHour, timeMinute, ampm);
        printf("---------------------------");
        }
}
else{
    printf("Invalid statment try again\n");
    return 0;
}
//task 2 output the closest departure and arrival time for the user based on their time
if (((timeHour==24)||((timeHour>=0)&&(timeHour<7)))||((timeHour==7) && (timeMinute<=44))){
    printf ("\n\nThe closet deperature time is 7:15a.m., and arrivial time is 8:25a.m.\n");
    flightCost = 231;
    x=0;
}
else if (((timeHour<8)||((timeHour==7)&&(timeMinute>=45)))||((timeHour<9) ||((timeHour==8)&&(timeMinute<=44)))){
    printf ("\n\nThe closet deperature time is 8:15a.m., and arrivial time is 9:25a.m.\n");
    flightCost = 226;
    x=0;
}
else if (((timeHour<9)||((timeHour==8)&&(timeMinute>=45)))||((timeHour<10) ||((timeHour==9)&&(timeMinute<=44)))){
    printf ("\n\nThe closet deperature time is 9:15a.m., and arrivial time is 10:25a.m.\n");
    flightCost = 226;
    x=0;
}
else if ((((timeHour<10)||((timeHour==9)&&(timeMinute>=45)))||((timeHour<11) ||((timeHour==10)&&(timeMinute<=44))))){
    printf ("\n\nThe closet deperature time is 10:15a.m., and arrivial time is 11:25a.m.\n");
    flightCost = 283;
    x=0;
}
else if (((timeHour<13)||((timeHour==10)&&(timeMinute>=45)))||((timeHour<13) ||((timeHour==13)&&(timeMinute<=14)))){
    printf ("\n\nThe closet deperature time is 11:15a.m., and arrivial time is 12:25p.m.\n");
    flightCost = 283;
    x=0;
}
else if (((timeHour<16)||((timeHour==15)&&(timeMinute>=45)))||((timeHour<15) ||((timeHour==14)&&(timeMinute<=44)))){
    printf ("\n\nThe closet deperature time is 3:15p.m., and arrivial time is 4:25p.m.\n");
    flightCost = 226;
    x=0;
}
    else if (((timeHour<17)||((timeHour==16)&&(timeMinute>=45)))||((timeHour<16) ||((timeHour==15)&&(timeMinute<=44)))) {
        printf ("\n\nThe closet deperature time is 4:15p.m., and arrivial time is 5:25p.m.\n");
    flightCost = 226;
    x=0;
    }
    else if (((timeHour==16)&&(timeMinute>=45))||((timeHour<24)||((timeHour==23)&&(timeMinute<=59)))){
    printf ("\n\nThe closet deperature time is 5:15p.m., and arrivial time is 6:25p.m.\n");
    flightCost = 401;
    x=0;
    }
    else{flightCost = 0;}
//task 3 ask the user if they want to stay in a hotel
    if (x==0){
    printf("\nWould you like a Hotel in Montreal? - enter 0 for no; 1 for yes?");
    scanf("%d", &hotelChoice);
    if (hotelChoice ==1){
    printf("\nThere are 3 hotels:");
    printf("\n1. Marriott: $248 per night\n2. Sheraton: $90 per night\n3. Double Tree: $128 per night\n\nYour choice?");
    scanf("%d", &hotel);
    printf("How many days in Montreal?");
    scanf("%d", &hotelDays);

    if (hotel==1){
    hotelPrice = 248;
    hotelPrice = hotelPrice * hotelDays;
    y=0;
    }
    else if (hotel==2){
    hotelPrice = 90;
    hotelPrice = hotelPrice * hotelDays;
    y=0;
    }
    else if (hotel==3){
        hotelPrice = 128;
        hotelPrice = hotelPrice * hotelDays;
        y=0;
    }
    }
    else{
        hotelPrice = 0;
        hotelDays = 0;
        z=0;
        y=8;
    }
    }
 //task 4 ask the user if they want a ride to the hotel
        if (y==0){
        printf("\nWould you like a ride from airport to your hotel? - enter 0 for no; 1 for yes?");
        scanf("%d", &rideChoice);
        if (rideChoice==1){

        if (hotel==1){
        ridePrice = 0;
        z=0;
        }
        if (hotel==2){
        ridePrice = 25;
        z=0;
        }
        if(hotel==3){
        ridePrice = 20;
        z=0;
        }
        }
else{
    z=0;
    ridePrice = 0;
}
}
//task 5 cost
if (z==0){
printf("\nNow enter your day of birth to qualify for discount2:");
scanf("%d", &birthday);
printf("\nYour total cost comes to:\n\nCost of closest departure flight: $ %.2f", flightCost);
printf("\nCost of Hotel for %d days: $ %.2f ", hotelDays, hotelPrice);
cost = flightCost + ridePrice + hotelPrice;
printf("\nCost of Ride: $ %.2f\n\nTotal cost before tax: $ %.2f\n", ridePrice, cost);


//task 6 discounts
if ((int)cost %11==0)
{
discount1 = cost * 0.05;
cost = cost - discount1;
printf("\nYou get a 5%c discount because the total cost was a multiple of 11:)\n", percent);
}
else {
discount1 = 0;
printf("\nSorry - you missed out on the additional 5%c discount beacsue the total cost after discount1 was not a multiple of the sum of 11\n", percent);
}
discount2 = (birthday/10) + (birthday%10);
if ((int)cost%(int)discount2==0){
discount2 = cost * 0.05;
cost = cost - discount2;
printf("You get a 5%c discount because the total cost after discount1 was a multiple of the sum of birth :)\n", percent);
}
else{
    discount2 =0;
    printf("Sorry - you missed out on the additional 5%c discount because the total cost after sidcount 1 was not a multiple of the sum of digits of birth", percent);
}
printf("\n\nTotal cost after discounts 1 and 2: $ %.2f\n", cost);
taxes = cost * 0.13; //task 7 calculating taxes
cost = cost + taxes;
printf("\nFinally, your total cost after taxes: $ %.2f\n\n\n\n\n\n\n\n\n\n\n\n", cost);
}


if (count==1){
    min = cost;
    optionNumber =1;

}
 if (cost<min){
 min = cost;
 optionNumber = count;

}
count = count +1;

}
printf("Option number %d is the best cost with a minimum cost of $ %.2f\n", optionNumber, min);
return 0;

}
