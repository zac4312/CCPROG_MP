//*Note: <> is placeholder for the value and does not denote a parameter.

/*  Function division_trick(), 
    takes two integer parameters that act as <dividend> and <divisor>. splits the <dividend> into individual digits then 
    checks and displays in both word and ascii(*) how many times the <divisor> fits into each digit of the <divisor>. 
    Compiling the result of each digit into a single number results to the <quotient> that will also be printed.
    function can be repeated till user exits.


    Pre-condition:
        - dividend and divisor must be positive integer
        - divisor can only be a 1-digit integer

    @param m - is the dividend
    @param n - is the divisor
    
    @return nothing, the function will immediately print the output
*/
void division_trick(int m, int n) 
{
        
}

/*
    Function root_trick().
    takes two integer parameters that act as <radicand> and <index>. Assuming the radicand is a perfect root of the index,
    the function will split the radicand into individual digits then gets the sum of each digit, then subtract the sum 
    to the <index> which result to the <index> root of the <radicand>. function can be repeated till user exits.
    prints the the following:
    
        <index> root of <radicand>
        = sum of each digit in the radicand: <sum> - root <index> 
        = <difference>
   
    if the radicand is not a perfect root of the index, the following will be printed:
        <radicand> is not a perfect <index> root. No trick calculation executed.    
    

    Pre-condition:
        - Index and radicand must be a unsigned integer
        - radicand must at least be a 2 digit unsigned integer
        - index must be a unsigned integer from 1 - 9 

    @param x - is the radicand
    @param n - is the index

    @return nothing, the function will immediately print the output
*/
void root_trick(int x, int n)
{

}

/*
    Function tutorial(),
    called in main and runs the division or the roots trick based on user input in main().
    Function will loop 'till user inputs break condition.
    
    Pre-condition:
        - parameter x and y must be a integer
        - parameter choice must be a char and is only '1' or '2'

    @param x - given to division_trick() to act as the dividend or given to root_trick() to act as index
    @param y - given to division_trick() to act as the divisor or given to root_trick() to act as radicand
    @param choice - check-condition to run either division_trick(), root_trick() or exit the tutorial menu.
    
    @return nothing, the function will immediately print the output
*/
void tutorial(int x, int y, char choice) 
{
    
}
