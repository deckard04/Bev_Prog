//
// Created by György Mitró on 2021. 11. 24..
//

#include "std_lib_facilities.h"

struct Point{
    int x;
    int y;
};

void fill_from_file(vector<Point>&, string&);

int main(){
    cout << "Please write in 7 numbers for x and y" << endl;

    vector<Point> original_points;
    while (original_points.size() < 7) {
        Point p;
        cin >> p.x;
        cin >> p.y;
        original_points.push_back(p);
    }

    for (int i = 0; i < original_points.size(); ++i) {
        cout << original_points[i].x << " " << original_points[i].y << endl;
    }

    string file_name {"mydata.txt"};
    ofstream ost(file_name);

    if(!ost) error("Can't open the output file: ", file_name);


    for (int i = 0; i < original_points.size(); ++i) {
        ost << original_points[i].x << " " << original_points[i].y << endl;
    }
    ost.close();

    vector<Point> processed_points;
    fill_from_file(processed_points, file_name);
    for (int i = 0; i < processed_points.size(); i++) {
        cout << processed_points[i].x << ", " << processed_points[i].y << endl;
    }

    if (processed_points.size()!=original_points.size()){
        error("Something's wrong!");
    }



    return 0;
}

void fill_from_file(vector<Point>& data, string& fname){
    ifstream ifs {fname};

    if(!ifs) error("Can't open the input file: ", fname);

    Point p2;
    while (ifs >> p2.x >> p2.y ){
        data.push_back(p2);
    }
}

