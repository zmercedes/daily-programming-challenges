/**
  Zoilo Mercedes
  Daily Programming challenge, 9-7-2015
  Cellular Automata, Rule 90
  Computes rule 90 for a given binary string, 25 levels (Sierpinsky Triangle)
 */
#include <iostream>
#include <string>

using namespace std;

string Convert(string row){
  string tmp;
  for(int i = 0;i<row.length();i++){
    tmp+= (row[i]=='0' ? " " : "x");
  }
  return tmp;
}

int main(){
  string row;
  cout<< "### Cellular Automata: Rule 90 ### \n Starting with: ";
  cin >> row;

  int i,count = 0;
  string nextRow = Convert(row);

  cout << nextRow << endl;

  while(count < 25){
    nextRow = "";
    for(i=0;i<row.length();i++){
      if(i==0)
        nextRow += (row[1]=='x' ? "x":" ");
      else if(i == row.length()-1)
        nextRow += (row[i-1]=='x' ? "x":" ");
      else if(row[i-1] != row[i+1])
        nextRow += "x";
      else
        nextRow += " ";
    }
    cout << nextRow << endl;
    row = nextRow;
    count++;
  }
  cout << "\n Complete!";

  return 0;
}