// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file WideEnumTypeObject.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "WideEnum.h"
#include "WideEnumTypeObject.h"
#include <mutex>
#include <utility>
#include <sstream>
#include <fastrtps/rtps/common/SerializedPayload.h>
#include <fastrtps/utils/md5.h>
#include <fastrtps/types/TypeObjectFactory.h>
#include <fastrtps/types/TypeNamesGenerator.h>
#include <fastrtps/types/AnnotationParameterValue.h>
#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

using namespace eprosima::fastrtps::rtps;

void registerWideEnumTypes()
{
    static std::once_flag once_flag;
    std::call_once(once_flag, []()
            {
                TypeObjectFactory *factory = TypeObjectFactory::get_instance();
                factory->add_type_object("MyEnumWide", GetMyEnumWideIdentifier(true),
                GetMyEnumWideObject(true));
                factory->add_type_object("MyEnumWide", GetMyEnumWideIdentifier(false),
                GetMyEnumWideObject(false));

                factory->add_type_object("MyEnumWideStruct", GetMyEnumWideStructIdentifier(true),
                GetMyEnumWideStructObject(true));
                factory->add_type_object("MyEnumWideStruct", GetMyEnumWideStructIdentifier(false),
                GetMyEnumWideStructObject(false));

                factory->add_type_object("SimpleWideUnion", GetSimpleWideUnionIdentifier(true),
                GetSimpleWideUnionObject(true));
                factory->add_type_object("SimpleWideUnion", GetSimpleWideUnionIdentifier(false),
                GetSimpleWideUnionObject(false));

                factory->add_type_object("SimpleWideUnionStruct", GetSimpleWideUnionStructIdentifier(true),
                GetSimpleWideUnionStructObject(true));
                factory->add_type_object("SimpleWideUnionStruct", GetSimpleWideUnionStructIdentifier(false),
                GetSimpleWideUnionStructObject(false));

            });
}

const TypeIdentifier* GetMyEnumWideIdentifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyEnumWide", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyEnumWideObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyEnumWide", complete);
}

const TypeObject* GetMyEnumWideObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyEnumWide", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyEnumWideObject();
    }
    // else
    return GetMinimalMyEnumWideObject();
}

const TypeObject* GetMinimalMyEnumWideObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyEnumWide", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_ENUM);

    // No flags apply
    //type_object->minimal().enumerated_type().enum_flags().IS_FINAL(false);
    //type_object->minimal().enumerated_type().enum_flags().IS_APPENDABLE(false);
    //type_object->minimal().enumerated_type().enum_flags().IS_MUTABLE(false);
    //type_object->minimal().enumerated_type().enum_flags().IS_NESTED(false);
    //type_object->minimal().enumerated_type().enum_flags().IS_AUTOID_HASH(false);

    type_object->minimal().enumerated_type().header().common().bit_bound(32); // TODO fixed by IDL, isn't?

    uint32_t value = 0;
    MinimalEnumeratedLiteral mel_A;
    mel_A.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_A.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_A.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_A.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_A.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_A.common().flags().IS_KEY(false); // Doesn't apply
    mel_A.common().flags().IS_DEFAULT(false);
    mel_A.common().value(value++);
    MD5 A_hash("A");
    for(int i = 0; i < 4; ++i)
    {
        mel_A.detail().name_hash()[i] = A_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_A);

    MinimalEnumeratedLiteral mel_B;
    mel_B.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_B.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_B.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_B.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_B.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_B.common().flags().IS_KEY(false); // Doesn't apply
    mel_B.common().flags().IS_DEFAULT(false);
    mel_B.common().value(value++);
    MD5 B_hash("B");
    for(int i = 0; i < 4; ++i)
    {
        mel_B.detail().name_hash()[i] = B_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_B);

    MinimalEnumeratedLiteral mel_C;
    mel_C.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_C.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_C.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_C.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_C.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_C.common().flags().IS_KEY(false); // Doesn't apply
    mel_C.common().flags().IS_DEFAULT(false);
    mel_C.common().value(value++);
    MD5 C_hash("C");
    for(int i = 0; i < 4; ++i)
    {
        mel_C.detail().name_hash()[i] = C_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_C);

    MinimalEnumeratedLiteral mel_D;
    mel_D.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_D.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_D.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_D.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_D.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_D.common().flags().IS_KEY(false); // Doesn't apply
    mel_D.common().flags().IS_DEFAULT(false);
    mel_D.common().value(value++);
    MD5 D_hash("D");
    for(int i = 0; i < 4; ++i)
    {
        mel_D.detail().name_hash()[i] = D_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_D);


    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalEnumeratedType::getCdrSerializedSize(type_object->minimal().enumerated_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("MyEnumWide", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyEnumWide", false);
}

const TypeObject* GetCompleteMyEnumWideObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyEnumWide", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_ENUM);

    // No flags apply
    //type_object->complete().enumerated_type().enum_flags().IS_FINAL(false);
    //type_object->complete().enumerated_type().enum_flags().IS_APPENDABLE(false);
    //type_object->complete().enumerated_type().enum_flags().IS_MUTABLE(false);
    //type_object->complete().enumerated_type().enum_flags().IS_NESTED(false);
    //type_object->complete().enumerated_type().enum_flags().IS_AUTOID_HASH(false);

    type_object->complete().enumerated_type().header().common().bit_bound(32); // TODO fixed by IDL, isn't?
    type_object->complete().enumerated_type().header().detail().type_name("MyEnumWide");


    uint32_t value = 0;
    CompleteEnumeratedLiteral cel_A;
    cel_A.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_A.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_A.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_A.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_A.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_A.common().flags().IS_KEY(false); // Doesn't apply
    cel_A.common().flags().IS_DEFAULT(false);
    cel_A.common().value(value++);
    cel_A.detail().name("A");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_A);

    CompleteEnumeratedLiteral cel_B;
    cel_B.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_B.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_B.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_B.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_B.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_B.common().flags().IS_KEY(false); // Doesn't apply
    cel_B.common().flags().IS_DEFAULT(false);
    cel_B.common().value(value++);
    cel_B.detail().name("B");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_B);

    CompleteEnumeratedLiteral cel_C;
    cel_C.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_C.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_C.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_C.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_C.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_C.common().flags().IS_KEY(false); // Doesn't apply
    cel_C.common().flags().IS_DEFAULT(false);
    cel_C.common().value(value++);
    cel_C.detail().name("C");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_C);

    CompleteEnumeratedLiteral cel_D;
    cel_D.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_D.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_D.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_D.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_D.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_D.common().flags().IS_KEY(false); // Doesn't apply
    cel_D.common().flags().IS_DEFAULT(false);
    cel_D.common().value(value++);
    cel_D.detail().name("D");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_D);


    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteEnumeratedType::getCdrSerializedSize(type_object->complete().enumerated_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("MyEnumWide", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyEnumWide", true);
}

const TypeIdentifier* GetMyEnumWideStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyEnumWideStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyEnumWideStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyEnumWideStruct", complete);
}

const TypeObject* GetMyEnumWideStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyEnumWideStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyEnumWideStructObject();
    }
    //else
    return GetMinimalMyEnumWideStructObject();
}

const TypeObject* GetMinimalMyEnumWideStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyEnumWideStruct", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_STRUCTURE);

    type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
    type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
    type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    MinimalStructMember mst_my_enum_wide;
    mst_my_enum_wide.common().member_id(memberId++);
    mst_my_enum_wide.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_enum_wide.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_enum_wide.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_enum_wide.common().member_flags().IS_OPTIONAL(false);
    mst_my_enum_wide.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_enum_wide.common().member_flags().IS_KEY(false);
    mst_my_enum_wide.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_enum_wide.common().member_type_id(*GetMyEnumWideIdentifier(false));
    MD5 my_enum_wide_hash("my_enum_wide");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_enum_wide.detail().name_hash()[i] = my_enum_wide_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_enum_wide);


    // Header
    // TODO Inheritance
    //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
    //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];

    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("MyEnumWideStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyEnumWideStruct", false);
}

const TypeObject* GetCompleteMyEnumWideStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyEnumWideStruct", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_STRUCTURE);

    type_object->complete().struct_type().struct_flags().IS_FINAL(false);
    type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->complete().struct_type().struct_flags().IS_NESTED(false);
    type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    CompleteStructMember cst_my_enum_wide;
    cst_my_enum_wide.common().member_id(memberId++);
    cst_my_enum_wide.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_enum_wide.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_enum_wide.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_enum_wide.common().member_flags().IS_OPTIONAL(false);
    cst_my_enum_wide.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_enum_wide.common().member_flags().IS_KEY(false);
    cst_my_enum_wide.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_enum_wide.common().member_type_id(*GetMyEnumWideIdentifier(true));
    cst_my_enum_wide.detail().name("my_enum_wide");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_enum_wide);


    // Header
    type_object->complete().struct_type().header().detail().type_name("MyEnumWideStruct");
    // TODO inheritance


    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("MyEnumWideStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyEnumWideStruct", true);
}

const TypeIdentifier* GetSimpleWideUnionIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SimpleWideUnion", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSimpleWideUnionObject(complete);
    return TypeObjectFactory::get_instance()->get_type_identifier("SimpleWideUnion", complete);
}

const TypeObject* GetSimpleWideUnionObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleWideUnion", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSimpleWideUnionObject();
    }
    // else
    return GetMinimalSimpleWideUnionObject();
}

const TypeObject* GetMinimalSimpleWideUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleWideUnion", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_UNION);

    type_object->minimal().union_type().union_flags().IS_FINAL(false);
    type_object->minimal().union_type().union_flags().IS_APPENDABLE(false);
    type_object->minimal().union_type().union_flags().IS_MUTABLE(false);
    type_object->minimal().union_type().union_flags().IS_NESTED(false);
    type_object->minimal().union_type().union_flags().IS_AUTOID_HASH(false); // Unsupported

    type_object->minimal().union_type().discriminator().common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().IS_EXTERNAL(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_KEY(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().IS_DEFAULT(false); // Doesn't apply

    type_object->minimal().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    MemberId memberId = 0;
    MinimalUnionMember mst_first;
    mst_first.common().member_id(memberId++);
    mst_first.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_first.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_first.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_first.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_first.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_first.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_first.common().member_flags().IS_DEFAULT(false);
    mst_first.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_first.common().label_seq().emplace_back(A);
    MD5 first_hash("first");
    for(int i = 0; i < 4; ++i)
    {
        mst_first.detail().name_hash()[i] = first_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_first);

    MinimalUnionMember mst_second;
    mst_second.common().member_id(memberId++);
    mst_second.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_second.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_second.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_second.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_second.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_second.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_second.common().member_flags().IS_DEFAULT(false);
    mst_second.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    mst_second.common().label_seq().emplace_back(B);
    MD5 second_hash("second");
    for(int i = 0; i < 4; ++i)
    {
        mst_second.detail().name_hash()[i] = second_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_second);

    MinimalUnionMember mst_third;
    mst_third.common().member_id(memberId++);
    mst_third.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_third.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_third.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_third.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_third.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_third.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_third.common().member_flags().IS_DEFAULT(false);
    mst_third.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    mst_third.common().label_seq().emplace_back(D);
    MD5 third_hash("third");
    for(int i = 0; i < 4; ++i)
    {
        mst_third.detail().name_hash()[i] = third_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_third);


    // Header
    //type_object->minimal().union_type().header().detail()... // Empty

    TypeIdentifier* identifier = new TypeIdentifier();
    identifier->_d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalUnionType::getCdrSerializedSize(type_object->minimal().union_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier->equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("SimpleWideUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleWideUnion", false);
}

const TypeObject* GetCompleteSimpleWideUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleWideUnion", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_UNION);

    type_object->complete().union_type().union_flags().IS_FINAL(false);
    type_object->complete().union_type().union_flags().IS_APPENDABLE(false);
    type_object->complete().union_type().union_flags().IS_MUTABLE(false);
    type_object->complete().union_type().union_flags().IS_NESTED(false);
    type_object->complete().union_type().union_flags().IS_AUTOID_HASH(false); // Unsupported

    type_object->complete().union_type().discriminator().common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().IS_EXTERNAL(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_KEY(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().IS_DEFAULT(false); // Doesn't apply

    type_object->complete().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));


    MemberId memberId = 0;
    CompleteUnionMember cst_first;
    cst_first.common().member_id(memberId++);
    cst_first.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_first.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_first.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_first.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_first.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_first.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_first.common().member_flags().IS_DEFAULT(false);
    cst_first.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_first.common().label_seq().emplace_back(A);

    cst_first.detail().name("first");

    type_object->complete().union_type().member_seq().emplace_back(cst_first);

    CompleteUnionMember cst_second;
    cst_second.common().member_id(memberId++);
    cst_second.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_second.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_second.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_second.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_second.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_second.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_second.common().member_flags().IS_DEFAULT(false);
    cst_second.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));
    cst_second.common().label_seq().emplace_back(B);

    cst_second.detail().name("second");

    type_object->complete().union_type().member_seq().emplace_back(cst_second);

    CompleteUnionMember cst_third;
    cst_third.common().member_id(memberId++);
    cst_third.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_third.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_third.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_third.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_third.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_third.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_third.common().member_flags().IS_DEFAULT(false);
    cst_third.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));
    cst_third.common().label_seq().emplace_back(D);

    cst_third.detail().name("third");

    type_object->complete().union_type().member_seq().emplace_back(cst_third);


    // Header
    type_object->complete().union_type().header().detail().type_name("SimpleWideUnion");


    TypeIdentifier* identifier = new TypeIdentifier();
    identifier->_d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteUnionType::getCdrSerializedSize(type_object->complete().union_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier->equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("SimpleWideUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleWideUnion", true);
}

