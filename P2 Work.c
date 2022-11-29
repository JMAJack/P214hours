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

typedef struct Time // Store time
{
    int hour;
    int mins;
    
}Time;

typedef struct Date //structure to store Dat
{
	int day; // Day 
	int month; // month 
	int year; // year
	Time Time;
}date;



typedef struct Pinfo // structure to store patient's information
{
	char F_name[MAX]; //First Name
	char L_name[MAX]; // Last Name
    int age; // Age
    char telenum[13]; // telephone number
    char gender[8];// Gender eg. Male
    char email[MAXSIZE];// Email eg. Rawrinfo@Someemail.com
    int ID_num;
    date Date;
    
    // Anyone here that can debug this?

}patient;



int size; //global variable
int hp;//idle variable

// Paitent's ID number
//int rnd = 1 + (rand() % (100-1));
//int ID_num = rnd;



//functions
void mainmenu();
void regist();
void create();
void view();
void delete();
void info();
void visit();
void coverage();




int main()
{
    
   // clear screen
        system("clear");
    int choice = 0;
    do{

        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t| Welcome to Dr. Mitchell Medical Centre |");
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("1.REGISTER PATIENT\t||\t2.CREATE APPOINTMENT\t||\t3.VIEW APPOINTMENT\t||\t4.UPDATE APPOINTMENT\t||\t5.DELETE APOINTMENT\t||\t6.APOINTMENT INFORMATION\t||\t0.EXIT\t||");
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\nPLEASE ENTER CHOICE:\t|\t");
        scanf("%d", &choice);
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        switch(choice)
        {
            case 1:
                regist(); //registering patient
                break;            
            case 2:
                create(); //searching for an appointment
                break;
            case 3:
                view();
                break;
            case 5:
                delete();
                break;
            case 6:
                info();
                break;
        }
    }while(choice!=0);


    //End Screen
    system("clear");
    printf("\n");
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t|Stay Healthy!^_^ |\n");
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    
    
    

     




    return 0;
}

