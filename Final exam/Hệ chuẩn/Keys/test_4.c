// thêm include <string.h> nếu chưa có
// chỉ sửa hàm countWord

int countWord(char* sentence) {
    int count = 1;
    for (int i = 0; i < strlen(sentence);i++) {
        if (sentence[i]==*" ") count++;
    }
    return count;
}