#include<iostream>

using namespace std;

/*第一个循环是表示一共冒泡n-1次，而内层循环是从头开始冒泡*/
void BubbleSort(int a[], int n) {
	for(int i=n-1; i>1; i--) {
		for(int j=0; j<i; j++) {
			/*swap*/
		}
	}
}
复杂度O(n^2)


/*选择排序，一共只需要选择n-1次即可，内层循环是当从i+1开始比较*/
void SelectSort(int a[], int n) {
	for(int i=0; i<n-1; i++) {
		min =  i;
		for(int j=i+1; j<n; j++) {
			/*min = j*/ 
		}

		if(i != min) {
			//找到更小的值了，交换
			/*swap*/
		}
	}
}



void InsertSort(int a[], int n) {
	for(int i=1; i<n; i++) {
		int temp_value = a[i];
		int pos = i;
		for(int j=i-1; j>=0 && a[j]>temp_value; j--) {
			a[j+1] = a[j];
		}
		a[j+1] = temp_value;
	}
}
//时间复杂度还是O(n^2)

void QuickSort(int a[], int left, int right) {
	if(left < right) {
		
	}
}


