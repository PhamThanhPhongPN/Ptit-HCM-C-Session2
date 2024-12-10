#include <stdio.h>


int main(){
	float PI = 3.14;
	float banKinh, ChuVi, DienTich;
	printf("Nhap ban kinh hinh tron: ");
	scanf("%f", &banKinh);
	ChuVi = 2 * PI * banKinh;
	DienTich = PI * (banKinh*banKinh);
	printf("Chu vi hinh tron la %.1f \n", ChuVi);
	printf("Dien tich hinh tron la %.1f \n", DienTich);
	return 0;
}
