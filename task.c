#include <stdio.h>
#include <stdlib.h>
//#include <ifstream>
int main (int argc, char *argv[]){

if(argc>1){
if(strcmp(argv[1],"--help")==0){
	printf("The description of the Projec\n");
}
}else{
char package_name[200], package_file[200], comm[200];
char t;


	if(argc > 1)
	{
		if(strcmp(argv[1],"-h") == 0)
		{
			printf("The description of the task:\n");
		}
	}
	else
	{

while(1){

printf("1- Installing and Upgrading A Package From File.\n
		2- Listing Installed Packages.\n
		3- Determining if A Package is installed and Displaying info about it.\n
		4- Finding A Package in A Repository.\n
		5- Installing A Package From A Repository.\n
		6- Updating Packages From A Repository.\n
		7- Remove A Package.\n
		8- Exit.\n");
int c ;
scanf("%d", &c);
t = getchar();

switch(c){
case 1:
	//dpkg --install Package_file
	//rpm -i Package_file
	//sudo apt -get install Package_name	
	strcpy(comm , "sudo apt-get install -f ");
	printf("Enter the Package_file : ");
	gets(package_file);
	strcat(comm, package_file);
	system(comm);

break;
case 2:
	//dpkg --list
	//rpm -qa
	strcpy(comm, "dpkg --list");
	printf("The installed Packages are :\n");
	strcat(comm, "\n");
	system(comm);
break;
case 3:
	//dpkg --status Package_name
	strcpy(comm, "dpkg --status ");
	printf("Enter the Package_name : ");
	gets(package_name);
	strcat(comm, package_name);
	system(comm);
	//apt -cache show Package_name
	strcpy(comm, "apt -cache show ");
	strcat(comm, package_name);
	system(comm);
break;
case 4:
	//apt -get update
	//apt -cache search Search_String
	//yum search search_string
	//sudo apt-cache search 'packageName'
	printf("Enter the Package_name : ");
	gets(package_name);
	//strcpy(comm, "apt -get update");
	//strcat(comm, "\n");
	//system(comm);
	strcpy(comm, "sudo apt-cache search ");
	strcat(comm, package_name);
	system(comm);
break;
case 5:
	//sudo add-apt-repository ppa:'repositoryName'/ppa & sudo apt update
	//apt -get update
	//apt -get install Package_name
	//yum install Package_name
	printf("Enter the Package_name : ");
	gets(package_name);
	strcpy(comm, "sudo apt-get update ; apt-get install ");
	//strcat(comm, "\n");
//	system(comm);
	strcat(comm, package_name);
	//strcat(comm, "/ppa & sudo apt update");
	system(comm);
break;
case 6:
	//apt -get update; apt -get upgrade
	//sudo apt upgrade
	//strcpy(comm, "apt -get update; apt -get upgrade");
	//strcat(comm, "\n");
	strcpy(comm, "sudo apt upgrade");	
	system(comm);
break;
case 7:
	//apt -get remove Package_name
	//sudo add-apt-repository --remove ppa:'repositoryName'/ppa
	strcpy(comm, "sudo apt-get remove ");
	printf("Enter the Package_name : ");
	gets(package_name);
	strcat(comm, package_name);
	strcat(comm, "/ppa & sudo apt update");
	system(comm);
break;
case 8:exit(0);
default:printf("Please, Enter appropriate number of choice!");

}
}
}
}
return 0;
}
