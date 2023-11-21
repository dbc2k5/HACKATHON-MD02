#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	// khai bao mang 2 chieu
	int n,m;
	printf("Nhap chi so dong cua mang 2 chieu: ");
	scanf("%d",&n);
	printf("Nhap chi so cot cua mang 2 chieu: ");
	scanf("%d",&m);
	int numbers[n][m];
	int cout; // so luong phan tu 
	int max_edge,min_edge; // min max duong bien
	int max_diagonalMain,max_diagonalExtra; // min max duong cheo chinh, duong cheo phu
	int min_diagonalMain,min_diagonalExtra;
	int sumNumbers;
	int isPrime;
	int addCol;
	do{
		//in menu
		printf("\n********MENU********\n");
		printf("1. Nhap gia tri cho mang 2 chieu\n");
		printf("2. In cac gia tri cua mang phan tu theo ma tran\n");
		printf("3. Tinh so luong cac phan tu le chia het cho 5\n");
		printf("4. In ra gia tri nho nhat va lon nhat tren duong bien, duong cheo chinh, duong cheo phu\n");
		printf("5. Su dung thuat toan sap xep lua chon giam dan cac phan tu theo dong cua mang\n");
		printf("6. Tinh tong la cac phan tu nguyen to co trong mang\n");
		printf("7. Su dung thuat toan sap xep chen cac duong cheo phu cua mang tang dan\n");
        printf("8. Nhap gia tri mang 1 chieu gom n phan tu chen vao chi so cot cua mang 2 chieu\n");
        printf("9. Thoat\n");
        printf("Nhap su lua chon cua ban: ");
        int choice; scanf("%d",&choice);
        switch(choice){
        	case 1:
        		printf(" Nhap gia tri vao mang 2 chieu\n");
        		for(int i=0;i<n;i++){
        			for(int j=0;j<m;j++){
        				printf("numbers[%d][%d]=",i,j);
        				scanf("%d",&numbers[i][j]);
					}
				}
        		break;
        	case 2:
        		printf("Gia tri cua mang phan tu theo ma tran la\n");
        		for(int i=0;i<n;i++){
        			for(int j=0;j<m;j++){
        				printf("%d\t",numbers[i][j]);
					}
				printf("\n");
				}
				printf("\n");
        		break;
        	case 3:
        		cout=0;
        		printf("So luong phan tu chia het cho 5 la ");
        		for(int i=0;i<n;i++){
        			for(int j=0;j<m;j++){
        				if(numbers[i][j]%5==0){
        					cout++;
						}
					}
				}
				printf("%d\n",cout);
        		break;
        	case 4:
        		// max min dg bien
        		max_edge=numbers[0][0];
        		min_edge=numbers[0][0];
        		for(int i=0;i<n;i++){
        			for(int j=0;j<m;j++){
        				if(i==0||i==n-1||j==0||j==n-1){
        					if(max_edge<numbers[i][j]){
        						max_edge=numbers[i][j];
							}
							if(min_edge>numbers[i][j]){
								min_edge=numbers[i][j];
							}
						}
					}
				}
				printf("Gia tri phan tu duong bien nho nhat la %d va lon nhat la %d\n",min_edge,max_edge);
				if(n==m){
				
				// max min duong cheo chinh
				max_diagonalMain=numbers[0][0];
				min_diagonalMain=numbers[0][0];
				for(int i=0;i<n;i++){
					for(int j=0;j<n;j++){
						if(i==j){
							if(max_diagonalMain<numbers[i][j]){
								max_diagonalMain=numbers[i][j];
							}
							if(min_diagonalMain>numbers[i][j]){
								min_diagonalMain=numbers[i][j];
							}
						}
					}
				}
				printf("Gia tri phan tu duong cheo chinh nho nhat la %d va lon nhat la %d\n",min_diagonalMain,max_diagonalMain);
				// max min duong cheo phu
				max_diagonalExtra=numbers[0][0];
				min_diagonalExtra=numbers[0][0];
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i+j==n-1){
							if(max_diagonalExtra<numbers[i][j]){
							   max_diagonalExtra=numbers[i][j];
							}
							if(min_diagonalExtra>numbers[i][j]){
				               min_diagonalExtra=numbers[i][j];		
							}
						}
					}
				}
				printf("Gia tri phan tu duong cheo phu nho nhat la %d va lon nhat la %d\n",min_diagonalExtra,max_diagonalExtra);
				
		        }else{
		        	printf("Mang 2 chieu khong co duong cheo chinh va duong cheo phu \n");
				}
        		break;
        	case 5:
        		for(int i=0;i<n;i++){
		            for(int j=0;j<m;j++){
		        	int key = numbers[i][j];
		        	int k=j-1;
		        	while(k>=0 && key > numbers[i][k]){
		        		numbers[i][k+1]=numbers[i][k];
		        		k-=1;
		        	}
		        	numbers[i][k+1]=key;
		        }
			    }
			    printf("Gia tri cac phan tu theo dong giam dan la: \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",numbers[i][j]);
					}
					printf("\n");
				}
			    
        		break;
        	case 6:
        		sumNumbers=0;

				for(int i=0;i < n;i++){
					for(int j=0;j < m;j++){
					isPrime=0;
					for(int k=2;k<numbers[i][j];k++){
						if(numbers[i][j] % k == 0){
							isPrime=1;
							break;
						}
					}
						if(isPrime == 0 && numbers[i][j] >=2){
						sumNumbers+=numbers[i][j];
						}
				}
			}	
				printf("Tong so nguyen to cua mang 2 chieu la: %d\n",sumNumbers);
				break;
        	case 7:
        		if(n==m){
				
        		for(int i=0;i<n;i++){
        			for(int j=0;j<m;j++){
        				
        					
				    }
					}
				
			    }else{
			    	printf("Khong co duong cheo phu trong mang 2 chieu\n");
				}
        		break;
        	case 8:
        		break;
        	case 9:
        		exit(0);
        	default:
        		printf("Vui long nhap tu 1 den 9\n");
		}
	}while(1==1);
}
