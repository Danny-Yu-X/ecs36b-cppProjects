
// ecs36b rt client

#include "ecs36b_Common.h"

// JSON RPC part
#include "rtclient.h"
#include <jsonrpccpp/client/connectors/httpclient.h>

using namespace jsonrpc;
using namespace std;

int
main(void)
{
  HttpClient httpclient { "https://ethikos.ngrok.io" };
  rtClient myClient { httpclient, JSONRPC_CLIENT_V2 };
  Json::Value my_json;
  Json::Value result;

  my_json["team name"] = "iandanny"; // replace this with your own team name
  my_json["students"][0] = "921852968";  // student ID 1
  my_json["students"][1] = "922205543";  // student ID 2

  //std::cout << my_json.toStyledString() << std::endl

  // my_json["students"][2] = "345678901";  // student ID 3, if needed

  try {
    result = myClient.register_team("register team", my_json);
    cout << result.toStyledString() << endl;
  } catch (JsonRpcException &e) {
    cerr << e.what() << endl;
  }

  return 0;
}
