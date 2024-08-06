#include <iostream>
#include <limits>
using namespace std;
int main(){
    cout << R"(                                                                    **      **  **    **   ______   **    **  ________ 
/  \    /  |/  |  /  | /      \ /  |  /  |/        |
$$  \  /$$/ $$ |  $$ |/$$$$$$  |$$ |  $$ |$$$$$$$$/ 
 $$  \/$$/  $$ |  $$ |$$ \__$$/ $$ |  $$ |$$ |__    
  $$  $$/   $$ |  $$ |$$      \ $$ |  $$ |$$    |   
   $$$$/    $$ |  $$ | $$$$$$  |$$ |  $$ |$$$$$/    
    $$ |    $$ \__$$ |/  \__$$ |$$ \__$$ |$$ |      
    $$ |    $$    $$/ $$    $$/ $$    $$/ $$ |      
    $$/      $$$$$$/   $$$$$$/   $$$$$$/  $$/       
)" << '\n';
    int a = 10;   //bilangan bulat
    long b = 19L; //long integer

    cout << a << endl;
    cout <<sizeof(a) << " byte" << endl;
    cout << "Nilai maksimum untuk tipe int: " << numeric_limits<int>::max() << endl;
    cout << "Nilai minimum untuk tipe int: " << numeric_limits<int>::min() << endl;
 
    cin.get();
    return 0;
}