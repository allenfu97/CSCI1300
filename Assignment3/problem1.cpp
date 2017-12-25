#include <iostream>
//​ ​Author:​ ​Allen Fu 
//​ ​Recitation:​ ​Thursday 3:30pm : Favorite TA: Ganesh Byrandurga Gopinath
//​ ​Assignment​ ​3   ​ ​​ ​​
​​​//​ ​Problem​ ​<number>


using namespace std;
//Menu is called from int main and depending on the user input 1,2,3,different story function will be called within.

*/
void story1(void){

string noun,occupation,animal,place;
cout<<"Enter​ ​a​ ​plural​ noun:​"<<endl;
cin>>noun;
cout<<"Enter​ ​an​ ​occupation::​"<<endl;
cin>>occupation;
cout<<"Enter​ ​an​ ​animal​ ​name:​"<<endl;
cin>>animal;
cout<<"Enter​ ​a​ ​place:​​"<<endl;
cin>>place;

cout<<"In the book War of the "<<noun<<", the main character is an anonymous "<<occupation<<" who records the arrival of the "<<animal<<"s in "<<place<<"."<<endl;
}


void story2(void){

string name,country;
cout<<"Enter​ ​a​ ​name:​"<<endl;
cin>>name;
cout<<"Enter​ ​a​ ​state/country:​"<<endl;
cin>>country;

cout<<name<<", I've got a feeling we're not in "<<country<<" anymore."<<endl;
}

void story3(void){

string firstName, relative, verb;
cout<<"Enter​ ​a​ ​first​ ​name:​​"<<endl;
cin>>firstName;
cout<<"Enter​ ​a​ ​relative:​"<<endl;
cin>>relative;
cout<<"Enter​ ​a​ ​verb:​"<<endl;
cin>>verb;
cout<<"Hello. My name is "<<firstName<<". You killed my "<<relative<<". Prepare to "<<verb<<"."<<endl;
}

void menu(void){

string userinput;
cout<<"Which story would you like to play? Enter the number of the story​ ​(1,​ ​2,​ ​or​ ​3)​ ​or​ ​type​ ​q​ ​to​ ​quit:"<<endl;
cin>>userinput;
if (userinput=="q")
    cout<<"good bye"<<endl;
else if (userinput=="1")
    story1();
else if (userinput=="2")
    story2();
else if (userinput=="3")
    story3();
else
    cout<<"Valid choice not selected";

}




int main()
{
    menu();
    return 0;
}
