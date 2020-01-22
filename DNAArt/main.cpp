//
//  main.cpp
//  DNAArt
//
//  Created by Mustafa Caglar on 07/12/2016.
//  Copyright © 2016 Mustafa Caglar. All rights reserved.
//

#include <map>
#include <cstdlib>
#include <ctime>
#include <cstdlib>
#include "Image.cpp"
#include <tgmath.h>
#include <numeric>


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    io::LineReader in("/Users/Mus/Desktop/base_pairs_chromo.csv");
    
    std::vector<std::string> pairs;
    std::vector<std::string> chromosomes;
    int factor = 1;
    while(char*line = in.next_line())
    {
        char* chromosome = strtok(line, ",");
        char* pair = strtok(NULL, ",");
        pairs.push_back(pair);
        chromosomes.push_back(chromosome);
        
    }
    
    std::vector<std::string> c_1;
    std::vector<std::string> c_2;
    std::vector<std::string> c_3;
    std::vector<std::string> c_4;
    std::vector<std::string> c_5;
    std::vector<std::string> c_6;
    std::vector<std::string> c_7;
    std::vector<std::string> c_8;
    std::vector<std::string> c_9;
    std::vector<std::string> c_10;
    std::vector<std::string> c_11;
    std::vector<std::string> c_12;
    std::vector<std::string> c_13;
    std::vector<std::string> c_14;
    std::vector<std::string> c_15;
    std::vector<std::string> c_16;
    std::vector<std::string> c_17;
    std::vector<std::string> c_18;
    std::vector<std::string> c_19;
    std::vector<std::string> c_20;
    std::vector<std::string> c_21;
    std::vector<std::string> c_22;
    std::vector<std::string> c_23;
    
    int iter=0;
    
    while(chromosomes[iter] == "1")
    {
        c_1.push_back(pairs[iter]);
                iter++;
    }
    while(chromosomes[iter] == "2")
    {
        c_2.push_back(pairs[iter]);
                iter++;
    }
    while(chromosomes[iter] == "3")
    {
        c_3.push_back(pairs[iter]);
                iter++;
    }
    while(chromosomes[iter] == "4")
    {
        c_4.push_back(pairs[iter]);
                iter++;
    }
    
    short width = sqrt(pairs.size()/factor);
    short height = sqrt(pairs.size()/factor);
    
    
    TGAImage *img = new TGAImage(width,height);
    Colour nice_blue;Colour nice_red;Colour nice_violet;Colour nice_grey;Colour nice_green;Colour nice_yellow;

    
    nice_blue.a=255; nice_blue.r=37; nice_blue.g=37; nice_blue.b=191;
    
    nice_violet.a=200;nice_violet.r=234;nice_violet.g=71;nice_violet.b=234;
    
    nice_red.a=255;nice_red.r=243;nice_red.g=83;nice_red.b=83;
    
    nice_grey.a=255;nice_grey.r=142;nice_grey.g=142;nice_grey.b=142;
    
    nice_green.a=255;nice_green.r=85;nice_green.g=246;nice_green.b=85;
    
    nice_yellow.a=255;nice_yellow.r=242;nice_yellow.g=242;nice_yellow.b=22;
    
    int x =0;
    int y =0;
    int counter =0;
    
    double v_1 =0;
    for ( counter = 0; counter < c_1.size();counter++)
    {
        v_1 = (((int)c_1[counter][0] + (int)c_1[counter][1])/2) + v_1;
    }
    v_1 = v_1 / counter;
    v_1 = (v_1 - 71) * 100;
    
    double v_2 =0;
    for ( counter = 0; counter < c_2.size();counter++)
    {
        v_2 = (((int)c_2[counter][0] + (int)c_2[counter][1])/2) + v_2;
    }
    v_2 = v_2 / counter;
    v_2 = (v_2 - 71)*100;
    double v_3 =0;
    for ( counter = 0; counter < c_3.size();counter++)
    {
        v_3 = (((int)c_3[counter][0] + (int)c_3[counter][1])/2) + v_3;
    }
    v_3 = v_3 / counter;
    v_3 = (v_3 - 71)*100;
    double v_4 =0;
    for ( counter = 0; counter < c_4.size();counter++)
    {
        v_4 = (((int)c_4[counter][0] + (int)c_4[counter][1])/2) + v_4;
    }
    v_4 = v_4 / counter;
    v_4 = (v_4 - 71)*100;
    std::cout << v_1;
    std::cout << '\n';
    std::cout << v_2;
    std::cout << '\n';
    std::cout << v_3;
    std::cout << '\n';
    std::cout << v_4;
    std::cout << '\n';

    
//          for(iter = 0; iter < iter_2; iter=iter+factor)
//            {
//      
//                if(pairs[iter][0] == 'A')
//                    img->setPixel(nice_blue, x,y);
//                else if (pairs[iter][0] == 'G')
//                    img->setPixel(nice_yellow, x,y);
//                else if (pairs[iter][0] == 'T')
//                    img->setPixel(nice_green, x,y);
//                else if (pairs[iter][0] == 'C')
//                    img->setPixel(nice_red, x,y);
//                else if (pairs[iter][0] == 'I')
//                    img->setPixel(nice_violet, x,y);
//                else
//                    img->setPixel(nice_grey, x,y);
//        
//                if(pairs[iter][1] == 'A')
//                    img->setPixel(nice_blue, x+1,y);
//                else if (pairs[iter][1] == 'G')
//                    img->setPixel(nice_yellow, x+1,y);
//                else if (pairs[iter][1] == 'T')
//                img->setPixel(nice_green, x+1,y);
//                else if (pairs[iter][1] == 'C')
//                img->setPixel(nice_red, x+1,y);
//                else if (pairs[iter][1] == 'I')
//                    img->setPixel(nice_violet, x+1,y);
//                else
//                    img->setPixel(nice_grey, x+1,y);
//        
//                x = x+2;
//
//                if(x>=width)
//                {
//                    x=0;
//                    y++;
//                }
//            }

    
  //  string filename = "/Users/Mus/test.tga";
  //  img->WriteImage(filename);
    
    return 0;
}
