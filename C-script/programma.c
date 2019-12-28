#include <stdio.h>

int main()

{
double Runtime_c= 0.067526;
double Runtime_L2= 0.0161544;
double Subthreshold_c=1.37393;
double Subthreshold_L2=0.00472789 ;
double Gate_c=0.00967206;
double Gate_L2=0.000571604;
double sim_sec=0.262355 ;
double Area_c=9.33944;
double Area_L2=7.0038 ;
double EDAP=((Runtime_c + Runtime_L2) + (Subthreshold_c + Subthreshold_L2) + (Gate_c + Gate_L2))*sim_sec*sim_sec*(Area_c + Area_L2);
printf("EDAP= %f",EDAP);
return 0;
}
