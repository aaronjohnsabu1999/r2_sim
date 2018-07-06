// Generated by gencpp from file nasa_r2_common_msgs/LabeledJointState.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_LABELEDJOINTSTATE_H
#define NASA_R2_COMMON_MSGS_MESSAGE_LABELEDJOINTSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct LabeledJointState_
{
  typedef LabeledJointState_<ContainerAllocator> Type;

  LabeledJointState_()
    : header()
    , originator()
    , name()
    , position()
    , velocity()
    , effort()  {
    }
  LabeledJointState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , originator(_alloc)
    , name(_alloc)
    , position(_alloc)
    , velocity(_alloc)
    , effort(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _originator_type;
  _originator_type originator;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _name_type;
  _name_type name;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _position_type;
  _position_type position;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _velocity_type;
  _velocity_type velocity;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _effort_type;
  _effort_type effort;




  typedef boost::shared_ptr< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> const> ConstPtr;

}; // struct LabeledJointState_

typedef ::nasa_r2_common_msgs::LabeledJointState_<std::allocator<void> > LabeledJointState;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::LabeledJointState > LabeledJointStatePtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::LabeledJointState const> LabeledJointStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'nasa_r2_common_msgs': ['/home/vincent/Project/r2_sim/src/deprecated_nasa_r2_common/nasa_r2_common_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dcbf606d25a558e3de2e3c95fa2eaca9";
  }

  static const char* value(const ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdcbf606d25a558e3ULL;
  static const uint64_t static_value2 = 0xde2e3c95fa2eaca9ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/LabeledJointState";
  }

  static const char* value(const ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is a message that holds data to describe the state of a set of torque controlled joints. \n\
#\n\
# The state of each joint (revolute or prismatic) is defined by:\n\
#  * the position of the joint (rad or m),\n\
#  * the velocity of the joint (rad/s or m/s) and \n\
#  * the effort that is applied in the joint (Nm or N).\n\
#\n\
# Each joint is uniquely identified by its name\n\
# The header specifies the time at which the joint states were recorded. All the joint states\n\
# in one message have to be recorded at the same time.\n\
#\n\
# This message consists of a multiple arrays, one for each part of the joint state. \n\
# The goal is to make each of the fields optional. When e.g. your joints have no\n\
# effort associated with them, you can leave the effort array empty. \n\
#\n\
# All arrays in this message should have the same size, or be empty.\n\
# This is the only way to uniquely associate the joint name with the correct\n\
# states.\n\
\n\
\n\
Header header\n\
string originator\n\
\n\
string[] name\n\
float64[] position\n\
float64[] velocity\n\
float64[] effort\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.originator);
      stream.next(m.name);
      stream.next(m.position);
      stream.next(m.velocity);
      stream.next(m.effort);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LabeledJointState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::LabeledJointState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "originator: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.originator);
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "effort[]" << std::endl;
    for (size_t i = 0; i < v.effort.size(); ++i)
    {
      s << indent << "  effort[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.effort[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_LABELEDJOINTSTATE_H
