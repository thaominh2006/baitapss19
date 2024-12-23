#include<stdio.h>
#include<string.h>
typedef struct {
    int stt;
    char fullName[100];
    int age;
    char phone[25];
}Student;
void printStudent(Student students[]);
void sortStudentByName(Student students[]);
int main(){
    Student student[5]={
        {1,"Do Thao Minh",28,"08663263735"},
        {2,"Dao Quang Huy",18,"0992837744"},
        {3,"Vu Xuan Duc",19,"002988838274"},
        {4,"Ngo Quang Anh",19,"0983373663535"},
        {5,"Vu Dinh Kien",500,"02983874747"},
    };
    printf("In sinh vien truoc khi sap xep: \n");
    printStudent(student);
    
    sortStudentByName(student);
    printf("Sau khi sap xep");
    printStudent(student);
    return 0;
}
void printStudent(Student students[]){
    for (int i = 0; i < 5; i++){
        printf("STT: %d\n",students[i].stt);
        printf("fullName: %s\n",students[i].fullName);
        printf("Age: %d\n",students[i].age);
        printf("Phone: %s\n",students[i].phone);
    }
    
};
void sortStudentByName(Student students[]){
    for (int i = 0; i < 4; i++){
        for (int j = i+1; j < 5; j++){
            if (strcmp(students[i].fullName,students[j].fullName)>0){
                Student temp = students[i];
                students[i]=students[j];
                students[j]=temp;
            }
            
        }
        
    }
    
}
