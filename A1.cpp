#include <stdio.h>
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <cstring>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main (int argc, char *argv[])
{
	int i;
	int j;
	int sum;
	int decoy;
	int decoy1;
	int decoy2;
	int random;
	int x;
	int flag;
	int length;
	if ( argc > 2)
	{
		if (strcmp(argv[1],"print") == 0)
		{    for (i = 2; i < argc; i++)
			{   if ( i == argc - 1)
				cout<<argv[i];
			    else cout<<argv[i]<<" ";
			}
		}
		else if (strcmp(argv[1],"reverse") == 0)
		{
			for (i = argc-1; i > 1 ; i--)
			{   if ( i == 2 )
				cout<<argv[i];
			else cout<<argv[i]<<" ";
			}
		}
		else if (strcmp(argv[1],"upper") == 0)
		{
			 for (i = 2; i < argc; i++)
			 {  for (j = 0; j <= strlen(argv[i]); j++)
			 {
				 putchar(toupper(argv[i][j]));
			 }
			 cout<<" ";
		     }
		}
		else if (strcmp(argv[1],"shuffle") == 0)
		{   if ( argc == 3)

		{
				 for (i = 0; i < strlen(argv[2]); i++)
			 {
					 if ( i % 2 == 0 )
			     {
						 if ( i == strlen(argv[2]) - 1)
						 {putchar(argv[2][i]);}
						 else {putchar(argv[2][i+1]);}
			     }
			     else
			    	 {
			    	 if ( i == strlen(argv[2]) - 1)
			    	 {putchar(argv[2][i-1]);}
			    	 else {putchar(argv[2][i-1]);}
			    	 }
			 }
		}
		else cout<<"Incorrect Number of Arguments";

		}
		else if (strcmp(argv[1],"shuffleStatement") == 0)
		{
			for (i = 2; i < argc; i++)
			{
				if ( i % 2 == 0 )
				{   if (i == argc - 1)
					  {cout<<argv[i];}
				      else {cout<<argv[i+1]<<" ";}
				}
				else
				{
					if (i == argc - 1)
						{cout<<argv[i-1];}
						else {cout<<argv[i-1]<<" ";}
				}
			}
		}
		else if (strcmp(argv[1],"middle") == 0)
		{
			i = ((argc-2)/2);
			if ((argc-2) % 2 == 0)
			{
				cout<<argv[i+1]<<" ";
				cout<<argv[i+2];
			}
			else
			{
				cout<<argv[i+2];
			}
		}
		else if(strcmp(argv[1],"add") == 0)
		        {   int sum = 0;
		                   if (argc <= 2)
		        			cout<<"Incorrect Number of Arguments";
		                   else
		                   {
		        	for ( i = 2; i < argc; i++)
		        	{
		        		for (j = 0; j < (strlen(argv[i])); j++)
		                {
		        			if (argv[i][j] == '+' || argv[i][j] == '-')
		          	{
		            	j = j + 1;
		        		if(isdigit(argv[i][j]))
		        		{
		        			flag = 1;
		        		}
		        		else
		        		{
		        			flag = 0;
		        			break;
		        		}
		        	}
		        	else
		        	{
		        		if(isdigit(argv[i][j]))
		    		{
		    			flag = 1;
		    		}
		    		else
		    		{
		    			flag = 0;
		    			break;
		    		}
		        	}
		        	}
		        		if (flag == 1)
		        		{   x = atoi(argv[i]);
		        		    sum = sum + x;
		        		}
		        	}
		        	if(flag == 1)
		        		cout<<sum;
		        	else cout<<"Incorrect Data Type";
		        } }
		else if (strcmp(argv[1],"random") == 0)
		{   if ( argc != 6 )
		{
			cout<<"Incorrect Number of Arguments";
		}
		else if((isdigit(*argv[2])) && (isdigit(*argv[3])) && (isdigit(*argv[4])) && (isdigit(*argv[5])) && ((atoi(argv[3])) < (atoi(argv[4]))))
		{   x = atoi(argv[5]);
			srand(x);
			length = atoi(argv[2]);
		    for (i = 1 ; i <= length; i++)
		    {
		    	decoy = atoi(argv[3]);   //min    rand ()%(max - min +1 ) + min
		        decoy1 = atoi(argv[4]);   //max
		        random = rand()%(decoy1 - decoy + 1) + decoy;
		        cout<<random<<" ";
		    }

		}
			else
			{
				cout<<"Incorrect Data Type";
			}


		}
		else if (strcmp(argv[1],"delete") == 0)
				{
					if (argc>3 && (atoi(argv[2])) + 3 <= argc )
					{
					if (isdigit(*argv[2]))
					{
						x = atoi (argv[2]);
						for (i = 3; i < argc; i++)
						{
							if( i == x + 2)
							{
								NULL;
							}
							else cout<<argv[i]<<" ";
						}
					}
					else cout<<"Incorrect Data Type";
					}
					else cout<<"Incorrect Number of Arguments";
				}

		else
			{
			cout<<"Undefined Command";
			}

	}
	else
	{
		cout<<"Incorrect Number of Arguments";
	}
  return 0;
}
