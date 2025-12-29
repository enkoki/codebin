int main() {
    char s[10000];
    scanf("%s", s);

    int len = strlen(s);
    if (len < 10) return 0;

    // 4^10 = 1,048,576 possible DNA sequences
    int count[1 << 20] = {0};
    int code = 0, mask = (1 << 20) - 1;

    // Build first 10-char code
    for (int i = 0; i < 10; i++)
        code = (code << 2) | charToBits(s[i]);

    count[code]++;

    // Sliding window
    for (int i = 10; i < len; i++) {
        code = ((code << 2) & mask) | charToBits(s[i]);
        count[code]++;
    }

    // Print repeated sequences
    for (int i = 0; i + 9 < len; i++) {
        code = 0;
        for (int j = 0; j < 10; j++)
            code = (code << 2) | charToBits(s[i + j]);

        if (count[code] > 1) {
            printf("%.*s\n", 10, s + i);
            count[code] = 0;  // avoid duplicate printing
        }
    }

    return 0;
}
