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
 
//Sap xep theo diem so  
void sortByName(struct Student std[], int n){
	struct Student a;
    int i,o;
	for(i=0;i<n-1;i++){
		for(o=0;o<n-i-1;o++){
			if(std[o].grade>std[o+1].grade){
			    a= std[o];
			    std[o]=std[o+1];
				std[o+1]=a; 
			} 
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
	
	//Sap xep dan sach theo diem so  
	sortByName(std,n);
	
	//hien thi thong tin sinh vien sau khi sap xep 
	printf("THONG TIN SINH VIEN SAU KHI SAP XEP LAI THEO DIEM SO LA: "); 
	for(i=0;i<n;i++){
		printf("\nTHONG TIN SINH VIEN CO DIEM SO TANG DAN THU %d\n", i+1);
		printf("\tTen: %s\n", std[i].name);
		printf("\tID: %s\n", std[i].id);
		printf("\tNgay/thang/nam sinh: %d/%d/%d\n", std[i].DOB.day, std[i].DOB.month, std[i].DOB.year);
		printf("\tTuoi: %d\n", std[i].age);
		printf("\tDiem CSLT: %.2f\n", std[i].grade);
	}	 
	
	//Tim kiem sinh vien theo id 
	char idToSearch[10];
	printf("\nNHAP VAO ID MUON TIM KIEM : "); 
	scanf("%s",&idToSearch) ;
	for(i=0;i<n;i++){
		if(strcmp(idToSearch, std[i].id)==0){
	    	printf("\nTHONG TIN SINH VIEN CO ID %s", idToSearch);
		    printf("\n\tTen: %s", std[i].name);
    		printf("\n\tNgay/thang/nam sinh: %d/%d/%d", std[i].DOB.day, std[i].DOB.month, std[i].DOB.year);
	    	printf("\n\tTuoi: %d", std[i].age);
		    printf("\n\tDiem CSLT: %.2f", std[i].grade); // ban dau chi ghi %f thi luc tim kiem , muc grade se hien thi 6 so sau dau cham dong 
		    break; 
		}
		if(i==n-1){
			printf("ID NHAP VAO SAI. VUI LONG NHAP LAI: ");
			scanf("%s",&idToSearch) ; 
		} 
	} 	
    
	return 0; 
} 


