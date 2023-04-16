<?php
include '.env.php';
$id = $_POST['id'];
echo $id;

$connection = mysqli_connect(SERVER_NAME, USER_NAME, PASSWORD, DATABASE);

if (!$connection) {
    die("Error occured during connecting: " . mysqli_connect_error());
}

$first_name = $_POST['first_name'];
$middle_name = $_POST['middle_name'];
$last_name = $_POST['last_name'];

$sql = "UPDATE friend SET first_name='$first_name', middle_name='$middle_name', last_name='$last_name' WHERE id=$id";
mysqli_query($connection, $sql);
$sql = "UPDATE friend SET my_first_big_achievement= '$my_first_big_achievement', first_risk_i_can_took='$first_risk_i_can_took' WHERE id=$id";
mysqli_query($connection, $sql);
$sql = "UPDATE friend SET first_time_i_felt_completely_happy='$first_time_i_felt_compeletly_happy',colors='$colors',musice='$musice' WHERE  id=$id";
mysqli_query($connection, $sql);

echo "Data updated successfully!";