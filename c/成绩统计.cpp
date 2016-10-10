#include<stdio.h> 
#define N 2
typedef struct {
    char name[20];
    int score[3];
} Student;
//    输入一个学生的数据
Student* student_input(Student *pStudent){
	scanf("%s %d &d %d",pStudent->name,&pStudent->score[1],&pStudent->score[2],&pStudent->score[3]);
	return pStudent;
}
//    输出一个学生的数据，包括平均成绩
void student_print(const Student *pStudent){
	printf("%s\t%d\t&d\t%d",pStudent->name,pStudent->score[1],pStudent->score[2],pStudent->score[3]);
}
	
//    计算一个学生的平均成绩
double student_average(const Student *pStudent){
	return pStudent->score[1]+pStudent->score[2]+pStudent->score[3])/3.0;
}	    
//    获得学生的一个成绩
int student_get_score(const Student *pStudent, int index){
	return  pStudent->score[index];
} 

int main(){
	Student a[N];
	Student* p;
	int i,j,min[3]={5,5,5},max[3]={0},t;
	double ave[N],aver[3];
	
	for (i=0;1<N;i++){
		p = &a[i];
		student_input(p);
	}	
	for (i=0;1<N;i++){
		p = &a[i];
		ave[i]=student_average(p);
	}
	for (j=0;1<3;i++){
		t = 0;
		for (i=0;1<N;i++){
			if(max[j]<a[i].score[j])
				max[j] = a[i].score[j];
			if(min[j]>a[i].score[j])
				min[j]= a[i].score[j];	
			t += a[i].score[j];
		}
		aver[j]=t/3.0;
	}
	for (i=0;1<N;i++){
		p = &a[i];
		printf("%d\t",i);
		student_print(p);
		printf("\t%f\n",ave[i])	;	
	}	
	printf("\taverage\t%f\t%f\t%f\n",aver[1],aver[2],aver[3]);
	printf("\tmax\t%d\t%d\t%d\n",max[1],max[2],max[3]);
	printf("\tmin\t%d\t%d\t%d\n",min[1],min[2],min[3]);	
}
