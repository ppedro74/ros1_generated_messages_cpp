// Generated by gencpp from file dynamic_reconfigure/BoolParameter.msg
// DO NOT EDIT!


#ifndef DYNAMIC_RECONFIGURE_MESSAGE_BOOLPARAMETER_H
#define DYNAMIC_RECONFIGURE_MESSAGE_BOOLPARAMETER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dynamic_reconfigure
{
template <class ContainerAllocator>
struct BoolParameter_
{
  typedef BoolParameter_<ContainerAllocator> Type;

  BoolParameter_()
    : name()
    , value(false)  {
    }
  BoolParameter_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , value(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> const> ConstPtr;

}; // struct BoolParameter_

typedef ::dynamic_reconfigure::BoolParameter_<std::allocator<void> > BoolParameter;

typedef boost::shared_ptr< ::dynamic_reconfigure::BoolParameter > BoolParameterPtr;
typedef boost::shared_ptr< ::dynamic_reconfigure::BoolParameter const> BoolParameterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dynamic_reconfigure::BoolParameter_<ContainerAllocator1> & lhs, const ::dynamic_reconfigure::BoolParameter_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dynamic_reconfigure::BoolParameter_<ContainerAllocator1> & lhs, const ::dynamic_reconfigure::BoolParameter_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dynamic_reconfigure

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "23f05028c1a699fb83e22401228c3a9e";
  }

  static const char* value(const ::dynamic_reconfigure::BoolParameter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x23f05028c1a699fbULL;
  static const uint64_t static_value2 = 0x83e22401228c3a9eULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamic_reconfigure/BoolParameter";
  }

  static const char* value(const ::dynamic_reconfigure::BoolParameter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"bool value\n"
;
  }

  static const char* value(const ::dynamic_reconfigure::BoolParameter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BoolParameter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamic_reconfigure::BoolParameter_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_RECONFIGURE_MESSAGE_BOOLPARAMETER_H
