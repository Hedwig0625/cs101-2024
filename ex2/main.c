#include <stdio.h>
#include <string.h>

typedef struct employee {
  int id;
  char name[10];
  int age;
  float salary;
  }employee_t;

  void emp_info(employee_t emp){
    printf("emplyee id =%d\n",emp.id);
    printf("emplyee name =%s\n",emp.name);
    printf("emplyee age =%d\n",emp.age);
    printf("emplyee salary =%02f\n\n",emp.salary);
  }

  int emp_average_age(employee_t emp[],int n){
    int sum =0;
    for(int i=0;i<3;i++){
      sum+emp[i].age;
    }
    printf("average age:%d\n",sum/3)
  }

  void emp_writefile(employee_t emp[],int n){
    FILE * fp = fopen("employee.bin","wb+");
    for(int i=0;i<n;i++){
      fwrite(&emp[i],sizeof(employee_t),1,fp);
    }
    fclose(fp);
  }

  void emp_readfile(employee_t emp[]){
    FILE * fp = fopen("employee.bin","rb");
    int i = 0;
    while(fread(&emp[i],sizeof(employee_t),1,fp)){
      printf("[%d] %d %s\n", i,emp[i].id,emp[i].name);
      i++;
    }
    fclose(fp);
  }

int main(){
  employee_t my_emp;
  printf("%d\n",(int)sizeof(employee_t));
  
  return 0;
}
