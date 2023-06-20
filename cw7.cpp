
GUEST
3:51 PM
bool isPrime(int a){

if(a==1){
return true;
}
else{
for(int i=2;i<=a/2;i++){
if(a%i==0){
return false
}
}
}
return true;
}
int main(){

int a,b;
cin>>a>>b;

// a=2 b=10;

2 3 5 7
int count = 0;
for(int i=a;i<=b;i++){
if(isPrime(i)) count++;
}
cout<<count<<" ";
}
/*

GUEST
3:52 PM
// HW Questions

1.) Sqaure root of an intger
2.) Factorial of an integer
3.) Roots of an Quadratic Equation.
*/