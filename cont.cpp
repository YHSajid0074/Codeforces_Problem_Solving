

void solve() {
    int n;
    cin >> n;
    vi arr(n);

    fori(n) cin >> arr[i];

    auto maxElement = max_element(arr.begin(), arr.end());
    int index = distance(arr.begin(), maxElement);

    bool flag = true;

    while (maxElement != arr.end() && *maxElement != 0) {

        arr[index] -= 2;

        if (index + 1 < n)
            arr[index + 1] -= 1;

        if (index - 1 >= 0)
            arr[index - 1] -= 1;

        if (arr[index] < 0 || (index + 1 < n && arr[index + 1] < 0) || (index - 1 >= 0 && arr[index - 1] < 0)) {
            flag = false;
            break;
        }

        maxElement = max_element(arr.begin(), arr.end());
        index = distance(arr.begin(), maxElement);
    }


    if (flag) YES;
    else NO;

}