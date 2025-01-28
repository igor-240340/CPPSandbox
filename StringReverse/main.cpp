#include <iostream>
#include <chrono>
#include <utility>

const std::string str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam ultricies pulvinar ex, ac luctus quam tincidunt id. Donec ornare est non eros vehicula luctus. Vestibulum id luctus felis. Duis suscipit dictum mi, ac vehicula massa tristique sit amet. In a dolor gravida est tempus porttitor ac id nisi. Integer turpis odio, bibendum eget lacus in, dapibus blandit tortor. Interdum et malesuada fames ac ante ipsum primis in faucibus. Donec vel volutpat leo. In nec elit vel sapien commodo sollicitudin ac vel turpis. Cras lacinia lacinia velit ut gravida. In fermentum, risus in pretium iaculis, sem nulla dignissim diam, at placerat nisi leo eget justo. Donec rutrum eleifend velit ac viverra. Proin egestas placerat est. Nam vitae venenatis erat. Quisque maximus sapien quis justo dapibus imperdiet. Etiam imperdiet lectus eget sapien fringilla, et blandit felis convallis. Pellentesque venenatis egestas felis id tempor. Pellentesque a consequat odio, sed fermentum nisi. Curabitur luctus dictum enim quis sollicitudin. Etiam auctor mauris quis fermentum ornare. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Sed condimentum fringilla tortor, sit amet aliquet ante ultricies quis. Vivamus elit leo, pulvinar nec malesuada quis, luctus elementum ante. Nam lacus est, imperdiet ac sodales eu, mollis a metus. Curabitur pretium tellus a ligula posuere aliquam. Aliquam lobortis pulvinar ante et sodales. Praesent sem nibh, dignissim eget velit ac, aliquam molestie quam. Curabitur egestas tempor nunc nec blandit. In vel nibh ac tellus euismod aliquam. Maecenas laoreet, sem quis commodo molestie, ipsum sapien consequat arcu, et imperdiet tortor ipsum nec lectus. Ut vitae condimentum est. Praesent pharetra maximus euismod. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla ac turpis eget metus finibus venenatis. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Integer dapibus bibendum accumsan. Nulla sagittis blandit ligula id vestibulum. Aenean sagittis congue nulla dignissim aliquam. Curabitur tincidunt tincidunt dui, non lobortis dui tincidunt ut. Ut ac ex nec neque blandit suscipit non quis tellus. Quisque mi justo, dignissim vel congue sed, convallis non mi. In semper dolor vulputate blandit auctor. Integer pulvinar diam a odio blandit luctus. Nunc nec ipsum tempor nulla pulvinar suscipit. Ut pellentesque congue justo. Curabitur diam nisi, imperdiet at vestibulum eget, tristique eu felis. Praesent velit libero, pellentesque a arcu quis, mollis eleifend ante. Integer quis lectus nibh. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Aenean tristique risus in elit condimentum lacinia. Maecenas sollicitudin vestibulum magna eget lobortis. Proin rutrum diam eu dictum dictum. Donec at iaculis lorem, eget ornare justo. Aenean pulvinar dui quis tellus volutpat, id sodales odio finibus. Nullam vel sem vitae lectus luctus iaculis ornare in lacus. Vivamus ante risus, mollis a porta sed, convallis eu elit. Nunc sagittis velit at dolor ullamcorper vehicula. Donec ornare efficitur ultrices. Vestibulum varius orci sit amet mattis laoreet. Suspendisse laoreet mi dolor. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam tincidunt justo justo, et laoreet libero lacinia non. Sed nisl libero, suscipit sed facilisis vitae, vehicula cursus quam. Aenean egestas orci nibh, et interdum justo ultricies id. Curabitur id finibus quam. Ut interdum neque eu dolor lacinia pellentesque. Maecenas aliquet nunc id dolor placerat pretium. Maecenas luctus diam nec dapibus dapibus. Aliquam vestibulum, velit vel lacinia facilisis, enim erat porttitor tortor, id auctor felis ex eget eros. Pellentesque id consequat est, a sagittis nisi. Etiam consequat enim nunc, in pellentesque purus scelerisque et. Morbi non nisl gravida, porttitor eros vel, volutpat libero. Etiam hendrerit, ante a pharetra vestibulum, risus diam mollis felis, quis tempor orci tellus eget justo. Vivamus vel lorem odio. Quisque interdum lorem sit amet pretium faucibus. Etiam lacinia, nibh sed hendrerit dictum, arcu turpis maximus tellus, non scelerisque metus elit volutpat leo. Ut tincidunt neque lectus. Suspendisse id nulla quis justo finibus ullamcorper. Nunc accumsan a mi vitae ultrices. Fusce non sapien dictum, laoreet orci ac, scelerisque nulla. Fusce ut arcu odio. Sed eu ante scelerisque, scelerisque libero id, malesuada eros. Donec ultrices venenatis rhoncus. Nunc eget varius nunc. Phasellus nec elit pulvinar, varius est venenatis, venenatis ligula. Praesent a tristique nisi. Morbi bibendum augue id ornare porttitor. Praesent consequat cursus lectus nec faucibus. Ut ac arcu id justo iaculis dignissim in nec massa. Suspendisse dictum dolor eu neque scelerisque viverra. Mauris tincidunt, mi non gravida euismod, tortor sapien feugiat magna, in feugiat ipsum dui gravida augue. Vestibulum semper dolor at metus rutrum molestie. In interdum nulla porta neque ullamcorper, nec ultrices diam commodo. Fusce vitae lorem ex. Fusce ut sapien varius, lobortis velit ac, gravida tellus. Nullam iaculis velit non congue accumsan. Donec et orci libero. Pellentesque ullamcorper bibendum mollis. Nam efficitur aliquet metus sed elementum. Suspendisse potenti. Nullam tincidunt odio nec ultrices bibendum. In ultricies nibh in convallis iaculis. Donec dapibus purus nibh, at eleifend metus faucibus quis. Proin tempus dui et ligula accumsan bibendum. Nullam quis consequat risus, ut ullamcorper est. Sed arcu odio, commodo eget elit id, maximus euismod felis. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Nam consequat est vitae urna lobortis viverra. Quisque semper nulla et dui scelerisque, id sagittis tortor scelerisque. Curabitur commodo imperdiet tellus, posuere tempor orci facilisis at. In fringilla eu felis vulputate efficitur. Sed nibh justo, lobortis ac ante vel, vestibulum iaculis diam. Nullam id est est. Proin a lorem ut ante porta molestie. Nunc in ipsum cursus, dapibus tellus in, vestibulum ipsum. Ut volutpat vestibulum orci, eu tincidunt metus bibendum ut. Nunc tempor, mi vel suscipit rhoncus, nisl est eleifend augue, at tincidunt nisl nisi ut urna. Mauris viverra congue metus, non malesuada enim maximus ac. Pellentesque sed ipsum accumsan justo finibus lacinia nec quis tellus. Etiam luctus risus ut libero volutpat faucibus. Aliquam egestas mattis lacinia. Donec hendrerit facilisis augue ultricies tristique. Sed massa nisi, pulvinar in magna vel, venenatis cursus turpis. Nunc id felis elit. Pellentesque pellentesque lacus at lorem sagittis, eu rhoncus nisi rhoncus. Mauris vulputate pulvinar laoreet. Donec rhoncus, ex at dictum imperdiet, nisl dolor dignissim lectus, eget vehicula arcu leo id nisi. Sed vulputate nibh nibh, ut dapibus velit porta quis. Suspendisse vulputate sapien neque, non consequat purus accumsan sit amet. Nulla facilisi. Quisque consequat neque ut risus porttitor, quis malesuada elit ultrices. Phasellus sed lacinia mauris. Sed quis turpis eros. Ut ut dignissim ligula. Curabitur tincidunt, lacus quis accumsan fermentum, dui magna posuere magna, quis suscipit est massa eu purus. Duis a rhoncus tortor. Integer et semper nisi. Ut vel nisl in leo sollicitudin porttitor sed sit amet nunc. Etiam in nisl congue, condimentum lectus a, euismod lectus. Quisque feugiat cursus nulla non malesuada. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Suspendisse volutpat auctor pulvinar. Interdum et malesuada fames ac ante ipsum primis in faucibus. Nam in interdum dui, imperdiet venenatis lectus. Nulla ipsum tortor, tincidunt et lobortis ut, accumsan ut velit. Quisque auctor ornare commodo. Suspendisse egestas risus id magna sagittis, consectetur aliquet sem vehicula. Suspendisse dictum eros ut massa congue, vitae tincidunt metus aliquet. Etiam vel arcu ac massa rutrum dignissim ut sit amet mauris. Suspendisse scelerisque erat lorem, ac viverra lacus dictum ac. Morbi semper arcu sem, nec tincidunt ipsum finibus non. Interdum et malesuada fames ac ante ipsum primis in faucibus. Etiam laoreet ex eget auctor laoreet. Phasellus auctor nec turpis eget porta. Cras ultricies eu ante eget malesuada. Vestibulum semper nulla a dolor accumsan, quis posuere nibh aliquet. Nulla facilisi. Nunc vitae tortor et magna bibendum finibus sed eget justo. Donec est metus, vulputate non enim non, consectetur condimentum mauris. Sed efficitur elit id enim hendrerit, in molestie ipsum placerat. Morbi luctus, tortor ut pulvinar condimentum, neque lacus eleifend sapien, vel dictum nisl enim ac enim. Ut maximus odio mattis aliquet vehicula. Donec scelerisque sed turpis vitae laoreet. Fusce lobortis feugiat viverra. Morbi tellus ex, posuere vel diam vitae, rhoncus placerat velit. Aenean eu lorem aliquam, eleifend ante pellentesque, maximus orci. Nullam felis dui, elementum vel molestie vitae, aliquet quis turpis. Nam neque arcu, pellentesque in tempus eget, condimentum sit amet urna. Curabitur pharetra convallis fringilla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Donec pharetra eros quis est condimentum, et mattis leo fermentum. Quisque eu leo id nulla tristique pharetra. Nulla facilisi. Ut non elit non metus sagittis volutpat in eu nulla. Quisque ultrices mauris non velit porttitor mattis. Suspendisse potenti. Vestibulum placerat ornare turpis a efficitur. Aliquam at vulputate erat, in fringilla mauris. Nulla egestas sed libero non gravida. Maecenas et nibh mi. Integer lacinia mauris ut augue placerat, in ultrices risus suscipit. Nulla et efficitur urna. Nam consequat, quam eget facilisis accumsan, nibh libero posuere sapien, quis rutrum dui nunc eu libero. Quisque est elit, accumsan ac blandit vel, posuere sed sapien. Integer varius quam velit, id blandit sem mollis quis. Maecenas mollis at.";

