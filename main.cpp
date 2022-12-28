// #include <iostream>
// #include <ctime>

// using namespace std;

// int main(){
//     // generujemy losowo tablice
//     // wyswietlamy co trzeci element
//     int liczbylosowe[15]; //globalna zmienna
    
//     srand(time(NULL));    
    
//     for (int i=0; i<15; i++){
//         liczbylosowe[i]=rand()%6+5; //zakres losowanych liczb (od 0 do 5), a potem presuniemy to o 5
//         cout << liczbylosowe[i] << " ";
//     }
//     cout<<"\n";

//     for (int i=0; i<15; i+=3){
//         liczbylosowe[i]=rand()%6+5; //zakres losowanych liczb (od 0 do 5), a potem presuniemy to o 5
//         cout << i << ":" << liczbylosowe[i] << " ";
//     }

//     return 0;
// }



// // Среднее арифметическое
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i;
//     float a[50], sum=0;
//     cout << "Type the size of the list:\n";
//     cin >> n;
//     cout << "Type the number(s):\n";
//     for (i=0; i<n; i++)
//         cin >> a[i];
//     for (i=0; i<n; i++)
//         sum+=a[i];
//     cout << "The middle number is:\n" << sum/n << endl;
//     system("pause");
//     return 0;
// }

// #include <iostream>
// #include <ctime> //dla funkcji time
// #include <cstdlib> //dla srand i rand

// using namespace std;
// int main()
// {
//     int n, i;
//     float a[50], sum=0;
//     cout << "Type the size of the list:\n";
//     cin >> n;
//     cout << "Type the number(s):\n";
//     for (i=0; i<n; i++)
//         cin >> a[i];
//     for (i=0; i<n; i++)
//         sum+=a[i];
//     cout << "The middle number is:\n" << sum/n << endl;
//     system("pause");
//     return 0;
// }

// #include <iostream>
// #include<ctime>
// using namespace std;

// /*Найти самое маленькое число в массиве и вывести его не экран*/

// int main()
// {
//     srand(time(NULL));

//     int SIZE = 10;
//     int arr[SIZE];

//     bool alreadyThere;

//     for (int i = 0; i < SIZE; )
//     {
//     alreadyThere = false;
//     int newRanomValue = rand() % 20;

//         for (int j = 0; j < i; j++)
//         {
//             if (arr[j]==newRanomValue)
//             {
//                 alreadyThere = true;
//                 break;
//             }
//         }

//     if (!alreadyThere)
//     {
//         arr[i] = newRanomValue;
//         i++;
//     }

//     }

//     // поиск минимального элемента массива

//     int minValue = arr[0];

//     for (int i = 1; i < SIZE; i++)
//     {
//         if (arr[i]<minValue)
//         {
//             minValue = arr[i];
//         }
//     }

//     cout << "The minimal number is  " << minValue << endl;

//     return 0;
// }

// 1 ___________________________________________________________
// #include <iostream>
// #include <ctime>

// using namespace std;

// int main()
// {

//     int size = 10;
//     int arr[size];

//     // generating
//     srand(time(NULL));
//     for(int i=0; i<size; i++)
//     {
//         arr[i] = rand()% 100;
//     }
//     int min = arr[0];
//     int indexofmin = 0;
//     for(int i=1; i<size; i++)
//     {
//         if(arr[i]<min)
//         {
//             min = arr[i];
//             indexofmin = i;
//         }
//     }

//     // printing
//     for(int i=0; i<size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\nMinimum = " << min << " , index = " << indexofmin;

//     return 0;
// }


// 2 ___________________________________________________________
// #include <iostream>
// using namespace std;

// int main(){

//     for (int i=0; i<=20; i+=5)
//     {
//         if(i>0){
//             // cout << i << " ";
//             int arr[4] = {i};
//             cout << arr[4] << " ";
//         }
//     }
//     cout<<"\n";

//     return 0;
// }

// 3 ___________________________________________________________
// #include <iostream>
// using namespace std;

// int main(){

//     cout << "Please type the letters: " << endl;

//     char arr[3];

//     cin >> arr[0];
//     cin >> arr[1];
//     cin >> arr[2];
//     cin >> arr[3];
//     arr[4] = {'\0'}; //usuwa dziwne symboly z output;

//     cout <<"You typed: " << arr;

//     return 0;
// }


// 4 ___________________________________________________________
// #include <iostream>
// using namespace std;

// int main()
// {
// 	int size;

// 	cout << "Ile razy wyswietlic wzor? " << endl;
// 	cin >> size;

//     string arr[] = {"-<*>-"};

// 	for (int i = 0; i < size; i++)
//     {
// 		cout << arr[0] << " ";
// 	}

//     return 0;
// }

// 5 ___________________________________________________________
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <random>
// using namespace std;
// typedef unsigned int UINT;
// int main()
// {
// 	vector<UINT> v{};
// 	UINT num, tmp = 0;
// 	random_device dev;
// 	mt19937 rng(dev());
// 	uniform_int_distribution<mt19937::result_type> dist(1, 10);
// 	cout << "Prosze wpisac rozmiar: ";
// 	cin >> num;
// 	cout << endl;
// 	for (int i = 0; i < num; i++) {
// 		v.push_back(dist(rng));
// 		cout << v[i] << ", "; //\n
// 	}
// 	for (int i = 0; i < v.size(); i++) {
// 		if (v.at(i) == 5) {
// 			tmp++;
// 		}
// 	}
// 	cout << endl << "\nCyfra 5 tutaj sie powtarza: " << tmp << " razy" << endl;
//     return 0;
// }


