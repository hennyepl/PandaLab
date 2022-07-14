/******************************************************************************/
/*            THIS FILE CONTAINES THE HOME PAGE FOR THE PROGRAM               */
/******************************************************************************/
/* AUTHOR: HENOK LAMISO                                                       */
/* DATE: JULY 2022                                                            */
/* VERSION: 1.0                                                               */
/* CONTACT: https://www.henoktamirat.com                                      */
/* DESCRIPTION: THIS FILE CONTAINES THE HOME PAGE FOR THE PROGRAM             */
/******************************************************************************/

#include <iostream>
#include <iomanip>
int main ()
{
    // centerd on the full with screen with a border
    // background color is black and text color is Yellow
    // the menu is displayed in the center of the screen
    
    std::cout << "\033[1;33m" << "\033[1;47m" << "\n";
    // apply diffrent font to the text 
    


    // set text in the center of the screen using the setw function
    std::cout << "*************************************************************" << std::endl;
    std::cout << "*"<< std::setw(30) << "WELLCOME" << std::setw(30) << "*" << std::endl;
    std::cout << std::setfill('*') << std::setw(61) << "*" << std::endl;

    
    std::cout << "\n" << std::setfill('*') << std::setw(61) << "*" << std::endl;
    std::cout << "*                                                           *" << std::endl;
    std::cout << "*                                                           *" << std::endl;
    std::cout << "*************************************************************" << std::endl;
   
    return 0;
}

