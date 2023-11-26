#include <stdio.h>
#include <string.h>

struct Student{
	char name[50];
	float point; 
};  

int main(){
	unsigned int quantityStudent;
	printf("NHAP VAO SO LUONG SINH VIEN TRONG LOP : ");
	scanf("%u", &quantityStudent); 
	
	struct Student std[quantityStudent];
	
	int i;
	//nhap vao ten va diem cua tung sinh vien  
	for(i=0;i<quantityStudent;i++){
		printf("NHAP VAO THONG TIN VIEN %d: ", i+1);
		printf("\n\tTen: ");
		getchar();
		fgets(std[i].name,50,stdin);
		printf("\n\tDiem CSLT: ");
		scanf("%f", &std[i].point); 
	} 
	
	//tinh va in ra diem trung binh
	float s=0.0;
	for(i=0;i<quantityStudent;i++){
		 s+=std[i].point; 
	}	 
	printf("Diem trung binh lop 23IT4 la: %.2f ", s/quantityStudent);
	 
	return 0; 
} 
