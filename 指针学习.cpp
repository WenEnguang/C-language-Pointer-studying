#include<stdio.h>
//����ָ�� 
/*
int main()
{
	int var = 10;	//ʵ�ʱ��������� 
	int *p;			//ָ����������� 
	p = &var;		//��ָ������д洢var�ĵ�ַ 
	printf("var�����ĵ�ַ��%p\n",&var); 
	printf("p�д洢�ı�����ַΪ��%p\n",p);
	printf("p�б�����ֵ��%d\n",*p);			// * + ָ����Է���ָ����洢������ 
	return 0;
}
*/
//ָ��ĵ������� 
/*
const int MAX = 3;
int main()
{
	int var[] = {10,100,1000};
	int i,*p;
	p = &var[0];		//ָ���ȡvar�����ַ,���� p = var 
	for(i = 0;i < MAX;i++){
		printf("�����ַΪ��var[%d] = %p\n",i,p);
		printf("����ֵΪ��var[%d] = %d\n",i,*p);
		p++;
	} 
	return 0;
}
*/
//ָ��ĵݼ�����
/*
const int MAX = 3;
int main()
{
	int var[] = {10, 100,1000};
	int i, *p;
	p = &var[MAX-1]; 		//��ȡ��������һλ���ݵĵ�ַ������&����ȡ��ַ���� 
	for(i = MAX-1; i >= 0; i--){
		printf("�洢��ַΪ��var[%d] = %p\n",i,p);
		printf("����ֵΪ��var[%d] = %d\n",i,*p);
		p--;
	} 
	return 0;
 } 
 */
 //ָ��Ƚ�����
 /* 
 const int MAX = 3;
 int main()
 {
 	int var[] = {10,100,1000};
 	int i, *p;
 	p = var;
 	i = 0;
 	while(p <= &var[MAX-1]){
 		printf("�洢��ַΪ��var[%d] = %p\n",i,p);
		printf("����ֵΪ��var[%d] = %d\n",i,*p);
		p++;
		i++;
	 }
	 return 0;
  } 
  */
  //ָ������
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
   //ָ������洢�ַ����б�
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
	//ָ��ָ���ָ��
	/*
	int main()
	{
		int v,*p1,**p2;
		v = 100;
		p1 = &v;		//��ȡv�ĵ�ַ
		p2 = &p1;		//��ȡָ��p1�ĵ�ַ 
		printf("var = %d\n",v);
		printf("p1 = %p\n",p1);		//����ָ��p1ָ��ĵ�ַ 
		printf("p1 = %d\n",*p1);	//����ָ��p1��ָ������� ����v 
		printf("p2 = %p\n",p2);		//����ָ��p2ָ��ĵ�ַ ��ͬp1ָ��ĵ�ַ 
		printf("p2 = %d\n",**p2); 	//����ָ��p2��ָ������ݣ���p2->p1->v 
		return 0; 
	}
	*/
	//ָ��������Ϊ����
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
	 
