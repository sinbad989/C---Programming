#include <iostream>
#include <cstring>


// Declaration of the functions
int strLen(char*);
char* strCpy(char*,char*);
char* strCat(char*,char*);


/* Implementation of the Functions */

// Function to find string length
int strLen(char* str)
{
	int i;
	for(i=0;*(str+i) != '\0'; i++)
	{
	//nothing to put here
	}
	return i;
}


// a function which will copy one string to the other
char* strCpy(char* dest, char* src)
{
	int i;
	for(i=0;*(src+i)!='\0';i++)
	{
		*(dest+i)=*(src+i);
	}
	dest = dest + '\0';
return dest;
}

// a function which will concate two string
char* strCat(char* dest, char* src)
{
	int len,i;
	len = strLen(dest);
	char cat[500];
	for(i=0;i < strLen(src);i++)
	{
		cat[len] = src[i];
	}
	dest = *dest + *src;
return dest;
}



using namespace std;

int main()
{
	char str1[100], str2[100], str3;
	string name;
	int len1, len2;
	cout << "Enter string 1:";
	cin >> str1;
	cout << "Enter string 2:";
	cin >> str2;


 	//Testing the functions
	len1 = strLen(str1);
	len2 = strLen(str2);
	cout << strCat(str1,str2) << endl;

	return 0;
}




