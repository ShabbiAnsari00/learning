<?php
$n = readline("Enter a number: ");
$fact=1;
for($i=$n; $i>=1; $i--) {
    $fact *= $i;            //fact = fact * i
}
echo "The factorial of $n is $fact.\n";