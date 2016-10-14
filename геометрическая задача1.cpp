#include <stdio.h>
 
int main()
{
    cout << "Opredelenie formy figury";
	cout << "Vvedite x";
    cin >> x;
    switch ( x )
	{
        case 1:            
            printf("Tochka\n");
            break;
        case 2:
            printf("Otrezok\n");
            break;
        case 3:
            printf("Treugolnik\n");
            break;
        case 4:
            printf( "Kvadrat\n" );
            break;
		case 5:            
            printf("Pyatiugolnik\n");
            break;
        case 6:
            printf("Shestiugolnik\n");
            break;
        case 7:
            printf("Semiugolnik\n");
            break;
        case 8:
            printf( "Vosmiugolnik\n" );
            break;
        default:
            printf( "Nevernoe znachenie\n" );
    }
    getchar();
    return 0;
}