// #include <iostream>
// #include <ctime>

// using namespace std;

// int main(){

//     cout << "Jaki bedzie rozmiar tablicy? " << endl;
//     int size;
//     cin >> size;
    
//     int arr[size];
    
//     srand(time(NULL));    
    
//     for(int i=0; i<size; i++){
//         arr[i]=rand()%10;
//         cout << arr[i] << " ";
//     }
//     cout<<"\n";

//     return 0;
// }

// 6 ___________________________________________________________
// #include <iostream>
// using namespace std;
// int main()
// {
//     int size;
//     float arr[50];
//     cout << "Napisz rozmiar tablicy:\n";
//     cin >> size;
    
//     cout << "Type the number(s):\n";
    
//     for (int i=0; i<size; i++)
//     {
//         cin >> arr[i];
//         cout << "Do potegi= "<< arr[i]*arr[i] << endl;
//     }

//     system("pause");
    
//     return 0;
// }

// 7 ___________________________________________________________
// #include <iostream> 
// using namespace std; 
// int main()
// { 
//     int input[100], count, i; 
//     int j=0; 
//     cout << "Wpisz wielkosc tablicy\n"; 
//     cin >> count; 
//     cout << "wpisz " << count << " numerow \n"; 
//     for(i = 0; i < count; i++)
//     {
//         input[i]=rand()%10;
//     } 
//     for(int i=0;i<count;i++)
//     cout<<"numer "<<i+1<<"::"<<input[i]<<endl; 
    
//     for(i = 0; i < count; i++)
//     {
//         j=j+input[i];
//     }
//     cout << "srednia tablicy to " << j/count; 
//     return 0;
// }

// 8 ___________________________________________________________
// #include <iostream>
// using namespace std;
// int main()
// {
//     int input[100], count, i, min;
//     cout << "Wpisz wielkosc\n";
//     cin >> count;
//     cout << "Podaj " << count << " numerow \n";
//     // read aray elements
//     for(i = 0; i < count; i++)
//     {
//         cin >> input[i];
//     }
//     cout<<"\nnieparzyste elementy tablicy::"<<endl;
//     for(int i=0;i<count;i++)
//     {
//         if(i%2!=0)
//         {
//             cout<<"Element # "<<i++<<"::"<<input[i]<<endl;
//         }
//     }
//     return 0;
//     }











// 1 ___________________________________________________________
// #include <iostream>
// #include <cmath>
// #include <ctime>
// #include <cstdlib>
// using namespace std;

// int main(){    

//     // declaration of array
//     int arr[2][3], arr_after[2][3];
//     srand(time(NULL));

//     // generating random values
//     cout<<"The generated array:\n";
//     for(int i = 0; i<2; i++)
//         for(int j = 0; j<3; j++)
//             arr[i][j] = rand()%10; // arr[i][j] = (rand()%10)*12;

//     // printing
//     for(int i = 0; i<2; i++){
//         for(int j = 0; j<3; j++){
//             cout<< arr[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     cout << endl;
    
//     // copying 
//     for(int i = 0; i<2; i++)
//         for(int j = 0; j<3; j++)
//             arr_after[i][j] = (arr[i][j])*12;

//     // printing the final result
//     cout<<"The array multiplied on 12 (last two numbers of my album number):\n";
//     for(int i = 0; i<2; i++){
//         for(int j = 0; j<3; j++){
//             cout<< arr_after[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// 2 ___________________________________________________________
// #include <iostream>
// #include <cmath>
// #include <ctime>
// #include <cstdlib>
// using namespace std;

// int main(){    

//     // declaration of array
//     int arr[2][3];
//     float arr_after[2][3];
//     srand(time(NULL));

//     // generating random values
//     cout<<"The generated array:\n";
//     for(int i = 0; i<2; i++)
//         for(int j = 0; j<3; j++)
//             arr[i][j] = rand()%10; // arr[i][j] = (rand()%10)*12;

//     // printing
//     for(int i = 0; i<2; i++){
//         for(int j = 0; j<3; j++){
//             cout<< arr[i][j] << " ";
//         }
//         cout << "\n";
//     }
    
//     cout << endl;
    
//     // copying 
//     for(int i = 0; i<2; i++)
//         for(int j = 0; j<3; j++)
//             arr_after[i][j] = sin(arr[i][j]);

//     // printing the finale result
//     cout<<"The sinus:\n";
//     for(int i = 0; i<2; i++){
//         for(int j = 0; j<3; j++){
//             cout<< arr_after[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// 3 ___________________________________________________________
// #include <iostream>
// #include <cmath>
// #include <ctime>
// #include <cstdlib>
// using namespace std;

// int main(){    

//     // declaration of the raws and columns
//     int raws, columns;
    
//     // number request
//     cout << "Please type the amount of raws:\n";
//     cin >> raws;
//     cout << "Please type the amount of columns:\n";
//     cin >> columns;

