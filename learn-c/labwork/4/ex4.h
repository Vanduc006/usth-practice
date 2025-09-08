int problem(int n) {
    if ( n >= 1) {
        return n*problem(n-1);
    }
    else {
        return 1;
    }
    // for (int i, i =< n, i++) {
    //     i = i * n
    // }
    // return(i);
}