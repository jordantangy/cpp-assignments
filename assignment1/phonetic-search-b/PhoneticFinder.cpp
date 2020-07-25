#include <iostream>
#include <string>
#include <exception>
#include <algorithm>
using namespace std;
namespace phonetic{

    //dond                       //dont
string find(string text,string word){

    int text_count = 0;
    int index = 0;
    int word_count = 0;
    string ans = "";
    for(auto i : text ){
        text_count++;
    }
    for(auto j: word){
        word_count++;
    }
    string temp = "";
    int help_counter = 0;
   string copy = "";

    for (size_t i = 0; i < text_count ; i++)
    {
                    if(text.at(i) != ' '){
                    temp.push_back(text.at(i));
                    help_counter++;
                  
                    }

                    
            
          copy = temp;
       
        
        if(text.at(i) == ' ' || text[i+1] == '\0'){

            
              if(help_counter != word_count){
                
                  help_counter = 0;
                  
                  temp.clear();
                  continue;
              }
             
            
            else if(temp == word){
              
                ans = copy;
                return ans;
            }
        
        
        else {
         
          transform(temp.begin(),temp.end(),temp.begin(), ::tolower);
             transform(word.begin(),word.end(),word.begin(), ::tolower);
               int flag = 0;
            for (size_t j = 0; j < help_counter; j++)
            {
            
              
            
                
               if(temp.at(j) == word.at(j) || 
               (temp.at(j) == 't' && word.at(j) == 'd') || 
               (temp.at(j) == 'd' && word.at(j) == 't') ||
               (temp.at(j) == 'g' && word.at(j) == 'j') || 
               (temp.at(j) == 'j' && word.at(j) == 'g') ||
               (temp.at(j) == 's' && word.at(j) == 'z') ||
               (temp.at(j) == 'z' && word.at(j) == 's') ||
               (temp.at(j) == 'o' && word.at(j) == 'u') ||
               (temp.at(j) == 'u' && word.at(j) == 'o') ||
               (temp.at(j) == 'i' && word.at(j) == 'y') || 
               (temp.at(j) == 'y' && word.at(j) == 'i') ||
               (temp.at(j) == 'b' && word.at(j) == 'f') || 
               (temp.at(j) == 'f' && word.at(j) == 'b') ||
               (temp.at(j) == 'b' && word.at(j) == 'p') ||
               (temp.at(j) == 'p' && word.at(j) == 'b') ||
               (temp.at(j) == 'p' && word.at(j) == 'f') ||
               (temp.at(j) == 'f' && word.at(j) == 'p') ||
               (temp.at(j) == 'c' && word.at(j) == 'k') ||
               (temp.at(j) == 'c' && word.at(j) == 'q') ||
               (temp.at(j) == 'k' && word.at(j) == 'c') ||
               (temp.at(j) == 'k' && word.at(j) == 'q') ||
               (temp.at(j) == 'q' && word.at(j) == 'c') ||
               (temp.at(j) == 'v' && word.at(j) == 'w') ||
               (temp.at(j) == 'w' && word.at(j) == 'v') 
               ){
                  
                  index++;
                   if(j == word_count-1){
                       ans = copy;
                   }
               }
               else if(index == word_count-1 && word==temp){
               
                   ans = copy;
                   return ans;
               }
               else if(temp.at(j) != word.at(j)){
                   
                   index = 0;
                   if(j == help_counter-1){
                    help_counter = 0;
                    temp.clear();
                    break;
                   }
                   help_counter = 0;
                    temp.clear();
                   
                   continue;
                   
               }
               
            }
            
                

            }
        
        }
        
    }
    

       if(ans.empty()){
          
            throw exception();
        }
  
        return ans;
    

         
    }
}