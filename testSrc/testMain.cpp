#include <AbstractCountry.h>
#include <cstring>
#include <Country.h>
#include <RecuiterContext.h>
#include <Recruits.h>
#include <Soldier.h>
#include <Pilot.h>
#include <Marine.h>
#include <Guardian.h>
#include <Medic.h>
#include <iostream>

int testCountry()
{
    int result = 0;
    std::string name = "TestName";
    auto* country = new Country(name);
    if (country->getName() != name)
        result = -1;

    delete country;
    return result;
}
int testRecruit(Recruits *recruit,RecuiterContext *myContext){//helper function for testRecruits
    int result = 0;
    myContext->setState(recruit);
    if(myContext->getState() != recruit)
        result = -1;
    return result;
}
    
int testRecruits()
{
    int result = 0;
    RecuiterContext *myContext = new RecuiterContext();
    Recruits *rqts[] = { new Soldier, new Pilot(), new Marine(), new Guardian(), new Medic()};
    for(Recruits *r : rqts){
        if(testRecruit(r,myContext) != 0){
            result = -1;
            break;
        }
    }
    for(Recruits *r : rqts){
        delete r;
    }
    return result;
}

// Write your testing functions like this
//int myTest()
//{
//    // Testing code goes here
//}

int main(int argc, const char   ** argv) {
    if (std::strcmp(argv[0], "testCountry") == 0)
        return testCountry();
    if (std::strcmp(argv[0], "testRecruits") == 0)
        return testRecruits();

//    To add a new test
//    if (std::strcmp(argv[0], "myTest") == 0)
//        return myTest();
}