std::string do_reverse_1(std::string& src_str) {
    size_t str_size = src_str.size();

    std::string res_str(str_size, 'x');

    for (int i = str_size - 1; i >= 0; i--) {
        res_str[(str_size - 1) - i] = src_str.at(i);
    }

    return res_str;
}

std::string do_reverse_2(std::string& src_str) {
    size_t str_size = src_str.size();

    for (int i = 0; i < str_size / 2; i++) {
        int mirrored_i = str_size - 1 - i;
        std::swap(src_str[i], src_str[mirrored_i]);
    }

    return src_str;
}

long long measure_do_reverse_1() {
    std::cout << "measure_do_reverse_1" << std::endl;

    std::string direct = str;
    std::cout << "direct: " << direct.substr(0, 20) << "..." << std::endl;

    auto start_time = std::chrono::high_resolution_clock::now();

    std::string reverse = do_reverse_1(direct);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto elapsed_time = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time);

    std::cout << "reverse: " << "..." << reverse.substr(reverse.size() - 20, reverse.size() - 1) << std::endl;
    std::cout << "Time taken to reverse string: " << elapsed_time.count() << " ns" << std::endl;

    return elapsed_time.count();
}

long long measure_do_reverse_2() {
    std::cout << "measure_do_reverse_2" << std::endl;

    std::string direct = str;
    std::cout << "direct: " << direct.substr(0, 20) << "..." << std::endl;

    auto start_time = std::chrono::high_resolution_clock::now();

    std::string reverse = do_reverse_2(direct);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto elapsed_time = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time);

    std::cout << "reverse: " << "..." << reverse.substr(reverse.size() - 20, reverse.size() - 1) << std::endl;
    std::cout << "Time taken to reverse string: " << elapsed_time.count() << " ns" << std::endl;

    return elapsed_time.count();
}

int main() {
    const auto time_1 = measure_do_reverse_1();
    std::cout << std::endl;
    const auto time_2 = measure_do_reverse_2();

    std::cout << std::endl;
    if (time_2 < time_1)
        std::cout << "do_reverse_2 wins\n";
    else if (time_1 < time_2)
        std::cout << "do_reverse_1 wins\n";
    else
        std::cout << "does not matter\n";
}
