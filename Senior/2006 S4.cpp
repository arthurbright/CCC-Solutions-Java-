#include <iostream>
#include <cmath>
#include <map>

using namespace std;

int grid;
int main()
{
    int n;
   while(true)
   {
       cin >> n;
       if(n == 0)
       {
           break;
       }
       int grid[n][n];
       for(int i = 0; i < n; i ++)
       {
           for(int k = 0; k < n; k ++)
           {
                cin >> grid[i][k];

           }

       }

       /*
       //printinggggggggggggggggggggggggggggggggggg
       for(int i = 0; i < n; i ++)
       {
           for(int k = 0; k < n; k ++)
           {
                cout << grid[i][k] << " ";
           }
           cout<< "\n";
       }
       */

       int id = -1;
       //may have to consider multiple ids
       //identityyyyyyyyyyyyyyyyyyy
       for(int i = 0; i < n; i ++)
       {
            for(int k = 0; k < n; k ++)
            {
                if (grid[i][k] != k + 1)
                {
                    break;
                }
                if(k == n - 1)
                {
                    id = i;
                }
            }

       }

       if (id == -1)
       {
           goto done;
       }




       /////////////inverseeee
       for(int i = 0; i < n; i ++)
       {
           bool found = false;
           for(int k: grid[i])
           {
               if(k == id + 1)
               {
                   found = true;
               }

           }
           if(found == false)
           {


               goto done;
           }
       }

       for(int i = 0; i < n; i ++)
       {
           bool found = false;
           for(int k = 0; k < n; k ++)
           {

               if(grid[k][i] == id + 1)
               {
                   found = true;

               }
           }
           if(found == false)
           {

               goto done;
           }
       }


       /////associativityyyyyyyyyy
       for(int x = 0; x < n; x ++)
       {
           for(int y = 0; y< n; y ++)
           {
               for(int z = 0; z < n; z ++)
               {
                   if(grid[x][grid[y][z] - 1] != grid[grid[x][y] - 1][z])
                   {
                      
                       goto done;
                   }
               }
           }
       }


        cout << "yes" << endl;
        continue;

    done:
        cout << "no" << endl;

   }


    return 0;
}