//     // declaration of array
//     int arr[raws][columns];

//     // generating
//     cout << "Please type the numbers inside of your array:\n";
//     for(int i = 0; i<raws; i++)
//         for(int j = 0; j<columns; j++)
//             cin >> arr[i][j];

//     // printing
//     cout<<"You created array:\n";
//     for(int i = 0; i<raws; i++){
//         for(int j = 0; j<columns; j++){
//             cout<< arr[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// 4 ___________________________________________________________
// #include <iostream>
// using namespace std;

// int main(){    
    
//     //declaring the raws and columns
//     int raws, columns;

//     //asking for values
//     cout<<"Please input the amount of raws and columns for the both matrices:\n";
//     cin>>raws;
//     cin>>columns;

//     //declaring the arrays
//     int matrix_1[raws][columns];
//     int matrix_2[raws][columns];

//     //declaring the sum
//     int sum[raws][columns] = {0};
//     cout<<endl;

//     //generating the array(matrix_1)
//     cout<<"Please input the numbers for the 1st matrix:\n";
//     for(int i=0; i<raws; i++){
//         for(int j=0; j<columns; j++){
//             cin>>matrix_1[i][j];
//         }
//     }
//     cout<<endl;

//     //generating the array(matrix_2)
//     cout<<"Please input the numbers for for the 2nd matrix:\n";
//     for(int i=0; i<raws; i++){
//         for(int j=0; j<columns; j++){
//             cin>>matrix_2[i][j];
//         }
//     }
//     cout<<endl;

//     // printing matrix_1
//     cout<<"The 1st matrix:\n";
//     for(int i=0; i<raws; i++){
//         for(int j=0; j<columns; j++){
//             cout<<matrix_1[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;

//     // printing matrix_2
//     cout<<"The 2nd matrix:\n";
//     for(int i=0; i<raws; i++){
//         for(int j=0; j<columns; j++){
//             cout<<matrix_2[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout << endl;

//     //summation
//     cout << "The sum is:\n";
//    for(int i = 0; i < raws; i++){
//       for(int j = 0; j < columns; j++){
//         sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
//         cout << sum[i][j] << " ";
//       }
//       cout << endl;
//    }
//     return 0;
// }

// 5 ___________________________________________________________
// #include <iostream>
// #include <cmath>
// #include <ctime>
// #include <cstdlib>
// using namespace std;

// int main(){    
    
//     //declaring the array  
//     int arr[3][3];

//     //declaring the min value
//     int min;

//     srand(time(NULL));

//     //generating the array
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             arr[i][j] = rand()%100;
//         }
//     }

//     min = arr[0][0];

//     // printing
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<arr[i][j]<<" ";
            
//             // min algorythm
//             if(arr[i][j] < min){
//                 min = arr[i][j];
//             }
//         }
//         cout<<endl;
//     }
//     cout<<"Minimal number is: " << min << endl;

//     return 0;
// }

// 6 ___________________________________________________________
// #include <iostream>
// #include <cmath>
// #include <ctime>
// #include <cstdlib>
// using namespace std;

// int main(){    
    
//     //declaring the array and  
//     int arr[3][3];

//     //declaring the max value
//     int max;

//     srand(time(NULL));

//     //generating the array
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             arr[i][j] = rand()%100;
//         }
//     }

//     max = arr[0][0];

//     // printing
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<arr[i][j]<<" ";

//             // max algorythm
//             if(arr[i][j] > max){
//                 max = arr[i][j];
//             }
//         }
//         cout<<endl;
//     }

//     cout<<"Maxinmal number is: " << max << endl;

//     return 0;
// }


// MIN AND MAX
// #include <iostream>
// #include <cmath>
// #include <ctime>
// #include <cstdlib>
// using namespace std;

// int main(){    
    
//     //declaring the array and  
//     int arr[3][3];

//     //declaring the min and max values
//     int min, max;

//     srand(time(NULL));

//     //generating the array
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             arr[i][j] = rand()%100;
//         }
//     }

//     max = arr[0][0];
//     min = arr[0][0];

//     // printing
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<arr[i][j]<<" ";

//             if(arr[i][j] < min){
//                 min = arr[i][j];
//             }
//             if(arr[i][j] > max){
//                 max = arr[i][j];
//             }
//         }
//         cout<<endl;
//     }

//     cout<<"Minimal number is: " << min << endl;
//     cout<<"Maxinaml number is: " << max << endl;

//     return 0;
// }

// 28.11.2021
// 1 ___________________________________________________________
// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int main(){
//     int firstLetter = 97;
//     int lastLetter = 122;
//     int arraySize = 122 - 97;
//     char *randomAlphabet = new char[arraySize];
//     // generate normal alphabet
//     for (int i = firstLetter, k = 0; i <= lastLetter; i++){
//         randomAlphabet[k++] = i;
//     }
//     for (int i = 0; i <= arraySize; i++){
//         cout << randomAlphabet[i] << " ";
//     }
//     for (int i = 0; i <= arraySize; i++){
//         int randomIndex = rand() % (arraySize + 1);
//         int temp = randomAlphabet[randomIndex];
//         randomAlphabet[randomIndex] = randomAlphabet[i];
//         randomAlphabet[i] = temp;
//     }
//     cout << endl;
//     for (int i = 0; i <= arraySize; i++){
//         cout << randomAlphabet[i] << " ";
//     }
// }

