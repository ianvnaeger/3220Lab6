 
#include<stdio.h>
#include<string.h>
void main()
{
    int i=0;
    char arr1[ 50 ] = "Trumantiger"; // increased array size
    char arr2[ 20 ];
    while(i<19){
        arr2[ i ] = 'A';
	++i;
    }
	arr2[i] = '\0'; // added null terminator
	
//	memset(arr1, '\0', sizeof(arr1) );
    strcpy( arr1 , arr2 );
    printf("%s",arr1);
}
