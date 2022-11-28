// Names: , Objective
// Jesus Christ
//Jon Marc Jackson (2106386): The entire project, 
//Date: 28/11/2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 20
#define MAXSIZE 70 

//variables
struct Pinfo // structure to store patient's information
{
	char F_name[MAX]; //First Name
	char L_name[MAX]; // Last Name
    int age; // Age
    char telenum[13]; // telephone number
    char gender[8];// Gender eg. Male
    char email[MAXSIZE];// Email eg. Rawrinfo@Someemail.com
    int ID_num;
    struct Date;
    struct Time;

}patient;

struct Date //structure to store Dat
{
	int day; // Day 
	int month; // month 
	int year; // year
};

struct Time // Store time
{
    int hour;
    int mins;
}

int size; //global variable
int hp;//idle variable

// Paitent's ID number
//int rand = 1 + (rand() % (100-1));
//int ID_num = rand;



//functions
void mainmenu();
void regist();
void create();
void view();
void update();
void delete();




int main()
{
    
   // clear screen
        system("clear");
    int choice = 0;
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
    
    
    

void mainmenu()
    {  
        // clear screen
        system("clear");

        int choice = 0;

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



    //End Screen
    printf("\n");
            printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t\t    |Stay Healthy!^_^ |\n");
            printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    
    }
     
     
    void regist()
    {//registering patient

        patient *patients;//pointer
        int i;
        FILE *fp;
        printf("\nPlease enter number of patients:\t|\t");
        scanf("%d", &size); 
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        patients = (patient*)calloc(size, sizeof(patient)); //allocating memory to pointer
    
        // clear screen
            system("clear"); 

        fp=fopen("Patient.dat", "w"); //creating file

        for (i = 0; i < size; ++i)
        {        
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\nEnter the name of the patient [First name Last Name]:\t\t\t|\t");
        scanf("%15s %15s",patients[i].Name.F_name, patients[i].Name.L_name);
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        printf("Enter the age of the patient:\t\t\t\t\t\t|\t");
        scanf("%d", &patients[i].age);
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

		printf("Enter the Gender of the patient [Male / Female]:\t\t\t\t|\t");
		scanf("%s", patients[i].gender);
	    printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		
        printf("Enter the telephone number of the patient:\t\t\t\t\t\t|\t");
        scanf("%d", &patients[i].telenum);
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");


		printf("Enter the email address of the participant:\t\t\t\t\t\t|\t");
		scanf("%s", participants[i].email);
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

		printf("Assigned ID for Patient:\t\t\t\t\t\t\t|\t",ID_num);
	    printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                
        int hp = 0;
            printf("Would you like to Proceed? [yes = 1, no = any number]\t|\t");
            scanf("%d",&hp);
                if (hp != 1)
                {
                    system("clear");
                    void mainmenu();
                }
                else
                {
                    system("clear");
                    void mainmenu();
        
                }
            
            
        fwrite(&patients[i], sizeof(patient),1,fp); //writing information to the file
        }
    } 


void create()
{

    printf("Enter the date of birth of the participant(dd mm yyyy):\t\t\t\t|\t");
	scanf("%d %d %d", &patients[i].Date.day, &patients[i].Date.month, &patients[i].Date.year);
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	
    printf("Enter the date of birth of the participant(hh : mm):\t\t\t\t|\t");
	scanf("%d %d", &patients[i].Time.hour, &patients[i].Time.mins);
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    if (patients[i].Time.mins != 00)
    {
         printf("\n");
            printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t\t    |Hourly Appointments Only! |\n");
            printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    
    }
    else 
    {

    }

}

    fclose(fp); 

    return 0;
}


