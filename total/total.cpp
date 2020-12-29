#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<3;i++)
    {
        string a="./capture";
        const char *command1 = a.c_str();  
        system(command1); 
        
        getchar();
        
        string e="python model.py";
        const char *command5 = e.c_str();  
        system(command5);
        
        string b="./rps";
        const char *command2 = b.c_str();  
        system(command2); 
        
        getchar();
    }
        string c="./disres";
        const char *command3 = c.c_str();  
        system(command3);
        
        string d="rm -f t.txt";
        const char *command4 = d.c_str();  
        system(command4);
        
return 0;
}
