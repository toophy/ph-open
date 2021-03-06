/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.HttpClient
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPCLIENT_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPCLIENT_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { class ResponseHandler; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { namespace methods { class HttpUriRequest; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionManager; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/client/ResponseHandler.hpp>
#include <org/apache/http/client/methods/HttpUriRequest.hpp>
#include <org/apache/http/conn/ClientConnectionManager.hpp>
#include <org/apache/http/params/HttpParams.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class HttpClient;
	class HttpClient
		: public object<HttpClient>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)

		explicit HttpClient(jobject jobj)
		: object<HttpClient>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::params::HttpParams > getParams();
		local_ref< org::apache::http::conn::ClientConnectionManager > getConnectionManager();
		local_ref< org::apache::http::HttpResponse > execute(local_ref< org::apache::http::client::methods::HttpUriRequest >  const&);
		local_ref< org::apache::http::HttpResponse > execute(local_ref< org::apache::http::client::methods::HttpUriRequest >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
		local_ref< org::apache::http::HttpResponse > execute(local_ref< org::apache::http::HttpHost >  const&, local_ref< org::apache::http::HttpRequest >  const&);
		local_ref< org::apache::http::HttpResponse > execute(local_ref< org::apache::http::HttpHost >  const&, local_ref< org::apache::http::HttpRequest >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
		local_ref< java::lang::Object > execute(local_ref< org::apache::http::client::methods::HttpUriRequest >  const&, local_ref< org::apache::http::client::ResponseHandler >  const&);
		local_ref< java::lang::Object > execute(local_ref< org::apache::http::client::methods::HttpUriRequest >  const&, local_ref< org::apache::http::client::ResponseHandler >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
		local_ref< java::lang::Object > execute(local_ref< org::apache::http::HttpHost >  const&, local_ref< org::apache::http::HttpRequest >  const&, local_ref< org::apache::http::client::ResponseHandler >  const&);
		local_ref< java::lang::Object > execute(local_ref< org::apache::http::HttpHost >  const&, local_ref< org::apache::http::HttpRequest >  const&, local_ref< org::apache::http::client::ResponseHandler >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class HttpClient

} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPCLIENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPCLIENT_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPCLIENT_HPP_IMPL

namespace j2cpp {



org::apache::http::client::HttpClient::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::client::HttpClient::getParams()
{
	return call_method<
		org::apache::http::client::HttpClient::J2CPP_CLASS_NAME,
		org::apache::http::client::HttpClient::J2CPP_METHOD_NAME(0),
		org::apache::http::client::HttpClient::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::params::HttpParams >
	>(get_jobject());
}

local_ref< org::apache::http::conn::ClientConnectionManager > org::apache::http::client::HttpClient::getConnectionManager()
{
	return call_method<
		org::apache::http::client::HttpClient::J2CPP_CLASS_NAME,
		org::apache::http::client::HttpClient::J2CPP_METHOD_NAME(1),
		org::apache::http::client::HttpClient::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::conn::ClientConnectionManager >
	>(get_jobject());
}

local_ref< org::apache::http::HttpResponse > org::apache::http::client::HttpClient::execute(local_ref< org::apache::http::client::methods::HttpUriRequest > const &a0)
{
	return call_method<
		org::apache::http::client::HttpClient::J2CPP_CLASS_NAME,
		org::apache::http::client::HttpClient::J2CPP_METHOD_NAME(2),
		org::apache::http::client::HttpClient::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::HttpResponse >
	>(get_jobject(), a0);
}

local_ref< org::apache::http::HttpResponse > org::apache::http::client::HttpClient::execute(local_ref< org::apache::http::client::methods::HttpUriRequest > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		org::apache::http::client::HttpClient::J2CPP_CLASS_NAME,
		org::apache::http::client::HttpClient::J2CPP_METHOD_NAME(3),
		org::apache::http::client::HttpClient::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::HttpResponse >
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::HttpResponse > org::apache::http::client::HttpClient::execute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< org::apache::http::HttpRequest > const &a1)
{
	return call_method<
		org::apache::http::client::HttpClient::J2CPP_CLASS_NAME,
		org::apache::http::client::HttpClient::J2CPP_METHOD_NAME(4),
		org::apache::http::client::HttpClient::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::HttpResponse >
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::HttpResponse > org::apache::http::client::HttpClient::execute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< org::apache::http::HttpRequest > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return call_method<
		org::apache::http::client::HttpClient::J2CPP_CLASS_NAME,
		org::apache::http::client::HttpClient::J2CPP_METHOD_NAME(5),
		org::apache::http::client::HttpClient::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::HttpResponse >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > org::apache::http::client::HttpClient::execute(local_ref< org::apache::http::client::methods::HttpUriRequest > const &a0, local_ref< org::apache::http::client::ResponseHandler > const &a1)
{
	return call_method<
		org::apache::http::client::HttpClient::J2CPP_CLASS_NAME,
		org::apache::http::client::HttpClient::J2CPP_METHOD_NAME(6),
		org::apache::http::client::HttpClient::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > org::apache::http::client::HttpClient::execute(local_ref< org::apache::http::client::methods::HttpUriRequest > const &a0, local_ref< org::apache::http::client::ResponseHandler > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return call_method<
		org::apache::http::client::HttpClient::J2CPP_CLASS_NAME,
		org::apache::http::client::HttpClient::J2CPP_METHOD_NAME(7),
		org::apache::http::client::HttpClient::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > org::apache::http::client::HttpClient::execute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< org::apache::http::HttpRequest > const &a1, local_ref< org::apache::http::client::ResponseHandler > const &a2)
{
	return call_method<
		org::apache::http::client::HttpClient::J2CPP_CLASS_NAME,
		org::apache::http::client::HttpClient::J2CPP_METHOD_NAME(8),
		org::apache::http::client::HttpClient::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > org::apache::http::client::HttpClient::execute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< org::apache::http::HttpRequest > const &a1, local_ref< org::apache::http::client::ResponseHandler > const &a2, local_ref< org::apache::http::protocol::HttpContext > const &a3)
{
	return call_method<
		org::apache::http::client::HttpClient::J2CPP_CLASS_NAME,
		org::apache::http::client::HttpClient::J2CPP_METHOD_NAME(9),
		org::apache::http::client::HttpClient::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::HttpClient,"org/apache/http/client/HttpClient")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpClient,0,"getParams","()Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpClient,1,"getConnectionManager","()Lorg/apache/http/conn/ClientConnectionManager;")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpClient,2,"execute","(Lorg/apache/http/client/methods/HttpUriRequest;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpClient,3,"execute","(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpClient,4,"execute","(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpClient,5,"execute","(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpClient,6,"execute","(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/client/ResponseHandler;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpClient,7,"execute","(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/client/ResponseHandler;Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpClient,8,"execute","(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/client/ResponseHandler;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpClient,9,"execute","(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/client/ResponseHandler;Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPCLIENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
