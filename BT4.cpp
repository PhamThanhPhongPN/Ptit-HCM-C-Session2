#include <stdio.h>

 int main(){
 	double canh, ChuVi, DienTich;
 	printf("Canh cua hinh vuong la: ");
 	scanf("%lf", &canh);
 	
 	if (canh <= 0){
 		printf("canh hinh vuong phai lon hon 0");
	 } else {
	 	DienTich = canh*canh;
 	ChuVi = canh*4;
 	printf("Chu vi hinh vuong la %.1lf \n", ChuVi);
 	printf("Dien tich hinh vuong la %.1lf \n", DienTich);
	 }
	 
 	return 0;
 }
