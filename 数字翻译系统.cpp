#include <iostream>
#include <string>
using namespace std;
const string num1[]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
const string num2[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
void liangwei(int a){
   if(a<20){
   	cout<<num1[a];
   }
   if(a>19&&a<100){
   	int b,c;
   	b=a/10;
   	c=a%10;
   	if(c!=0){
   	cout<<num2[b]<<"-"<<num1[c]; 
   }
    if(c==0){
    	cout<<num2[b];
	}
   } 
}/*����һ����λ���ĺ�������ҪΪ�˽����twenty-one�����ģ�Ϊ������λ������������*/ 
void sanwei( int a){
   if(a>0&&a<20){
   	cout<<num1[a];
   }
   if(a>19&&a<100){
	   liangwei(a) ; 
   } 
 if(a>99&&a<1000){
   	int b,c;
   	b=a/100;
   	c=a%100;
   	if(c!=0){
	   	   cout<<num1[b]<<" hundred and ";
			  liangwei(c);
			  }
	else{
		cout<<num1[b]<<" hundred ";
		}
	  }
}/*����һ����λ���ĺ�����ʣ�µľ�λ���Ϳ�������������λ��*/ 
void shuchu(int a){
	cin>>a;
    string english;
	if(a>0&&a<1000){
		sanwei(a);
		cout<<endl;
	}
	if(a>999&&a<1000000){
		int b,c;
		b=a/1000;
		c=a%1000;
		sanwei(b);
		cout<<" thousand ";
		sanwei(c);
		cout<<endl;
	}
	if(a>999999&&a<1000000000){
		int b,c,d;
		b=a/1000000;
		c=(a%1000000)/1000;
		d=a%1000;
		sanwei(b);
		cout<<" million ";
			if(c==0){
				sanwei(d);
				cout<<endl;
			}
			if(c!=0){
		    sanwei(c);
		    cout<<" thousand ";
		    sanwei(d);
		    cout<<endl;
			}
	}
}

int main(){
	cout<<"������"<<endl; 
	for(int i=0;i<30;i++){
	
	cout<<"���һ��������";
	shuchu(i) ;
	}
	/*int x,y,z;
	shuchu(x);
	shuchu(y);
	shuchu(z);
	����������Ǹ��ļ򻯰棬ֻ��Ū����*/
}
