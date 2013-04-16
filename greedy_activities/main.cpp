//
//  main.cpp
//  greedy_activities
//
//  Created by Vivek Tejwani on 28/02/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include <iostream>
using namespace std;
int main (int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    cout<<"Total number of activities?\n";
    int n;
    cin>>n;
    int input[100][2];
    cout<<"Enter the activities as follows\nStart Time:\tEnd Time:\n";
    for(int i=0;i<n;i++)
    {
        cin>>input[i][0];
        cout<<"\t";
        cin>>input[i][1];
        cout<<"\n";
    }
    int i=1,k=0;
    cout<<"a1";
    while(i<n)
    {
        if(input[i][0]>=input[k][1])
        {
            cout<<" a"<<i+1;
            k=i;
        }
        i++;
    }
    return 0;
}

