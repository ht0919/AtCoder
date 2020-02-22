S1="ABC"
S2="156"
S3=$S1$S2
mkdir -p $S1/$S2
mv $S3?.cpp ./$S1/$S2
rm a.out
git add -A
git commit -m "Add ${S3}"
git push origin master