#include <stdio.h>
typedef struct {
    int salary;
    int bonus;
    int deductions;
}employees;
int salary(employees *pe){
    int total = pe->salary + pe->bonus - pe->deductions;
    return total;
}
int main(){
    employees mohsen, maged, mariam;
    printf("Enter information for mohsen");
    scanf("%d %d %d",&mohsen.salary, &mohsen.bonus, &mohsen.deductions);
    printf("Enter information for maged");
    scanf("%d%d%d",&maged.salary, &maged.bonus, &maged.deductions);
    printf("Enter information for mariam");
    scanf("%d%d%d",&mariam.salary, &mariam.bonus, &mariam.deductions);
    int salary_mohsen = salary(&mohsen);
    int salary_maged = salary(&maged);
    int salary_mariam = salary(&mariam);
    int totalsalarys =  salary_mohsen + salary_maged + salary_mariam;
    printf("the total values supplied by the finance team is : %d", totalsalarys);
}