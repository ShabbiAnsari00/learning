<?php
require '.env.php';

$user_id = $_POST['user_id'];
$password = $_POST['password'];

$con = mysqli_connect(SERVER_NAME, USER_NAME, PASSWORD, DATABASE);

if (!$con) {
    die("Connection failed: " . mysqli_connect_error());
}

$sql = "SELECT * FROM login WHERE user_id='$user_id' AND password=PASSWORD('$password')";

$result = mysqli_query($con, $sql);

if (mysqli_num_rows($result) > 0) {
    session_start();
    $_SESSION['user_id'] = $user_id;
    header('location:home.php');
} else
    echo 'Userid or password incorrect!';
