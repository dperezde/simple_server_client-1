#include <vector>


class Client {
public:
  Client(int size, std::string port_n, std::string ip_addr);

  std::std::vector<std::pair<int, std::string>> p_insert {};
  int connect();
  int send();
  int receive();


private:
  int server_size;
  std::vector<int> r_ids;
  std::vector<std::string> names {"Alice", "Bob", "Eve", "Mallory"};

  std::string port;
  std::string ip;
  void generate_ids(std::vector<int>& id);
  std::chrono::duration<double, std::milli> t_lapse;

}
