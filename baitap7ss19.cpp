#include<stdio.h>
#include<string.h>
typedef struct{
    int stt;
    char fullName[100];
    int age;
    char phone[20];
} Student;
void deleteStudent(Student students[],int viTri,int *length);
void printStudent(Student students[],int length);
int main(){
    int sttdelete;
    int length=5;
    Student student[5]={
        {1,"Nguyen Duong Phuong Trang",18,"0983266473"},
        {2,"Do Thao Minh",18,"09938338833"},
        {3,"Pham Quoc Khanh",18,"0826647737"},
        {4,"Dao Quang Huy",18,"08636355327"},
        {5,"Tran Duy Thai",18,"0002874355478"},
    };
    printf("Chua xoa phan tu: \n");
    printStudent(student,length);
    printf("Nhap stt can xoa: ");
    scanf("%d",&sttdelete);
    getchar();
    deleteStudent(student,sttdelete,&length);
    printf("Ða xoa phan tu: \n");
    printStudent(student,length);


    
    return 0 ;
}
void deleteStudent(Student students[],int viTri,int *length){
    for(int i = viTri-1; i < *length  - 1; i++){
        students[i] = students[i + 1];
    }
    --*length;

}
void printStudent(Student students[],int length){
    for (int i = 0; i < length; i++){
        printf("STT: %d\n",students[i].stt);
        printf("fullName: %s\n",students[i].fullName);
        printf("Age: %d\n",students[i].age);
        printf("Phone: %s\n",students[i].phone);
    }
    
};
