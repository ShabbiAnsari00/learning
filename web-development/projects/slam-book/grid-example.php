<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        .grid-container {
            display: grid;
            grid-template-columns: auto auto auto;
        }

        .grid-column {
            margin: 10px;
            border: solid 1px black;
            padding: 10px;
        }
    </style>
</head>
<body>
    <div class="grid-container">
        <div class="grid-column">
            <input type="text" name="" id="" placeholder="Column 1">
        </div>
        <div class="grid-column">
            <input type="text" name="" id="" placeholder="Column 2">
        </div>
        <div class="grid-column">
            <input type="text" name="" id="" placeholder="Column 3">
        </div>
        <div class="grid-column">
            <input type="text" name="" id="" placeholder="Column 1">
        </div>
        <div class="grid-column">
            <input type="text" name="" id="" placeholder="Column 2">
        </div>
        <div class="grid-column">
            <input type="text" name="" id="" placeholder="Column 3">
        </div>
    </div>
</body>
</html>