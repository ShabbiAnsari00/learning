<?php
require '.env.php';
$id = $_POST['id'];
$con = mysqli_connect(SERVER_NAME, USER_NAME, PASSWORD, DATABASE);
if(!$con) {
    die(mysqli_connect_error($con));
}

$sql = "DELETE FROM friend WHERE id=$id";
mysqli_query($con, $sql);
header("location:friend-list.php");