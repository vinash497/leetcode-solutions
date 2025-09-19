class Solution {
        public int digitSum(int num) {
                int sum = 0;
                        while (num > 0) {
                                    sum += num % 10;
                                                num /= 10;
                                                        }
                                                                return sum;
                                                                    }

                                                                        public int sumOfTheDigitsOfHarshadNumber(int x) {
                                                                                int sum = digitSum(x);
                                                                                        if (x % sum == 0) return sum;
                                                                                                return -1;
                                                                                                    }
                                                                                                    }
