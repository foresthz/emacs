comment="m"
if [ -z "$1" ]; then
echo "=== default comment";
else
echo "=== new comment";
echo $1;
comment="$@";
fi
git add . && git commit -m "$comment"
git push origin

