<?php
require 'friend-list-script.php';
$friends = list_all_friends();
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <div>
        <header>
            <?php include 'menu.php'; ?>
        </header>
        <main>
            <h1>My Slam Book - Friends List</h1>
            <table>
                <tr>
                    <th>Id</th>
                    <th>First Name</th>
                    <th>Middle Name</th>
                    <th>Last Name</th>
                    <th>Actions</th>
                </tr>
                <?php
                foreach ($friends as $friend) {
                ?>
                    <tr>
                        <td><?php echo $friend['id']?></td>
                        <td><?php echo $friend['first_name']?></td>
                        <td><?php echo $friend['middle_name']?></td>
                        <td><?php echo $friend['last_name']?></td>
                        <td><button>Edit</button> <button>Delete</button></td>
                    </tr>
                <?php
                }
                ?>
            </table>
        </main>
        <footer>

        </footer>
    </div>
</body>

</html>