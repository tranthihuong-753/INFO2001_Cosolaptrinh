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
	
	//nhap va hien thi thong tin cua n sinh vien  
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
	int z; 
	do{ 
	    printf("NHAP VAO ID CUA SINH VIEN MUON CAP NHAT: ");
	    scanf("%s", &idToUpdate); 
		for(i=0;i<n;i++){
    	    if(strcmp(idToUpdate, std[i].id)==0){
		        printf("\n\tTuoi: ");
	    	    scanf("%d", &std[i].age);
		        printf("\n\tDiem CSLT: ");
		        scanf("%f", &std[i].grade); 	
	        }   
        }
		printf("BAN MUON THAY DOI THONG TIN NUA KHONG? CO THI NHAP VAO '1', KHONG THI NHAP VAO '0'"); 
		printf("\n\t:");  
		scanf("%d", &z); 
	}while(z==1) ; 
    
    //hien thi thong tin sinh vien sau khi cap nhat 
    printf("THONG TIN SINH VIEN SAU KHI CAP NHAT :");
	for(i=0;i<n;i++){ 
		printf("\n\tTHONG TIN SINH VIEN %d", i+1);
		printf("\n\t\tTen: %s",std[i].name);
		printf("\n\t\tID: %s", std[i].id);
		printf("\n\t\tNgay/thang/nam sinh: %d/%d/%d", std[i].DOB.day, std[i].DOB.month, std[i].DOB.year);
		printf("\n\t\tTuoi: %d", std[i].age);
		printf("\n\t\tDiem CSLT: %.2f", std[i].grade);
	} 
    
	return 0; 
} 
