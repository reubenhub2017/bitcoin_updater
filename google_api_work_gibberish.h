//This might be trouble. But I need to worry about later -- Google stuff. sigh 
#include "googleapis/client/data/data_reader.h"
#include "googleapis/client/data/http_request.h"
#include "googleapis/client/transport/http_response.h"
#include "googleapis/client/transport/http_transport.h"
#include "googleapis/util/status.h"


using googleapis_client::HttpRequest;
using googleapis_client::HttpRequestState;
using googleapis_client::HttpResponse;
using googleapis_client::HttpTransport;
using googleapis_client::HttpTransportLayerConfig;
using googleapis_client::HttpTransportOptions;

class GoogleStuff(){
    public: 
        void IllustrateGet(const char* url, HttpTransport* transport)
        void IllustratePost(const char* url, HttpTransport* transport)
        void IllustratePostWithData(const char* url, HttpTransport* transport)
        
}
