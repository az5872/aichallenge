#include "Bot.h"

using namespace std;

/*
    This program will play a single game of Ants while communicating with
    the engine via standard input and output.

    The function "makeMoves()" in Bot.cc is where it makes the moves
    each turn and is probably the best place to start exploring. You are
    allowed to edit any part of any of the files, remove them, or add your
    own, provided you continue conforming to the input and output format
    outlined on the specifications page at:
        http://www.ai-contest.com

    There is also a tutorial (tutorial.txt) included in the folder with
    this file outlining some basic changes you could make that will improve
    the bot.
*/
int main(int argc, char *argv[])
{
    cout.sync_with_stdio(0);

    Bot bot;
    bot.playGame();

    return 0;
}