// 2 ___________________________________________________________
// #include <iostream>
// #include <cmath>
// #include <ctime>
// #include <cstdlib>
// using namespace std;
// void permutations(string word, int l, int r){
//     if(l == r){
//         cout << word << "\n";
//     }
//     else{
//         for(int i = l; i < r; i++){
//             swap(word[l], word[i]);
//             permutations(word, l+1, r);
//         }
//     }
// }
// int main(){
//     srand(time(NULL));
//     char letter = 'a';
//     string word = "";
//     for(int i = 0; i < 4; i++){
//         letter += rand() % 26;
//         word += letter;
//         letter = 'a';
//     }
//     cout << "Generated word:\n" << word << "\n";
//     cout << "All the possible combinations:\n";
//     permutations(word, 0, 4);
//     return 0;
// }

// 3 ___________________________________________________________
// # include <iostream>
// # include <ctime>
// # include <cstdlib>
// using namespace std;

// string polindrome(string words)
// {
//     string reversed = "";
//     int words_length = words.length();
//     for(int i = words_length-1; i >= 0; i--)
//     {
//         reversed += words[i];
//     }
//     return reversed;
// }

// int main()
// {
//     string words1, words2;
//     cout << "Give me some words \n";
//     cin >> words1;
//     words2 = polindrome(words1);
//     if(words1 == words2)
//         cout << "It's palindrome";
//     else cout << "It's not palindrome";
// }

// 4 ___________________________________________________________
// # include <iostream>
// # include <ctime>
// # include <cstdlib>
// #include <map>
// using namespace std;
// int main()
// {
//     srand(time(NULL));
//     char letter;
//     map <char, int> mapa;
//     for(int i = 0; i < 173; i++)
//     {
//         letter = 'a';
//         letter += rand() % 26;
//         if(mapa.find(letter) != mapa.end())
//             mapa[letter]++;
//         else mapa[letter] = 1;
//         cout << letter;
//         letter = 'a';
//     }
//     cout << "\n\n\n\n";
//     for(auto element = mapa.begin(); element != mapa.end(); element++){
//         cout << element->first << ": " << element->second << endl;
//     }    
//     return 0;
// }

// 5 ___________________________________________________________
// # include <iostream>
// # include <ctime>
// # include <cstdlib>
// using namespace std;
// int main(){
//     string text ;
//     int text_length;
//     cout << "Give me the text\n";
//     getline(cin, text);
//     text_length = text.length();
//     cout << "Result\n";
//     for(int i = 3; i <= text_length; i+=4)
//     {
//         text[i] = '*';
//     }
//     cout << text;
//     return 0;
// }

// 6 ___________________________________________________________
// #include <iostream>
// #include <ctime>
// #include <map>
// using namespace std;

// int main()
// {
// 	int n;
// 	cout<<"Give me the size of the table :";
// 	cin>>n;                             
// 	char A[n][n];
// 	int len=n,k=1,p=0,i;           
// 	char letter= 'a';				
								
// 	while(k<=n*n)                      
// 	{
// 		for(i=p;i<len;i++)         
// 		{
// 			A[p][i]=letter++;
// 			k++;
// 		}
// 		for(i=p+1;i<len;i++)      
// 		{
// 			A[i][len-1]=letter++;
// 			k++;
// 		}
// 		for(i=len-2;i>=p;i--)     
// 		{
// 			A[len-1][i]=letter++;
// 			k++;
// 		}
// 		for(i=len-2;i>p;i--)     
// 		{
// 			A[i][p]=letter++;
// 			k++;
// 		}
// 		p++,len=len-1;
		
// 	}
// 	if(!n%2)                      
// 	{
// 		A[(n+1)/2][(n+1)/2]=n*n; 
// 	}
// 	for(i=0;i<n;i++)             
// 	{
// 		for(int j=0;j<n;j++)
// 		{
// 			cout<<A[i][j]<<"\t";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }


// 1 ___________________________________________________________
// #include <iostream>
// using namespace std;

// int a_1(int a){
// 	return a;
// }

// int a_2(int a){
// 	return a+a;
// }

// int a_3(int a){
// 	return a+a+a;
// }

// int main(){
	
// 	int num;
// 	cout << "Give me the last number of your album\n";
// 	cin >> num; 

// 	cout << a_1(num) << ", " << a_2(num) << ", " << a_3(num);
// 	return 0;
// }


// 2 ___________________________________________________________
// #include <iostream>
// using namespace std;

// void func(int size){

// 	int matrix[size][size];

//     for(int i=0; i<size; i++){
//         for(int j=0; j<size; j++){
// 			if(i == j)
// 				cout << 1 << " ";
//             else
// 				cout << 0 << " ";
// 		}
//         cout<<endl;
// 	}
// }

// int main(){
	
// 	int size;
// 	cout << "Please give me the size of the square matrix" << endl;
// 	cin >> size;

// 	func(size);

// 	return 0;
// }


// 3 ___________________________________________________________
// # include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
 
// int middle(int a, int b, int c)
// {
//     // Checking for b
//     if ((a < b && b < c) || (c < b && b < a))
//        return b;
 
