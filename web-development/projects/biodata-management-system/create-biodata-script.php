<?php
$name = $_POST['name'];
$con = new mysqli("localhost", "shabbi", "shabbi", "biodata");
echo $name . "<br>";
echo "Success!";
