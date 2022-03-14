#include <iostream>
#include <fstream>
// #include <cstdio>
#define cout std::cout
#define ln std::endl
#define string std::string
#define fstream std::fstream 
#define ofstream std::ofstream

int main(int ac, char **av)
{
    if(ac == 4)
	{
		fstream file(av[1], std::ios::in);
    	string s1, s2;
    	s1 = string(av[2]);
    	s2 = string(av[3]);
    	if(!file.is_open()) { cout << "cannot open this file" << ln; return 0; }
    	if(s1.empty() || s2.empty()) { cout << "error: empty string" << ln; return 0; }
		ofstream newfile(string(av[1]) + ".replace");
		// while(file){
			getline(file, s1);
			size_t pos = 0;
			pos = s1.find(av[2]);
			if(pos >= 0 )
				newfile << av[2];
			if(pos == string::npos)
				cout << "| " << av[2] << " |" << " not found in file: " << av[1] << ln ; return 0;
			cout << pos << ln;
		// }

    }

    else
        cout << "error bad arguments" << ln ; return 0;

    // filetest.close();
    
    return 0;
}