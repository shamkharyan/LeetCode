impl Solution
{
    pub fn is_palindrome(x: i32) -> bool
    {
        if x < 0 || (x % 10 == 0 && x != 0)
        {
            return false;
        }

        let mut rev_x: i32 = 0;
        let mut copy_x = x;
        while rev_x < copy_x
        {
            rev_x = rev_x * 10 + copy_x % 10;
            copy_x /= 10;
        }
        return rev_x == copy_x || rev_x / 10 == copy_x;
    }
}
