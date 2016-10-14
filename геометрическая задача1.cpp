#include "stdafx.h"
#include <iostream>

int main()
{
    cout << "Opredelenie formy figury";
	cout << "Vvedite x";
    cin >> x;
    switch ( x )// вводим инструкцию многонаправленного ветвления, которая позволяет выбирать из нескольких вариантов
	{
        case 1:            
            printf("Tochka\n");
            break;// завершение выполнения первого варианта, определенного инструкцией switch
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