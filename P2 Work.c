// Names: , Objective
// Jesus Christ
//Jon Marc Jackson (2106386): The entire project, 
//Date: 28/11/2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


//variables




//functions
void regist();
void create();
void view();
void update();
void delete();




int main()
{
    
   // clear screen
        system("clear");
    int choice;
    do{

        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\t\t\t| Welcome to Dr. Mitchell Medical Centre |");
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n1.REGISTER PATIENT\t||\t2.CREATE APPOINTMENT\t||\t3.VIEW APPOINTMENT\t||\t4.UPDATE APPOINTMENT\t||\t5.DELETE APOINTMENT\t||    0.EXIT  ||\n\n");
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n\nPLEASE ENTER CHOICE:\t|\t");
        scanf("%d", &choice);
        printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        switch(choice)
        {
            case 1:
                regist(); //registering patient
                break;            
            case 2:
                create(); //searching for an appointment
                break;
            case 3:
                view(); //to view selected appointment
                break;
            case 4:
                update();   //Updates Appointments
                break;
            case 5:
                delete();   //Deletes Appointments
                break;
        }
    }while(choice!=0);


    //End Screen
    printf("\n");
            printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t\t    |Stay Healthy!^_^ |\n");
            printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            exit(0); 


    return 0;

}


