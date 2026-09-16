}

    sort(arr.begin(), arr.end());

    long long ans = 0;
    long long s = 0;

    for (int i = 1; i <= n / 2; i++) {
      s += arr[n - i];

      long long c = sum * i + s * (n - 2 * i);

      if (c > ans) {
        ans = c;
      }
    }
    cout << ans << endl;
  }
}
arr local
array snippet
binary_search snippet