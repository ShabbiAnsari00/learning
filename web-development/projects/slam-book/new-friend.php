<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My Slam Book - New Friend</title>
    <link rel="stylesheet" href="app.css">


</head>

<body class="body">


    <div id="font">

        <header>
            <?php include 'menu.php'; ?>
        </header>

        <main>

            <h1 class="h1">My Slam Book - New Friend</h1>

            <form action="new-friend-insert-script.php" method="post">
                <!-- <div class="card"> -->
                <div class="card">
                    <h2>About Me</h2>                                                       
                    <ol class="number">
                        <li><label for="first_name">First Name</label></li>
                        <input type="text" name="first_name" id="first_name">
                        <li><label for="middle_name">Middle Name</label></li>
                        <input type="text" name="middle_name" id="middle_name">
                        <li><label for="last_name">Last Name</label></li>
                        <input type="text" name="last_name" id="last_name">
                    </ol>
                    <!-- </div> -->
                    <!-- <div class="card"> -->
                    <h2>My Faves</h2>
                    <ol class="number">
                        <li><label for="my_first_big_achievement">My First Big Achievement</label></li>
                        <input type="text" name="my_first_big_achievement" id="my_first_big_achievement">
                        <li> <label for="risk">First risk i can took</label></li>
                        <input type="text" name="risk" id="risk">
                        <li><label for="happy">First time I felt completely happy</label></li>
                        <input type="text" name="happy" id="happy">
                    </ol>
                    <!-- </div> -->
                    <!-- <div class="card"> -->
                    <h2>My Favs</h2>
                    <ol class="number">
                        <li><label for="color">Color/s</label></li>
                        <input type="text" name="color" id="color">
                        <li><label for="musice">Musice</label></li>
                        <input type="text" name="musice" id="musice">
                        <li><label for="singer">Singer/s</label></li>
                        <input type="text" name="singer" id="singer">
                        <li><label for="food">Food</label></li>
                        <input type="text" name="food" id="food">
                        <li><label for="song">Song</label></li>
                        <input type="text" name="song" id="name">
                    </ol>

                    <!-- </div> -->
                    <!-- <div class="card"> -->
                    <h2>Weekend Activity</h2>
                    <ol class="number">
                        <li> <label for="hobbies">Hobbies</label> </li>
                        <input type="text" name="hobbies" id="hobbise" class="tall">
                        <li> <label for="tv_show">TV Show</label></li>
                        <input type="text" name="tv_show" id="tv_show">
                        <li> <label for="movie">Movies</label></li>
                        <input type="text" name="movie" id="movie">
                        <li> <label for="book">Book</label></li>
                        <input type="text" name="Book" id="book">
                        <li> <label for="celebs">Celebs</label></li>
                        <input type="text" name="celebs" id="celebs">
                        <li> <label for="role_model">Role Model</label></li>
                        <input type="text" name="role_model" id="role_model">
                        <li><label for="ambition">Ambition</label></li>
                        <input type="text" name="ambition" id="ambition">
                    </ol>

                    <!-- </div> -->
                    <button>Submit</button>
            </form>
    </div>
    </main>
    <footer>

    </footer>
    </div>

</body>

</html>