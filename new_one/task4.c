#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printDescriptionOfTask()
{
	printf("Task Descrption:\n\n");
	
}

void installPackage()
{
	//sudo apt-get install 'packageName'
	
	char packageName[400], com[200];
	strcpy(com,"sudo apt-get install ");
	printf("Enter Package Name:");
	gets(packageName);
	strcat(com, packageName);
	system(com);
}

void updateSpecficPackage()
{
	//sudo apt-get --only-upgrade install 'packageName' 
	
	char packageName[400], com[200];
	strcpy(com,"sudo apt-get --only-upgrade install ");
	printf("Enter Package Name:");
	gets(packageName);
	strcat(com, packageName);
	system(com);
}

void listingInstalledPackage()
{
	//sudo apt list --installed
	
	char com[200];
	strcpy(com,"sudo apt list --installed");
	system(com);
}

void ifPackageInstalled()
{
	//dpkg -l 'packageName'
	
	char packageName[400], com[200];
	strcpy(com,"dpkg -l ");
	printf("Enter Package Name:");
	gets(packageName);
	strcat(com, packageName);
	system(com);
}

void findingAPackageInRepository()
{
	//sudo apt-cache search 'packageName'
	
	char packageName[400], com[200];
	strcpy(com,"sudo apt-cache search ");
	printf("Enter Package Name:");
	gets(packageName);
	strcat(com, packageName);
	system(com);
}

void installingFromARepository()
{
	//sudo add-apt-repository ppa:'repositoryName'/ppa & sudo apt update
	
	char repositoryName[1000] , com[200];
	strcpy(com,"sudo add-apt-repository ppa:");
	printf("Enter repository name:");
	gets(repositoryName);
	strcat(com, repositoryName);
	strcat(com, "/ppa & sudo apt update");
	system(com);
	printf("\nThe repository added succesfully now you can try to install package from it by choosing 'installing package'\n");
}

void removeARepository()
{
	//sudo add-apt-repository --remove ppa:'repositoryName'/ppa
	
	char repositoryName[1000], com[200];
	strcpy(com,"sudo add-apt-repository --remove ppa:");
	printf("Enter repository name:");
	gets(repositoryName);
	strcat(com, repositoryName);
	strcat(com, "/ppa & sudo apt update");
	system(com);
	printf("\nThe repository deleted succesfully now update your packages by choosing 'updating packages'\n");
}

void updatingPackages()
{
	//sudo apt upgrade
	
	char com[200];
	strcpy(com,"sudo apt upgrade");
	system(com);
}

int main(int argc, char *argv[])
{

	if(argc > 1)
	{
		if(strcmp(argv[1],"-h") == 0)
		{
			printDescriptionOfTask();
		}
	}
	else
	{
		while(1)
		{
			printf("\n1-Install Package.\n2-Update An Exiting Package.\n3-Listing Instaled Packege.\n4-Determining If A Package Is Installed and Displaying Info About an Installed Package.\n5-Search About Package In A Repository.\n6-Installing From A Repository.\n7-Remove A Repository.\n0-Exit.\n");
			char t;
			int num;
			scanf("%d", &num);
			t = getchar();
			switch(num)
			{
			
				case 1:
				     	installPackage();	
					break;
				       	

				case 2:
					updateSpecficPackage();
					break;

				
				case 3:
					listingInstalledPackage();
					break;

				
				case 4:
					ifPackageInstalled();
					break;

				
				case 5:
					findingAPackageInRepository();
					break;

				
				case 6:
					installingFromARepository();
					break;

				
				case 7:
					removeARepository();
					break;

				
				case 8:
					updatingPackages();	
					break;

				       
				case 0:
					exit(0);
					break;
				
				defualt:
					printf("Enter a Correct Choice 🙁");
			}
		}
	}
	return 0;
}
