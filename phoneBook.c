//
//  phoneBook.c
//  
//
//  Created by Wachirawit Rimchonlakarn on 11/21/2558 BE.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
    char h ,choich;
    char name[20];
    char phone[10];
    int ph[10], se[3];
    
    
    printf("Input your Command (h hor help) : ");
    printf("")
    scanf("$c",%h);
    
    switch (h) {
        case h:
            printf("i : insert a phone number\n");
            printf("d : delete a phone number\n");
            printf("m : modify a phone number\n");
            printf("s : search\n");
            printf("x : exit program\n");
            printf("please enter choich : ");
            scanf("%s",&choich);
            
            switch (choich) {
                case i:
                    printf("===== insert a phone number =====\n");
                    pWrite = fopen("phonebook_contacts.dat", "a");
                    if ( pWrite == NULL )
                    {
                        perror("The following error occurred ");
                        exit(EXIT_FAILURE);
                    }
                    else
                    {
                        counter++;
                        realloc(phonebook, sizeof(phone));
                        
                        printf("\n Name : ");
                        scanf("%s", phonebook[counter-1].name);
                        printf("Phone Number : ");
                        scanf("%s", phonebook[counter-1].phone);
                        printf("\n\tFriend successfully added to Phonebook\n"); 
                        
                        fprintf(pWrite, "%s\t%s\t%s\n", phone[counter-1].name, phone[counter-1].phone);
                        fclose(pWrite); 
                    }
                    break;
                case d:
                    printf("===== delete a phone number =====\n");
                    int x = 0;
                    int i = 0;
                    char deleteName[20];
                    
                    printf("\n name: ");
                    scanf("%s", deleteName);

                    
                    for (x = 0; x < counter; x++)
                    {
                        if (strcmp(deleteName, phone[x].name) == 0)
                        {
                                for ( i = x; i < counter - 1; i++ )
                                {
                                    strcpy(phone[i].name, phone[i+1].name);
                                    strcpy(phone[i].phone, phone[i+1].phone);
                                } 
                                printf("Record deleted from the phonebook.\n\n");
                                --counter; 
                                return;
                        } 
                    }    
                    
                    printf("That contact was not found, please try again.");
            }
                    break;
                case m:
                    printf("===== modify a phone number =====\n");
            
                    break;
        case s:
            printf("===== search =====\n");
            int x = 0;
            char TempFirstName[20];
            
            printf("\nPlease type the name of the friend you wish to find a number for.");
            printf("\n\nFirst Name: ");
            scanf("%s", TempFirstName);
            printf("Last Name: ");
            scanf("%s", TempLastName);
            for (x = 0; x < counter; x++)
            {
                if (strcmp(TempFirstName, phone[x].name) == 0)
                {
                    printf("\n%s %s's phone number is %s\n", phone[x].name, phone[x].phone);
                } 
            }
            
                default:
                    break;
            }
            
            break;
            
        default:
            break;
    }
}
