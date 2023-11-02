#include <stdio.h>
#include <string.h>

//Levenshtein Distance
//https://people.cs.pitt.edu/~kirk/cs1501/Pruhs/Spring2006/assignments/editdistance/Levenshtein%20Distance.htm

int Minimum(int a, int b, int c) {
    int mi = a;
    if (b < mi) {
        mi = b;
    }
    if (c < mi) {
        mi = c;
    }
    return mi;
}

int main() {
    char s[100];
    char t[100];

    //printf("Digite a primeira string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  // Remove a nova linha no final, se houver.

    //printf("Digite a segunda string: ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0';  // Remove a nova linha no final, se houver.

    int n = strlen(s);
    int m = strlen(t);
    int d[n + 1][m + 1];

    if (n == 0) {
        return m;
    }
    if (m == 0) {
        return n;
    }

    // Step 2
    for (int i = 0; i <= n; i++) {
        d[i][0] = i;
    }

    for (int j = 0; j <= m; j++) {
        d[0][j] = j;
    }

    // Step 3
    for (int i = 1; i <= n; i++) {
        char s_i = s[i - 1];
        // Step 4
        for (int j = 1; j <= m; j++) {
            char t_j = t[j - 1];
            // Step 5
            int cost = (s_i == t_j) ? 0 : 1;
            // Step 6
            d[i][j] = Minimum(d[i - 1][j] + 1, d[i][j - 1] + 1, d[i - 1][j - 1] + cost);
        }
    }
//Test against custom input
//Compiled successfully. All test cases passed!
    // Step 7
    int distance = d[n][m];
    //printf("A distância de Levenshtein é ");
    printf("%d\n", distance);
    return 0;
}
