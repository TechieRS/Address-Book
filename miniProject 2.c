#include <stdio.h>
#include <string.h>

int main(){
    char name[5][50];
    int id[5];
    char mobileNumber[5][12];
    char email[5][100];
    int choice;

    for(int i = 0; i < 5; i++) {
        id[i] = -1;
    }

    while(1){
        printf("\n---Address Book---\n");
        printf("1. Add Details\n");
        printf("2. Delete Details\n");
        printf("3. Display Details\n");
        printf("4. Search Details\n");
        printf("5. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        getchar(); 
        int idNumber; 
    
        switch(choice){
            case 1:
                for(int i = 0; i < 5; i++){
                    if(id[i] == -1) {  
                        printf("Enter ID: ");
                        scanf("%d", &id[i]);
                        getchar();  

                        printf("Enter Name: ");
                        fgets(name[i], sizeof(name[i]), stdin);
                        name[i][strcspn(name[i], "\n")] = '\0';  

                        printf("Enter Contact Details: ");
                        fgets(mobileNumber[i], sizeof(mobileNumber[i]), stdin);
                        mobileNumber[i][strcspn(mobileNumber[i], "\n")] = '\0';  

                        printf("Enter Email Address: ");
                        fgets(email[i], sizeof(email[i]), stdin);
                        email[i][strcspn(email[i], "\n")] = '\0';  
                        break;
                    }
                }
                break;
            case 2:
                
                printf("Enter ID number to delete detail: ");
                scanf("%d", &idNumber);
                for(int i = 0; i < 5; i++){
                    if(id[i] == idNumber){
                        id[i] = -1;  
                        printf("Details Deleted\n");
                        break;
                    }
                }
                break;
            case 3:
                for(int i = 0; i < 5; i++){
                    if(id[i] != -1) {  
                        printf("\nName: %s", name[i]);
                        printf("\nContact Details: %s", mobileNumber[i]);
                        printf("\nEmail Address: %s\n", email[i]);
                    }
                }
                break;
            case 4:
                printf("Search functionality not implemented yet.\n");
                break;
            case 5:
                printf("Exiting Program\n");
                return 0;
            default:
                printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}
