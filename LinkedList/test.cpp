#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

typedef struct Node* node;

//cấp phát động node mới
node madeNode(int x){
    node temp = new Node();
    temp->data = x;
    temp->next = NULL;
    return temp;
}

//kiểm tra rỗng
bool isEmpty(node head){
    return head = NULL;
}

//đếm số phần tử
int count(node head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

//chèn node mới vào đầu ds
void insertFirst(node &head, int x){
    node temp = madeNode(x);
    if(isEmpty(head)){
        head = temp;
        return;
    }
    temp->next = head;
    head = temp;
}

//chèn node mới vào cuối ds
void insertLast(node &head, int x){
    node temp = madeNode(x);
    if(isEmpty(head)){
        head = temp;
        return;
    }
    while(head->next != NULL){
        head = head->next;
    }
    head->next = temp;
    temp->next = NULL;
}

//chèn node mới vào vị trí pos
void insertAt(node &head, int x, int pos){
    int n = count(head);
    if(pos < 0 || pos > n + 1){
        cout << "Error !" << endl;
        return;
    }
    else if(n == 1){
        insertFirst(head, x);
        return;
    }
    else if( n == pos + 1){
        insertLast(head, x);
        return;
    }
    node p = head;
    for(int i = 1; i < pos - 1; i++){
        p = p->next;
    }
    node temp = madeNode(x);
    temp->next = p->next;
    p->next = temp;
    return;
}

//xóa node đầu
void deleteFirst(node &head){
    if(head == NULL) return;
    head = head->next;
    return;
}

//xóa node cuối
void deleteLast(node &head){
    if(head == NULL) return;
    node truoc = NULL;
    node sau = head;
    int n = count(head);
    while(sau->next != NULL){
        truoc = sau;
        sau = sau->next;
    }
    if(truoc = NULL){
        head = NULL;
    }
    else {
        truoc->next = NULL;
    }
}

//xóa node ở vị trí pos
void deleteAt(node &head, int pos){
   int n = count(head);
    if(pos < 0 || pos > n + 1){
        cout << "Error !" << endl;
        return;
    }
    node truoc = NULL;
    node sau = head;
    for(int i = 1; i < pos; i++){
        truoc = sau;
        sau = sau->next;
    }
    if(truoc == NULL){
        head = head->next;
    }
    else {
        truoc->next = sau->next;
    }
}

//in ds
void in(node head){
    cout << "-------------------" << endl;
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    node head = NULL;
    while(1){
        cout << "-----MENU-----" << endl;
        cout << "1. Insert First\n";
        cout << "2. Insert Last\n";
        cout << "3. Insert At\n";
        cout << "4. Delete First\n";
        cout << "5. Delete Last\n";
        cout << "6. Delete At\n";
        cout << "7. Print\n";
        cout << "8. Exit\n";
        cout << "Nhap lua chon: ";
        int choice;
        cin >> choice;
        if(choice == 1){
            int x; cout << "Nhap gia tri can them: "; cin >> x;
            insertFirst(head, x);
        } else if(choice == 2){
            int x; cout << "Nhap gia tri can them: "; cin >> x;
            insertLast(head, x);
        } else if(choice == 3){
            int x, pos; 
            cout << "Nhap gia tri can them: "; cin >> x;
            cout << "Nhap vi tri can them: "; cin >> pos;
            insertAt(head, x, pos);
        } else if(choice == 4){
            deleteFirst(head);
        } else if(choice == 5){
            deleteLast(head);
        } else if(choice == 6){
            int pos; 
            cout << "Nhap vi tri can xoa: "; cin >> pos;
            deleteAt(head, pos);
        } else if(choice == 7){
            in(head);
        } else if(choice == 8){
            break;
        } else {
            cout << "Error !\n";
        }
    }
    return 0;
}
