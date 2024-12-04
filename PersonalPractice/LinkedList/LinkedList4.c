#include "LinkedListHeader.h"

// function find
node *find(node *lists, int key){
    if (lists->next->number ==  key){ // BASE CASE OF RECURSION
        // যাকে ধরেছি তার পরেরটার নাম্বার মিলে গেলে যাকে ধরেছি তাকে রিটার্ন করব
        return lists; // Target এর আগেরজনকে রিটার্ণ দিচ্ছে (?)
    } else if(lists->next->next == NULL){
        return  NULL;
    } else{
        return find(lists->next, key); // "return" RECURSION
    }
}

// function insert
node *insert(node *head){
    int x = 0, key = 0;
    node *new, *n1;

    // FIND KEY NODE AND INSERT NEW NODE BEFORE KEY NODE

    printf("Value of new node : ");
    scanf("%d",&x);
    printf("Value of key item:");
    scanf("%d", &key);

    if (head->number == key) { // new node is at first
        new = (node *) malloc(sizeof(node));
        new->number = x;
        new->next = head;
        head = new;
    } else { // new node is before the key node
        n1 = find(head, key); // to store find result pointer
        if (n1 == NULL){
            printf("KEY NOT FOUND\n");
        } else{
            new = (node *) malloc(sizeof(node));
            new->number = x;
            /*NOW CAREFULLY CHANGE*/
            new->next = n1->next;
            n1->next = new;
        }
    }
    return head;
}

// delete function
node *delete(node *head, int key){
    node *f1, *temp;
    f1 = find(head, key); // f1->next এ টার্গেট বিদ্যমাণ
    if (f1 == NULL){
        printf("key not found");
    } else {
        f1->next = f1->next->next->next; // self mad
        free(f1->next->next);
    }
}

int main(void){
    // DUMMY
}