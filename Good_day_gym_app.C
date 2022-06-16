/*this is a program that will take the height and weight of user and then proceed to give a suitable diet plan according to their lifestyle.
run this program in vscode make sure you run in terminal window else it wont take user input.this can be done by pressing ctrl+, then searching code runner and scrolling down to check mark the option run in terminal.thank you*/
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int gym_renewal();
int gym_contact();
int fitness_app();
union user_data{
    char name[10];
}user1;
int fitness_app(){



    printf("Please enter your height in meters and weight in kilograms,then press enter.\n");
    
    float height,weight,bmi;

    int dietp;

    scanf("%f %f",&height,&weight);
    
    bmi = (float) weight/(height*height);

    if(height==0 || weight==0) printf("Please enter correct Height AND Weight");

    else if(bmi<18.5){
        
        
        printf("You are currently underweight. I would recommend a diet plan and an exercise plan for you. Please type 1 if you are vegetarian and 2 if you are non-vegetarian\n");
        
        scanf("%d",&dietp);
        
        if(dietp == 1){

            
            printf("\n\nHere is a well prepared diet plan for your day\nBreakfast:- 160g oats with 200ml milk,one table spoon peanut butter(any flavour) and few slices of a fruit of your choice");
            printf("\nLunch:- 200g vegetable sabji with 2 chapati or paratha, 200 g rice with one bowl lentil soup(dal)");
            printf("\nSnacks:- 100 g panner eatten in any form(burji,roasted,grilled,raw) along with one peanut butter sandwich");
            printf("\ndinner:- eat something of your liking that is not fried or fat filled, preferrably something like pasta, rice or roti sabji.");
            printf("\n\nYou can also integrate this exercise routine in your day");
            printf("\n3 days a week -- Gym\n2 days a week -- sports for 1 hour\n1 day a week -- jogging for 1 hour");


        }
        else if(dietp == 2){


            printf("\n\nHere is a well prepared diet plan for your day\nBreakfast:- 160g oats with 200ml milk,one table spoon peanut butter(any flavour) and few slices of a fruit of your choice");
            printf("\nLunch:- 200g sabji with 1 chapati or paratha, 200 g rice with two bowl lentil soup(dal)");
            printf("\nSnacks:-  2 eggs eaten in any form(burji, omelette, boiled) along with one peanut butter sandwich");
            printf("\ndinner:- eat something of your liking that is not fried or fat filled, preferrably something like pasta or rice with 200g chicken.");
            printf("\n\nYou can also integrate this exercise routine in your day");
            printf("\n3 days a week -- Gym\n2 days a week -- sports for 1 hour\n1 day a week -- jogging for 1 hour");



        }
        else printf("Please enter either 1 or 2");


    }
    else if(bmi<25){

            
        printf("You have a normal bmi at this moment.I would recommend to follow your current diet and maybe incorporate some exercise if not already there.");


    }
    else if(bmi<30){

        printf("You are slighty overweight. If you would like to change your lifestyle, press 1 else press 0\n");

        scanf("%d",&dietp);
        

        switch(dietp)
        {
            
            case 1:
            printf("\n\nHere is a well prepared diet plan for your day\nBreakfast:- 160g oats with 200ml milk,one table spoon peanut butter(any flavour) and few slices of a fruit of your choice");
            printf("\nLunch:- 100g sabji with 1 chapati or paratha, 100 g rice with two bowl lentil soup(dal)");
            printf("\nSnacks:-  1 eggs eaten in any form(burji, omelette, boiled) along with one peanut butter sandwich");
            printf("\ndinner:- eat something of your liking that is not fried or fat filled, preferrably something like pasta or rice with 100g chicken.");
            printf("\n\nYou can also integrate this exercise routine in your day");
            printf("\n3 days a week -- Gym\n3 days a week -- sports for 1.5 hour\n1 day a week -- jogging for 2 hour");
            break;

            case 0:
            printf("HAVE A NICE LIFE!");
            break;

            default:
            printf("Please enter 0 or 1");
            break;
        }
    }

    else{
         
        printf("\n\n\n\n\n\n\nYou are bordering into an unhealthy life and unless you do something about it you will have to face a lot of medical issues.\n I am suggesting this doctor for visitation. Dr fix fat people -- Telephone number 6942042069\n\n\n\n\n");


    }
    return 0;
}

int gym_contact(){
    printf("\n\n\n\n\n\n\nHi user, the contact information for your closest branch is\n Branch name :- Guindy\n Frontdesk number :- 044 96969642\n Email-ID :- gooddaygym@hotmail.com\n\n\n\n");
    return 0;
}

