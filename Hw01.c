#include <stdio.h>
#include <string.h>

struct dateOfBirth{
	int day;
	int month;
	int year; 
}; 
struct Student{
	
	char name[50];
	char id[9];
	struct dateOfBirth DOB; 
	int age;
	float grade; 
};


int main(){
	//nhap tu ban phim so sinh vien muon quan ly
	unsigned int n;
	printf("So sinh vien muon quan ly la: ");
	scanf("%u", &n);
	
	//nhap thong tin cua n sinh vien  
	struct Student  std[5]; 
	int i;
	for(i=0;i<n;i++){
		printf("\nNHAP VAO THONG TIN SINH VIEN %d", i+1);
		printf("\n\tTen: ");
		getchar(); 
		fgets(std[i].name,50,stdin);
		printf("\n\tID: ");
		scanf("%s", &std[i].id);
		printf("\n\tNgay/thang/nam sinh: ");
		scanf("%d/%d/%d", &std[i].DOB.day, &std[i].DOB.month, &std[i].DOB.year);
		printf("\n\tTuoi: ");
		scanf("%d", &std[i].age);
		printf("\n\tDiem CSLT: ");
		scanf("%f", &std[i].grade); 
	}
	
	//cap nhat thong tin sinh vien 
	char idToUpdate[9]; 
	printf("NHAP VAO ID CUA SINH VIEN MUON CAP NHAT: ");
	scanf("%s", &idToUpdate); 
	for(i=0;i<n;i++){
    	if(strcmp(idToUpdate, std[i].id)==0){
		printf("\n\tTen: ");
		getchar(); 
		fgets(std[i].name,50,stdin);
		printf("\n\tID: ");
		scanf("%s", &std[i].id);
		printf("\n\tNgay/thang/nam sinh: ");
		scanf("%d/%d/%d", &std[i].DOB.day, &std[i].DOB.month, &std[i].DOB.year);
		printf("\n\tTuoi: ");
		scanf("%d", &std[i].age);
		printf("\n\tDiem CSLT: ");
		scanf("%f", &std[i].grade); 	
	    }   
    } 
    
    //hien thi thong tin sinh vien sau khi cap nhat 
	for(i=0;i<n;i++){
		printf("\nTHONG TIN SINH VIEN %d", i+1);
		printf("\n\tTen: %s",std[i].name);
		printf("\n\tID: %s", std[i].id);
		printf("\n\tNgay/thang/nam sinh: %d/%d/%d", std[i].DOB.day, std[i].DOB.month, std[i].DOB.year);
		printf("\n\tTuoi: %d", std[i].age);
		printf("\n\tDiem CSLT: %f", std[i].grade);
	} 
    
	return 0; 
} 
