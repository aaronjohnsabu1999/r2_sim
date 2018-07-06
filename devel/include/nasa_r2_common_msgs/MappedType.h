// Generated by gencpp from file nasa_r2_common_msgs/MappedType.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_MAPPEDTYPE_H
#define NASA_R2_COMMON_MSGS_MESSAGE_MAPPEDTYPE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct MappedType_
{
  typedef MappedType_<ContainerAllocator> Type;

  MappedType_()
    : type(0)  {
    }
  MappedType_(const ContainerAllocator& _alloc)
    : type(0)  {
  (void)_alloc;
    }



   typedef uint8_t _type_type;
  _type_type type;


    enum { STRING = 0u };
     enum { UINT16 = 1u };
     enum { INT16 = 2u };
     enum { UINT32 = 3u };
     enum { INT32 = 4u };
     enum { FLOAT32 = 5u };
     enum { BOOL = 6u };
 

  typedef boost::shared_ptr< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> const> ConstPtr;

}; // struct MappedType_

typedef ::nasa_r2_common_msgs::MappedType_<std::allocator<void> > MappedType;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::MappedType > MappedTypePtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::MappedType const> MappedTypeConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'nasa_r2_common_msgs': ['/home/vincent/Project/r2_sim/src/deprecated_nasa_r2_common/nasa_r2_common_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f61664a4dc14b6b365fb43df66f4679e";
  }

  static const char* value(const ::nasa_r2_common_msgs::MappedType_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf61664a4dc14b6b3ULL;
  static const uint64_t static_value2 = 0x65fb43df66f4679eULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/MappedType";
  }

  static const char* value(const ::nasa_r2_common_msgs::MappedType_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 STRING  = 0\n\
uint8 UINT16  = 1\n\
uint8 INT16   = 2\n\
uint8 UINT32  = 3\n\
uint8 INT32   = 4\n\
uint8 FLOAT32 = 5\n\
uint8 BOOL    = 6\n\
\n\
uint8 type\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::MappedType_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MappedType_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::MappedType_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_MAPPEDTYPE_H
