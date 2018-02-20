#include "ass0.h"
#include <iostream>
#include <vector>
using namespace std;

int Person::getAge()
{return age;}

void Person::setAge(int theAge)
{age = theAge;}

float Person::getHeight()
{return height;}

void Person::setHeight(float theHeight)
{height = theHeight;}

int main()
{

   vector <Person> pVector;
   Person tempPerson;

   int counter;
   int tempAge;
   float tempHeight;

   for (counter = 1; counter <= 4; counter++){
	cout << "\nEnter age followed by height for person " << counter
              << ": ";
        cin >> tempAge >> tempHeight;
        tempPerson.setAge(tempAge);
        tempPerson.setHeight(tempHeight); 
        pVector.push_back(tempPerson);
        cout << "\nAge: " << pVector[counter-1].getAge() <<
            "Height: " << pVector[counter-1].getHeight();
        //pVector[counter-1]
   }

   return 0;
}

