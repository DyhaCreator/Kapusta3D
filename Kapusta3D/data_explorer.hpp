struct DataExplorer{
    DataExplorer() {}
    int getFileIndex(std::string path) {
        for (int i = 0; i < __DATA__.files.size(); i++) {
            if (__DATA__.files[i].path == path) {
                return i;
            }
        }
        return -1;
    }
};