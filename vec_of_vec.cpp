vector< vector<int> > vvi;

//assuming you have a "2D" vector vvi (vector of vector of int's)
vector< vector<int> >::iterator row;
vector<int>::iterator col;
for (row = vvi.begin(); row != vvi.end(); row++) {
    for (col = row->begin(); col != row->end(); col++) {
        // do stuff ...
    }
}
