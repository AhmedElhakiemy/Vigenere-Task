#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include<iomanip>
#include<vector>

using namespace std;

int main()
{
    char arr1[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cout<<"Enter your key : ";
    string key;
    cin>>key;

    cout<<"Enter your Message : ";
    string msg;
    cin>>msg;

    int arrc[key.length()];

    for(int i=0;i<key.length();i++)
    {
         for(int k=0;k<26;k++)
        {
            if(key[i]==arr1[k])
            {
                arrc[i]=k;
            }
        }
    }


    cout<<"The cipher text is :";

    for(int i=0;i<msg.length();i++)
    {
        for(int k=0;k<26;k++)
        {
            if(msg[i]==arr1[k])
            {
                if(i<=key.length())
                {
                int c=(arrc[i]+k)%26;
                cout<<arr1[c];
                }
                else
                {
                int c=(arrc[i-key.length()]+k)%26;
                cout<<arr1[c];
                }

            }
        }

    }

    cout<<"\n";
    cout<<"Enter the cipher text :";
    string msgc;
    cin>>msgc;

    cout<<"The plain text is :";

    for(int i=0;i<msgc.length();i++)
    {
        for(int k=0;k<26;k++)
        {
            if(msgc[i]==arr1[k])
            {
                if(i<=key.length())

                {
                   if(k>arrc[i])
                    {
                        int c=(k-arrc[i]);
                        cout<<arr1[c];
                    }
                   else
                   {
                       int c=(k-arrc[i])+26;
                        cout<<arr1[c];
                   }
                }
                else
                {
                    if(k>arrc[i])
                    {
                       int c=(k-arrc[i-key.length()]);
                       cout<<arr1[c];
                    }
                    else
                    {
                       int c=(k-arrc[i-key.length()]+26);
                       cout<<arr1[c];
                    }

                }

            }
        }

    }



    return 0;
}
