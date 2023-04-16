<?php
include 'friend-list-script.php';
$id = $_POST['id'];
$friend = list_a_friend($id);
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="app.css">
</head>

<body>
    <header>
        <?php include 'menu.php'; ?>
    </header>
    <h1>Edit Friend</h1>
    <form action="edit.php" method="post">
        <input type="hidden" name="id" id="id" value="<?= $id?>">
        <div class="grid-container">
            <div>
                <label for="first_name">First Name</label>
                <input type="text" name="first_name" id="first_name" value="<?= $friend['first_name'] ?>">
            </div>
            <div>
                <label for="middle_name">Middle Name</label>
                <input type="text" name="middle_name" id="middle_name" value="<?= $friend['middle_name'] ?>">
            </div>
            <div>
                <label for="last_name">Last Name</label>
                <input type="text" name="last_name" id="last_name" value="<?= $friend['last_name'] ?>">
            </div>
            <div>
                <label for="my_first_big_achievement">My first big achievement</label>
                <input type="text" name="my_first_big_achievement" id="my_first_big_achievement" value="<?= $friend['my_first_big_achievement'] ?> ">
            </div>
            <div>
                <label for="first risk i can took">First risk i can took</label>
                <input type="text" name="first risk i can took" id="first risk i can took" value="<?= $friend['first_risk_i_can_took'] ?> ">
            </div>
            <div>
                <label for="first_time_i_felt_completely_happy">First time I felt completely happy</label>
                <input type="text" name="first_time_i_felt_completely_happy" id="first_time_i_felt_completely_happy" value="<?= $friend['first_time_i_felt_completely_happy']?> ">
            </div>
            <div>
                <label for="colors">colors</label>
                <input type="text" name="colors" id="colors" value="<?= $friend['colors']?> ">
            </div>
            <div>
                <label for="musice">musice</label>
                <input type="text" name="musice" id="musice" value="<?= $friend['musice']?> ">
            </div>
            <div>
                <label for="singer">singer</label>
                <input type="text" name="singer" id="singer" value="<?= $friend['singer']?> ">
            </div>
            <div>
                <label for="food">food</label>
                <input type="text" name="food" id="food" value="<?= $friend['food']?> ">
            </div>
            <div>
                <label for="song">song</label>
                <input type="text" name="song" id="song" value="<?= $friend['song']?> ">
            </div>
            <div>
                <label for="hobbies">hobbies</label>
                <input type="text" name="hobbies" id="hobbies" value="<?= $friend['hobbies']?> ">
            </div>
            <div>
                <label for="tvshow">tvshow</label>
                <input type="text" name="tvshow" id="tvshow" value="<?= $friend['tvshow']?> ">
            </div>
            <div>
                <label for="role model">role_model</label>
                <input type="text" name="role_model" id="role_model" value="<?= $friend['role_model']?> ">
            </div>
            <div>
                <label for="celebs">celebs</label>
                <input type="text" name="celebs" id="celebs" value="<?= $friend['celebs']?> ">
            </div>
            <div>
                <label for="movie">movie</label>
                <input type="text" name="movie" id="movie" value="<?= $friend['movie']?> ">
            </div>
            <div>
                <label for="ambition">ambition</label>
                <input type="text" name="ambition" id="ambition" value="<?= $friend['ambition']?> ">
            </div>
            <div>
                
            </div>

        <button>Submit</button>
    </form>
</body>

</html>