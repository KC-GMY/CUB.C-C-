int main() {
    FILE *input = Fopen("read.bin", "rb");
    if(!input) exit(1);
    FILE *output = Fopen("write.bin", "wb");
    if(!output){
        fclose(input);
        exit(1);
    }
    int buffer;
    while(fread(&buffer, sizeof(int), 1, input) == 1){
        int x= buffer*buffer;
        fwrite(&x, sizeof(int), 1, output);
    }
    fclose(input);
    fclose(output);
 return 0;
}