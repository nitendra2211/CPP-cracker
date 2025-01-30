// Taking input from the user

#include<iostream>
using namespace std;
int main(){
int a;
cin >> a;
cout << "Enter the Value of a" << endl;

return 0;

//Input
2

//Output
Enter the Value of a
2

// Taking string as input

#include<iostream>
#include<string>
using namespace std;
int main(){
  string s= "Hello";
  cin >> s;
  cout << s << endl;
return 0;
}

//Output
Hello



// Taking string as an input using getline method

#include<iostream>
#include<string>
using namespace std;
int main(){
string s= "Hello";
getline(cin, s);
cout << s << endl;

return 0;
}

// output
Hello
