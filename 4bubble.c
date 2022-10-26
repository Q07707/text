#include <stdio.h>
#include <stdbool.h>

void print(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void sort(int *a,int n)
{
	int i,j;
	
	//扫描n-1次，i代表已排序的元素个数
	for(i=0;i<n-1;i++){
		bool flag = true;//默认没有发生交换
		
		//描述两两比较的过程，比较j和j+1
		for(j=0;j<n-1-i;j++){
			//前者大于后者,彼此交换
			if(a[j]>a[j+1]){
				flag = false;//发生交换
				
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
		
		//如果没有发生交换，停止扫描
		if(flag)
			break;
		
		printf("第%d次扫描的结果为:",i+1);
		print(a,n);
	}
}

int main()
{
	int arr[] = {54,47,63,78,17,99,36,82,25};
	printf("排序前:");
	print(arr,9);
	
	sort(arr,9);
	
	printf("排序后:");
	print(arr,9);
	
	return 0;
}