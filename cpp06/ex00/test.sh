RED='\033[1;31m'
NC='\033[0m'

echo ""
echo "${RED}""CONVERT - :""${NC}"
./convert -

echo ""
echo "${RED}""CONVERT 0 :""${NC}"
./convert 0

echo ""
echo "${RED}""CONVERT 49 :""${NC}"
./convert 49

echo ""
echo "${RED}""CONVERT INT MAX :""${NC}"
./convert 2147483647

echo ""
echo "${RED}""CONVERT INT MAX+1 :""${NC}"
./convert 2147483648
