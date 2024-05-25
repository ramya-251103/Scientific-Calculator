#include<iostream>
#include <cmath>
using namespace std;


float ans = 0;

void clear()
{
	ans = 0;
	cout<<"Current Ans"<<endl;
	cout<<ans;
	
}
float Add(float,float)
{
	cout<<"Enter Value"<<endl;
	float a,b;
	cin>>a;
	if(ans==0)
	{
		cout<<"Enter second value"<<endl;
		cin>>b;
		ans=a+b;
	}
	else
	ans = ans+a;
	
	cout<<"Current Answer"<<endl;
	cout<<ans<<endl;
	return 0;
	
}
float Subtract(float,float)
{
cout<<"Enter Value "<<endl;
	float a,b;
	cin>>a;
	if(ans==0)
	{
		cout<<"Enter second value"<<endl;
		cin>>b;
		ans=a-b;
	}
	else
	ans = ans-a;
	
	cout<<"Current Answer"<<endl;
	cout<<ans<<endl;
return 0;	
	
}
float Multiply(float,float)
{
cout<<"Enter Value"<<endl;
	float a,b;
	cin>>a;
	if(ans==0)
	{
		cout<<"Enter second value"<<endl;
		cin>>b;
		ans=a*b;
	}
	else
	ans = ans*a;
	cout<<"Current Answer"<<endl;
	cout<<ans<<endl;
	
	return 0;
		
}
float Divide(float,float)
{
cout<<"Enter Value"<<endl;
	float a,b;
	cin>>a;
	if(ans==0)
	{
		cout<<"Enter second value"<<endl;
		cin>>b;
		ans=a/b;
	}
	else
	ans = ans/a;
	cout<<"Current Answer"<<endl;
	cout<<ans<<endl;
	
	return 0;
		
}
float Power(float,float)
{
	float a,b;
	cout<<"Enter value"<<endl;
	cin>>a;
	if(ans==0)
	{
		cout<<"Enter power value"<<endl;
		cin>>b;
		ans=pow(a,b);
	}
	else
	ans = pow(ans,a);
	cout<<"Current Answer"<<endl;
	cout<<ans<<endl;
	
	return 0;
	
}
float Sin(float)
{
	
	float a;
	if(ans==0)
	{
	cout<<"Enter degree in radians"<<endl;
	cin>>a;
	ans = sin(a);
    }
    else
    ans = sin(ans);
    
    cout<<"Current Ans"<<ans<<endl;

return 0;
}
float Cos(float)
{
	
	float a;
	if(ans==0)
	{
	cout<<"Enter degree in radians"<<endl;
	cin>>a;
	ans = cos(a);
    }
    else
    ans = cos(ans);
    
    cout<<"Current Ans"<<ans<<endl;

return 0;
}
float Tan(float)
{
	
	float a;
	if(ans==0)
	{
	cout<<"Enter degree in radians"<<endl;
	cin>>a;
	ans = tan(a);
    }
    else
    ans = tan(ans);
    
    cout<<"Current Ans"<<ans<<endl;

return 0;
}
float Square_root(float)
{
	float a;
	if(ans==0)
	{
		cout<<"Enter value"<<endl;
		cin>>a;
		ans = sqrt(a);
	}
	else
	ans = sqrt(ans);
	
	cout<<"Current Ans"<<endl;
	cout<<ans<<endl;
	return 0;
}
float Cube_root(float)
{
	float a;
	if(ans==0)
	{
		cout<<"Enter value"<<endl;
		cin>>a;
		ans = cbrt(a);
	}
	else
	ans = cbrt(ans);
	
	cout<<"Current Ans"<<endl;
	cout<<ans<<endl;
	
	return 0;
}
float Log_N(float)
{
	float a;
	if(ans==0)
	{
		cout<<"Enter value"<<endl;
		cin>>a;
		ans=log(a);
	}
	else
	ans = log(ans);
	cout<<"Current Ans"<<endl;
	cout<<ans<<endl;
	
	return 0;
}
float Log(float)
{
	float a;
	if(ans==0)
	{
		cout<<"Enter value"<<endl;
		cin>>a;
		ans=log10(a);
	}
	else
	ans = log10(ans);
	cout<<"Current Ans"<<endl;
	cout<<ans<<endl;
	return 0;
}


int main()
{
	float a,b;
	int x;
do{
    cout<<endl;
	cout<<"------Scientific Calculator------"<<endl;
	
	
	cout<<"Press 1 for Power"<<endl;
	cout<<"Press 2 for Sin : Degreen in radians"<<endl;
	cout<<"Press 3 for Cos: Degreen in radians"<<endl;
	cout<<"Press 4 for Tan: Degreen in radians"<<endl;
	cout<<"Press 5 for ln"<<endl;
	cout<<"Press 6 for log"<<endl;
	cout<<"Press 7 for Square root"<<endl;
	cout<<"Press 8 for Cube root"<<endl;
	cout<<"Press 9 for Sum"<<endl;
	cout<<"Press 10 for Subtract"<<endl;
	cout<<"Press 11 for Multiply"<<endl;
	cout<<"Press 12 for Divide"<<endl;
	cout<<"Press 13 to clear value"<<endl;
	cout<<"Press 14 to exit"<<endl;
	
	
	cin>>x;

	switch(x)
	{
		case 1:{Power(ans,a);
			break;
		}
		case 2:{Sin(a);
			break;
		}
		case 3:{Cos(a);
			break;
		}
		case 4:{Tan(a);
			break;
		}
		case 5:{Log_N(a);
			break;
		}
		case 6:{Log(a);
			break;
		}
		case 7:{Square_root(a);
			break;
		}
		case 8:{Cube_root(a);
			break;
		}
		case 9:{Add(ans,a);
			break;
		}
		case 10:{Subtract(ans,a);
			break;
		}
		case 11:{Multiply(ans,a);
			break;
		}
		case 12 :{Divide(ans,a);
			break;
		}
		case 13:{clear();
			break;
		}
				
	}
	} while(x!=14);
	
return 0;	
}

