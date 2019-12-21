#include <stdio.h>
int main() {
#define N 20
int arr[N];


int index_first_negative(int d){
	for(int i = 0; i < d; i++){
		if(arr[i] < 0){
		return i;
		}
	}
}

int index_last_negative(int d){
	for(int i = d; i > 0; i--){
		if(arr[i] < 0){
		return i;
		}
	}
}

int multi_between_negative(int d){
	int y = 1;
	for(int i = index_first_negative(d); i < index_last_negative(d); i++){
		y=y*arr[i];
	}
	return y;
}

int multi_before_and_after_negative(int d){
	int k = 1;
	for(int i = 0; i < d; i++){
		if(i >=index_first_negative(d) && i < index_last_negative(d)){
			continue;
		}
		k=k*arr[i];
	}
	return k;
}

	int c;
	int d = 0;
	char v;

	scanf("%d", &c);
	for (int i = 0; i < N; i++){
		scanf("%c", &v);
		if((char)v == '\n'){
			break;
		}
		scanf("%d", &arr[i]);
		d++;
	}
	switch(c){
		case 0 :
			printf("%d\n",index_first_negative(d));
			break;
		case 1 :
			printf("%d\n",index_last_negative(d));
			break;
		case 2 :
			printf("%d\n",multi_between_negative(d));
			break;
		case 3 :
			printf("%d\n",multi_before_and_after_negative(d));
			break;
		default:
			printf("Данные некорректны");
	}

	return 0;
}
