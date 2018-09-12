#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, j=1, n, m, k, a[100], pos1, pos2, min_distance;

    cin >> n >> m >> k;
    for(i=0; i<n; i++) {
        cin >> a[i];
    }
    pos1 = (m>0) ? m-1 : m;
    pos2 = (m>0) ? m-1 : m;

    for(i=0; i<n; i++) {
        if(pos1>0 && a[pos1-1]>0 && a[pos1-1]<=k) {
            min_distance = j*10;
            break;
        } else if(pos2<n-1 && a[pos2+1]>0 && a[pos2+1]<=k) {
            min_distance = j*10;
            break;
        }
        pos1--;
        pos2++;
        j++;
    }
    cout << min_distance << endl;
    return 0;
}