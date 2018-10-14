// problem code https://www.codechef.com/problems/CHEFCHR
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
 class ChefAndHisCharacters {

    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int testCases = in.nextInt();

        Set<Character> set = new HashSet<>();
        String chef = "chef";

        while(testCases--!=0){
            int count = 0;
            String word = in.next();
            char[] carr = chef.toCharArray();

            for(int i=0;i<=word.length()-chef.length();i++){
                for(char c : carr)
                    set.add(c);

                for(int j=i;j < i+chef.length();j++){
                    if(set.contains(word.charAt(j))){
                        set.remove(word.charAt(j));
                    }
                }
                if(set.size() == 0) count++;
            }
            if(count!=0)
                System.out.println("lovely " + count);
            else System.out.println("normal");
        }
    }
}
