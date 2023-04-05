#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node{
    int data;
    // char *name;
    struct node *next;
};
struct node *f=NULL,*r=NULL;

int seat_of6=3, seat_of4=6, seat_of3=6, seat_of2=2;

void new_customer(){
    struct node *ptr;
    int val;
    // char name[20];
    // printf("Name : ");
    // // gets(name);
    // scanf("%s",name);
    if(seat_of2>0 && seat_of3>0 && seat_of4>0 && seat_of6>0){
        printf("How many people? : ");
        scanf("%d",&val);
        if(val>=1 && val<=2){
            seat_of2--;
            printf("\n\tEntry Granted\n");
        }
        else if(val>2 && val<=3){
            seat_of3--;
            printf("\n\tEntry Granted\n");
        }
        else if(val>3 && val<=4){
            seat_of4--;
            printf("\n\tEntry Granted\n");
        }
        else if(val>4 && val<=6){
            seat_of6--;
            printf("\n\tEntry Granted\n");
        }
    }
    else{
        if(seat_of2<=0){
            ptr = (struct node*)malloc(sizeof(struct node));
            // ptr->name = name;
            ptr->data = val;
            if(f==NULL && r==NULL){
                ptr->next = NULL;
                r = ptr;
                f=ptr;
            }
            else{
                ptr->next = r;
                r = ptr;
            }
        }
        else if(seat_of3<=0){
            ptr = (struct node*)malloc(sizeof(struct node));
            // ptr->name = name;
            ptr->data = val;
            if(f==NULL && r==NULL){
                ptr->next = NULL;
                r = ptr;
                f=ptr;
            }
            else{
                ptr->next = r;
                r = ptr;
            }
        }
        else if(seat_of4<=0){
            ptr = (struct node*)malloc(sizeof(struct node));
            // ptr->name = name;
            ptr->data = val;
            if(f==NULL && r==NULL){
                ptr->next = NULL;
                r = ptr;
                f=ptr;
            }
            else{
                ptr->next = r;
                r = ptr;
            }
        }
        else if(seat_of6<=0){
            ptr = (struct node*)malloc(sizeof(struct node));
            // ptr->name = name;
            ptr->data = val;
            if(f==NULL && r==NULL){
                ptr->next = NULL;
                r = ptr;
                f=ptr;
            }
            else{
                ptr->next = r;
                r = ptr;
            }
        }
    }
}

void call_customer(){
    if(f==NULL && r==NULL){
        printf("\n\tNo one is in waiting queue\n");
    }
    else if(f==r){
        printf("\t");
        // puts(f->name);
        printf("\t%d people\n",f->data);
        printf("\n\tLast customer called\n");
        f=NULL;
        r=NULL;
    }
    else{
        struct node *ptr=r;
        while(ptr->next!=f){
            ptr=ptr->next;
        }
        // puts(f->name);
        printf("\t%d people\n",f->data);
        free(f);
        f=ptr;
        free(ptr);
    }
}

void show_wl(){

    struct node *ptr=r;
    if(f==NULL && r==NULL)
        printf("\n\tQueue empty\n");
    else{
        printf("\n\t");
        while(ptr!=f->next){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}



int main(){
    int ch;
    return 0;
}
