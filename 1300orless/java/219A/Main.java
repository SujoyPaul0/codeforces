import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int k = sc.nextInt();
        String s = sc.next();

        TreeMap<Character, Integer> freq = new TreeMap<>();

        for (char c : s.toCharArray()) {
            freq.put(c, freq.getOrDefault(c, 0) + 1);
        }

        StringBuilder base = new StringBuilder();

        for (Map.Entry<Character, Integer> entry : freq.entrySet()) {
            char ch = entry.getKey();
            int count = entry.getValue();

            if (count % k != 0) {
                System.out.println(-1);
                return;
            }

            for (int i = 0; i < count / k; i++) {
                base.append(ch);
            }
        }

        StringBuilder ans = new StringBuilder();

        for (int i = 0; i < k; i++) {
            ans.append(base);
        }

        System.out.println(ans);
    }
}