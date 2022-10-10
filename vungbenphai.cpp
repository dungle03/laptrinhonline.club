#include<stdio.h>
int main(){
	double a[13][13];
	char k;
	scanf("%c",&k);
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			scanf("%lf", &a[i][j]);
		}
	}
	double sum = 0;
	for(int i = 1; i <= 5; i++){
		for(int j = 12-i; j <= 11; j++){
			sum += a[i][j];
		}
	}
	for(int i = 10; i >= 6; i--){
		for(int j = i+1; j <= 11; j++){
			sum += a[i][j];
		}
	}
	if(k == 'S') printf("%.1lf", sum);
	if(k == 'M') printf("%.1lf", sum/30);
	return 0;
}