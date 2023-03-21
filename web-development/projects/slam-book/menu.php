<?php
session_start();
if (!isset($_SESSION['user_id']))
    header("location: index.php");
?>

<nav>
    <a href="home.php">Home</a>
    <a href="friend-list.php">Friends List</a>
    <a href="new-friend.php">New Friend</a>
    <a href="logout.php">Logout</a>
</nav>