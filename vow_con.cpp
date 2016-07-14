#include<iostream>
using namespace std;
int main()
{
    char word;
    cin>>word;
    if( word == 'A'||word == 'E'||word == 'I'||word == 'O'||word == 'U'||word == 'a'||word == 'e'||word == 'i'||word == 'o'||word == 'u')
        cout<<"Vowel";
    else
        cout<<"Consonant";
    return 0;
}
