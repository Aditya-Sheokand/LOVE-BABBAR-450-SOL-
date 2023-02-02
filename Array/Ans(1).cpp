// Reverse the array

#include<iostream>

using namespace std;
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
   int arr[]={1,2,3,0,4,5,6,7,89};
   int n= sizeof(arr)/sizeof(arr[0]);
   
   for(int i=0;i<n; i++)
   {

    if(i<=(n-1)-i){
        swap(arr[i],arr[(n-1)-i]);

    }
    


   }

   print(arr,n);
   return 0;
}


// SAME METHOD WITH DIFFERENT THINGING
// Lets We'll try to solve it for vector

// #include<iostream>
// #include<vector>
// using namespace std;

// using namespace std;
// void print(vector<int> vec)
// {
//     for(int i:vec)
//     {
//         cout<<i<<" ";
//     }
// }

// int main()
// {
//     vector <int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);

//     // consider two pointer that's point the starting and ending of vector
//     int s=0;
//     int e=vec.size();

//     while(s<=e)
//     {
//         swap(vec[s],vec[e]);
//         s++;
//         e--;
//     }
//     print(vec);
//     return 0;

    
// }
