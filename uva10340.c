#include<stdio.h>
#include<string.h>

int main()
{
    char s[100000] , t[100000] ;
    while( scanf( "%s%s", s, t ) != EOF )
    {
        int slength = strlen(s);
        int tlength = strlen(t);
        int i, j;
        for( i = 0, j = 0 ; i < tlength && j < slength ; i++ )
            if( t[i] == s[j] )
                j++;
                
        if( j == slength )
            printf( "Yes\n" );
        else
            printf( "No\n" );
    }
    return 0;
}