const TypeIdentifier* GetSimpleWideUnionStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SimpleWideUnionStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSimpleWideUnionStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("SimpleWideUnionStruct", complete);
}

const TypeObject* GetSimpleWideUnionStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleWideUnionStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSimpleWideUnionStructObject();
    }
    //else
    return GetMinimalSimpleWideUnionStructObject();
}

const TypeObject* GetMinimalSimpleWideUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleWideUnionStruct", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_STRUCTURE);

    type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
    type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
    type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    MinimalStructMember mst_my_union;
    mst_my_union.common().member_id(memberId++);
    mst_my_union.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_union.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_union.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_union.common().member_flags().IS_OPTIONAL(false);
    mst_my_union.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_union.common().member_flags().IS_KEY(false);
    mst_my_union.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_union.common().member_type_id(*GetSimpleWideUnionIdentifier(false));
    MD5 my_union_hash("my_union");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_union.detail().name_hash()[i] = my_union_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_union);


    // Header
    // TODO Inheritance
    //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
    //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];

    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("SimpleWideUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleWideUnionStruct", false);
}

const TypeObject* GetCompleteSimpleWideUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleWideUnionStruct", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_STRUCTURE);

    type_object->complete().struct_type().struct_flags().IS_FINAL(false);
    type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->complete().struct_type().struct_flags().IS_NESTED(false);
    type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    CompleteStructMember cst_my_union;
    cst_my_union.common().member_id(memberId++);
    cst_my_union.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_union.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_union.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_union.common().member_flags().IS_OPTIONAL(false);
    cst_my_union.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_union.common().member_flags().IS_KEY(false);
    cst_my_union.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_union.common().member_type_id(*GetSimpleWideUnionIdentifier(true));
    cst_my_union.detail().name("my_union");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_union);


    // Header
    type_object->complete().struct_type().header().detail().type_name("SimpleWideUnionStruct");
    // TODO inheritance


    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("SimpleWideUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleWideUnionStruct", true);
}
