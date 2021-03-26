# 25 Maret 2021
I try to make a template project for using a graphics.h Library with VSCode. 

Download tdm-gcc 32bit: 

https://jmeubank.github.io/tdm-gcc/


Download Library: 

https://drive.google.com/file/d/16xZBvFXf7yFjxwTpuyevK1KPuLgUeZFh/view

## Installation
1. Install tdm-gcc 32bit
2. Copy and paste 'graphics.h' and 'winbgim.h' into your tdm-gcc 32bit include folder (ex: C:/tdm-gcc/include/)
3. Copy and paste 'libbgi.a' into your tdm-gcc 32bit lib folder (ex: C:/tdm-gcc/lib/)
4. Rename folder named 'tes' with '.vscode'
5. Don't forget to change a correct directoties on 'c_cpp_properties.json' depend on your tdm-gcc installation directori

For detail procedure of how to install and setup tdm-gcc: 

https://www.youtube.com/watch?v=VEkAj-xVTKQ

## Usage 
Compile and Linking your .cpp file with: \
`g++ main.cpp -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32`

Run your program: \
`./.exe`


Let's Rock n Roll
