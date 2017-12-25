
//​ ​Author:​ ​<Allen Fu> 
//​ ​Recitation:​ ​<Recitation Tuesday 3:30pm #​ ​and​ ​favorite TA: Ganesh Byrandurga Gopinath>
​//​ ​Assignment​ ​3   ​ ​​ ​​ ​​ ​
// ​Problem​ ​<2> 
#include <iostream>
#include <math.h>

using namespace std;
/*Algorithim Description for problem 2 part A:
Function windChillCalculator takes in the temperature and wind speed as paramaters
and calculated the wind chill which is equal to 35.74+0.6215T-35.75(V^0.16)+0.4275T(V^0.16). To do this calculation, I needed to include the math.h library function
in order to use the pow function for the exponential powers in the equation
I Prompt the user to enter the temperature and wind speed and calls the function windChillCalculator passing in the values and returns windChill
and, the final statement is printed out.
*/

float windChillCalculator(float T, float V){
float windChill=0;
windChill=35.74+(0.6215*T)-35.75*(pow(V,0.16))+0.4275*T*(pow(V,0.16));



return windChill;
}
/* Algorithim Description for Problem 2 B
The function printWindChill takes in the air temperature, the lowest wind speed, the highest wind speed, and the wind speed step as paramaters.
Setting the intial wind speed to be the lowest wind speed, a while loop is used to lopp through every speed
between the lowest wind speed to the highest wind speed printing out for each wind speed and increments by the wind speed step.
Since the function is void, no values will be returned. I call the function in the int main to pass the value to the function and prints out the statements.

*/
void printWindChill(float airTemp, float lowWindspeed, float highWindspeed,float windSpeedstep){

float windSpeed=lowWindspeed;
float windChill=0.0;

while(windSpeed<=highWindspeed){
    windChill=windChillCalculator(airTemp, windSpeed);

cout<<"The wind chill is "<<windChill<<" degrees F for an air temperature of "<<airTemp<<" degrees F and a wind speed​ ​of​ "<<windSpeed<<" mph."<<endl;



    windSpeed=windSpeed+windSpeedstep;


}

}
int main()
{
    cout<<"Part A"<<endl;
    float T,V;
    float windChill=0.0;
    cout<<"Please enter the air temperature:"<<endl;
    cin>>T;
    cout<<"Please enter the wind speed:"<<endl;
    cin>>V;

    windChill=windChillCalculator(T,V);
    cout<<"The wind chill is "<<windChill<<" degrees F."<<endl;


    //Part B

    float airTemp;
    float lowWindspeed;
    float highWindspeed;
    float windSpeedstep;
    cout<<"Part B"<<endl;
    cout<<"Please enter the air temperature:"<<endl;
    cin>>airTemp;
    cout<<"Please enter the low wind speed:"<<endl;
    cin>>lowWindspeed;
    cout<<"Please enter the high wind speed:"<<endl;
    cin>>highWindspeed;
    cout<<"Please enter the wind speed step:"<<endl;
    cin>>windSpeedstep;


    printWindChill(airTemp, lowWindspeed, highWindspeed, windSpeedstep);


    return 0;
}
