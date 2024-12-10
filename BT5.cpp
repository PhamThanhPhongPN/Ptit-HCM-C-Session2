#include <stdio.h>


int main(){
	double dai, rong, ChuVi, DienTich;
	printf("Nhap chieu dai hinh chu nhat: ");
	scanf("%lf", &dai);
	printf("Nhap chieu rong hinh chu nhat: ");
	scanf("%lf", &rong);
	if (dai < rong){
		printf("chieu dai phai lon hon chieu rong"); 
	} else {
	ChuVi = (dai + rong)/2;
	DienTich = dai*rong;
	printf("Chu vi hinh chu nhat la %.1lf \n", ChuVi);
	printf("Dien tich hinh chu nhat la %.1lf \n", DienTich);	
	} 
	return 0;
}
