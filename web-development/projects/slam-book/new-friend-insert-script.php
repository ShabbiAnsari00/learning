<?php
require '.env.php';

$connection = mysqli_connect(SERVER_NAME, USER_NAME, PASSWORD, DATABASE);

if(!$connection) {
    die("Error occured during connecting: " . mysqli_connect_error());
}

$first_name = $_POST['first_name'];
$middle_name = $_POST['middle_name'];
$last_name = $_POST['last_name'];
$my_first_big_achievement = $_POST['my_first_big_achievement'];
$first_risk_i_can_took = $post['First risk i can took'];
$first_time_i_felt_completely_happy = $_POST['First time I felt completely happy'];
$colors = $_POST['color/s'];
$musice = $_POST['musice'];
$singer = $_POST['singer/s'];
$food = $_POST['food'];
$song = $_POST['song'];
$hobbies = $_POST['hobbies'];
$tvshow = $_POST['tvshow'];
$movies = $_POST['movies'];
$celebs = $_POST['celebs'];
$role_model = $_POST['role_model'];
$ambition = $_POST['ambition'];

$sql = "insert into friend(first_name, middle_name, last_name, my_first_big_achievement, ) 
values('$first_name','$middle_name','$last_name', '$my_first_big_achievement')";

mysqli_query($connection, $sql);

echo "Data inserted successfully!";


$connection->close();