//     // Checking for a
//     else if ((b < a && a < c) || (c < a && a < b))
//        return a;
 
//     else
//        return c;
// }

// int main()
// {
//     cout << "The middle number among the give ones is: " << middle(5, 3, 2);
//     return 0;
// }

// 4 ___________________________________________________________
// #include <iostream>
// #include <string>
// using namespace std;
 
// int func(string word)
// {

// 	int z_count = 0;
// 	int o_count = 0;

// 	for(int i = 0; i<word.length(); i++){
// 		if(word[i] == 'Z' || word[i] == 'z'){
// 			z_count++;
// 		}
// 		else{
// 			o_count++;
// 		}
// 	}
	
// 	o_count/z_count>=z_count ? cout << "You can create " << z_count << " word\"zoo\"":cout<<"You can create " << z_count-1 << " word\"zoo\"";

// 	return 0;
// }

// int main(){
	
// 	string word;
// 	cout << "Please type the word with 'z' and 'o'" << endl;
// 	cin >> word;
// 	cout << endl;
// 	func(word);
	
//     return 0;
// }

// 5 ___________________________________________________________
// # include <iostream>
// using namespace std;
// float addition(float, float);
// float subtraction(float, float);
// float multiplication(float, float);
// float division(float, float);

// int main(){

// 	char question;
// 	cout << "Please choose among those operations: +, -, *, /\n";
// 	cin >> question;	

// 	int num_1, num_2;
// 	cout << "Please input the first number\n";
// 	cin >> num_1;

// 	cout << "Please input the second number\n";
// 	cin >> num_2;

// 	if(question == '+')
// 		cout << "The answer is: " << addition(num_1, num_2);
// 	else if(question == '-')
// 		cout << "The answer is: " << subtraction(num_1, num_2);
// 	else if(question == '*')
// 		cout << "The answer is: " << multiplication(num_1, num_2);
// 	else
// 		cout << "The answer is: " << division(num_1, num_2);

//     return 0;
// }

// float addition(float a, float b){
// 	return a+b;
// }

// float subtraction(float a, float b){
// 	return a-b;
// }

// float multiplication(float a, float b){
// 	return a*b;
// }

// float division(float a, float b){
// 	return a/b;
// }


// 6 ___________________________________________________________
// #include <iostream>
// using namespace std;
// int func(int, int);

// int main()
// {    

//     int raws, columns, num;

//     cout<<"Please input the amount of raws and columns for the matrix:\n";
//     cin>>raws;
//     cin>>columns;

//     int matrix[raws][columns];

//     cout<<"Please input the numbers for the matrix:\n";
//     for(int i=0; i<raws; i++)
// 	{
//         for(int j=0; j<columns; j++)
// 		{
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<endl;

//     cout<<"The matrix:\n";
//     for(int i=0; i<raws; i++)
// 	{
//         for(int j=0; j<columns; j++)
// 		{
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//    }

//    	cout << "Please input the number for multiplying\n";
// 	cin >> num;
	
// 	cout << "The multiplied result is:\n";
//     for(int i=0; i<raws; i++)
// 	{
//         for(int j=0; j<columns; j++)
// 		{
//             cout<<func(matrix[i][j], num) <<" ";
//         } 
//         cout<<endl;
//    }

//     return 0;
// }

// int func(int a, int b){
// 	return a*b;
// }



// WYK 6.12
// #include <iostream>
// using namespace std;
 
// int dodawanie(int a, int b);
// double dodawanie(double a, double b);
// double dodawanie(double a, double b, double c);

// int main(){
// 	cout<<"Dodawanie calkowitych\n";
// 	cout<<dodawanie(2,3)<<"\n";
// 	cout<<"Dodawanie rzeczywistych\n";
// 	cout<<dodawanie(1.5,1.5)<<"\n";
// 	cout<<"Dodawanie trzech\n";
// 	cout<<dodawanie(1.5,1.5,1.5)<<"\n";	
//     return 0;
// }




// int dodawanie(int a, int b){
// 	return a+b;
// }
// double dodawanie(double a, double b){
// 	return a+b;
// }
// double dodawanie(double a, double b, double c){
// 	return a+b+c;
// }
// double dodawanie(double * num...){ 
    // int accumulator = 0;
        // foreach (number in num) accumulator += number return accumulator
//} dodawanie (1, 2, 3, 4)

// #include <iostream>
// using namespace std;
 
// int Sumaciagu(int n);

// int main(){

// 	cout<<"Suma ciagu postaci 1,2,3...n dla 15:\n";
// 	cout<<Sumaciagu(5);

//     return 0;
// }

// int Sumaciagu(int n){
	
// 	if(n == 1)
// 		return 1;
	
// 	return n+Sumaciagu(n-1);
// }








// 1 ___________________________________________________________
// #include <iostream>
// using namespace std;
 
// int maximum(int a, int b){
// 	if(a>b)
// 		return a;
// 	else
// 		return b;
// }

// double maximum(double a, double b){
// 	if(a>b)
// 		return a;
// 	else
// 		return b;
// }

// char maximum(char a, char b){
// 	if(a>b)
// 		return a;
// 	else
// 		return b;
// }

// int main(){
	
