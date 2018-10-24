
//***********************************************
//       PROJECT  HOSPITAL-MANAGEMENT
//***********************************************

//****************************
//  INCLUDED HEADER FILES
//****************************


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<iomanip>
#include<dos.h>

struct contact
{
    char add[50],sex[30];
    char name[20],date[22],ph[20],age[3],con[50],dep[40];

}list;

    char search[56],name[100];
    FILE *fp, *ft;
    int i,n,l,found,choice;

    int main()
    {

    //**********************************
    //  DISPLAYING MAIN MANU
    //*****************************

    main:
    system("cls");
    printf("\n\t\t\t Hospital Management System \t\t\t\n");
    printf("\n\t\t\t Sumitted by SADEK & SUJON \t\t\t\t");
    printf("\n\n\n\t\t\t\t MAIN MENU \n\t\t\n\t\t\t1. Add a new patient information \n\t\t\t2. List of all patients  \n\t\t\t3. Search for any patient \n\t\t\t4. Edit a patient information\n\t\t\t5. Delete patient information\n\t\t\t0. Exit\n\t\t");
    printf("\n\t\t\t Enter the choice: ");
    scanf("%d",&choice);

    switch(choice)
     {
    case 0:
    printf("\n\n\t\t Are you sure, you want to exit?");
    break;

    case 1:
         system("cls");
    printf("\n\t\t\t Choose The Department");
    printf("\n\t\t\t\n\t\t Names of department \n\t\t1. Medicine \n\t\t2. Gynae \n\t\t3. Surgery \n\t\t0. Exit \n\t\t");
    printf("\n\t\t  Enter the choice: ");
    scanf("%d",&choice);

    switch(choice)
    {

    //**********************************
    //  FUNCTION FOR ADD A NEW PATIENT
    //*****************************

       case 1:
            system("cls");
    fp=fopen("patient.txt","a");
    for (;;)
    {
    fflush(stdin);
    printf("To exit enter blank space in the name input\n\n Patient Name: ");
    scanf("%[^\n]",&list.name);

    if(stricmp(list.name," ")==0 || stricmp(list.name," ")==0)
    break;

    fflush(stdin);
    printf("\n Age: ");
    scanf("%[^\n]",&list.age);

    fflush(stdin);
    printf("\n Sex: ");
    gets(list.sex);

    fflush(stdin);
    printf("\n Phone: ");
    scanf("%[^\n]",&list.ph);

    fflush(stdin);
    printf("\n Address: ");
    scanf("%[^\n]",&list.add);

    fflush(stdin);
    printf("\n Name of Consultant: ");
    scanf("%[^\n]",&list.con);

    fflush(stdin);
    printf("\n Date(DD/MM/YYYY): ");
    scanf("%[^\n]",&list.date);

    fflush(stdin);
    printf("\n Type Medicine: ");
    scanf("%[^\n]",&list.dep);

    printf("\n");
    fwrite(&list,sizeof(list),1,fp);
    printf("\n Successfully Added \n ");
    }
    fclose(fp);
    break;

    case 2:
         system("cls");
    fp=fopen("patient.txt","a");
    for (;;)
    {
    fflush(stdin);
    printf("To exit enter blank space in the name input\n\nPatient Name: ");
    scanf("%[^\n]",&list.name);

    if(stricmp(list.name," ")==0 || stricmp(list.name," ")==0)
    break;

    fflush(stdin);
    printf("\nAge: ");
    scanf("%[^\n]",&list.age);

    fflush(stdin);
    printf("\nSex: ");
    gets(list.sex);

    fflush(stdin);
    printf("\nPhone: ");
    scanf("%[^\n]",&list.ph);

    fflush(stdin);
    printf("\nAddress: ");
    scanf("%[^\n]",&list.add);

    fflush(stdin);
    printf("\nName of Consultant: ");
    scanf("%[^\n]",&list.con);

    fflush(stdin);
    printf("\nDate(DD/MM/YYYY): ");
    scanf("%[^\n]",&list.date);

    fflush(stdin);
    printf("\nType Gynae: ");
    scanf("%[^\n]",&list.dep);

    printf("\n");
    fwrite(&list,sizeof(list),1,fp);
    printf("\n Successfully Added \n ");
    }
    fclose(fp);
    break;

   case 3:
         system("cls");
    fp=fopen("patient.txt","a");
    for (;;)
    {
    fflush(stdin);
    printf("To exit enter blank space in the name input\n\nPatient Name: ");
    scanf("%[^\n]",&list.name);

    if(stricmp(list.name," ")==0 || stricmp(list.name," ")==0)
    break;

    fflush(stdin);
    printf("\nAge: ");
    scanf("%[^\n]",&list.age);

    fflush(stdin);
    printf("\nSex: ");
    gets(list.sex);

    fflush(stdin);
    printf("\nPhone: ");
    scanf("%[^\n]",&list.ph);

    fflush(stdin);
    printf("\nAddress: ");
    scanf("%[^\n]",&list.add);

    fflush(stdin);
    printf("\nName of Consultant: ");
    scanf("%[^\n]",&list.con);

    fflush(stdin);
    printf("\nDate(DD/MM/YYYY): ");
    scanf("%[^\n]",&list.date);

    fflush(stdin);
    printf("\nType Surgery: ");
    scanf("%[^\n]",&list.dep);

    printf("\n");
    fwrite(&list,sizeof(list),1,fp);
    printf("\n Successfully Added \n ");
    }
    fclose(fp);
    break;

    case 0:
    printf("\n\n\t\tAre you sure, you want to exit?");
    break;
    }

    case 2:
    system("cls");
    printf("\n\t\t\n\n\n\t\t\tPatient List\n\t\t\n\n\n");

    for(i=97;i<=122;i=i+1)
    {
    fp=fopen("patient.txt","r");
    fflush(stdin);
    found=0;

    while(fread(&list,sizeof(list),1,fp)==1)
    {
    if(list.name[0]==i || list.name[0]==i-32)
    {
    printf("\nPatient Name\t  : %s\nAge\t  : %ld\nSex\t  : %s\nPhone\t  : %ld\nAddress\t  : %s\nConsultant: %s\nDate\t  : %s\nDepartment: %s\n",list.name,list.age,list.sex,list.ph,list.add,list.con,list.date,list.dep);
    found++;
    }
    }
    fclose(fp);
    }
    break;

    //**********************************
    //  FUNCTION SEARCH FOR ANY PATIENT
    //*****************************

    case 3:
    system("cls");
    do
    {
    found=0;
    printf("\n\n\tSearch for Patient\n\t\n\n\tPlease write the Name of patient to search: ");
    fflush(stdin);
    scanf("%[^\n]",&search);
    l=strlen(search);
    fp=fopen("patient.txt","r");
    system("cls");
    printf("\n\nSearch result for '%s' \n\n\n",search);

    while(fread(&list,sizeof(list),1,fp)==1)
    {
    for(i=0;i<=l;i++)
    name[i]=list.name[i];
    name[l]='\0';
    if(stricmp(name,search)==0)
    {
    printf("\n Patient Name\t  : %s\n Age\t  : %ld\n Sex\t  : %s\n Phone\t  : %ld\n Address\t  : %s\nConsultant: %s\nDate\t  : %s\nDepartment: %s\n",list.name,list.age,list.sex,list.ph,list.add,list.con,list.date,list.dep);
    found++;
    if (found%4==0)
    {
    printf("Press any key to continue...");
    getch();
    }
    }
    }

    if(found==0)
    printf("\n\tNo match found!");
    else
     printf("\n\tMatch is found!",found);
    fclose(fp);

    printf("\n\t Try again?\n\n\t1. Yes\t\t0. No\n\t");
    scanf("%d",&choice);
    system("cls");
    }
    while(choice==1);
    break;

    //**********************************
    //  FUNCTION FOR PATIENT EDIT INFORMATION
    //*****************************

    case 4:
    system("cls");
    fp=fopen("patient.txt","a");
    fflush(stdin);
    printf("\tEdit information\n\n\n\n\t\tEnter the name of patient to edit: ");
    scanf("%[^\n]",name);

    while(fread(&list,sizeof(list),1,fp)==1)
    {
    if(stricmp(name,list.name)!=0)
    fwrite(&list,sizeof(list),1,fp);
    }
    fflush(stdin);
    printf("\n\n\t Editing \t%s\n\n",name);
    printf("\n Patient Name: ");
    scanf("%[^\n]",&list.name);

    fflush(stdin);
    printf("\nAge: ");
    scanf("%[^\n]",&list.age);

    fflush(stdin);
    printf("\nSex: ");
    gets(list.sex);

    fflush(stdin);
    printf("\nPhone: ");
    scanf("%[^\n]",&list.ph);

    fflush(stdin);
    printf("\nAddress: ");
    scanf("%[^\n]",&list.add);

    fflush(stdin);
    printf("\nConsultent: ");
    scanf("%[^\n]",&list.con);

    fflush(stdin);
    printf("\nDate(DD/MM/YYYY): ");
    scanf("%[^\n]",&list.date);

    fflush(stdin);
    printf("\nType Medicine: ");
    scanf("%[^\n]",&list.dep);

    printf("\n");
    fwrite(&list,sizeof(list),1,fp);
    fclose(fp);
    break;

    //**********************************
    //  FUNCTION FOR DETETE A PATIENT INFORMATON
    //*****************************

    case 5:
    system("cls");
    fflush(stdin);
    printf("\n\n\t\tDelete any patient information from list\n\t\n\n\t\tEnter the name of patient to delete: ");
     scanf("%[^\n]",&name);
    fp=fopen("patient.txt","r");
    ft=fopen("temp.dat","w");
    while(fread(&list,sizeof(list),1,fp)!=0)
    if (stricmp(name,list.name)!=0)
    fwrite(&list,sizeof(list),1,ft);
    fclose(fp);
    fclose(ft);
    remove("patient.txt");
    rename("temp.dat","patient.txt");
    break;

    default:
    printf("Invalid choice");
    break;
    }
    printf("\n\n\n\tEnter the Choice: \n\n\t1. Main Menu\t\t0. Exit\n");
    scanf("%d",&choice);
    switch (choice)
    {

    case 1:
    goto main;

    case 0:
    break;
    default:
    printf("Invalid choice");
    break;
    }

    getch();

    }
