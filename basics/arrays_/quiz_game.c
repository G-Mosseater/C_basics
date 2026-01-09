#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char questions[][100] = {
        "What is the largest animal on Earth?\n",
        "Are whales fish or mammals?\n",
        "What body part do whales use to breathe?\n",
        "What do most whales eat?\n",
        "Where do whales live?\n",
        "Which sea animal is known for changing color?\n",
        "What sea animal has fins instead of legs?\n",
        "Do whales lay eggs?\n",
        "What covers most of the Earth's surface?\n",
        "Which animal is known as the king of the ocean?\n"};

    char options[][100] = {
        "A) Elephant  B) Blue whale  C) Shark\n",
        "A) Fish  B) Mammals  C) Reptiles\n",
        "A) Gills  B) Mouth  C) Blowhole\n",
        "A) Grass  B) Small fish and krill  C) Seaweed\n",
        "A) Rivers only  B) Oceans  C) On land\n",
        "A) Dolphin  B) Octopus  C) Whale\n",
        "A) Dog  B) Shark  C) Bird\n",
        "A) Yes  B) No  C) Sometimes\n",
        "A) Land  B) Ice  C) Water\n",
        "A) Dolphin  B) Blue whale  C) Crab\n"};

    char answerKey[] = {'B', 'B', 'C', 'B', 'B', 'B', 'B', 'B', 'C', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);
    char guess = '\0';
    int score = 0;

    printf("*** MEGA QUIZ GAME ***\n");

    for (int i = 0; i < questionCount; i++)
    {
        printf("\n%s", questions[i]);
        printf("%s", options[i]);
        printf("\nEnter your choice: \n");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("Try again!\n");
        }
    }

    printf("\n Your score is %d out of %d points\n", score, questionCount);

    return 0;
}