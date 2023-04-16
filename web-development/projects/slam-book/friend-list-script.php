<?php
require '.env.php';

function list_all_friends()
{
    $con = mysqli_connect(SERVER_NAME, USER_NAME, PASSWORD, DATABASE);

    if(!$con) {
        die("Error: " . mysqli_connect_error());
    }

    $sql = "SELECT * FROM friend";

    $result = mysqli_query($con, $sql);

    if(mysqli_num_rows($result) > 0) {
        $friends = mysqli_fetch_all($result,MYSQLI_BOTH);
    }

    return $friends;
}

function list_a_friend(int $id)
{
    $con = mysqli_connect(SERVER_NAME, USER_NAME, PASSWORD, DATABASE);

    if(!$con) {
        die("Error: " . mysqli_connect_error());
    }

    $sql = "SELECT * FROM friend WHERE id=$id";

    $result = mysqli_query($con, $sql);

    if(mysqli_num_rows($result) > 0) {
        $friend = mysqli_fetch_all($result,MYSQLI_ASSOC);
    }

    return $friend[0];
}
