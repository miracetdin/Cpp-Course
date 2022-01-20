// Arrays and Vectors

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is: " << vowels[0] <<  endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    
    // program is crashed: array size is 5 -> indexes: 0-1-2-3-4
    // out of bounds
    // cin >> vowels[5]
    
    double hi_temps[] {89.7, 91.5, 77.6, 79.2};
    cout << "The first element is: " << hi_temps[0] << endl;
    hi_temps[0] = 75.1;
    cout << "The first element is: " << hi_temps[0] << endl;
    
    // initialize with 0
    int test_scores[5] {0};
    
    cout << "Test scores: " << endl;
    cout << "Score 1: " << test_scores[0] << endl;
    cout << "Score 2: " << test_scores[1] << endl;
    cout << "Score 3: " << test_scores[2] << endl;
    cout << "Score 4: " << test_scores[3] << endl;
    cout << "Score 5: " << test_scores[4] << endl;
    
    cout << "Enter five scores: " << endl;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    
    cout << "Updated test scores: " << endl;
    cout << "Score 1: " << test_scores[0] << endl;
    cout << "Score 2: " << test_scores[1] << endl;
    cout << "Score 3: " << test_scores[2] << endl;
    cout << "Score 4: " << test_scores[3] << endl;
    cout << "Score 5: " << test_scores[4] << endl;
    
    cout << "The location of array: " << test_scores << endl;
    
    // vector <char> vowels         empty
    // vector <char> vowels (5)     initilialized to zero
    vector <char> vowels_v {'a', 'e', 'i', 'o', 'u'};
    cout << vowels_v[0] << endl;
    cout << vowels_v[4] << endl;
    
    // vector <int> testscores_v (3);       3 elements all initilialized to zero
    vector <int> testscores_v (3, 100);     // 3 elements all initilialized to 100
    cout << testscores_v[0] << endl;
    cout << testscores_v.at(1) << endl;
    cout << testscores_v.at(2) << endl;
    
    cout << "Testscores_v vector size: " << testscores_v.size() << endl;
    
    cout << "Enter 3 test scores: ";
    cin >> testscores_v.at(0);
    cin >> testscores_v.at(1);
    cin >> testscores_v.at(2);
    
    testscores_v.push_back(55);
    
    cout << "Updated vector: " << endl;
    cout << testscores_v[0] << endl;
    cout << testscores_v.at(1) << endl;
    cout << testscores_v.at(2) << endl;
    cout << testscores_v.at(3) << endl;
    
    cout << "Testscores_v vector size: " << testscores_v.size() << endl;
    
    vector <vector<int>> movie_ratings{
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
    };
    
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    
    return 0;
}