// 	cout << maximum(1, 2) <<"\n";
// 	cout << maximum(2.6, 1.1) <<"\n";
// 	cout << maximum('a', 'c') << "\n";

//     return 0;
// }



// 2 ___________________________________________________________
// #include <iostream>
// using namespace std;
// double percentage(double number, double percent);

// int main(){
	
// 	cout << percentage(125, 50);

//     return 0;
// }

// double percentage(double number, double percent){
	
// 	return number * (percent / 100);
// }


// 4 ___________________________________________________________
// #include <iostream>
// using namespace std;
// int pole(int a);
// double pole(double a, double b);

// int main(){
	
// 	cout << "Pole kwadratu = " << pole(3) <<"\n";
// 	cout << "Pole prostokata = "<< pole(4, 8) << "\n";

//     return 0;
// }

// int pole(int a){
// 	return a*a;
// }

// double pole(double a, double b){
// 	return a*b;
// }




// TEXTS______________________________________________________________
// 1 ___________________________________________________________
// #include <iostream>
// #include <fstream>

// using namespace std;

// int main(){

//     ofstream file("text.txt");
//     string str = "You can check the text right here if you want to, of course";
//     file << str;
//     file.close();
//     return 0;
// }

// 2 ___________________________________________________________
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(int argc, char** argv) {
// 	ofstream file("tree.txt");
// 	int rozmiar;
// 	cout << "Give me the size: ";
// 	cin >> rozmiar;
// 	for(int i = 0; i < rozmiar; i++) {
// 		for(int j = 1; j < rozmiar - i; j++) {
// 			file << ' ';
// 		}
// 		for(int j = rozmiar - 2 * i; j <= rozmiar; j++) {
// 			file << '*';
// 		}
// 		file << '\n';
// 	}
// 	file.close();	
// 	return 0;
// }

// 3 ___________________________________________________________
// #include <iostream>
// #include <fstream>

// using namespace std;
// int main(int argc, char** argv) {
// 	int rozmiar;
// 	cout << "Give me the matrix size: ";
// 	cin >> rozmiar;
// 	int arr[rozmiar][rozmiar] = {0};
// 	for(int i = 0; i < rozmiar; i++) {
// 		for(int j = 0; j < rozmiar; j++) {
// 			int elm;
// 			cin >> elm;
// 			arr[i][j] = elm;
// 		}
// 	}
	
// 	ofstream file("matrix.txt");
// 	for(int i = 0; i < rozmiar; i++) {
// 		for(int j = 0; j < rozmiar; j++) {
// 			file << arr[i][j] << ' ';
// 		}
// 		file << "\n";
// 	}
// 	file.close();
	
// 	return 0;
// }

// 4 ___________________________________________________________
// #include <iostream>
// #include <fstream>

// using namespace std;
// int main(int argc, char** argv) {
// 	ifstream file("macierz.txt");
// 	string str;
// 	string das;
// 	while(getline(file, str)) {
// 		das += str + "\n";
// 	}
// 	file.close();
// 	cout << das;
// 	return 0;
// }

// 5 ___________________________________________________________
// #include <iostream>
// #include <fstream>
// #include <vector>
// using namespace std;

// int main(int argc, char** argv) {
// 	ifstream file("macierz_1.txt");
// 	string str;
// 	int rozmiar = 10;
// 	string arr[rozmiar];
// 	int i = 0;
// 	while(getline(file, str)) {
// 		arr[i] = str;
// 		i++;
// 	}
// 	file.close();
	
// 	for(int j = 0; j < rozmiar; j++) {
// 		cout << arr[j] << ' ';
// 	}
	
// 	return 0;
// }

// 6 ___________________________________________________________
// #include <iostream>
// #include <fstream>

// using namespace std;
// int main(int argc, char** argv) {
// 	string fileName, str;
// 	cout << "Type the name of document:\n";
// 	getline(cin, fileName);
// 	fileName += ".txt";
// 	ifstream file;
// 	file.open(fileName.c_str());
// 	if(file) {
// 		string str;
// 		while(getline(file, str)) {
// 			cout << str << endl;
// 		}
// 	} else {
// 		cout << "doesn't exist";
// 	}
// 	file.close();
// 	return 0;
// }




// SWAP FUNC
// #include <iostream>
// using namespace std;

// void swap(int& num1, int& num2){

// 	int temp = num1;
// 	num1 = num2;
// 	num2 = temp; 
// }

// int main(){

// 	int n1 = 2, n2 = 5;
// 	cout << "Before swapping n1 = " << n1 << ", n2 = " << n2 << "\n";
	
// 	swap(n1, n2);
// 	cout << "After swapping n1 = " << n1 << ", n2 = " << n2 << "\n";
	
// 	return 0;
// }






// CONSTANT ITERABLES
// #include <iostream>
// #include <ctime>
// #include <cstdlib>
// const int size = 20;

// using namespace std;

// int main()
// {
// 	int array[size];
// 	srand(time(NULL));
// 	for(int i=0; i<size; i++)
// 	{
// 		array[i]=rand()%100;
// 		cout << array[i] << " ";
// 	}
// 	return 0;
// }



// 1 ___________________________________________________________
// #include <iostream>  
// using namespace std;

// int main(){

//     int a = 10, b = 9;
//     int *pA = &a;
//     int *pB = &b;

//     cout << "Value of a variable = " << a << "\n";
//     cout << "Value of b variable = " << b << "\n";

//     cout << "Adress of a variable = " << pA << "\n";
//     cout << "Adress of b variable = " << pB << "\n";

//     return 0;
// }

// 2 ___________________________________________________________
// # include <iostream>
// typedef int it;
// using namespace std;

// int main(){

//     it a = 1;
//     it b = 2;

//     cout << "First num = " << a << "\n";
//     cout << "Second num = " << b << "\n";

//     return 0;
// }

// ARRAY ___________________________________________________________
// # include <iostream>
// using namespace std;

// int main(){
    
//     int size = 5;
//     int array[size];

//     for(int i=0; i<size; i++){
//         array[i] = i*3; // multiply all the elements on 3
//         cout << array[i] << " ";
//     }

//     return 0;
// }

// 3 ___________________________________________________________
// # include <iostream>
// using namespace std;

// int main(){
    
//     int array[3] = {3, 7, 14};
//     int* wskaznik = array;

//     for(int i=0; i<3; i++)
//     {
//         cout << "Address: " << (array + i) << " *(array + i)= " << *(array + i) << " array [i]= " << array [i];
//         cout << " *(wskaznik + i)= " << *(wskaznik + i) << " wskaznik[i]= " << wskaznik[i] << "\n";
//     }

//     return 0;
// }

// 4 ___________________________________________________________
// # include <iostream>
// using namespace std;

// void add(int& a, int& b, int& c){
//     a += c;
//     b += c;

//     cout << endl;
//     cout << "3rd number added to the 1st one = " << a << "\n";
//     cout << "3rd number added to the 2nd one = " << b << "\n";

// }

// int main(){
//     int num1, num2, num3;

//     cout << "Please input the 1st number : " << "\n";
//     cin >> num1;
//     cout << "Please input the 2nd number : " << "\n";
//     cin >> num2;
//     cout << "Please input the 3rd number : " << "\n";
//     cin >> num3;

//     add(num1, num2, num3);

//     return 0;
// }

// 6 ___________________________________________________________
// #include <iostream>
// #include<ctime>
// #include<cstdlib>
// using namespace std;
 
// int main(int argc, char** argv){

// 	int size=10;
// 	srand(time(NULL));
	
//     int array[size];
// 	cout<<"The array: \n";
	
//     for(int i=0; i<size; i++)
// 	{
// 		*(array+i)=rand()%20;
// 		cout<<*(array+i)<<" ";
// 	}
	
//     cout<<"\n";
	
//     int num;
// 	cout<<"Your number for multiplying?:  \n";
// 	cin>>num;
	
//     for(int i=0; i<size; i++)
// 	{
// 		*(array+i)*=num;
// 		cout<<*(array+i)<<" ";
// 	}
// 	cout<<"\n";
    
//     return 0;
// }

// 5 ___________________________________________________________
// #include <iostream>
// #include <ctime>
// #include <cstdlib>
// using namespace std;

// int main(){
//     int size = 10;
//     srand(time(NULL));
// 	int array[size];

// 	for(int i=0; i<size; i++)
//         if(i%2==0){
//             *(array+i)=rand()%20;
//             cout<<"Nr: "<<i<<" = "<<array[i]<<"\n";
//         }

// 	return 0;
// }



// 1 ___________________________________________________________
// #include <iostream>
// #include <iomanip>
// using namespace std;

// struct data{
//     string bookName;
//     string bookAuthor;
//     string ganre; 
//     int pagesAmount;
//     float price;

// };

// int main(){

//     struct data book = {
//         "Learning Python",
//         "Mark Lutz",
//         "Tutorial",
//         1648,
//         48.88
//     };

//     cout << "Book name:\t\t" << book.bookName << endl;
//     cout << "Author of the book:\t" << book.bookAuthor << endl;
//     cout << "Type of the book:\t" << book.ganre << endl;
//     cout << "Quantity of pages:\t" << book.pagesAmount << endl;
//     cout << "Price on Amazon:\t" << "$" << book.price << endl;

//     return 0;
// }

// 2 ___________________________________________________________
// #include <iostream>
// #include <iomanip>
// using namespace std;

// union data{
//     float inRadian;
//     float inDegree;
// } angle;

// float radian_to_degree(float radian){
//     float degree;
//     degree = (radian*180)/3.14;
//     return degree;
// }

// float degree_to_radian(float degree){
//     float radian;
//     radian = (degree*3.14)/180;
//     return radian;
// }
// int main(){

//     angle.inRadian = 3.2;
//     cout << angle.inRadian <<" Radians = "<<radian_to_degree(angle.inRadian) << " Degrees" << endl;

//     angle.inDegree = 47;
//     cout << angle.inDegree <<" Degrees = "<< degree_to_radian(angle.inDegree) << " Radians" << endl;

//     return 0;
// }

// 3 ___________________________________________________________
// #include <iostream>
// #include <iomanip>
// using namespace std;

// void translation (string month){
//     enum months{STYCZEN, LUTY, MARZEC, KWIECIEN, MAJ, CZERWIEC, LIPIEC, SIERPIEN, WRZESIEN, PAZDZIERNIK, LISTOPAD, GRUDZIEN};
//     string englishMonthName[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
//     "October", "November", "December"};

//     if(month == "Styczen"){
//         cout << "Styczen po polsku -> " << englishMonthName[0] << " po angielsku" << endl;
//     }
//     else if(month == "Luty"){
//         cout << "Luty po polsku -> " << englishMonthName[1] << " po angielsku" << endl;
//     }
//     else if(month == "Marzec"){
//         cout << "Marzec po polsku -> " << englishMonthName[2] << " po angielsku" << endl;
//     }
//     else if(month == "Kwiecien"){
//         cout << "Kwiecien po polsku -> " << englishMonthName[3] << " po angielsku" << endl;
//     }
//     else if(month == "Maj"){
//         cout << "Maj po polsku -> " << englishMonthName[4] << " po angielsku" << endl;
//     }
//     else if(month == "Czerwiec"){
//         cout << "Czerwiec po polsku -> " << englishMonthName[5] << " po angielsku" << endl;
//     }
//     else if(month == "Lipiec"){
//         cout << "Lipiec po polsku -> " << englishMonthName[6] << " po angielsku" << endl;
//     }
//     else if(month == "Sierpien"){
//         cout << "Sierpien po polsku -> " << englishMonthName[7] << " po angielsku" << endl;
//     }
//     else if(month == "Wrzesien"){
//         cout << "Wrzesien po polsku -> " << englishMonthName[8] << " po angielsku" << endl;
//     }
//     else if(month == "Pazdziernik"){
//         cout << "Pazdziernik po polsku -> " << englishMonthName[9] << " po angielsku" << endl;
//     }
//     else if(month == "Listopad"){
//         cout << "Listopad po polsku -> " << englishMonthName[10] << " po angielsku" << endl;
//     }
//     else if(month == "Grudzien"){
//         cout << "Grudzien po polsku -> " << englishMonthName[11] << " po angielsku" << endl;
//     }
// }

// int main(){
//     translation("Grudzien");
//     return 0;
// }

// 4 ___________________________________________________________
// #include <iostream>
// #include <iomanip>
// using namespace std;

// struct data{
//     int busNumber;
//     string busStopName;
//     float time;
// };

// int main(){
//     data novotel_1;
//     novotel_1.busNumber = 175;
//     novotel_1.busStopName = "Novotel";
//     novotel_1.time = 12.45;

//     data novotel_2;
//     novotel_2.busNumber = 34;
//     novotel_2.busStopName = "Novotel";
//     novotel_2.time = 17.30;

//     data wawelska_1;
//     wawelska_1.busNumber = 45;
//     wawelska_1.busStopName = "Wawelska";
//     wawelska_1.time = 11.15;
    
//     data wawelska_2;
//     wawelska_2.busNumber = 67;
//     wawelska_2.busStopName = "Wawelska";
//     wawelska_2.time = 14.25;

//     string answer;
//     cout << "Give me the bus stop?\n";
//     cin >> answer;

//     if((answer == "Novotel")||(answer == "novotel")){
//         cout << "Bus list:\t" << novotel_1.busNumber << ',' << novotel_2.busNumber;
//     }
//     else if((answer == "Wawelska")||(answer == "wawelska")){
//         cout << "Bus list:\t" << wawelska_1.busNumber << ',' << wawelska_2.busNumber;
//     }
//     else{
//         cout << "Sorry, at this moment we drive only across Novotel and Wawelska";
//     }
//     return 0;
// }

// 5 ___________________________________________________________
// #include <iostream>
// #include <iomanip>
// using namespace std;

// union data{
//     string colorName;
//     int colorNumber;
// } colors;

// int main(){

//     return 0;
// }

// 6 ___________________________________________________________
// #include <iostream>
// #include <iomanip>
// using namespace std;
// void directions(string way);

// enum compas{WEST, NORTH, SOUTH, EAST};

// int main(){
//     string way;
//     cout << "Give me one of the compas sides:\n";
//     cin >> way;

//     directions(way);
//     return 0;
// }

// void directions(string way){
//     enum compas{WEST, NORTH, SOUTH, EAST};
//     char symbols[4] = {
//         60,
//         94,
//         124, // Chcialbym tu wpisac 92 i 47 numery z ASCII, wiec jak wpisac te 2 symbole jednoczesnie, zeby bylo \/ (south)???
//         62
//     };
    
//     if((way == "West")||(way == "west")){
//         cout << symbols[0] << endl;
//     }
//     else if((way == "North")||(way == "north")){
//         cout << symbols[1] << endl;
//     }
//     else if((way == "South")||(way == "south")){
//         cout << symbols[2] << endl;
//     }
//     else if((way == "East")||(way == "east")){
//         cout << symbols[3] << endl;
//     }
//     else{
//         cout << "Please choose among West, North, South, East" << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, sum=0, n=10, m=10, macierz[10][10];

//     for(i=0; i<n; i++)
//     {
//         for(j=0; j<m; j++)
//         {
//             if(i==j)
//             {
//                 macierz[i][j]=1;
//             }
//             else if ((i<j)||(i>j))
//             {
//                 macierz[i][j]=0;
//             }
//         }
//     }
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             sum+=macierz[i][j];
//         }
//     }
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             cout<<macierz[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
//     cout<<sum;
//     return 0;
// }
