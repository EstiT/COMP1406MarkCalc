#include "COMP1406MarkCalc.cpp"

int main(){

    std::cout<<"The printed result here should equal 100  -> " << calculateYourFinalGrade(100, 100, 0, 100, 100, 100) << std::endl;

    std::cout<<"The printed result here should equal true ('1')  -> " << didYouPassTheCourse(50, 50, 50, 50) << std::endl;

    std::cout<<"The printed result here should equal A+  -> ";

    printLetterGrade(99);

    float testClass [] = {100, 50};

    std::cout<<"The printed result here should be:" <<std::endl;
	std::cout<<"Percentage: 100 Letter Grade: A+" <<std::endl;
	std::cout<<"Percentage: 50 Letter Grade: D-"<<std::endl;
	std::cout<<"75"<<std::endl;
	std::cout<<"---------------------------------"<<std::endl;

	std::cout<<calculateClassStats(testClass, 2) << std::endl;

    return 0;
}
