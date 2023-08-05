
// #include <bits/stdc++.h>
// using namespace std;
// void swap(int *xp, int *yp)
// {
// 	int temp = *xp;
// 	*xp = *yp;
// 	*yp = temp;
// }
// void selectionSort(int arr[], int n)
// {
// 	int i, j, min_idx;
// 	for (i = 0; i < n-1; i++)
// 	{
// 		min_idx = i;
// 		for (j = i+1; j < n; j++)
// 		{
// 		if (arr[j] < arr[min_idx])
// 			min_idx = j;
// 		}
// 		if (min_idx!=i)
// 			swap(&arr[min_idx], &arr[i]);
// 	}
//     int l=0,r,x;
//     printf("Enter the number your want search\n");
//     scanf("%d",&x);
//     r = n-1;
//      while (l <= r) {
//         int m = l + (r - l) / 2;

//         if (arr[m] == x)
//             printf("The element is present on %d ",m);
//         if (arr[m] < x)
//             l = m + 1;
//         else
//             r = m - 1;
//     }
//     printf("\n");
// }
// int main()
// {
// 	int arr[] = {89,3,45,12,35,17,76,65,35,34,2,44,2,45,12,32,89,676};
// 	int n = sizeof(arr)/sizeof(arr[0]);
// 	selectionSort(arr, n);
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;
# define NO_OF_CHARS 256

void badCharHeuristic( string str, int size, int badchar[NO_OF_CHARS])
{
	int i;
	for (i = 0; i < NO_OF_CHARS; i++)
		badchar[i] = -1;
	for (i = 0; i < size; i++)
		badchar[(int) str[i]] = i;
}

void search( string txt, string pat)
{
	int m = pat.size();
	int n = txt.size();
	int badchar[NO_OF_CHARS];
	badCharHeuristic(pat, m, badchar);

	int s = 0;
	while(s <= (n - m))
	{
		int j = m - 1;
		while(j >= 0 && pat[j] == txt[s + j])
			j--;
		if (j < 0)
		{
			cout << "pattern occurs at shift = " << s << endl;
			s += (s + m < n)? m-badchar[txt[s + m]] : 1;
		}
		else
s += max(1, j - badchar[txt[s + j]]);
	}
}
int main()
{
	string txt= "ABAAABCD";
	string pat = "ABC";
	search(txt, pat);
   return 0;
}