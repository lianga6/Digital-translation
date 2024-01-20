#include <iostream>
#include <string>
using namespace std;
const string num1[]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
const string num2[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
string liangwei(int a){
 string english;
   if(a<20){
     english=num1[a];
   }
   if(a>19&&a<100){ 
    int b,c;
    b=a/10;
    c=a%10;
    if(c!=0){
    english=num2[b]+"-" + num1[c];
   }
    if(c==0){
     english=num2[b];
 }
   }
   
   return english; 
}/*构造一个两位数的函数，主要为了解决像twenty-one这样的，为下面三位数函数做基础*/ 
string sanwei( int a){
    string english;
    if(a<100){
     english=liangwei(a);
    }
 if(a>99&&a<1000){
    int b,c;
    b=a/100;
    c=a%100;
    if(c!=0){
     english=num1[b]+" hundred and "+liangwei(c);
     }
 else{
  english=num1[b]+" hundred ";
  }
   }
   return english;
}/*构造一个三位数的函数，剩下的九位数就可以利用三个三位数*/ 
string shuchu(int a){
    string english;
 if(a>0&&a<1000){
  english=sanwei(a);
 }
 if(a>999&&a<1000000){
  int b,c;
  b=a/1000;
  c=a%1000;
  english=sanwei(b)+ " thousand " +sanwei(c);
 }
 if(a>999999&&a<1000000000){
  int b,c,d;
  b=a/1000000;
  c=(a%1000000)/1000;
  d=a%1000;
   if(c==0){
    english=sanwei(b)+ " million "+sanwei(d);
   }
   if(c!=0){
		   english=sanwei(b)+ " million " +sanwei(c)+" thousand "+sanwei(d);
			}
	}
	return english;
}
     
int main(){
	int a;
	cout<<"a20   李鑫亮"<<endl;
	cin >> a;
    cout<<"输出一个整数："<<shuchu(a);
/*	for(int i=0;i<30;i++){
	
	cout<<"输出一个整数："<<shuchu(a);
	}*/


/*	这个是上面那个的简化版，只能弄三个*/
  return 0;
}
