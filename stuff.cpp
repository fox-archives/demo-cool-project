void askQuestions() {
    std::cout << "What is your name?\n";
    std::string name;
    std::cin >> name;
    std::cout << "Your name is: \"" + name + "\". That is a cool name\n";

    std::cout << "What is your age?\n";
    std::string age;
    std::cin >> age;
    std::cout << "Your age is: \"" + age + "\". " + age + "? I bet your back hurts...\n";

    std::cout << "What is your favorite hobby?\n";
    std::string hobby;
    std::cin >> hobby;
    std::cout << "Your favorite hobby is doing \"" + hobby + "\"? That's kind of lame...\n";
}
