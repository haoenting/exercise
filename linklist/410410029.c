#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct NODE { //�w�qNODE���c
    int data;   //�������`�I�����
    struct NODE* next;  //�O�����V���U�Ӹ`�I��}
}Node;

void add(Node* head) {   //�N�@����ƴ��J��C���̫�
    Node* current;  //�إ�current�`�I 
    current = (Node*)malloc(sizeof(Node));
    scanf("%d", &current->data);
    current->next = NULL;

    while (head->next != NULL) {    //����C���̫᭱
        head = head->next;
    }
    head->next = current;   //�Ncurrent�`�I�s�b��C�̫᭱
    printf("ADD_SUCC\n");   
}

void insert(Node* head) {   //�N�@����ƴ��J�t�@����Ƥ��e
    int target, data;   //�ؼи�� �n���J�����
    scanf("%d %d", &target, &data);

    Node* current;  //�إ�current�`�I �ë��V�_�Ihead
    current = (Node*)malloc(sizeof(Node));
    current = head;

    while (current != NULL) {   //�Hcurrent�`�I�V�U�j�M 
        if (current->data == target) {  //����ؼи`�I ���X
            break;
        }
        current = current->next;
    }
    if (current == NULL) {  //�p�G���̫���٬O�S���ؼ� ���X
        printf("INSERT_FAIL\n");
        return;
    }

    while (head->next != current) { //�qhead���ؼЪ��e�@��
        head = head->next;
    }

    Node* now;  //�إ�now�`�I �N��n���J�����
    now = (Node*)malloc(sizeof(Node));
    now->data = data;
    now->next = current;    //���V�ؼи`�I

    head->next = now;   //�q�ؼЪ��e�@�Ӹ`�I ���V���J�`�I

    printf("INSERT_SUCC\n");
}

void del(Node* head) {  //�R����C�����@�����
    int target;
    scanf("%d", &target);

    Node* current;  //�إ�current�`�I �ë��V�_�Ihead
    current = (Node*)malloc(sizeof(Node));
    current = head;

    while (current != NULL) {   //�Hcurrent�`�I�V�U�j�M
        if (current->data == target) {  //����ؼи`�I ���X
            break;
        }
        current = current->next;
    }
    if (current == NULL) {  //�p�G���̫���٬O�S���ؼ� ���X
        printf("DELETE_FAIL\n");
        return;
    }
    while (head->next != current) { //�qhead���ؼЪ��e�@��
        head = head->next;
    }

    Node* del;  //�إ�del�`�I ���V�n�R�����`�I
    del = (Node*)malloc(sizeof(Node));
    del = current;

    current = current->next;    //�q�n�R�����`�I�A���U
    head->next = current;      //�q�n�R�����`�I���e ���V�n�R�����`�I���U�@��

    free(current);  //����n�R�����`�I���O����
    printf("DELETE_SUCC\n");
}

void search(Node* head) {   //�M���C�����@�����
    int target;
    scanf("%d", &target);   //�ؼи��

    while (head!= NULL) {   //�q�_�I���̫��
        if (head->data == target) {   //�p�G���ؼи�� ���X
            printf("FOUND\n");
            break;
        }
        head = head->next;
    }
    if (head == NULL)   //�p�G���̫���٬O�S���ؼ�
        printf("NOT FOUND\n"); 
}

void update(Node* head) {   //�ק��C�����@�����
    int target, data;
    scanf("%d %d", &target, &data); //�ؼи�ƩM�n�令�����
    while (head != NULL) {  //�q�_�I���̫��
        if (head->data == target) { //�p�G����� �ק�
            head->data = data;
            printf("UPDATE_SUCC\n");
            break;
        }
        head = head->next;
    }
    if (head == NULL)   //�p�G���̫���٬O�S���ؼ�
        printf("UPDATE_FAIL\n");
}

void print(Node* head) {    //�̧ǦL�X��C�����Ҧ����
    head = head->next;  //�_�l�`�I�S���� �n���V�Ĥ@�Ӥ~����
    while (head != NULL) {  //����̫��
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    Node* first;   //�إ߰_�l�I
    first = (Node*)malloc(sizeof(Node));
    first->next = NULL;

    char* move; //�إߧP�_�ʧ@
    move = (char*)malloc(10);

    while (scanf("%s", move) != EOF) {  //��J�P�_�ʧ@
        if (strcmp("add", move) == 0)   //�N�@����ƴ��J��C���̫�
            add(first);      
        else if (strcmp("insert", move) == 0)   //�N�@����ƴ��J�t�@����Ƥ��e
            insert(first);
        else if (strcmp("delete", move) == 0)   //�R����C�����@�����
            del(first);
        else if (strcmp("search", move) == 0)   //�M���C�����@�����
            search(first);
        else if (strcmp("update", move) == 0)   //�ק��C�����@�����
            update(first);
        else if (strcmp("print", move) == 0)    //�̧ǦL�X��C�����Ҧ����
            print(first);
    }

    free(first);    //�����C���O����
    //system("pause");
    return 0;
}