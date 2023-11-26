#include <stdio.h>
#include <string.h>

struct dateOfBirth{
	int day;
	int month;
	int year; 
}; 
struct Student{
	char name[50];
	char id[10];
	struct dateOfBirth DOB; 
	int age;
	float grade; 
};
 
//Sap xep theo ten 
void sortByName(struct Student std[], int n){
	struct Student a;
    int i,o;
	for(i=0;i<n-1;i++){
		for(o=0;o<n-i-1;o++){
			if(strcmp(std[o].name,std[o+1].name)>0){
			    a= std[o];
			    std[o]=std[o+1];
				std[o+1]=a; 
			} 
		} 
	}  
 } 
 
//Tim kiem theo id 
void  searchByName(struct Student std[], int n,char idToSearch[]){ // chi ghi char idToSearch thi loi do may hieu idToSearch la so nguyen  
	int i;
	for(i=0;i<n;i++){
		if(strcmp(idToSearch, std[i].id)==0){
	    	printf("\nTHONG TIN SINH VIEN CO ID %s", idToSearch);
		    printf("\n\tTen: %s", std[i].name);
    		printf("\n\tNgay/thang/nam sinh: %d/%d/%d", std[i].DOB.day, std[i].DOB.month, std[i].DOB.year);
	    	printf("\n\tTuoi: %d", std[i].age);
		    printf("\n\tDiem CSLT: %.2f", std[i].grade); // ban dau chi ghi %f thi luc tim kiem , muc grade se hien thi 6 so sau dau cham dong 
		    break; 
		}
	} 
} 

int main(){
	//nhap tu ban phim so sinh vien muon quan ly
	unsigned int n;
	printf("So sinh vien muon quan ly la: ");
	scanf("%u", &n);
	
	//nhap va hien thi thong tin cua n sinh vien  
	struct Student  std[n]; 
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
	
	//Sap xep dan sach theo ten 
	sortByName(std,n);
	
	//Tim kiem sinh vien theo id 
	char idToSearch[9];
	printf("Nhap vao id muon tim kiem : ");
	scanf("%s",&idToSearch) ;
	searchByName(std,n,idToSearch);
    
	return 0; 
} 

