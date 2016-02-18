//Collier, R. "Lectures Notes for COMP1406C - Introduction to Computer Science II" [PDF documents].
//Retrieved from cuLearn: https://www.carleton.ca/culearn/ (Winter 2016).

#include "COMP1406W16A1.h"


float calculateYourFinalGrade(float avgT, float avgA, float markQ1, float markQ2, float markQ3, float markF){
    int quiz2;
    int quiz1;
    //use an if-else if-if statement to determine the highest two quiz marks
    //save the highest two quiz marks as quiz1 and quiz2
    if (markQ1<=markQ2 and markQ1<=markQ3) {
        quiz1=markQ2;
        quiz2=markQ3;}
    else if (markQ2<=markQ3 and markQ2<=markQ1){
        quiz1=markQ1;
        quiz2=markQ3;}
    else{
        quiz1=markQ1;
        quiz2=markQ2;}
    //calculate the average quiz mark using the two highest quiz grades
    float avgQ=(quiz1+quiz2)/2;
    //calculate the grade using the weights specified
    //Tutorials (10 @ 1% each) 10% Assignments (10 @ 3% each) 30%
    //Quizzes (best 2 of 3 @ 10% each) 20% Final Examination 40%
    float grade=avgT*0.1+ avgA*0.3+ avgQ*0.2+markF*0.4;
    return grade;
	}


bool  didYouPassTheCourse(float avgT, float avgQ, float avgA, float markF){
    bool result; 
    //calculate part of the grade based on the quiz and exam mark
    float partgrade=avgQ*0.2+markF*0.4; //out of 60
    // check if the part grade fails, is it less than 30
    if (partgrade<30){
    //if the part grade is less than 30 (50%) then set the result to be false (fail)
        result = false;
	}
    //calculate the grade percentage
    float grade= avgQ*0.2+markF*0.4+avgA*0.3+avgT*0.1;
    //if the final grade is less than 50 then the student failed
    if (grade<50){
        result = false;//set the result to false
		}
    else{//otherwise
        result=true;//the student passed
		}
    return result ;//result (true==1=pass,false==0=fail)
	}


void  printLetterGrade(float mark){
    std::string lettermark=""; 
    //using a if-else if-else statment, check what percentage range the
    //inputed mark is and assign the corresonding lettergrade to the variable lettermark
    if (mark>=90){
        lettermark="A+";
	}
    else if (mark>=85){
        lettermark="A ";
	}
    else if (mark>=80){
        lettermark="A-";
	}
    else if (mark>=77){
        lettermark="B+";
	}
    else if (mark>=73){
        lettermark="B ";
	}
    else if (mark>=70){
        lettermark="B-";
	}
    else if (mark>=67){
        lettermark="C+";
	}
    else if (mark>=63){
        lettermark="C";
	}
    else if (mark>=60){
        lettermark="C-";
	}
    else if (mark>=57){
        lettermark="D+";
	}
    else if (mark>=53){
        lettermark="D";
	}
    else if (mark>=50){
        lettermark="D-";
	}
	else{
		lettermark="F";
		}
	//print the lettermark
    std::cout<<lettermark<<std::endl;
	}


float calculateClassStats(float marks[], int length){
    float total; 
    //for loop that will run through every item in marks array
    for (int i=0; i<length; ++i ){
        //accumulate values in the marks array
		total=total+marks[i]; 
        std::cout<<"Percentage: "; //display percentage
        std::cout<<marks[i];
        std::cout<<" Letter Grade: ";//display letter grade
        printLetterGrade(marks[i]); //use letter grade function to calculate letter grade
    	}
	float classavg=total/length;//calculate class average by dividing the total by the number of entries

    return classavg;//return class average as a percentage
	}