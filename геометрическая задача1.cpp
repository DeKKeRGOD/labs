#include "stdafx.h"
#include <iostream>

int main()
{
    cout << "Opredelenie formy figury";
	cout << "Vvedite x";
    cin >> x;
    switch ( x )
	{
        case (1):            
            printf("\tTochka\n");
            break;
        case (2):
            printf("\tOtrezok\n");
            break;
        case (3):
            printf("\tTreugolnik\n");
            break;
        case (4):
            printf("\tKvadrat\n");
            break;
	case (5):            
            printf("\tPyatiugolnik\n");
            break;
        case (6):
            printf("\tShestiugolnik\n");
            break;
        case (7):
            printf("\tSemiugolnik\n");
            break;
        case (8):
            printf("\tVosmiugolnik\n");
            break;
        default:
            printf("\tNevernoe znachenie\n");
    }
    getchar();
    return 0;
}
