//chapter 5
//conditional strucures
//
//
//
//control structure
//control the flow of execution of a program
//
//types: three
//1-sequential str:execute teh statement in same order
//2-conditional /descion making or selection
//3-iterative/repetation/loop: execute a statement or set of statement repeatdly for a specific number of a time
//types:
//	while
//	do while 
//	for
//	
//	
//	
//	
//	
//	
//	
//	
//	
// Relational operator/conditional operator /comparsion operator	
//   used to specify the condition in program 
//   it compare two values	
//   >
//   <
//   ==
//   >=
//   <=
//   !=
//
//
//
//relational expression
//a type of expression that consist of constant, variable, and relatonal operator 
//it is decisions based on the condition
//true or false
//
//
//if 
//if else
//if else if
//nested if 
//switch: it is another conditional structure 
//it can be easily when ther are many choices available and one one should be executed  
//
//jha value mil jae baqi sab skip 



//compound condition
//a type of comparision  in which more thn one conditions are evaluated
//logical operator
//used to evaluate  compound conditions  or reverse the logic of anm expression
//and &&
//or ||
//not !

//convert cl to fh temperature and vice versa by switch

//#include<iostream>
//using namespace std;
//int main()
//{
//	float cl,fh;
//	int choice;
//	cout<<"1. Farenheight to centigrade "<<endl;
//	cout<<"2. centigrade to farenheight "<<endl;
//	cout<<"eneter your choice ";
//	cin>>choice;
//	switch(choice)
//	{
//		case 1:
//			cout<<"enter temperature to farenheight ";
//		    cin>>fh;
//		    cl=(fh-32)/1.8;
//			cout<<"temperatue in fh are "<<cl;
//			break;
//			
//		case 2:
//		cout<<"enter temperature to celcius  ";
//	    cin>>cl;
//		fh=(cl*1.8)+32;
//		cout<<"temperature in celcius are "<<fh;
//		break;
//	
//	default:
//		cout<<"invalid choice";
//	}
//}




//convert cl to fh temperature and vice versa by if  else if
//#include<iostream>
//using namespace std;
//int main(){
//	float fh,cl;
//	int choice;
//	cout<<"1. Farenheight to centigrade "<<endl;
//	cout<<"2. centigrade to farenheight "<<endl;
//	cout<<"eneter your choice ";
//	cin>>choice;
//	if(choice==1){
//		cout<<"enter temperauure to farenheight "<<endl;
//		cin>>fh;
//		cl=(fh-32)/1.8;
//		cout<<"temp in celcius "<<cl<<endl;
//		}
//    else if(choice==2){
//	cout<<"enter temperauure to celcius "<<endl;
//		cin>>cl;
//		fh=(cl*1.8)+32;
//		cout<<"temp in celcius "<<fh<<endl;
//		}
//	else{
//		cout<<"invalid choice";
//	}
//		return 0;
//}






//diff between if else if and switch

//
//if else if   switch
//1- it can set for equality and for logical expression
//1- switch can only for the equality 
//
//2-multiple expression for multiple choices
//2-single segment for multiple choices
//
//3-chech a range of value
//3-cannot check a range of value
//
//4-less compact thaan switch  
//more compact than if else if
//
//it can evaluate int float other
//it can only evaluate for character and integer



//
//conditional operator
//
//return one of two value based on the result of the condition
//
//syntax : 
//condition ? expression 1 : expression  2;

//#include<iostream>
//using namespace std;
//int main()
//{
//	int marks;
//	cout<<"enter the marks";
//	cin>>marks;
//	cout<<"Result is "<<(marks > 40 ?"pass" : "fail" );
//}



//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"enter the integer";
//	cin>>n;
//	cout<<"Result is "<<(n%2==0   ? "Even" : "odd" );
//}







// goto loop

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n=1;
//	loop:
//	cout<<n<<"c++"<<endl;
//    n++;
//    if(n<=5)goto loop;
//    cout<<"end of programm";
//    	
//}



















