#include <iostream>
#include <string>
using namespace std;

void printText( 
    string textForPrintData, 
    bool isHaveTranslateToNewLine ) 
    {

    string text = textForPrintData;

    string ifTrueTranslateToNewLineSymbol = "";
    string translateToNewLineSymbol = "\n";
    string notTranslateToNewLineSymbol = "";

    if (isHaveTranslateToNewLine == true) 
    {
        ifTrueTranslateToNewLineSymbol = translateToNewLineSymbol;
    }

    std::cout << text << ifTrueTranslateToNewLineSymbol;

}

int main()
{

    // define mini letter a
    string a = "a"; 
    a;
    // define mini letter b
    string b = "b"; 
    b;
    // define mini letter c
    string c = "c"; 
    c;
    // define mini letter d
    string d = "d"; 
    d;
    // define mini letter e
    string e = "e"; 
    e;
    // define mini letter f
    string f = "f";
    f; 
    // define mini letter g
    string g = "g";
    g; 
    // define mini letter h
    string h = "h";
    h; 
    // define mini letter i
    string i = "i";
    i; 
    // define mini letter j
    string j = "j"; 
    j;
    // define mini letter k
    string k = "k"; 
    k;
    // define mini letter l
    string l = "l"; 
    l;
    // define mini letter m
    string m = "m"; 
    m;
    // define mini letter n
    string n = "n"; 
    n;
    // define mini letter o
    string o = "o"; 
    o;
    // define mini letter p
    string p = "p"; 
    p;
    // define mini letter q
    string q = "q"; 
    q;
    // define mini letter r
    string r = "r"; 
    r;
    // define mini letter s
    string s = "s"; 
    s;
    // define mini letter t
    string t = "t"; 
    t;
    // define mini letter u
    string u = "u"; 
    u;
    // define mini letter v
    string v = "v"; 
    v;
    // define mini letter w
    string w = "w"; 
    w;
    // define mini letter x
    string x = "x"; 
    x;
    // define mini letter y
    string y = "y"; 
    y;
    // define mini letter z
    string z = "z"; 
    z;


    // define big letter A
    string A = "A"; 
    A;
    // define big letter B
    string B = "B"; 
    B;
    // define big letter C
    string C = "C"; 
    C;
    // define big letter D
    string D = "D"; 
    D;
    // define big letter E
    string E = "E"; 
    E;
    // define big letter F
    string F = "F"; 
    F;
    // define big letter G
    string G = "G"; 
    G;
    // define big letter H
    string H = "H"; 
    H;
    // define big letter I
    string I = "I"; 
    I;
    // define big letter J
    string J = "J"; 
    J;
    // define big letter K
    string K = "K"; 
    K;
    // define big letter L
    string L = "L"; 
    L;
    // define big letter M
    string M = "M"; 
    M;
    // define big letter N
    string N = "N"; 
    N;
    // define big letter O
    string O = "O"; 
    O;
    // define big letter P
    string P = "P"; 
    P;
    // define big letter Q
    string Q = "Q"; 
    Q;
    // define big letter R
    string R = "R"; 
    R;
    // define big letter S
    string S = "S"; 
    S;
    // define big letter T
    string T = "T"; 
    T;
    // define big letter U
    string U = "U"; 
    U;
    // define big letter V
    string V = "V"; 
    V;
    // define big letter W
    string W = "W"; 
    W;
    // define big letter X
    string X = "X";
    X; 
    // define big letter Y
    string Y = "Y"; 
    Y;
    // define big letter Z
    string Z = "Z"; 
    Z;


    // define symbol point
    string point = "."; 
    point;
    // define symbol comma
    string comma = ","; 
    comma;
    // define symbol exclamation point
    string exclamationpoint = "!"; 
    exclamationpoint;
    // define symbol question mark
    string questionmark = "?"; 
    questionmark;
    // define symbol two points
    string twopoints = ":"; 
    twopoints;
    // define symbol space
    string space = " "; 
    space;


    // define first part of text "Hello, World!"
    string firstPartOfHelloWorldText = H + e + l + l + o; 
    firstPartOfHelloWorldText;
    // define symbols part of text "Hello, World!"
    string symbolsPartOfHelloWorldText = comma + space; 
    symbolsPartOfHelloWorldText;
    // define second part of text "Hello, World!"
    string secondPartOfHelloWorldText = W + o + r + l + d; 
    secondPartOfHelloWorldText;
    // define symbol second part of text "Hello, World!"
    string secondSymbolOfHelloWorldText = exclamationpoint; 
    secondSymbolOfHelloWorldText;


    // define text "Hello, World!"
    string helloworld = firstPartOfHelloWorldText + symbolsPartOfHelloWorldText + secondPartOfHelloWorldText + secondSymbolOfHelloWorldText; 
    helloworld;


    // define converges or not
    bool convergesOrNot; 
    convergesOrNot;

    // check if helloworld varible converges with text "Hello, World!"
    if (helloworld == firstPartOfHelloWorldText + symbolsPartOfHelloWorldText + secondPartOfHelloWorldText + secondSymbolOfHelloWorldText) {
        if (helloworld == "Hello, World!") {
            convergesOrNot = true;
        } else {
            convergesOrNot = false;
        }
    } else {
        convergesOrNot = false;
    }

    // print text
    if (convergesOrNot) {
        printText(helloworld, true);
    } else {
        return 1;
    }

    // return value zero. this return to windows what program run success
    return 0; 
}