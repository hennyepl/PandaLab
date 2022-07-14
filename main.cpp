/******************************************************************************/
/*            THIS FILE CONTAINES THE HOME PAGE FOR THE PROGRAM               */
/******************************************************************************/
/* AUTHOR: HENOK LAMISO                                                       */
/* DATE: JULY 2022                                                            */
/* VERSION: 1.0                                                               */
/* DESCRIPTION: THIS FILE CONTAINES THE HOME PAGE FOR THE PROGRAM             */
/******************************************************************************/

#include <iostream>

int main ()
{
    // Main menu
    // centerd on the full with screen with a border
    // background color is black and text color is Yellow
    // the menu is displayed in the center of the screen
    
    std::cout << "\033[1;33m" << "\033[1;47m" << "\n";
    std::cout << "*************************************************************" << std::endl;
    std::cout << "*  WELLCOME                                                 *" << std::endl;
    std::cout << "*                                                           *" << std::endl;
    std::cout << "*                                                           *" << std::endl;
    std::cout << "*************************************************************" << std::endl;
   
    return 0;
}

