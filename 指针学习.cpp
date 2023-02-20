#include<stdio.h>
//基础指针 
/*
int main()
{
	int var = 10;	//实际变量的声明 
	int *p;			//指针变量的声明 
	p = &var;		//在指针变量中存储var的地址 
	printf("var变量的地址：%p\n",&var); 
	printf("p中存储的变量地址为：%p\n",p);
	printf("p中变量的值：%d\n",*p);			// * + 指针可以访问指针里存储的内容 
	return 0;
}
*/
//指针的递增运算 
/*
const int MAX = 3;
int main()
{
	int var[] = {10,100,1000};
	int i,*p;
	p = &var[0];		//指针获取var数组地址,或者 p = var 
	for(i = 0;i < MAX;i++){
		printf("储存地址为：var[%d] = %p\n",i,p);
		printf("储存值为：var[%d] = %d\n",i,*p);
		p++;
	} 
	return 0;
}
*/
//指针的递减运算
/*
const int MAX = 3;
int main()
{
	int var[] = {10, 100,1000};
	int i, *p;
	p = &var[MAX-1]; 		//获取数组的最后一位数据的地址，利用&进行取地址操作 
	for(i = MAX-1; i >= 0; i--){
		printf("存储地址为：var[%d] = %p\n",i,p);
		printf("储存值为：var[%d] = %d\n",i,*p);
		p--;
	} 
	return 0;
 } 
 */
 //指针比较运算
 /* 
 const int MAX = 3;
 int main()
 {
 	int var[] = {10,100,1000};
 	int i, *p;
 	p = var;
 	i = 0;
 	while(p <= &var[MAX-1]){
 		printf("存储地址为：var[%d] = %p\n",i,p);
		printf("储存值为：var[%d] = %d\n",i,*p);
		p++;
		i++;
	 }
	 return 0;
  } 
  */
  //指针数组
  /* 
  const int MAX = 3;
  int main()
  {
  	int var[] = {10,100,1000};
  	int i ,*p[MAX];
  	for(i=0;i<MAX;i++){
  		p[i] = &var[i];
	  }
	for(i=0;i<MAX;i++){
		printf("value of var[%d] = %d\n",i,*p[i]);
	}
	return 0;
   } 
   */
   //指针数组存储字符串列表
   /*
   const int MAX = 3;
   int main()
   {
   	char *var[] = { "lili",
	   				"mimi",
					"nana",
				};
   	int i=0;
   	for(i=0;i<MAX;i++){
   		printf("value of var[%d] = %s\n",i,var[i]);
	   }
	   return 0;
	} 
	*/
	//指向指针的指针
	/*
	int main()
	{
		int v,*p1,**p2;
		v = 100;
		p1 = &v;		//获取v的地址
		p2 = &p1;		//获取指针p1的地址 
		printf("var = %d\n",v);
		printf("p1 = %p\n",p1);		//访问指针p1指向的地址 
		printf("p1 = %d\n",*p1);	//访问指针p1里指向的数据 ，即v 
		printf("p2 = %p\n",p2);		//访问指针p2指向的地址 ，同p1指向的地址 
		printf("p2 = %d\n",**p2); 	//访问指针p2里指向的数据，即p2->p1->v 
		return 0; 
	}
	*/
	//指针数组作为参数
	/*
	double getAverage(int *arr,int size)
	{
		int i,sum=0;
		double avg;
		for(i=0;i<size;i++){
			sum += arr[i]; 
		}
		avg = (double)sum/size;
		return avg;
	 } 
	 int main()
	 {
	 	int b[] = {1000,2,3,17,50};
	 	double avg;
	 	avg = getAverage(b,5);
	 	printf("Average value is : %f\n",avg);
	 	return 0;
	 }
	 */
	 
