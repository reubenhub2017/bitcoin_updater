#include "google_api_work_gibberish.h"

//I am guessing it creates the GET request method ....maybe ?
void GoogleStuff::IllustrateGet(){
     scoped_ptr<HttpRequest> request(transport->NewHttpRequest(HttpRequest::GET));
    request->set_url(url);
    util::Status status = request->Execute();
    if (!status.ok()) cerr << status.error_message();

}
//I am guessing it creates the POST request method...  maybe ?
void GoogleStuff::IllustratePost(){
    scoped_ptr<HttpRequest> request(transport->NewHttpRequest(HttpRequest::GET));
    request->set_url(url);
    util::Status status = request->Execute();
  if (!status.ok()) cerr << status.error_message();

}
//NOT IDEA TBH.
void GoogleStuff::IllustratePostWithData(){
    scoped_ptr<HttpRequest> request(transport->NewHttpRequest(HttpRequest::POST));
    request->set_url(url);
    DataReader* reader = NewUnmanagedInMemoryDataReader("Hello, World!");
    request->set_content_reader(reader);
    request->set_content_type("text/plain");

  util::Status status = request->Execute();
  if (!status.ok()) cerr << status.error_message();
}

void HttpRequest::Execute(){
    if(response->ok()){
        cout << "Success" << endl;
    }else {
        cout << "Failed with status="
        << response->status().error_message() << endl;
    }

}
