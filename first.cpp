#include <iostream>
#include <vector>
#include <string>

std::string a="a";
std::string b="b";
std::string c="c";
std::string d="d";
std::string e="e";
std::string f="f";
std::string g="g";
std::string h="h";
std::string i="i";
std::string a1;
std::string a2;


int board(){

  std::vector <std::string> board ={a,b,c,d,e,f,g,h,i};

std::cout<<"Tic Tac Toe!\n";
std::cout<<"__" + board[0]+"___|__"+board[1]+"__|__"+board[2]+ "__\n";
std::cout<<"__"+board[3]+"___|_" + board[4]+"___|__"+board[5]+"___\n";
std::cout<<"__" +board[6]+"___|_"+board[7]+"___|__"+board[8]+"___\n";

return 0;
}


std::string bruh(const std::string & a1){


if (a1=="a"){
    a= "x";
}

else if (a1=="b"){
  b="x";
}

else if (a1=="c"){
  c="x";
}

else if (a1=="d"){
  d="x";
}

else if (a1=="e"){
  e="x";
}

else if (a1=="f"){
  f="x";
}
else if (a1=="g"){
  g="x";
  }
else if (a1=="h"){

  h="x";
}

else if (a1=="i"){

  i="x";
}

else{

std::cout<<"You quit the game!";
}

return a1;

}



std::string opp(const std::string & a2){

if (a2=="a"){
    a= "o";
}

else if (a2=="b"){
  b="o";
}

else if (a2=="c"){
  c="o";
}

else if (a2=="d"){
  d="o";
}

else if (a2=="e"){
  e="o";
}

else if (a2=="f"){
  f="o";
}
else if (a2=="g"){
  g="o";
  }
else if (a2=="h"){

  h="o";
}

else if (a2=="i"){

  i="o";
}

else{

std::cout<<"You quit the game!";
}

return a2;

}


 void snot(const std::string & a, const std::string & b, const std::string & c){
 if ((a=="x")&&(b=="x")&&(c=="x")){
  std::cout<<"Player 1 win";
  return;
}
  else if ((d=="x")&&(e=="x")&&(f=="x")){
    std::cout<<"PLayer 1 win";
  return;
  }
  else if ((g=="x")&&(h=="x")&&(i=="x")){
    std::cout<<"Player 1win";
    return;
  }
    else if ((b=="x")&&(e=="x")&&(h=="x")){
    std::cout<<"Player 1 win";
    return;
  }
  else if ((a=="x")&&(d=="x")&&(g=="x")){
    std::cout<<"Player 1 win";
    return;
  }
    else if ((c=="x")&&(f=="x")&&(i=="x")){
    std::cout<<"Player 1 win";
    return;
  }
    else if ((a=="x")&&(e=="x")&&(i=="x")){
    std::cout<<"Player 1 win";
    return;
    }
      else if ((g=="x")&&(e=="x")&&(c=="x")){
    std::cout<<"You win";
    return;
  }
 }

 void snot1(const std::string& a, const std::string& b, const std::string& c){
 if ((a=="o")&&(b=="o")&&(c=="o")){
  std::cout<<"Player 2 win";
  return;
}
  else if ((d=="o")&&(e=="o")&&(f=="o")){
    std::cout<<"PLayer 2 win";
  return;
  }
  else if ((g=="o")&&(h=="o")&&(i=="o")){
    std::cout<<"Player 2 win";
    return;
  }
    else if ((b=="o")&&(e=="o")&&(h=="o")){
    std::cout<<"Player 2 win";
    return;
  }
  else if ((a=="o")&&(d=="o")&&(g=="o")){
    std::cout<<"Player 2 win";
    return;
  }
    else if ((c=="o")&&(f=="o")&&(i=="o")){
    std::cout<<"Player 2 win";
    return;
  }
    else if ((a=="o")&&(e=="o")&&(i=="o")){
    std::cout<<"Player 2 win";
    return;
    }
      else if ((g=="o")&&(e=="o")&&(c=="o")){
    std::cout<<"Player 2 win";
    return;
  }
 }

int main(){


board();

//#1
std::cout<< "Player 1, what is your choice: \n";
std::cin>>a1;
bruh(a1);
board();
snot(a,b,c);
snot1(a,b,c);

//#2
 std::cout<<"Player 2, What is your choice?";
std::cin>>a2;
opp(a2);
board();
snot(a,b,c);
snot1(a,b,c);

//#3
std::cout<< "Player 1, what is your choice: \n";
std::cin>>a1;
bruh(a1);
board();
snot(a,b,c);
snot1(a,b,c);

//#4
 std::cout<<"Player 2, What is your choice?";
std::cin>>a2;
opp(a2);
board();
snot(a,b,c);
snot1(a,b,c);

//#5
std::cout<< "Player 1, what is your choice: \n";
std::cin>>a1;
bruh(a1);
board();
snot(a,b,c);
snot1(a,b,c);

//#6
std::cout<<"Player 2, What is your choice?";
std::cin>>a2;
opp(a2);
board();
snot(a,b,c);
snot1(a,b,c);

//#7
std::cout<< "Player 1, what is your choice: \n";
std::cin>>a1;
bruh(a1);
board();
snot(a,b,c);
snot1(a,b,c);

//#8
std::cout<<"Player 2, What is your choice?";
std::cin>>a2;
opp(a2);
board();
snot(a,b,c);
snot1(a,b,c);

//#9
std::cout<< "Player 1, what is your choice: \n";
std::cin>>a1;
bruh(a1);
board();
snot(a,b,c);
snot1(a,b,c);

std::cout<<"Tie";

return 0;

}

