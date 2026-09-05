cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int count = 0;
    int sum = 0;
    vector<int>arr(n);
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
      sum += arr[i];
      int strike = (sum * 100) / (i + 1);
      if (strike == 100) {
        count++;
      }
    }
    cout << count << endl;
    ;
  }

if local
int local
include local
if keyword
inline keyword
int keyword
int16_t keyword
int32_t keyword
int64_t keyword