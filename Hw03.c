<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

struct Employee{
	char name[50];
	char id[10];
	char position[100]; 
	float salary; 
};

//Them nhan vien  
void addEmployee(int numberquantityAE,struct Employee emp[], int n){
	int i;
	for(i=n;i<n+numberquantityAE;i++){
		printf("\nNHAP VAO THONG TIN NHAN VIEN %d", i+1);
		printf("\n\tTen: ");
		getchar(); 
		fgets(emp[i].name,50,stdin);
		printf("\n\tID: ");
		scanf("%s", &emp[i].id);
		printf("\n\tChuc vu : ");
		getchar();
		fgets(emp[i].position,100,stdin); 
		printf("\n\tLuong : ");
		scanf("%f", &emp[i].salary);
	} 
} 

//xoa 1 nhan vien theo id  
void deleteEmployee(char iddeleteAE[],struct Employee emp[], int *n){
	int i,o;
	for(i=0;i<*n;i++){
		if(strcmp(iddeleteAE,emp[i].id)==0){
			for(o=i;o<*n-1;o++){
				emp[o]=emp[o+1]; // dung &emp[o]=&emp[o+1] se gay ra loi bien dich  , them n--  
			} 
			break; 
		} 
	} 
	(*n)--;  //*n-- bi loi  
}  

//Sap xep theo ten 
void sortByName(struct Employee emp[], int n){
	struct Employee a;
    int i,o;
	for(i=0;i<n-1;i++){
		for(o=0;o<n-i-1;o++){
			if(strcmp(emp[o].name,emp[o+1].name)>0){
			    a= emp[o];
			    emp[o]=emp[o+1];
				emp[o+1]=a; 
			} 
		} 
	}  
 } 
 
int main(){
	//nhap tu ban phim so sinh vien muon quan ly
	unsigned int n;
	printf("So nhan vien can quan ly la: ");
	scanf("%u", &n);
	
	//nhap va hien thi thong tin cua n sinh vien  
	struct Employee emp[n]; 
	int i;
	for(i=0;i<n;i++){
		printf("\nNHAP VAO THONG TIN NHAN VIEN %d", i+1);
		printf("\n\tTen: ");
		getchar(); 
		fgets(emp[i].name,50,stdin);
		printf("\n\tID: ");
		scanf("%s", &emp[i].id);
		printf("\n\tChuc vu : ");
		getchar();
		fgets(emp[i].position,100,stdin); 
		printf("\n\tLuong : ");
		scanf("%f", &emp[i].salary);
	}
	
    //Them nhan vien  
    unsigned int numberquantityAE;
    printf("Nhap vao so luong nhan vien muon them: ");
	scanf("%u", &numberquantityAE) ;
    addEmployee(numberquantityAE,emp,n);
	
	//xoa 1 nhan vien 
	char iddeleteAE[10];
    printf("Nhap vao id cua mot nhan vien muon xoa : ");
	scanf("%u", &iddeleteAE) ; 
    deleteEmployee(iddeleteAE,emp,&n);
    
    //Sap xep 
	sortByName(emp, n);
    
	return 0; 
} 

=======
#include <stdio.h>
#include <string.h>

struct Employee{
	char name[50];
	char id[10];
	char position[100]; 
	float salary; 
};

//Them nhan vien  
void addEmployee(int numberquantityAE,struct Employee emp[], int n){
	int i;
	for(i=n;i<n+numberquantityAE;i++){
		printf("\nNHAP VAO THONG TIN NHAN VIEN %d", i+1);
		printf("\n\tTen: ");
		getchar(); 
		fgets(emp[i].name,50,stdin);
		printf("\n\tID: ");
		scanf("%s", &emp[i].id);
		printf("\n\tChuc vu : ");
		getchar();
		fgets(emp[i].position,100,stdin); 
		printf("\n\tLuong : ");
		scanf("%f", &emp[i].salary);
	} 
} 

//xoa 1 nhan vien theo id  
void deleteEmployee(char iddeleteAE[],struct Employee emp[], int *n){
	int i,o;
	for(i=0;i<*n;i++){
		if(strcmp(iddeleteAE,emp[i].id)==0){
			for(o=i;o<*n-1;o++){
				emp[o]=emp[o+1]; // dung &emp[o]=&emp[o+1] se gay ra loi bien dich  , them n--  
			} 
			break; 
		} 
	} 
	(*n)--;  //*n-- bi loi  
}  

//Sap xep theo ten 
void sortByName(struct Employee emp[], int n){
	struct Employee a;
    int i,o;
	for(i=0;i<n-1;i++){
		for(o=0;o<n-i-1;o++){
			if(strcmp(emp[o].name,emp[o+1].name)>0){
			    a= emp[o];
			    emp[o]=emp[o+1];
				emp[o+1]=a; 
			} 
		} 
	}  
 } 
 
int main(){
	//nhap tu ban phim so sinh vien muon quan ly
	unsigned int n;
	printf("So nhan vien can quan ly la: ");
	scanf("%u", &n);
	
	//nhap va hien thi thong tin cua n sinh vien  
	struct Employee emp[n]; 
	int i;
	for(i=0;i<n;i++){
		printf("\nNHAP VAO THONG TIN NHAN VIEN %d", i+1);
		printf("\n\tTen: ");
		getchar(); 
		fgets(emp[i].name,50,stdin);
		printf("\n\tID: ");
		scanf("%s", &emp[i].id);
		printf("\n\tChuc vu : ");
		getchar();
		fgets(emp[i].position,100,stdin); 
		printf("\n\tLuong : ");
		scanf("%f", &emp[i].salary);
	}
	
    //Them nhan vien  
    unsigned int numberquantityAE;
    printf("Nhap vao so luong nhan vien muon them: ");
	scanf("%u", &numberquantityAE) ;
    addEmployee(numberquantityAE,emp,n);
	
	//xoa 1 nhan vien 
	char iddeleteAE[10];
    printf("Nhap vao id cua mot nhan vien muon xoa : ");
	scanf("%u", &iddeleteAE) ; 
    deleteEmployee(iddeleteAE,emp,&n);
    
    //Sap xep 
	sortByName(emp, n);
    
	return 0; 
} 

>>>>>>> a45ca7c0bada4713a0cdfbe50ae93907860bb7b7
