/**********************************************************************
 * @file    spRepetitionIL.cpp
 * @brief   
 *
 * 
 *
 * @remarks  
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  15
 *      Due Date:      september 17th
 *      Instructor:    MS. Serviner
 *
 *      Input:      
 *
 *      Output:        
 * 
 * @author        Ridge Diffine
 * @date          2018-09-20
 **********************************************************************
 */
 
 
 #include<iostream>
    using namespace std;
 #include<cmath>
    using namespace std;
    
    
    int main()
    {
        cout << "Leg1" << setw(10) << "leg2" << setw(10) << "Hypotenuse"
             << endl;
        cout << "____________________________________" << endl;
        
        int limit = 100, total, leg1 = 1, leg2 = 1, hypotenuse;
        
        while(hypotenuse < limit)
        {
            sqrt(hypotenuse) = pow(leg1, 2) + pow(leg2, 2)
            while(hypotenuse % 1 == 0)
            {
                cout << leg1 << setw(10) << leg2 << setw(10) << hypotenuse
                     << endl;
                leg1 = leg1 + 1
            }
            
            else 
            {
                leg2 = leg2 + 1
                
            }
            
            
            
        }
        
        
        return 0
        
        
    }