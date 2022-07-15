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
    
    std::cout << "\033[1;37m" << "\033[1;33m" << "\n"; // top menu color = yellow

    // set text in the center of the screen using the setw function
    std::cout << "*****************************************************************************************************" << std::endl;
    std::cout << "*"<< std::setw(55) << "PANDALAB" << std::setw(45) << "*" << std::endl;
    std::cout << "*"<< std::setw(62) << "DEVELOPED BY: HENOK LAMISO" << std::setw(38) << "*" << std::endl;
    std::cout << "*"<< std::setw(62) << "VERSION: MINI-PANADA V1.0" << std::setw(38) << "*" << std::endl;
    std::cout << "*"<< std::setw(68) << "CONTACT: https://www.henoktamirat.com" << std::setw(32) << "*" << std::endl;
    std::cout << "*" << std::setw(0) << std::setw(100) << "*"  << std::endl;
    std::cout << "*" << std::setw(3) <<" DESCRIPTION: Every branch of Computer science is highly influenced by the use of good algorthims." << std::setw(2) << "*" << std::endl;
    std::cout << "*" << std::setw(0) <<" Whether it's web security or managing operating system, algorthims are needed in all areas. " << std::setw(7) << "*" << std::endl;
    std::cout << "*" << std::setw(0) <<" Algorthim can make complex problems easily solvable even if the problem is kind of impossible to " << std::setw(2) << "*" << std::endl;
    std::cout << "*" << std::setw(0) <<" solve. So, in simple words, problem-solving become easy. This why I developed this program that " << std::setw(3) << "*" << std::endl;
    std::cout << "*" << std::setw(0) <<" contains top 10 algorthims every programmer should know." << std::setw(43) << "*" << std::endl;
    std::cout << "*" << std::setw(0) <<" " << std::setw(99) << "*" << std::endl;
    std::cout << std::setfill('*') << std::setw(101) << "*" << std::endl;

    std::cout << "\033[0m" << "\n"; // menu-2 colr = white
    std::cout << "\n" << std::setfill('*') << std::setw(61) << "*" << std::endl;
    std::cout << "*                                                           *" << std::endl;
    std::cout << "*                                                           *" << std::endl;
    std::cout << "*************************************************************" << std::endl;
    
    return 0;
}
