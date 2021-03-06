/* Auto-generated by genmsg_cpp for file /home/ethan/catvehicle2013/trunk/ROSS2JAUS/simpleSim/beginner_tutorials/srv/steeringControl.srv */
#ifndef BEGINNER_TUTORIALS_SERVICE_STEERINGCONTROL_H
#define BEGINNER_TUTORIALS_SERVICE_STEERINGCONTROL_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace beginner_tutorials
{
template <class ContainerAllocator>
struct steeringControlRequest_ {
  typedef steeringControlRequest_<ContainerAllocator> Type;

  steeringControlRequest_()
  : omega(0.0)
  , delta_d(0.0)
  , path_index(0)
  , x(0.0)
  , y(0.0)
  , velocity(0.0)
  , heading(0.0)
  , tire_angle(0.0)
  , flag(0)
  {
  }

  steeringControlRequest_(const ContainerAllocator& _alloc)
  : omega(0.0)
  , delta_d(0.0)
  , path_index(0)
  , x(0.0)
  , y(0.0)
  , velocity(0.0)
  , heading(0.0)
  , tire_angle(0.0)
  , flag(0)
  {
  }

  typedef double _omega_type;
  double omega;

  typedef double _delta_d_type;
  double delta_d;

  typedef int32_t _path_index_type;
  int32_t path_index;

  typedef double _x_type;
  double x;

  typedef double _y_type;
  double y;

  typedef double _velocity_type;
  double velocity;

  typedef double _heading_type;
  double heading;

  typedef double _tire_angle_type;
  double tire_angle;

  typedef int32_t _flag_type;
  int32_t flag;


  typedef boost::shared_ptr< ::beginner_tutorials::steeringControlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::steeringControlRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct steeringControlRequest
typedef  ::beginner_tutorials::steeringControlRequest_<std::allocator<void> > steeringControlRequest;

typedef boost::shared_ptr< ::beginner_tutorials::steeringControlRequest> steeringControlRequestPtr;
typedef boost::shared_ptr< ::beginner_tutorials::steeringControlRequest const> steeringControlRequestConstPtr;


template <class ContainerAllocator>
struct steeringControlResponse_ {
  typedef steeringControlResponse_<ContainerAllocator> Type;

  steeringControlResponse_()
  : omega(0.0)
  , delta_d(0.0)
  , path_index(0)
  {
  }

  steeringControlResponse_(const ContainerAllocator& _alloc)
  : omega(0.0)
  , delta_d(0.0)
  , path_index(0)
  {
  }

  typedef double _omega_type;
  double omega;

  typedef double _delta_d_type;
  double delta_d;

  typedef int32_t _path_index_type;
  int32_t path_index;


  typedef boost::shared_ptr< ::beginner_tutorials::steeringControlResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::steeringControlResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct steeringControlResponse
typedef  ::beginner_tutorials::steeringControlResponse_<std::allocator<void> > steeringControlResponse;

typedef boost::shared_ptr< ::beginner_tutorials::steeringControlResponse> steeringControlResponsePtr;
typedef boost::shared_ptr< ::beginner_tutorials::steeringControlResponse const> steeringControlResponseConstPtr;

struct steeringControl
{

typedef steeringControlRequest Request;
typedef steeringControlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct steeringControl
} // namespace beginner_tutorials

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::beginner_tutorials::steeringControlRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::beginner_tutorials::steeringControlRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::steeringControlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c84267d28e29a360d2171078613f6540";
  }

  static const char* value(const  ::beginner_tutorials::steeringControlRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc84267d28e29a360ULL;
  static const uint64_t static_value2 = 0xd2171078613f6540ULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::steeringControlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "beginner_tutorials/steeringControlRequest";
  }

  static const char* value(const  ::beginner_tutorials::steeringControlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::steeringControlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 omega\n\
float64 delta_d\n\
int32 path_index\n\
float64 x\n\
float64 y\n\
float64 velocity\n\
float64 heading\n\
float64 tire_angle\n\
int32 flag\n\
\n\
";
  }

  static const char* value(const  ::beginner_tutorials::steeringControlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::beginner_tutorials::steeringControlRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::beginner_tutorials::steeringControlResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::beginner_tutorials::steeringControlResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::steeringControlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "16b5242f6ca17472ab222ba0389c5261";
  }

  static const char* value(const  ::beginner_tutorials::steeringControlResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x16b5242f6ca17472ULL;
  static const uint64_t static_value2 = 0xab222ba0389c5261ULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::steeringControlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "beginner_tutorials/steeringControlResponse";
  }

  static const char* value(const  ::beginner_tutorials::steeringControlResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::steeringControlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 omega\n\
float64 delta_d\n\
int32 path_index\n\
\n\
\n\
";
  }

  static const char* value(const  ::beginner_tutorials::steeringControlResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::beginner_tutorials::steeringControlResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::steeringControlRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.omega);
    stream.next(m.delta_d);
    stream.next(m.path_index);
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.velocity);
    stream.next(m.heading);
    stream.next(m.tire_angle);
    stream.next(m.flag);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct steeringControlRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::steeringControlResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.omega);
    stream.next(m.delta_d);
    stream.next(m.path_index);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct steeringControlResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<beginner_tutorials::steeringControl> {
  static const char* value() 
  {
    return "af98bdf4d4947d949a57671d19bd84de";
  }

  static const char* value(const beginner_tutorials::steeringControl&) { return value(); } 
};

template<>
struct DataType<beginner_tutorials::steeringControl> {
  static const char* value() 
  {
    return "beginner_tutorials/steeringControl";
  }

  static const char* value(const beginner_tutorials::steeringControl&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<beginner_tutorials::steeringControlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "af98bdf4d4947d949a57671d19bd84de";
  }

  static const char* value(const beginner_tutorials::steeringControlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<beginner_tutorials::steeringControlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "beginner_tutorials/steeringControl";
  }

  static const char* value(const beginner_tutorials::steeringControlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<beginner_tutorials::steeringControlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "af98bdf4d4947d949a57671d19bd84de";
  }

  static const char* value(const beginner_tutorials::steeringControlResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<beginner_tutorials::steeringControlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "beginner_tutorials/steeringControl";
  }

  static const char* value(const beginner_tutorials::steeringControlResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // BEGINNER_TUTORIALS_SERVICE_STEERINGCONTROL_H

