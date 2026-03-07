#include <bits/stdc++.h>
#include <memory>

#define vt vector
#define ft first
#define sd second
#define pb push_back
#define eb emplace_back

using namespace std;
using ll = long long;

class SafeFile {
    FILE* f;
    public:
    void readInt() {
        int n;
        if (!f) return;
        fscanf(f, "%d", &n);
        throw "Exception";
    }
    explicit SafeFile(string& path) {
        f = fopen(path.c_str(), "r");
    }
    ~SafeFile() {
        fclose(f);
    }
};

class FileCopier {
    FILE* fd1;
    FILE* fd2;
public:
    FileCopier(const char* scr, const char* dst) {
        fd1 = fopen(scr, "r");
        if (!fd1) throw "Exception";
        fd2 = fopen(dst, "w");
        if (!fd2) {
            fclose(fd1);
            throw "Exception";
        }
    }
    ~FileCopier() {
        fclose(fd1);
        fclose(fd2);
    }
};

int main() {
    return 0;
}