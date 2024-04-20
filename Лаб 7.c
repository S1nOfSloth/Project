#include <stdio.h> 
 
struct humen{ 
  char name[30],surname[30]; 
  int year; 
}; 
 
int main(){ 
  int n = 4; 
  struct humen p[n], psorted[n], t; 
  int i,j; 
   
  for( i=0; i < n; i++){ 
    printf("Введите имя, фамилию и год рождения %d человека: ", i+1); 
    scanf("%s %s %d", p[i].name, p[i].surname, &p[i].year); 
  } 
  
  for ( i = 0; i < n; i++){ 
    psorted[i] = p[i]; 
  } 
 
    for ( i = 0; i < n-1; i++){ 
        for ( j = 0; j < n-i-1; j++) { 
            if (psorted[j].year > psorted[j+1].year ) { 
                t = psorted[j]; 
                psorted[j] = psorted[j+1]; 
                psorted[j+1] = t; 
            } 
        } 
    } 
   
  printf("\nРезультат: \n"); 
  for ( i=0; i<n; i++){ 
    printf("%s %s %d \n", psorted[i].name, psorted[i].surname, psorted[i].year); 
  } 
   
  return 0;   
}
