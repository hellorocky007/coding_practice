#include <iostream>
using namespace std;
void quicksort_method (int [], int, int);
int main()
{
int element_list[50],count, counter;
cout<<"Please enter the total count of the elements that you want to sort: "<<endl;
cin>>count;
cout<<"Please input the elements that has to be sorted:"<<endl;
for (counter = 0; counter < count; counter++)
{
cin>>element_list[counter];
}
quicksort_method(element_list, 0, count - 1);
cout<<"Output generated after using quick sort\n";
for (counter = 0; counter < count; counter++)
{
cout<<element_list[counter]<<" ";
}
cout<<endl;
return 0;
}
void quicksort_method(int element_list[], int low, int high)
{
int pivot, value1, value2, temp;
if (low < high)
{
pivot = low;
value1 = low;
value2 = high;
while (value1 < value2)
{
while (element_list[value1] <= element_list[pivot] && value1 <= high)
{
value1++;
}
while (element_list[value2] > element_list[pivot] && value2 >= low)
{
value2--;
}
if (value1 < value2)
{
temp = element_list[value1];
element_list[value1] = element_list[value2];
element_list[value2] = temp;
}
}
temp = element_list[value2];
element_list[value2] = element_list[pivot];
element_list[pivot] = temp;
quicksort_method(element_list, low, value2 - 1);
quicksort_method(element_list, value2 + 1, high);
} 
}
