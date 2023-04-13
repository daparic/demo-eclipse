
bool decide2(bool a, bool b, bool c) {
    if (a && (b || c)) {
        return true;
    }
    return false;
}
