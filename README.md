Brief: C++ program that simulates the classic hand game played between two players.
       The game has a simple set of rules: Rock crushes Scissors, Scissors cuts Paper, and Paper covers Rock.

Description: Rock, Paper, Scissors is a classic hand game usually played between two people.
             Each player simultaneously forms one of three shapes with an outstretched hand.
             Depending on the shapes, one player wins:
             - Rock smashes Scissors.
             - Paper covers Rock.
             - Scissors cutting Paper.
             The beauty of "Rock, Paper, Scissors" lies in its simplicity and unpredictability.

Objectives: Let's build a basic game engine and sprinkle in some randomness.
            Let's make the game more robust by handling invalid inputs gracefully.
            If there is a draw (approximately 33% probability), the text should be output like this: "It's a draw.”
            There is a significant element of luck in the game.
            Typically, no one determines the winner based on a single game as it's statistically dishonest.
            Let's enhance our game by adding the required number of rounds (usually 5) and increasing interactivity.


Tasks: The program greets the user and asks them to enter a game request, which includes:
       name; number of game repetitions; selected steps (by numbers or names);
       The program must read user input;
       Your program should validate the user's input;
       The user can choose an action using numbers;
       The user can input shape names without worrying about the case sensitivity of the first letter.
       If the input is invalid, prompt the user to enter a valid choice (Rock, Paper, or Scissors);
       Your program should randomly select Rock, Paper, or Scissors for the computer;
       The game begins, and the program displays the round number, the computer's choice, the user's choice,
       and the winner of that round;
       If there's a draw, no one wins that round;
       This process repeats as many times as the user specified at the start of the game;
       At the end of the game, the program shows the total score and asks if you'd like to play again.