int gym_renewal(){
    int a;
    printf("Hello user, would you like to buy a new membership or renew your old one?\n Select 1 for new membership and 2 for renewal.\n");
    scanf("%d",&a);
    
    
    if(a == 1){
        int month;
        printf("\nHere are the prices for new members. There is more discount when you buy longer memberships!!!\n1 month :: 1300 RS\n3 months :: 3500 RS\n6 months :: 6250 RS\n12 months :: 10,000 RS\n");
        printf("Please enter the number of months you would like to purchase along with your name.\n");
        scanf("%d %s",&month,&user1.name);
        
        switch (month)
        {
        case 1:
            printf("CONGRATULATIONS ON YOUR NEW GYM MEMBERSHIP!!!!\n Here is your link to pay https://www.srmist.edu.in and this is the format in which you will get your reciept.\nName : %s\nNumber of months recieved : %d\nName of employee : Kavish Panchal\n\n",user1.name,month);
            
            break;
        case 3:
            printf("CONGRATULATIONS ON YOUR NEW GYM MEMBERSHIP!!!!\n Here is your link to pay https://www.srmist.edu.in and this is the format in which you will get your reciept.\nName : %s\nNumber of months recieved : %d\nName of employee : Kavish Panchal\n\n",user1.name,month);
            
            break;
        

        case 6:
            printf("CONGRATULATIONS ON YOUR NEW GYM MEMBERSHIP!!!!\n Here is your link to pay https://www.srmist.edu.in and this is the format in which you will get your reciept.\nName : %s\nNumber of months recieved : %d\nName of employee : Kavish Panchal\n\n",user1.name,month);
            
            break;

        case 12:
            printf("CONGRATULATIONS ON YOUR NEW GYM MEMBERSHIP!!!!\n Here is your link to pay https://www.srmist.edu.in and this is the format in which you will get your reciept.\nName : %s\nNumber of months recieved : %d\nName of employee : Kavish Panchal\n\n",user1.name,month);
            
            break;

        default:
            printf("Please enter the correct number of months available.");
            break;
        }
    
    }
    else if(a == 2){
        printf("Since you are an existing customer, we offer one month free on top of your new purchase.\n1 month :: 1300 RS\n3 months :: 3500 RS\n6 months :: 6250 RS\n12 months :: 10,000 RS\n");
        printf("Please select the number of months you would like to add to your existing membership along with your name.\n");
        int month;
        scanf("%d %s",&month,&user1.name);
        switch (month)
        {
        case 1:
            printf("CONGRATULATIONS ON YOUR NEW GYM MEMBERSHIP!!!!\n Here is your link to pay https://www.srmist.edu.in and this is the format in which you will get your reciept.\nName : %s\nNumber of months recieved : %d + 1\nName of employee : Kavish Panchal\n\n",user1.name,month);
            
            break;
        case 3:
            printf("CONGRATULATIONS ON YOUR NEW GYM MEMBERSHIP!!!!\n Here is your link to pay https://www.srmist.edu.in and this is the format in which you will get your reciept.\nName : %s\nNumber of months recieved : %d + 1\nName of employee : Kavish Panchal\n\n",user1.name,month);
            
            break;

        case 6:
            printf("CONGRATULATIONS ON YOUR NEW GYM MEMBERSHIP!!!!\n Here is your link to pay https://www.srmist.edu.in and this is the format in which you will get your reciept.\nName : %s\nNumber of months recieved : %d + 1.\nName of employee : Kavish Panchal\n\n",user1.name,month);
            
            break;

        case 12:
            printf("CONGRATULATIONS ON YOUR NEW GYM MEMBERSHIP!!!!\n Here is your link to pay https://www.srmist.edu.in and this is the format in which you will get your reciept.\nName : %s\nNumber of months recieved : %d + 1.\nName of employee : Kavish Panchal\n\n",user1.name,month);
            
            break;

        default:
            printf("Please enter the correct number of months available.");
            break;
        }
    }
    else printf("Please enter the correct input!!");
    return 0;
    
}

int main(){

    int main_option;
    printf("\nHello user, Welcome to your Good Day gym app. What would you like to know today?\n1.Gym membership renewal\n2.BMI health app\n3.Gym contact information\n4.Exit\n");
    scanf("%d",&main_option);
    
    printf("\n");
    if(main_option == 1){
        
        gym_renewal();
        main();
    
    }
    else if(main_option == 2){

        fitness_app();
        main();

    }
    else if(main_option == 3){

        gym_contact();
        main();

    }

    else if(main_option == 4){
        printf("bye.");
        
    }
    else {
        printf("please enter a valid option!");
        main();
    }

    return 0;    
}    
