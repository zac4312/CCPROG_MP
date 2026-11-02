//*Note: <> is placeholder for the value and does not denote a parameter.

/*
    Function root_sim().
    takes two integer parameters: <start of range>, <end of range> and ask for input to use as the index
    for the radical operation. The function will find every perfect root of every number within the range 
    and then run the root_trick() function from tutorial.c taking every supposed perfect root within the range 
    as the radicand and the <nth root> as the index. Function will print:

        Success = 1 

    if the trick prints the same root as the proper radical operation.

    if any case does not get the same output, function will print the following:

        --> Trick Debunked; Did not work for <how many cases: Success = 0> number/s of perfect <nth root> root

    if all cases match each others ouput, function will print the following:

        --> Valid Trick for all perfect <nth root> root from <start of range> to <end of range>
    
    Depending on user input, the function may only print that the trick is valid or is not valid for each simulation 
    Function will loop 'till user inputs break condition.
   
    Pre-condition:
        - start and end range must be a unsigned integer

    @param x - is the start of range
    @param y - is the end of range

    @return nothing, the function will immediately print the output
*/
void root_sum() 
{

}

/*
    Function division_sim(),
    takes two integer parameters that act as a range. The function will check the divisibility of every number 
    within the range to every number from 2 - 9 using the division_trick() function in tutorial.c and through 
    normal division operation, both methods should yield the same output. If in any case within the range the 
    output of both methods do not match, the following will be printed:

        --> Trick Debunked; Did not work for <how many cases: Success = 0>

    if all cases yield the same ouptut for both methods, the following will be printed:
 
        --> Valid Trick for all numbers within  the range <start of range> - <end of range> 
    
    Depending on user input, the function may only print that the trick works or does not work for simulation
    scenario. Function will loop 'till user inputs break condition.
    
    Pre-condition:
        - start and end range must be a unsigned integer

    @param x - is the start of range
    @param y - is the end of range

    @return nothing, the function will immediately print the output
*/
void division_sim()
{

}

/*
    Function simulation(),
    called in main and runs the division or the roots simulation based on user input in main().
    Function will loop 'till user inputs break condition.
 
    Pre-condition:
        - parameter x and y must be a integer
        - parameter choice must be a char and is only '1' or '2'

    @param x - given to division_sim() or root_sim() to act as range_start
    @param y - given to division_sim() or root_sim() to act as range_end
    @param choice - check-condition to run either division_sim(), root_sim() or exit the simulation menu
    
    @return nothing, the function will immediately print the output
*/
void simulation() 
{

}
