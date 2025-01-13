using System.Security.Cryptography.X509Certificates;

namespace Leetcode;

class Solutions{
    static void Main(string[]args){
        Solution n = new();
        int[] x = n.TwoSum([3,3], 6);
        Console.WriteLine($"{x[0]}, {x[1]}");
    }
}