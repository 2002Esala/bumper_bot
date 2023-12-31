// Generated by gencpp from file bumperbot_examples/GetTransform.msg
// DO NOT EDIT!


#ifndef BUMPERBOT_EXAMPLES_MESSAGE_GETTRANSFORM_H
#define BUMPERBOT_EXAMPLES_MESSAGE_GETTRANSFORM_H

#include <ros/service_traits.h>


#include <bumperbot_examples/GetTransformRequest.h>
#include <bumperbot_examples/GetTransformResponse.h>


namespace bumperbot_examples
{

struct GetTransform
{

typedef GetTransformRequest Request;
typedef GetTransformResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetTransform
} // namespace bumperbot_examples


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::bumperbot_examples::GetTransform > {
  static const char* value()
  {
    return "d44d0066649a82d7be9dc68623df55fc";
  }

  static const char* value(const ::bumperbot_examples::GetTransform&) { return value(); }
};

template<>
struct DataType< ::bumperbot_examples::GetTransform > {
  static const char* value()
  {
    return "bumperbot_examples/GetTransform";
  }

  static const char* value(const ::bumperbot_examples::GetTransform&) { return value(); }
};


// service_traits::MD5Sum< ::bumperbot_examples::GetTransformRequest> should match
// service_traits::MD5Sum< ::bumperbot_examples::GetTransform >
template<>
struct MD5Sum< ::bumperbot_examples::GetTransformRequest>
{
  static const char* value()
  {
    return MD5Sum< ::bumperbot_examples::GetTransform >::value();
  }
  static const char* value(const ::bumperbot_examples::GetTransformRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::bumperbot_examples::GetTransformRequest> should match
// service_traits::DataType< ::bumperbot_examples::GetTransform >
template<>
struct DataType< ::bumperbot_examples::GetTransformRequest>
{
  static const char* value()
  {
    return DataType< ::bumperbot_examples::GetTransform >::value();
  }
  static const char* value(const ::bumperbot_examples::GetTransformRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::bumperbot_examples::GetTransformResponse> should match
// service_traits::MD5Sum< ::bumperbot_examples::GetTransform >
template<>
struct MD5Sum< ::bumperbot_examples::GetTransformResponse>
{
  static const char* value()
  {
    return MD5Sum< ::bumperbot_examples::GetTransform >::value();
  }
  static const char* value(const ::bumperbot_examples::GetTransformResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::bumperbot_examples::GetTransformResponse> should match
// service_traits::DataType< ::bumperbot_examples::GetTransform >
template<>
struct DataType< ::bumperbot_examples::GetTransformResponse>
{
  static const char* value()
  {
    return DataType< ::bumperbot_examples::GetTransform >::value();
  }
  static const char* value(const ::bumperbot_examples::GetTransformResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BUMPERBOT_EXAMPLES_MESSAGE_GETTRANSFORM_H
