# Test
```bash
./account > tests.log && diff <(cat tests.log | cut -d " " -f2) <(cat 19920104_091532.log | cut -d " " -f2)
```
