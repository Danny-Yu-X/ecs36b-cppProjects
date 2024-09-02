/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_HW3REF3SERVER_H_
#define JSONRPC_CPP_STUB_HW3REF3SERVER_H_

#include <jsonrpccpp/server.h>

class hw3ref3Server : public jsonrpc::AbstractServer<hw3ref3Server>
{
    public:
        hw3ref3Server(jsonrpc::AbstractServerConnector &conn, jsonrpc::serverVersion_t type = jsonrpc::JSONRPC_SERVER_V2) : jsonrpc::AbstractServer<hw3ref3Server>(conn, type)
        {
            this->bindAndAddMethod(jsonrpc::Procedure("upload", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "updating_json",jsonrpc::JSON_OBJECT, NULL), &hw3ref3Server::uploadI);
            this->bindAndAddMethod(jsonrpc::Procedure("question", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "question_json",jsonrpc::JSON_OBJECT, NULL), &hw3ref3Server::questionI);
            this->bindAndAddMethod(jsonrpc::Procedure("dump2json", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "identity",jsonrpc::JSON_STRING, NULL), &hw3ref3Server::dump2jsonI);
        }

        inline virtual void uploadI(const Json::Value &request, Json::Value &response)
        {
            response = this->upload(request["updating_json"]);
        }
        inline virtual void questionI(const Json::Value &request, Json::Value &response)
        {
            response = this->question(request["question_json"]);
        }
        inline virtual void dump2jsonI(const Json::Value &request, Json::Value &response)
        {
            response = this->dump2json(request["identity"].asString());
        }
        virtual Json::Value upload(const Json::Value& updating_json) = 0;
        virtual Json::Value question(const Json::Value& question_json) = 0;
        virtual Json::Value dump2json(const std::string& identity) = 0;
};

#endif //JSONRPC_CPP_STUB_HW3REF3SERVER_H_
