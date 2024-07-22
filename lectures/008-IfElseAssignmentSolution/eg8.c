#include<stdio.h>
int main(){
int p,c,m,h,e,z,per,t;
z=0;
printf("Enter Physics Marks (0-100) :");
scanf("%d", &p);
if(p>100 || p <0){
printf("Invalid Input");
return 0;
}else{
if(p<33){
z++;
}
}

printf("Enter Chemistry Marks (0-100) :");
scanf("%d", &c);
if(c>100 || c <0){
printf("Invalid Input");
return 0;
}else{
if(c<33){
z++;
}
}

printf("Enter Maths Marks (0-100) :");
scanf("%d", &m);
if(m>100 || m <0){
printf("Invalid Input");
return 0;
}else{
if(m<33){
z++;
}
}

printf("Enter English Marks (0-100) :");
scanf("%d", &e);
if(e>100 || e <0){
printf("Invalid Input");
return 0;
}else{
if(e<33){
z++;
}
}

printf("Enter Hindi Marks (0-100) :");
scanf("%d", &h);
if(h>100 || h <0){
printf("Invalid Input");
return 0;
}else{
if(h<33){
z++;
}
}

if(z == 0){
printf("Result : Pass\n");
t = p+c+m+e+h;
printf("Total : %d\n", t );
per = t/5;
printf("Precent : %d\n", per);
if(per>= 60){
printf("Division: First");
}else{
if(per>=45){
printf("Division: Second");

}else{
printf("Division: Third");

}
}

}else{
if(z == 1){
printf("Result : Compartment\n");
return 0;
}else{
printf("Result : Fail");
return 0;
}
}
return 0;
}