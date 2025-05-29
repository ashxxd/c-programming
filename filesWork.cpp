 /* #include<iostream>
 #include<fstream>
 using namespace std;
 int main()
 {
     ofstream myfile("day8.txt");
     myfile<<"it's just the beginning\n";
     myfile<<"just enjoy the process\n";
    myfile.close();
} */
    


 ///writting the text file in the file
 
 /* #include<iostream>
 #include<fstream>
 #include<string.h>
 using namespace std;
 int main()
 {
    ifstream myfile("day8.txt");
    string str;
    while(getline(myfile,str))
    cout<<str<<endl;
    myfile.close();
} */

//append
/* #include<iostream>
 #include<fstream>
 using namespace std;
 int main()
 {
     ofstream myfile("day8.txt",ios::app);
     myfile<<"go through all the rough and tough stages ";
    myfile.close();
} */


#include<iostream>
 #include<fstream>
 using namespace std;
 int main()
 {
     ofstream file("workingfile.cpp");

     file<<"#include<iostream>\n ";
     file<<"#include<fstream>\n ";
     file<<"using namespace std;\n ";
     file<<"int main()\n ";
     file<<"{\n ";
     file<<"cout<<\"hello world\";\n ";
     file<<"return 0;\n ";
     file<<"}\n ";
    file.close();
}