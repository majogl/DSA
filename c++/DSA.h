#include <iostream>
#include <set>
#include <vector>

using namespace std;

int power (int x,int y) {
    int ret = 1;
    for (int i=0; i<y; i++){
        ret = ret * x;
    }
    return ret;
}

class DSA {
private:
  int mapsize;
public:
  vector< vector<int> > heightmap;
  set<int> new_squares, new_diamonds;
  void print_heightmap();
  DSA(int);
};

DSA::DSA(int w) {
    mapsize = power(2,w) + 1;
    cout << "Creating DSA class" << endl;
    vector< vector<int> > myVector;
    vector<int> empty_vector;
    for (int i=0;i<mapsize;i++) {
        heightmap.push_back(empty_vector);
        for (int j=0;j<mapsize;j++) {
            heightmap[i].push_back(i*mapsize + j);
        }
    }
}

void DSA::print_heightmap() {
    for (int i=0;i<mapsize;i++) {
        for (int j=0;j<mapsize;j++) {
            cout << heightmap[i][j] << " ";
        }
        cout << endl;
    }
}
