import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class ContradictionDetector {

    // Precompile patterns
    private static final Pattern patternEquality = Pattern.compile("(?<!\\!\\()\\b(\\w+)\\s*==\\s*(\\w+)\\b");
    private static final Pattern patternInequality = Pattern.compile("(?<!\\!\\()\\b(\\w+)\\s*!=\\s*(\\w+)\\b");
    private static final Pattern patternLessThan = Pattern.compile("(?<!\\!\\()\\b(\\w+)\\s*<\\s*(\\w+)\\b");
    private static final Pattern patternGreaterThanEqual = Pattern.compile("(?<!\\!\\()\\b(\\w+)\\s*>=\\s*(\\w+)\\b");
    private static final Pattern patternLessThanEqual = Pattern.compile("(?<!\\!\\()\\b(\\w+)\\s*<=\\s*(\\w+)\\b");
    private static final Pattern patternGreaterThan = Pattern.compile("(?<!\\!\\()\\b(\\w+)\\s*>\\s*(\\w+)\\b");
    private static final Pattern patternNegatedEquality = Pattern.compile("\\!\\(\\s*(\\w+)\\s*==\\s*(\\w+)\\s*\\)");
    private static final Pattern patternNegatedInequality = Pattern.compile("\\!\\(\\s*(\\w+)\\s*!=\\s*(\\w+)\\s*\\)");
    private static final Pattern patternNegatedLessThanEqual = Pattern.compile("\\!\\(\\s*(\\w+)\\s*<=\\s*(\\w+)\\s*\\)");
    private static final Pattern patternNegatedGreaterThanEqual = Pattern.compile("\\!\\(\\s*(\\w+)\\s*>=\\s*(\\w+)\\s*\\)");
    private static final Pattern patternNegatedLessThan = Pattern.compile("\\!\\(\\s*(\\w+)\\s*<\\s*(\\w+)\\s*\\)");
    private static final Pattern patternNegatedGreaterThan = Pattern.compile("\\!\\(\\s*(\\w+)\\s*>\\s*(\\w+)\\s*\\)");
    

    // Method to check if a predicate contains contradictions
    public static boolean hasContradiction(String predicate) {
        // Check for contradictions between equality and inequality
        if (checkContradictions(predicate, patternEquality, patternInequality)
            || checkContradictions(predicate, patternEquality, patternNegatedEquality)
            || checkContradictions(predicate, patternInequality, patternNegatedInequality)
            || checkContradictions(predicate, patternLessThan, patternGreaterThanEqual)
            || checkContradictions(predicate, patternLessThanEqual, patternGreaterThan)
            || checkContradictions(predicate, patternGreaterThanEqual, patternLessThan)
            || checkContradictions(predicate, patternGreaterThan, patternLessThanEqual)
            || checkContradictions(predicate, patternLessThan, patternNegatedLessThan)
            || checkContradictions(predicate, patternGreaterThanEqual, patternNegatedGreaterThanEqual)
            || checkContradictions(predicate, patternLessThanEqual, patternNegatedLessThanEqual)
            || checkContradictions(predicate, patternGreaterThan, patternNegatedGreaterThan)
            || checkContradictions(predicate, patternEquality, patternEquality)
            || checkContradictions(predicate, patternInequality, patternInequality)
            || checkContradictions(predicate, patternLessThan, patternLessThan)
            || checkContradictions(predicate, patternLessThanEqual, patternLessThanEqual)
            || checkContradictions(predicate, patternGreaterThan, patternGreaterThan)
            || checkContradictions(predicate, patternGreaterThanEqual, patternGreaterThanEqual)) {
            return true;
        }

        return false;
    }

    // Utility method to check contradictions between two patterns
    private static boolean checkContradictions(String predicate, Pattern pattern1, Pattern pattern2) {
        Matcher matcher1 = pattern1.matcher(predicate);
        Matcher matcher2 = pattern2.matcher(predicate);

        while (matcher1.find()) {
            String left1 = matcher1.group(1);
            String right1 = matcher1.group(2);
           // System.out.println(matcher1);
            while (matcher2.find()) {
                
                String left2 = matcher2.group(1);
                String right2 = matcher2.group(2);
                //System.out.println(matcher2);
                if ((left1.equals(left2) && right1.equals(right2)) ||
                    (left1.equals(right2) && right1.equals(left2))) {
                        //System.out.println(left1);
                    return true; // Contradiction detected
                }
            }

            matcher2.reset();
        }
matcher1.reset();
        return false;
    }

    public static void main(String[] args) {
        // Example predicates
        String predicate1 = "x == 0 && x != 0";            // Contradictory
        String predicate2 = "x == 0 && !(x == 0)";         // Contradictory
        String predicate3 = "x < 3 && x >= 3";             // Contradictory
        String predicate4 = "x <= 4 && x > 4";             // Contradictory
        String predicate5 = "x != 4 && x == 4";            // Contradictory
        String predicate6 = "y == 5 && z != 5";            // Non-contradictory
        String predicate7 = "((x > 0) || (x <= 0 && y < b))"; // Contradictory, because of mutual exclusion
        String predicate8 = "((0 > a[1]) && ((0 <= a[1]) || y == b))"; // Contradictory, because of mutual exclusion
        String predicate9 = "x>=0||!(x>=0)"; // Contradictory, because of mutual exclusion
        String predicate10 = "(a[1] < 0) && (0 <= a[1])"; // Contradictory, because of mutual exclusion
        String predicate11 = "((!(x==0)&&(y<1))&&(x==0))"; // Contradictory
        String predicate12 = "!(x > 0) && (x > 0)";       // Contradictory

        // Test the predicates
        String[] predicates = {predicate1, predicate2, predicate3, predicate4, predicate5, predicate6, predicate7, predicate8, predicate9, predicate10, predicate11, predicate12};

        for (int i = 0; i < predicates.length; i++) {
            if (hasContradiction(predicates[i])) {
                System.out.println("Predicate " + (i + 1) + " has a contradiction.");
            } else {
                System.out.println("Predicate " + (i + 1) + " has no contradiction.");
            }
        }
    }
}
