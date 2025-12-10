#include<stdio.h>
#include<math.h>

int main()
{
float mass , energy , velocity_of_light ,momentum,velocity  ;
printf("Enter the mass :");
scanf("%f",&mass);
printf("Enter the velocity :");
scanf("%f",&velocity);
velocity_of_light = 3*pow(10,8) ;
momentum = mass * velocity  ;
energy = mass *   velocity_of_light * velocity_of_light  ;
printf("The energy of the mass %f is %0.2f \n",mass,energy);
printf("The momentum of the mass %f is %0.2f",mass,momentum);
}