void mainmenu()
    {  
        // clear screen
        system("clear");

        int choice = 0;

         printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t| Welcome to Dr. Mitchell Medical Centre |");
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n1.REGISTER PATIENT\t||\t2.CREATE APPOINTMENT\t||\t3.VIEW APPOINTMENT\t||\t4.UPDATE APPOINTMENT\t||\t5.DELETE APOINTMENT\t||\t6.APOINTMENT INFORMATION\t||\t0.EXIT\t||");
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\nPLEASE ENTER CHOICE:\t|\t");
        scanf("%d", &choice);
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        switch(choice)
        {
            case 1:
                regist(); //registering patient
                break;            
            case 2:
                create(); //searching for an appointment
                break;
            case 3:
                view();
                break;
            case 5:
                delete();
                break;
            case 6:
                info();
                break;
        }



    //End Screen
    system("clear");
    printf("\n");
        printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t|Stay Healthy!    ^_^ |\n");
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    
    }
     
    void regist()
    {//registering patient

        patient *patients;//pointer
        int i;
        FILE *fp;
        printf("\nPlease enter number of patients:\t|\t");
        scanf("%d", &size); 
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        patients = (patient*)calloc(size, sizeof(patient)); //allocating memory to pointer
    
        // clear screen
            system("clear"); 

        fp=fopen("Patient.dat", "w"); //creating file

        for (i = 0; i < size; ++i)
        {        
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\nEnter the name of the patient [First name Last Name]:\t\t\t|\t");
        scanf("%15s %15s",patients[i].F_name, patients[i].L_name);
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        printf("Enter the age of the patient:\t\t\t\t\t\t|\t");
        scanf("%d", &patients[i].age);
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

		printf("Enter the Gender of the patient [Male / Female]:\t\t\t|\t");
		scanf("%s", patients[i].gender);
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		
        printf("Enter the telephone number of the patient:\t\t\t\t|\t");
        scanf("%s", patients[i].telenum);
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");


		printf("Enter the email address of the participant:\t\t\t\t|\t");
		scanf("%s", patients[i].email);
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        int ID = 0;
		printf("Would you like to assign the ID [1] or randomly assign:\t\t\t\t\t\t|\t");
		scanf("%d",&ID);
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        if (ID != 1)
        {
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("Assign the patient an ID Number:\t\t\t\t|\t");
            scanf(" %d ",&patients[i].ID_num);
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        }
        else
        {
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("The patient's ID number is:\t\t|\t");
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        }
              
                
        int hp = 0;
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("\nWould you like to Proceed? [yes = 1, no = any number]\t|\t");
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
        fclose(fp); 
    }  
   

void create()
{
    
patient *patients;//pointer
        int i;
        FILE *fp;

        int n, found=0;
        fp=fopen("Patient.dat", "r");
        printf("\nEnter id number to search:\t|\t");
        scanf("%d",&patients[i].ID_num);
    
     
    if (patients[i].ID_num = 0)
    {
        system("clear");
        printf("\n");
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t    |\tPatient Not found\t|\n");
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        printf("\n\n");
        printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t|Stay Healthy!^_^ |\n");
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    

    }
    else
    {
        fp=fopen("appointment.txt", "w"); //creating file

        printf("Enter the date of birth of the participant(dd mm yyyy):\t\t\t\t|\t");
	    scanf("%d %d %d", &patients[i].Date.day, &patients[i].Date.month, &patients[i].Date.year);
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	
        printf("Enter the date of birth of the participant [24-Hour format] (hh : mm):\t\t\t\t|\t");
	    scanf("%d %d", &patients[i].Date.Time.hour, &patients[i].Date.Time.mins);
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        if (patients[i].Date.Time.mins != 00)
        {
            printf("\n");
            printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t\t    |\tHourly Appointments Only!\t|\n");
            printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    
        }
        else 
        {
            if (patients[i].Date.Time.hour > 19 ||patients[i].Date.Time.hour < 8)
            {
                printf("\n");
                printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t\t\t    |\tOpen Hours are from 8 am to 7pm!\t|\n");
                printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            }
            else
            {
                printf("\n");
                printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t\t\t    |\tSelected Time is Available\t|\n");
                printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        
            }
        }
    }
        

        

            


             

}
void info()
            {
                
                system("clear");
                // Type of Visit with Cost
                printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                printf("|\tType of Visit\t||\tCost\t\t|");
                printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                printf("|\tConsultation\t||\t$4500.00\t|\n");
                printf("|\tPrimary Care\t||\t$8000.00\t|\n");
                printf("|\tFollow-up Visit\t||\t$9500.00\t|\n");
                printf("|\tUrgent Visit\t||\t$15,500.00\t|");
                printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                
                // Age Group with Coverage
                printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                printf("|\tAge Group\t||\tCoverage (x/100)\t|");
                printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                printf("|\t0 - 11\t\t||\t\t40\t\t|\n");
                printf("|\t12 - 18\t\t||\t\t35\t\t|\n");
                printf("|\t19 - 25\t\t||\t\t30\t\t|\n");
                printf("|\t26 - 45\t\t||\t\t25\t\t|\n");
                printf("|\t46 - 100\t||\t\t25\t\t|");
                printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

            
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
            }
            
            
void view()
{
    patient patient;
    FILE *fp;
    int n, found=0;
    int ID_num;
    fp=fopen("Patient.txt", "r");
    printf("\nEnter id number to search:\t|\t");
    scanf("%d",&ID_num);
    system("clear");
    while(fread(&patient,sizeof(patient),1,fp))
    {
        if(patient.ID_num == n)
        
        {
            found=1;
	        printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	        printf("\n\t\t\t\t\t\t\t\t\t|Patient's Information|\n");
	        printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("The participant's name is:\t\t|\t %s %s\n",patient.F_name, patient.L_name);
            printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("The participant's age is:\t\t|\t %d\n",patient.age);
            printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("The participant's gender is:\t\t|\t %s\n",patient.gender);
            printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("The participant's Telephone number is:\t\t|\t %s\n",patient.telenum);
            printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("The participant's email is:\t\t|\t %s\n",patient.email);
            printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("The participant's ID is:\t\t|\t %c\n",patient.ID_num);
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
            
        }
        else 
        {
            printf("\n");
            printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t\t    | Patient not found |\n");
            printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            exit(0); 
        }
        
              
    }
    fclose(fp);        
}

void delete()
{
    if (remove("Patient.dat") == 0) 
    {
        system("clear");
        printf("\n");
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t    | File Deleted Succesfully |\n");
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
       
       int hp = 0;
            printf("Return to Home Screen? [yes = 1, no = any number]\t|\t");
            scanf("%d",&hp);
                if (hp != 0)
                {
                    system("clear");
                    void mainmenu();
                }
                else
                {
                    exit(0);
        
                }
        
    } 
    else 
    {
        system("clear");
        printf("\n");
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t    | File Deleted Unsuccesfully |\n");
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
       
       int hp = 0;
            printf("Return to Home Screen? [yes = 1, no = any number]\t|\t");
            scanf("%d",&hp);
                if (hp != 0)
                {
                    system("clear");
                    void mainmenu();
                }
                else
                {
                    system("clear");
                    printf("\n");
                    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t|Stay Healthy!    ^_^ |\n");
                    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                    exit(0);
        
                }
    }
}






