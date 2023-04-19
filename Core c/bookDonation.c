#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book{
    char title[50];
    char author[50];
};

struct donor{
    char name[50];
    struct book b;
};

struct receiver{
    char name[50];
    struct book b;
};

void add_donor();
void add_receiver();
void delete_donor();
void delete_receiver();
void update_donor();
void update_receiver();
void search_book();
void display_donors();
void display_receivers();

int main(){
    int choice;

    do{
        printf("\n------- Book Donation System Menu -------\n");
        printf("1. Add a Donor\n");
        printf("2. Add a Receiver\n");
        printf("3. Delete a Donor\n");
        printf("4. Delete a Receiver\n");
        printf("5. Update a Donor's record\n");
        printf("6. Update a Receiver's record\n");
        printf("7. Search for a Book\n");
        printf("8. Display all Donors\n");
        printf("9. Display all Receivers\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                add_donor();
                break;
            case 2:
                add_receiver();
                break;
            case 3:
                delete_donor();
                break;
            case 4:
                delete_receiver();
                break;
            case 5:
                update_donor();
                break;
            case 6:
                update_receiver();
                break;
            case 7:
                search_book();
                break;
            case 8:
                display_donors();
                break;
            case 9:
                display_receivers();
                break;
            case 0:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }while(choice != 0);

    return 0;
}

void add_donor(){
    FILE *fp;
    struct donor d;scanf

    fp = fopen("donors.txt", "ab");
    if(fp == NULL){
        printf("Error opening file!\n");
        return;
    }

    printf("Enter the name of the donor: ");
    scanf("%s", d.name);
    printf("Enter the title of the book: ");
    scanf("%s", d.b.title);
    printf("Enter the author of the book: ");
    scanf("%s", d.b.author);

    fwrite(&d, sizeof(struct donor), 1, fp);

    printf("Donor record added successfully!\n");

    fclose(fp);
}

void add_receiver(){
    FILE *fp;
    struct receiver r;

    fp = fopen("receivers.dat", "ab");
    if(fp == NULL){
        printf("Error opening file!\n");
        return;
    }

    printf("Enter the name of the receiver: ");
    scanf("%s", r.name);
    printf("Enter the title of the book: ");
    scanf("%s", r.b.title);
    printf("Enter the author of the book: ");
    scanf("%s", r.b.author);

    fwrite(&r, sizeof(struct receiver), 1, fp);

    printf("Receiver record added successfully!\n");

    fclose(fp);
}

void delete_donor(){
    FILE *fp, *temp_fp;
    struct donor d;
    char name[50];
    int found = 0;

    fp = fopen("donors.dat", "rb");
    if(fp == NULL){
        printf("Error opening file!\n");
        return;
    }
}
   
