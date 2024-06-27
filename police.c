#include<stdio.h>
int main(){
 int n,scene[30],crime=0,police_available=0,i,j;
 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d",&scene[i]);
 }
 for(j=0;j<n;j++){
  if(scene[j]>0){
  	police_available+=scene[j];
  }
  else{
  	if(police_available==0){
  		crime+=1;
	  }
	else{
		police_available-=1;
	}
  }
}
 printf("%d",crime);
 return 0;
}
