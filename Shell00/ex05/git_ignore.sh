git status -s --ignored

#!/bin/bash /git ls-files -o -i --exclude-standard /find . -type f  | git check-ignore --stdin
