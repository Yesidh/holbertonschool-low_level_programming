<p>
<img width="260" height="170" src="https://davidjohncoleman.com/wp-djc/wp-content/uploads/2017/06/HBTN-Borderless-CMYK-Logo-Vertical-Color-Black@1200ppi-300x236.png" align="right" >
</p>





# :colombia: C - Dinamic libraries                                              
-What is a dynamic library, how does it work, how to create one and how to use it
                                                                                
-What is environment variable $LD_LIBRARY_PATH and how to use it                
-What are the differences betwen static and shared libraries                    
## Examples                                                                     
Script that creates a dynamic library from all .c files in the current directory
see the file 1-create_dynamic_lib.sh                                            
## Prerequisites                                                                
Language C and compiler gcc with fhe flags:                                     
```                                                                             
gcc -Wall -Werror -Wextra -pedantic                                             
```                                                                             
## Installing                                                                   
                                                                                
for have the code in your local machine you only need download the code files and put it into a directory.
## Built With                                                                   
                                                                                
gcc 4.8.4 and ubuntu 14.04                                                      
                                                                                
## Contributing                                                                 
                                                                                
-- Yesid Gutierrez - Holberton Student                                          
                                                                                
## Versioning                                                                   
for my learning in Holberton School                                             
                                                                                
## Authors                                                                      
                                                                                
---Yesid Gutierrez  944@holbertonshcool.com                                     
                                                                                
## Files                                                                        
                                                                                
|              File                |               Description                  |
| ---------------------------------| ------------------------------------------ |
| **libholberton.so** | Dynamic libraty|
| **1-create_dynamic_lib.sh** | script that creates a dynamic library called liball.so from all the .c files that are in the curretn directory|
| **holberton.h** | Header file with all prototypes functions|
| **100-operation.so**| dynamic library that import C functions|