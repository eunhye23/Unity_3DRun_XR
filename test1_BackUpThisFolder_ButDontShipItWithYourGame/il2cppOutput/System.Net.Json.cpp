#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Collections.Generic.IEnumerator`1<System.Net.Json.JsonObject>
struct IEnumerator_1_t3DA0280BDF2A23AB1B9E081F3386F302E6995A78;
// System.Collections.Generic.List`1<System.Net.Json.JsonObject>
struct List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Int32>
struct SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct TreeSet_1_t0658F81B4D6393BA76B88B5D8E4D1120D5AE4E23;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Text.RegularExpressions.Capture[]
struct CaptureU5BU5D_tC1C7568482C97A1529C2B061F0502A45FFFEEBD3;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Net.Json.JsonObject[]
struct JsonObjectU5BU5D_t56230EB8F0038E26544206B7C5B17A8048F24181;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.Net.Json.JsonArrayCollection
struct JsonArrayCollection_t85CF048B82F865031112B46573B874DA1BBA6566;
// System.Net.Json.JsonBooleanValue
struct JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB;
// System.Net.Json.JsonCollection
struct JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745;
// System.Net.Json.JsonNumericValue
struct JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A;
// System.Net.Json.JsonObject
struct JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806;
// System.Net.Json.JsonObjectCollection
struct JsonObjectCollection_t43F58098958F53849AD6B4DA19C9008EBC07FAEB;
// System.Net.Json.JsonStringValue
struct JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3;
// System.Net.Json.JsonTextParser
struct JsonTextParser_t11F672A526337869AE37577053684A57D3092522;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tB7EC2FB1A13800F2802ADA4A7D665E3A506DABD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonArrayCollection_t85CF048B82F865031112B46573B874DA1BBA6566_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonObjectCollection_t43F58098958F53849AD6B4DA19C9008EBC07FAEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTextParser_t11F672A526337869AE37577053684A57D3092522_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral23715F57DAE40DED7C4161D966C04FA5FB7686F6;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2FA4D4701C935BF05CB582CC6849B885EE14A6DC;
IL2CPP_EXTERN_C String_t* _stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877;
IL2CPP_EXTERN_C String_t* _stringLiteral481848FB0C840209E8E30034D37D03C129F26CE4;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral70F47C130CDD2EA6E3CBF45EAB355B59916D891E;
IL2CPP_EXTERN_C String_t* _stringLiteral75506725E7A359F806E408280DC48057A6D8BFB5;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF2933F4385CB36A1BA0B1A9E5666D8AE9C5B8ED4;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF983D788C2B7AC5109ABA34314E34A69FBCEB835;
IL2CPP_EXTERN_C String_t* _stringLiteralFE887CDCED7FFD707109E66501BF619B38333BDC;
IL2CPP_EXTERN_C const RuntimeMethod* JsonBooleanValue__ctor_mF6FFE6D8C135D0B984A86A03EC72D15C86F2BCAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonCollection_Equals_mF7CB79FE61B0341479CEE022AF033525BB6A7C1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonCollection_GetHashCode_m71186E41248D296845CCCB8E50BCDA0DAB891E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonTextParser_ParseCollection_mBA5E0337ECA42ED065B862816D738EC3B5524C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonTextParser_ParseLiteralValue_mEF64494E399B6D2E7E967CD4712419EA3058A0D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonTextParser_ParseName_mDB5223167B3168D2654BCF180A1BEA338DFD18E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonTextParser_ParseNumericValue_m2D6ED83352A46DED45548FC4779B8C9F707FAC7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonTextParser_ParseSomethingWithoutName_mE397ADCEF5E3BF752A1F83C27E8037A2C449AF78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonTextParser_ParseStringValue_m3FE430AA52B125748109959B5ED8FA56B21D43BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonTextParser_Parse_mC94B16CB27763D002871E88ABD81CF4A295E698F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonTextParser_SkipWhiteSpace_m1D446C25EA6EB292F9345CC5532BCF9B133017BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_UnEscapeString_m84D2B60F627223DDBBA092EE09060CF3A010F3C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7A3ED9D53DF65D8257EBC9892B775C76DF315123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5A77A94E3D5E7610008DB06BA02EA8DD962F959C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mB0C387FC4ADCFEA148C4C4C9E9FBAC7B0B893F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_mC0D76635D192C37FDF9CC071DA5319F2A07B341B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7E21AF7D2332DE2E94533709EA94E3BCE12835A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m22057BF558E28FBBA58669AB06AFBD5C03705160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m8D474921F7540D8FD6694F3B8229E3DF69327508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m9516800A90BD7EB275EFDD9ADAAE196BB7B84ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mEA81C9F2A3B2755AF768677B6CFF49EE56567F96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF90603E665A1F6189EE3BA4688BD6FE7BF0C9D58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1F31DE7D2FC337FF1CF29548C8C552E1D63C3EC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F1DD0EB00DB8F34843D0211AF3C619CCCA09251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mC4C4D918399DB196909A0E8367CF5328AB76A4F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetHashCode_m2AFEAD36F48D2F5DE8ECE59A6D10D73B229DDAC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_m3BDF0C31357145749076CC10EB3D04D20C2BD925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Item_m0F81BC72FC98B817477B0F39EB39093475C5482E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_set_Item_m79A33F2A66348EE724ABFD0B2B4316F83C299178_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct JsonObjectU5BU5D_t56230EB8F0038E26544206B7C5B17A8048F24181;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0150C14262AA94BAD4C5236B9C1FD3E27E7D9E5F 
{
};

// System.Collections.Generic.List`1<System.Net.Json.JsonObject>
struct List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JsonObjectU5BU5D_t56230EB8F0038E26544206B7C5B17A8048F24181* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JsonObjectU5BU5D_t56230EB8F0038E26544206B7C5B17A8048F24181* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Int32>
struct SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1  : public RuntimeObject
{
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t0658F81B4D6393BA76B88B5D8E4D1120D5AE4E23* ____set_0;
};
struct Il2CppArrayBounds;

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93  : public RuntimeObject
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.CaptureCollection::_group
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ____group_0;
	// System.Int32 System.Text.RegularExpressions.CaptureCollection::_capcount
	int32_t ____capcount_1;
	// System.Text.RegularExpressions.Capture[] System.Text.RegularExpressions.CaptureCollection::_captures
	CaptureU5BU5D_tC1C7568482C97A1529C2B061F0502A45FFFEEBD3* ____captures_2;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Net.Json.JsonObject
struct JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806  : public RuntimeObject
{
	// System.String System.Net.Json.JsonObject::_name
	String_t* ____name_0;
};

// System.Net.Json.JsonTextParser
struct JsonTextParser_t11F672A526337869AE37577053684A57D3092522  : public RuntimeObject
{
	// System.Int32 System.Net.Json.JsonTextParser::c
	int32_t ___c_2;
	// System.String System.Net.Json.JsonTextParser::s
	String_t* ___s_3;
	// System.Object System.Net.Json.JsonTextParser::SyncObject
	RuntimeObject* ___SyncObject_4;
};

struct JsonTextParser_t11F672A526337869AE37577053684A57D3092522_StaticFields
{
	// System.Text.RegularExpressions.Regex System.Net.Json.JsonTextParser::_regexLiteral
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regexLiteral_0;
	// System.Text.RegularExpressions.Regex System.Net.Json.JsonTextParser::_regexNumber
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regexNumber_1;
};

// System.Net.Json.JsonUtility
struct JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35  : public RuntimeObject
{
};

struct JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields
{
	// System.Globalization.CultureInfo System.Net.Json.JsonUtility::CultureInfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___CultureInfo_0;
	// System.Boolean System.Net.Json.JsonUtility::GenerateIndentedJsonText
	bool ___GenerateIndentedJsonText_1;
	// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Int32> System.Net.Json.JsonUtility::IndentDepthCollection
	SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1* ___IndentDepthCollection_2;
	// System.Int32 System.Net.Json.JsonUtility::MaxDepthNesting
	int32_t ___MaxDepthNesting_3;
	// System.Int32 System.Net.Json.JsonUtility::MaxStringLength
	int32_t ___MaxStringLength_4;
	// System.Int32 System.Net.Json.JsonUtility::MaxTextLength
	int32_t ___MaxTextLength_5;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Net.Json.JsonObject>
struct Enumerator_tB7EC2FB1A13800F2802ADA4A7D665E3A506DABD2 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Net.Json.JsonNumericValue
struct JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A  : public JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806
{
	// System.Double System.Net.Json.JsonNumericValue::_value
	double ____value_1;
};

// System.Net.Json.JsonStringValue
struct JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3  : public JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806
{
	// System.String System.Net.Json.JsonStringValue::_value
	String_t* ____value_1;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Net.Json.JsonBooleanValue
struct JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB  : public JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806
{
	// System.Nullable`1<System.Boolean> System.Net.Json.JsonBooleanValue::_value
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____value_1;
};

// System.Net.Json.JsonCollection
struct JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745  : public JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806
{
	// System.Nullable`1<System.Boolean> System.Net.Json.JsonCollection::_isArray
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____isArray_1;
	// System.Collections.Generic.List`1<System.Net.Json.JsonObject> System.Net.Json.JsonCollection::_list
	List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* ____list_2;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Globalization.NumberStyles
struct NumberStyles_t567C6CBC2A2B5B5A2C43B2855D158949984A810C 
{
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;
};

// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;
};

// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t* ____sb_6;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_7;
};

// System.Net.Json.JsonArrayCollection
struct JsonArrayCollection_t85CF048B82F865031112B46573B874DA1BBA6566  : public JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745
{
};

// System.Net.Json.JsonObjectCollection
struct JsonObjectCollection_t43F58098958F53849AD6B4DA19C9008EBC07FAEB  : public JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745
{
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Net.Json.JsonObject[]
struct JsonObjectU5BU5D_t56230EB8F0038E26544206B7C5B17A8048F24181  : public RuntimeArray
{
	ALIGN_FIELD (8) JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* m_Items[1];

	inline JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// TValue System.Collections.Generic.SortedDictionary`2<System.Int32,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedDictionary_2_get_Item_m0F81BC72FC98B817477B0F39EB39093475C5482E_gshared (SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_set_Item_m79A33F2A66348EE724ABFD0B2B4316F83C299178_gshared (SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_m3BDF0C31357145749076CC10EB3D04D20C2BD925_gshared (SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Int32 System.Nullable`1<System.Boolean>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m2AFEAD36F48D2F5DE8ECE59A6D10D73B229DDAC7_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.String System.Nullable`1<System.Boolean>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;

// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsLetterOrDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLetterOrDigit_m3187D9080624F8059033B204FB5F52FF3632E11C (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsPunctuation(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsPunctuation_m53451A2285C879564FA33E6D34BABEFF5F28B8CA (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsSeparator(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsSeparator_mDCBCD6C8304D946C3E1998A847DEA04928C72394 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsSymbol(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsSymbol_m83B04234DC2F1A3824834C57ED87A73825415967 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.String System.Net.Json.JsonUtility::EscapeNonPrintCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_EscapeNonPrintCharacter_m5AD7199A269CAB8D47E7B585B93830F53D3BD417 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.Json.JsonUtility::get_IndentDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonUtility_get_IndentDepth_m4A521CC7F1966DF98B0D8715807D707050BD6157 (const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m12C1D8F205085184F8D676DD7A1A39F1495B613A (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method) ;
// System.String System.Net.Json.JsonUtility::GetIndentString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_GetIndentString_m153F3CBC0101F4D69B9481186FE7A533039E4920 (const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0 (const RuntimeMethod* method) ;
// System.Int32 System.Net.Json.JsonUtility::get_ThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonUtility_get_ThreadId_m0A3999240E2B1193794B2C935F503AA7530E6DE6 (const RuntimeMethod* method) ;
// TValue System.Collections.Generic.SortedDictionary`2<System.Int32,System.Int32>::get_Item(TKey)
inline int32_t SortedDictionary_2_get_Item_m0F81BC72FC98B817477B0F39EB39093475C5482E (SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1*, int32_t, const RuntimeMethod*))SortedDictionary_2_get_Item_m0F81BC72FC98B817477B0F39EB39093475C5482E_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
inline void SortedDictionary_2_set_Item_m79A33F2A66348EE724ABFD0B2B4316F83C299178 (SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1*, int32_t, int32_t, const RuntimeMethod*))SortedDictionary_2_set_Item_m79A33F2A66348EE724ABFD0B2B4316F83C299178_gshared)(__this, ___key0, ___value1, method);
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CultureInfo__ctor_mCE140B446F8E3F092B325F05F25AFF89B9FA820A (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* __this, String_t* ___name0, bool ___useUserOverride1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Int32>::.ctor()
inline void SortedDictionary_2__ctor_m3BDF0C31357145749076CC10EB3D04D20C2BD925 (SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1*, const RuntimeMethod*))SortedDictionary_2__ctor_m3BDF0C31357145749076CC10EB3D04D20C2BD925_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StringWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_m072DFF5FFA84EBA7C38B282975D053E738C56E6D (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject__ctor_mBFFE17CFBA6ED8A56C81834EF59DDD5EB6320411 (JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Net.Json.JsonObject>::.ctor()
inline void List_1__ctor_mF90603E665A1F6189EE3BA4688BD6FE7BF0C9D58 (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Net.Json.JsonObject>::Add(T)
inline void List_1_Add_m7A3ED9D53DF65D8257EBC9892B775C76DF315123_inline (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* __this, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Net.Json.JsonObject>::Clear()
inline void List_1_Clear_m5A77A94E3D5E7610008DB06BA02EA8DD962F959C_inline (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Net.Json.JsonObject>::Contains(T)
inline bool List_1_Contains_mB0C387FC4ADCFEA148C4C4C9E9FBAC7B0B893F49 (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* __this, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Net.Json.JsonObject>::CopyTo(T[],System.Int32)
inline void List_1_CopyTo_mC0D76635D192C37FDF9CC071DA5319F2A07B341B (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* __this, JsonObjectU5BU5D_t56230EB8F0038E26544206B7C5B17A8048F24181* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*, JsonObjectU5BU5D_t56230EB8F0038E26544206B7C5B17A8048F24181*, int32_t, const RuntimeMethod*))List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared)(__this, ___array0, ___arrayIndex1, method);
}
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Net.Json.JsonObject>::GetEnumerator()
inline Enumerator_tB7EC2FB1A13800F2802ADA4A7D665E3A506DABD2 List_1_GetEnumerator_m7E21AF7D2332DE2E94533709EA94E3BCE12835A5 (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB7EC2FB1A13800F2802ADA4A7D665E3A506DABD2 (*) (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Net.Json.JsonObject>::IndexOf(T)
inline int32_t List_1_IndexOf_m22057BF558E28FBBA58669AB06AFBD5C03705160 (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* __this, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Net.Json.JsonObject>::Insert(System.Int32,T)
inline void List_1_Insert_m8D474921F7540D8FD6694F3B8229E3DF69327508 (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* __this, int32_t ___index0, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*, int32_t, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Net.Json.JsonObject>::Remove(T)
inline bool List_1_Remove_mEA81C9F2A3B2755AF768677B6CFF49EE56567F96 (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* __this, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Net.Json.JsonObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m9516800A90BD7EB275EFDD9ADAAE196BB7B84ED1 (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.String System.Net.Json.JsonObject::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonObject_ToString_mD39D4A0BA3487EFEA1AA3075DCC3F7068E2E72B2 (JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* __this, const RuntimeMethod* method) ;
// System.String System.Net.Json.JsonObject::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonObject_get_Name_m12114204C0107BA3FF3AB05AB85EB8BB1834116C (JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonUtility::WriteSpace(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_WriteSpace_m6F84D9E718FEB34A0EEA96AFFF1E0FEF94F981BA (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonUtility::WriteLine(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_WriteLine_m50E09C17B807D9BA2FD4F96C9D8481DB8F1174E6 (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonUtility::set_IndentDepth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_set_IndentDepth_mA8688EEC0B75577FC4D421557ACE4F08FB708177 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonUtility::WriteIndent(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_WriteIndent_m118FD2A844BDC2C5C1B36DB216C183CF8E539D65 (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) ;
// System.Net.Json.JsonObject System.Net.Json.JsonCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* JsonCollection_get_Item_mA13F0D2625F03C2233079379EAF31C71BD53925E (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Net.Json.JsonCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonCollection_get_Count_m61EC53F6FAB6D45C91E749B6655FE54D9BC361D0 (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Net.Json.JsonObject>::get_Count()
inline int32_t List_1_get_Count_m1F31DE7D2FC337FF1CF29548C8C552E1D63C3EC6_inline (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Net.Json.JsonObject>::get_Item(System.Int32)
inline JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* List_1_get_Item_m8F1DD0EB00DB8F34843D0211AF3C619CCCA09251 (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* (*) (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Net.Json.JsonObject>::set_Item(System.Int32,T)
inline void List_1_set_Item_mC4C4D918399DB196909A0E8367CF5328AB76A4F8 (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* __this, int32_t ___index0, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*, int32_t, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Net.Json.JsonCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonCollection__ctor_mB01D940892F35F424E0A63A2DF4A6DD5255D80CE (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Net.Json.JsonObject System.Net.Json.JsonTextParser::ParseSomethingWithoutName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* JsonTextParser_ParseSomethingWithoutName_mE397ADCEF5E3BF752A1F83C27E8037A2C449AF78 (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonTextParser::SkipWhiteSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextParser_SkipWhiteSpace_m1D446C25EA6EB292F9345CC5532BCF9B133017BD (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonObjectCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObjectCollection__ctor_mFF8C4CD5A76274639E90C630E654672CC6ADAC3C (JsonObjectCollection_t43F58098958F53849AD6B4DA19C9008EBC07FAEB* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonArrayCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArrayCollection__ctor_m0E87D726D0F024A5E64B96703692A1C3B8ACD285 (JsonArrayCollection_t85CF048B82F865031112B46573B874DA1BBA6566* __this, const RuntimeMethod* method) ;
// System.String System.Net.Json.JsonTextParser::ParseName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonTextParser_ParseName_mDB5223167B3168D2654BCF180A1BEA338DFD18E4 (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonObject::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_set_Name_mA28668FF7DE862DA5093D0765ACC08BC98FAAA36 (JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonCollection::Add(System.Net.Json.JsonObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonCollection_Add_m16FB14CB7E305897A5BD4EA1EC210B77427CACAE (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ___item0, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_mDF110993CAA26CD41AE9F5DB7F0C307B2680CED3 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, int32_t ___startat1, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::get_Captures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* Group_get_Captures_m624EA19098D759F4B7513F702328E60D84B4C32A (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Capture System.Text.RegularExpressions.CaptureCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* CaptureCollection_get_Item_m9E773C623570B88CA00A8E1309C69EE1C60719CC (CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonBooleanValue::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonBooleanValue__ctor_mF6FFE6D8C135D0B984A86A03EC72D15C86F2BCAD (JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Net.Json.JsonTextParser::get_IsEOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonTextParser_get_IsEOS_m29BF9A0C38E4517F7BBACB39EF8528AC38CB41E3 (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) ;
// System.String System.Net.Json.JsonUtility::UnEscapeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_UnEscapeString_m84D2B60F627223DDBBA092EE09060CF3A010F3C6 (String_t* ___text0, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_m282A37E997C8F446BD373A4DE4673B8FECC37866 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonNumericValue::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonNumericValue__ctor_m358D319394C8EDE48508449AB994F557A8A3E110 (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* __this, double ___value0, const RuntimeMethod* method) ;
// System.Net.Json.JsonCollection System.Net.Json.JsonTextParser::ParseCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* JsonTextParser_ParseCollection_mBA5E0337ECA42ED065B862816D738EC3B5524C27 (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) ;
// System.Net.Json.JsonStringValue System.Net.Json.JsonTextParser::ParseStringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* JsonTextParser_ParseStringValue_m3FE430AA52B125748109959B5ED8FA56B21D43BA (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsDigit_mC98DAF907860EFB7D26C3E126D80AD3A2CE72715 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Net.Json.JsonNumericValue System.Net.Json.JsonTextParser::ParseNumericValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* JsonTextParser_ParseNumericValue_m2D6ED83352A46DED45548FC4779B8C9F707FAC7F (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) ;
// System.Net.Json.JsonBooleanValue System.Net.Json.JsonTextParser::ParseLiteralValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* JsonTextParser_ParseLiteralValue_mEF64494E399B6D2E7E967CD4712419EA3058A0D2 (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonStringValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonStringValue__ctor_mAAE90FBAA765938053AB47BC13287180BFEA7F84 (JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonStringValue::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonStringValue_set_Value_mFE700F379A246F50DDB2F569932E30740E481119_inline (JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String System.Net.Json.JsonStringValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonStringValue_get_Value_m0D82991D869E89E9050C91A880AF232EA22C63BA (JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* __this, const RuntimeMethod* method) ;
// System.String System.Net.Json.JsonUtility::EscapeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_EscapeString_m1B64A0D953204574DB73F51B8830A069BA1FE68E (String_t* ___text0, const RuntimeMethod* method) ;
// System.Void System.Net.Json.JsonNumericValue::set_Value(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonNumericValue_set_Value_m1F6F3FC06B6BDE31618A2CB941CA0BF46DAF0490_inline (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* __this, double ___value0, const RuntimeMethod* method) ;
// System.Double System.Net.Json.JsonNumericValue::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double JsonNumericValue_get_Value_m3BC44C5B2433AD7C3801D9EF0220A1AC2F08B7A2_inline (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Double::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789 (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Boolean> System.Net.Json.JsonBooleanValue::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 JsonBooleanValue_get_Value_mD63FBE60AA8BC46E965B7561A401120B01DBD7BA_inline (JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// System.Int32 System.Nullable`1<System.Boolean>::GetHashCode()
inline int32_t Nullable_1_GetHashCode_m2AFEAD36F48D2F5DE8ECE59A6D10D73B229DDAC7 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_GetHashCode_m2AFEAD36F48D2F5DE8ECE59A6D10D73B229DDAC7_gshared)(__this, method);
}
// System.String System.Nullable`1<System.Boolean>::ToString()
inline String_t* Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB_gshared)(__this, method);
}
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Net.Json.JsonUtility::EscapeNonPrintCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_EscapeNonPrintCharacter_m5AD7199A269CAB8D47E7B585B93830F53D3BD417 (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727BF366E3CC855B808D806440542BF7152AF19);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		V_0 = L_0;
		String_t* L_1;
		L_1 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, L_1, NULL);
		return L_2;
	}
}
// System.String System.Net.Json.JsonUtility::EscapeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_EscapeString_m1B64A0D953204574DB73F51B8830A069BA1FE68E (String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, ((int32_t)34), NULL);
		String_t* L_3 = ___text0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_012e;
	}

IL_0018:
	{
		String_t* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		V_1 = L_6;
		Il2CppChar L_7 = V_1;
		V_4 = L_7;
		Il2CppChar L_8 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 8)))
		{
			case 0:
			{
				goto IL_0074;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_0096;
			}
			case 3:
			{
				goto IL_00c3;
			}
			case 4:
			{
				goto IL_0085;
			}
			case 5:
			{
				goto IL_00a7;
			}
		}
	}
	{
		Il2CppChar L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_0052;
		}
	}
	{
		Il2CppChar L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0063;
		}
	}
	{
		goto IL_00c3;
	}

IL_0052:
	{
		StringBuilder_t* L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		goto IL_012a;
	}

IL_0063:
	{
		StringBuilder_t* L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		goto IL_012a;
	}

IL_0074:
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		goto IL_012a;
	}

IL_0085:
	{
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		goto IL_012a;
	}

IL_0096:
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		goto IL_012a;
	}

IL_00a7:
	{
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		goto IL_012a;
	}

IL_00b5:
	{
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		goto IL_012a;
	}

IL_00c3:
	{
		Il2CppChar L_25 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Char_IsLetterOrDigit_m3187D9080624F8059033B204FB5F52FF3632E11C(L_25, NULL);
		if (!L_26)
		{
			goto IL_00d5;
		}
	}
	{
		StringBuilder_t* L_27 = V_0;
		Il2CppChar L_28 = V_1;
		NullCheck(L_27);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_27, L_28, NULL);
		goto IL_012a;
	}

IL_00d5:
	{
		Il2CppChar L_30 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Char_IsPunctuation_m53451A2285C879564FA33E6D34BABEFF5F28B8CA(L_30, NULL);
		if (!L_31)
		{
			goto IL_00e7;
		}
	}
	{
		StringBuilder_t* L_32 = V_0;
		Il2CppChar L_33 = V_1;
		NullCheck(L_32);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, L_33, NULL);
		goto IL_012a;
	}

IL_00e7:
	{
		Il2CppChar L_35 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Char_IsSeparator_mDCBCD6C8304D946C3E1998A847DEA04928C72394(L_35, NULL);
		if (!L_36)
		{
			goto IL_00f9;
		}
	}
	{
		StringBuilder_t* L_37 = V_0;
		Il2CppChar L_38 = V_1;
		NullCheck(L_37);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_37, L_38, NULL);
		goto IL_012a;
	}

IL_00f9:
	{
		Il2CppChar L_40 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_40, NULL);
		if (!L_41)
		{
			goto IL_010b;
		}
	}
	{
		StringBuilder_t* L_42 = V_0;
		Il2CppChar L_43 = V_1;
		NullCheck(L_42);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_42, L_43, NULL);
		goto IL_012a;
	}

IL_010b:
	{
		Il2CppChar L_45 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Char_IsSymbol_m83B04234DC2F1A3824834C57ED87A73825415967(L_45, NULL);
		if (!L_46)
		{
			goto IL_011d;
		}
	}
	{
		StringBuilder_t* L_47 = V_0;
		Il2CppChar L_48 = V_1;
		NullCheck(L_47);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_47, L_48, NULL);
		goto IL_012a;
	}

IL_011d:
	{
		StringBuilder_t* L_50 = V_0;
		Il2CppChar L_51 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		String_t* L_52;
		L_52 = JsonUtility_EscapeNonPrintCharacter_m5AD7199A269CAB8D47E7B585B93830F53D3BD417(L_51, NULL);
		NullCheck(L_50);
		StringBuilder_t* L_53;
		L_53 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_50, L_52, NULL);
	}

IL_012a:
	{
		int32_t L_54 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_012e:
	{
		int32_t L_55 = V_3;
		String_t* L_56 = V_2;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_56, NULL);
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_0018;
		}
	}
	{
		StringBuilder_t* L_58 = V_0;
		NullCheck(L_58);
		StringBuilder_t* L_59;
		L_59 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_58, ((int32_t)34), NULL);
		StringBuilder_t* L_60 = V_0;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
		return L_61;
	}
}
// System.String System.Net.Json.JsonUtility::GetIndentString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_GetIndentString_m153F3CBC0101F4D69B9481186FE7A533039E4920 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = JsonUtility_get_IndentDepth_m4A521CC7F1966DF98B0D8715807D707050BD6157(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		String_t* L_4;
		L_4 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((int32_t)9), L_3, NULL);
		return L_4;
	}
}
// System.String System.Net.Json.JsonUtility::UnEscapeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_UnEscapeString_m84D2B60F627223DDBBA092EE09060CF3A010F3C6 (String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	Il2CppChar V_3 = 0x0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___text0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_0, NULL);
		___text0 = L_1;
		String_t* L_2 = ___text0;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_2, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_4 = ___text0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_4, 0, 1, NULL);
		___text0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___text0;
		NullCheck(L_6);
		bool L_7;
		L_7 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_6, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_8 = ___text0;
		NullCheck(L_8);
		bool L_9;
		L_9 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_8, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		if (L_9)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_10 = ___text0;
		String_t* L_11 = ___text0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		NullCheck(L_10);
		String_t* L_13;
		L_13 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_10, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), 1, NULL);
		___text0 = L_13;
	}

IL_004a:
	{
		StringBuilder_t* L_14 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_14, NULL);
		V_0 = L_14;
	}
	try
	{// begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_01bf_1;
		}

IL_0057_1:
		{
			String_t* L_15 = ___text0;
			int32_t L_16 = V_1;
			NullCheck(L_15);
			Il2CppChar L_17;
			L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, L_16, NULL);
			V_2 = L_17;
			Il2CppChar L_18 = V_2;
			if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)92)))))
			{
				goto IL_01b3_1;
			}
		}
		{
			int32_t L_19 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			String_t* L_20 = ___text0;
			int32_t L_21 = V_1;
			NullCheck(L_20);
			Il2CppChar L_22;
			L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, L_21, NULL);
			if ((((int32_t)L_22) == ((int32_t)((int32_t)117))))
			{
				goto IL_018f_1;
			}
		}
		{
			String_t* L_23 = ___text0;
			int32_t L_24 = V_1;
			NullCheck(L_23);
			Il2CppChar L_25;
			L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
			if ((((int32_t)L_25) == ((int32_t)((int32_t)85))))
			{
				goto IL_018f_1;
			}
		}
		{
			String_t* L_26 = ___text0;
			int32_t L_27 = V_1;
			NullCheck(L_26);
			Il2CppChar L_28;
			L_28 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_26, L_27, NULL);
			if ((((int32_t)L_28) == ((int32_t)((int32_t)110))))
			{
				goto IL_0184_1;
			}
		}
		{
			String_t* L_29 = ___text0;
			int32_t L_30 = V_1;
			NullCheck(L_29);
			Il2CppChar L_31;
			L_31 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_29, L_30, NULL);
			if ((((int32_t)L_31) == ((int32_t)((int32_t)114))))
			{
				goto IL_0179_1;
			}
		}
		{
			String_t* L_32 = ___text0;
			int32_t L_33 = V_1;
			NullCheck(L_32);
			Il2CppChar L_34;
			L_34 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_32, L_33, NULL);
			if ((((int32_t)L_34) == ((int32_t)((int32_t)116))))
			{
				goto IL_016e_1;
			}
		}
		{
			String_t* L_35 = ___text0;
			int32_t L_36 = V_1;
			NullCheck(L_35);
			Il2CppChar L_37;
			L_37 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_35, L_36, NULL);
			if ((((int32_t)L_37) == ((int32_t)((int32_t)102))))
			{
				goto IL_0163_1;
			}
		}
		{
			String_t* L_38 = ___text0;
			int32_t L_39 = V_1;
			NullCheck(L_38);
			Il2CppChar L_40;
			L_40 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_38, L_39, NULL);
			if ((((int32_t)L_40) == ((int32_t)((int32_t)98))))
			{
				goto IL_0159_1;
			}
		}
		{
			String_t* L_41 = ___text0;
			int32_t L_42 = V_1;
			NullCheck(L_41);
			Il2CppChar L_43;
			L_43 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_41, L_42, NULL);
			if ((((int32_t)L_43) == ((int32_t)((int32_t)92))))
			{
				goto IL_014e_1;
			}
		}
		{
			String_t* L_44 = ___text0;
			int32_t L_45 = V_1;
			NullCheck(L_44);
			Il2CppChar L_46;
			L_46 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_44, L_45, NULL);
			if ((((int32_t)L_46) == ((int32_t)((int32_t)47))))
			{
				goto IL_0143_1;
			}
		}
		{
			String_t* L_47 = ___text0;
			int32_t L_48 = V_1;
			NullCheck(L_47);
			Il2CppChar L_49;
			L_49 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_47, L_48, NULL);
			if ((((int32_t)L_49) == ((int32_t)((int32_t)34))))
			{
				goto IL_0138_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)5);
			V_4 = L_50;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = V_4;
			NullCheck(L_51);
			ArrayElementTypeCheck (L_51, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE887CDCED7FFD707109E66501BF619B38333BDC)));
			(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE887CDCED7FFD707109E66501BF619B38333BDC)));
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = V_4;
			String_t* L_53 = ___text0;
			int32_t L_54 = V_1;
			NullCheck(L_53);
			Il2CppChar L_55;
			L_55 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_53, L_54, NULL);
			Il2CppChar L_56 = L_55;
			RuntimeObject* L_57 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)), &L_56);
			NullCheck(L_52);
			ArrayElementTypeCheck (L_52, L_57);
			(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_57);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = V_4;
			NullCheck(L_58);
			ArrayElementTypeCheck (L_58, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2FA4D4701C935BF05CB582CC6849B885EE14A6DC)));
			(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2FA4D4701C935BF05CB582CC6849B885EE14A6DC)));
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_59 = V_4;
			int32_t L_60 = V_1;
			int32_t L_61 = L_60;
			RuntimeObject* L_62 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_61);
			NullCheck(L_59);
			ArrayElementTypeCheck (L_59, L_62);
			(L_59)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_62);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = V_4;
			NullCheck(L_63);
			ArrayElementTypeCheck (L_63, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
			(L_63)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = V_4;
			String_t* L_65;
			L_65 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_64, NULL);
			FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_66 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
			NullCheck(L_66);
			FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_66, L_65, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_66, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonUtility_UnEscapeString_m84D2B60F627223DDBBA092EE09060CF3A010F3C6_RuntimeMethod_var)));
		}

IL_0138_1:
		{
			StringBuilder_t* L_67 = V_0;
			NullCheck(L_67);
			StringBuilder_t* L_68;
			L_68 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_67, ((int32_t)34), NULL);
			goto IL_01bb_1;
		}

IL_0143_1:
		{
			StringBuilder_t* L_69 = V_0;
			NullCheck(L_69);
			StringBuilder_t* L_70;
			L_70 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_69, ((int32_t)47), NULL);
			goto IL_01bb_1;
		}

IL_014e_1:
		{
			StringBuilder_t* L_71 = V_0;
			NullCheck(L_71);
			StringBuilder_t* L_72;
			L_72 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_71, ((int32_t)92), NULL);
			goto IL_01bb_1;
		}

IL_0159_1:
		{
			StringBuilder_t* L_73 = V_0;
			NullCheck(L_73);
			StringBuilder_t* L_74;
			L_74 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_73, 8, NULL);
			goto IL_01bb_1;
		}

IL_0163_1:
		{
			StringBuilder_t* L_75 = V_0;
			NullCheck(L_75);
			StringBuilder_t* L_76;
			L_76 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_75, ((int32_t)12), NULL);
			goto IL_01bb_1;
		}

IL_016e_1:
		{
			StringBuilder_t* L_77 = V_0;
			NullCheck(L_77);
			StringBuilder_t* L_78;
			L_78 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_77, ((int32_t)9), NULL);
			goto IL_01bb_1;
		}

IL_0179_1:
		{
			StringBuilder_t* L_79 = V_0;
			NullCheck(L_79);
			StringBuilder_t* L_80;
			L_80 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_79, ((int32_t)13), NULL);
			goto IL_01bb_1;
		}

IL_0184_1:
		{
			StringBuilder_t* L_81 = V_0;
			NullCheck(L_81);
			StringBuilder_t* L_82;
			L_82 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_81, ((int32_t)10), NULL);
			goto IL_01bb_1;
		}

IL_018f_1:
		{
			String_t* L_83 = ___text0;
			int32_t L_84 = V_1;
			NullCheck(L_83);
			String_t* L_85;
			L_85 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_83, ((int32_t)il2cpp_codegen_add(L_84, 1)), 4, NULL);
			int32_t L_86;
			L_86 = Int32_Parse_m12C1D8F205085184F8D676DD7A1A39F1495B613A(L_85, ((int32_t)515), NULL);
			V_3 = ((int32_t)(uint16_t)L_86);
			int32_t L_87 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_87, 4));
			StringBuilder_t* L_88 = V_0;
			Il2CppChar L_89 = V_3;
			NullCheck(L_88);
			StringBuilder_t* L_90;
			L_90 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_88, L_89, NULL);
			goto IL_01bb_1;
		}

IL_01b3_1:
		{
			StringBuilder_t* L_91 = V_0;
			Il2CppChar L_92 = V_2;
			NullCheck(L_91);
			StringBuilder_t* L_93;
			L_93 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_91, L_92, NULL);
		}

IL_01bb_1:
		{
			int32_t L_94 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		}

IL_01bf_1:
		{
			int32_t L_95 = V_1;
			String_t* L_96 = ___text0;
			NullCheck(L_96);
			int32_t L_97;
			L_97 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_96, NULL);
			if ((((int32_t)L_95) < ((int32_t)L_97)))
			{
				goto IL_0057_1;
			}
		}
		{
			goto IL_01d0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01cd;
		}
		throw e;
	}

CATCH_01cd:
	{// begin catch(System.Exception)
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_01d0:
	{
		StringBuilder_t* L_98 = V_0;
		NullCheck(L_98);
		String_t* L_99;
		L_99 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_98);
		return L_99;
	}
}
// System.Void System.Net.Json.JsonUtility::WriteIndent(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_WriteIndent_m118FD2A844BDC2C5C1B36DB216C183CF8E539D65 (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		bool L_0 = ((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___GenerateIndentedJsonText_1;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = ___writer0;
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonUtility_GetIndentString_m153F3CBC0101F4D69B9481186FE7A533039E4920(NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_1, L_2);
	}

IL_0012:
	{
		return;
	}
}
// System.Void System.Net.Json.JsonUtility::WriteLine(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_WriteLine_m50E09C17B807D9BA2FD4F96C9D8481DB8F1174E6 (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		bool L_0 = ((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___GenerateIndentedJsonText_1;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = ___writer0;
		String_t* L_2;
		L_2 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_1, L_2);
	}

IL_0012:
	{
		return;
	}
}
// System.Void System.Net.Json.JsonUtility::WriteSpace(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_WriteSpace_m6F84D9E718FEB34A0EEA96AFFF1E0FEF94F981BA (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		bool L_0 = ((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___GenerateIndentedJsonText_1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = ___writer0;
		NullCheck(L_1);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)32));
	}

IL_000f:
	{
		return;
	}
}
// System.Int32 System.Net.Json.JsonUtility::get_IndentDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonUtility_get_IndentDepth_m4A521CC7F1966DF98B0D8715807D707050BD6157 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m0F81BC72FC98B817477B0F39EB39093475C5482E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = JsonUtility_get_ThreadId_m0A3999240E2B1193794B2C935F503AA7530E6DE6(NULL);
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1* L_1 = ((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___IndentDepthCollection_2;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = SortedDictionary_2_get_Item_m0F81BC72FC98B817477B0F39EB39093475C5482E(L_1, L_2, SortedDictionary_2_get_Item_m0F81BC72FC98B817477B0F39EB39093475C5482E_RuntimeMethod_var);
		V_1 = L_3;
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0014;
		}
		throw e;
	}

CATCH_0014:
	{// begin catch(System.Collections.Generic.KeyNotFoundException)
		V_1 = 0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void System.Net.Json.JsonUtility::set_IndentDepth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_set_IndentDepth_mA8688EEC0B75577FC4D421557ACE4F08FB708177 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_set_Item_m79A33F2A66348EE724ABFD0B2B4316F83C299178_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1* L_0 = ((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___IndentDepthCollection_2;
		int32_t L_1;
		L_1 = JsonUtility_get_ThreadId_m0A3999240E2B1193794B2C935F503AA7530E6DE6(NULL);
		int32_t L_2 = ___value0;
		NullCheck(L_0);
		SortedDictionary_2_set_Item_m79A33F2A66348EE724ABFD0B2B4316F83C299178(L_0, L_1, L_2, SortedDictionary_2_set_Item_m79A33F2A66348EE724ABFD0B2B4316F83C299178_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Net.Json.JsonUtility::get_ThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonUtility_get_ThreadId_m0A3999240E2B1193794B2C935F503AA7530E6DE6 (const RuntimeMethod* method) 
{
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Net.Json.JsonUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility__cctor_m6D62CA8C0D8109F4F55E78F7D5C44E4318D7E657 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_m3BDF0C31357145749076CC10EB3D04D20C2BD925_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877);
		s_Il2CppMethodInitialized = true;
	}
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0 = (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*)il2cpp_codegen_object_new(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CultureInfo__ctor_mCE140B446F8E3F092B325F05F25AFF89B9FA820A(L_0, _stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877, (bool)0, NULL);
		((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___CultureInfo_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___CultureInfo_0), (void*)L_0);
		((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___GenerateIndentedJsonText_1 = (bool)1;
		SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1* L_1 = (SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1*)il2cpp_codegen_object_new(SortedDictionary_2_t1963AA2F68EAD96B236F4D254DF46C2F18568EE1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SortedDictionary_2__ctor_m3BDF0C31357145749076CC10EB3D04D20C2BD925(L_1, SortedDictionary_2__ctor_m3BDF0C31357145749076CC10EB3D04D20C2BD925_RuntimeMethod_var);
		((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___IndentDepthCollection_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___IndentDepthCollection_2), (void*)L_1);
		((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___MaxDepthNesting_3 = (-1);
		((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___MaxStringLength_4 = ((int32_t)1024);
		((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___MaxTextLength_5 = (-1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Json.JsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject__ctor_mBFFE17CFBA6ED8A56C81834EF59DDD5EB6320411 (JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String System.Net.Json.JsonObject::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonObject_ToString_mD39D4A0BA3487EFEA1AA3075DCC3F7068E2E72B2 (JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_0 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringWriter__ctor_m072DFF5FFA84EBA7C38B282975D053E738C56E6D(L_0, NULL);
		V_0 = L_0;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = V_0;
		VirtualActionInvoker1< TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* >::Invoke(5 /* System.Void System.Net.Json.JsonObject::WriteTo(System.IO.TextWriter) */, __this, L_1);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.String System.Net.Json.JsonObject::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonObject_get_Name_m12114204C0107BA3FF3AB05AB85EB8BB1834116C (JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->____name_0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		String_t* L_2 = __this->____name_0;
		return L_2;
	}
}
// System.Void System.Net.Json.JsonObject::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_set_Name_mA28668FF7DE862DA5093D0765ACC08BC98FAAA36 (JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_0), (void*)L_1);
		return;
	}

IL_000f:
	{
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_2, NULL);
		__this->____name_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_0), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Json.JsonCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonCollection__ctor_mB01D940892F35F424E0A63A2DF4A6DD5255D80CE (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF90603E665A1F6189EE3BA4688BD6FE7BF0C9D58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonObject__ctor_mBFFE17CFBA6ED8A56C81834EF59DDD5EB6320411(__this, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* L_0 = (&__this->____isArray_1);
		il2cpp_codegen_initobj(L_0, sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_1 = (List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3*)il2cpp_codegen_object_new(List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF90603E665A1F6189EE3BA4688BD6FE7BF0C9D58(L_1, List_1__ctor_mF90603E665A1F6189EE3BA4688BD6FE7BF0C9D58_RuntimeMethod_var);
		__this->____list_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_2), (void*)L_1);
		return;
	}
}
// System.Void System.Net.Json.JsonCollection::Add(System.Net.Json.JsonObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonCollection_Add_m16FB14CB7E305897A5BD4EA1EC210B77427CACAE (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7A3ED9D53DF65D8257EBC9892B775C76DF315123_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_1 = ___item0;
		NullCheck(L_0);
		List_1_Add_m7A3ED9D53DF65D8257EBC9892B775C76DF315123_inline(L_0, L_1, List_1_Add_m7A3ED9D53DF65D8257EBC9892B775C76DF315123_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Json.JsonCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonCollection_Clear_m34D4972A23E4DB3338C3FDAE44D173A9F6CC9FD2 (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5A77A94E3D5E7610008DB06BA02EA8DD962F959C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		NullCheck(L_0);
		List_1_Clear_m5A77A94E3D5E7610008DB06BA02EA8DD962F959C_inline(L_0, List_1_Clear_m5A77A94E3D5E7610008DB06BA02EA8DD962F959C_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Json.JsonCollection::Contains(System.Net.Json.JsonObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonCollection_Contains_m5CCFED5DC694F72E0C3439EBF6CA8D5E4CEC885A (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mB0C387FC4ADCFEA148C4C4C9E9FBAC7B0B893F49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_1 = ___item0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mB0C387FC4ADCFEA148C4C4C9E9FBAC7B0B893F49(L_0, L_1, List_1_Contains_mB0C387FC4ADCFEA148C4C4C9E9FBAC7B0B893F49_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void System.Net.Json.JsonCollection::CopyTo(System.Net.Json.JsonObject[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonCollection_CopyTo_m8AEE5F17F132ED0F1A830CE499B48CEBCE4F212E (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, JsonObjectU5BU5D_t56230EB8F0038E26544206B7C5B17A8048F24181* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_CopyTo_mC0D76635D192C37FDF9CC071DA5319F2A07B341B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		JsonObjectU5BU5D_t56230EB8F0038E26544206B7C5B17A8048F24181* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck(L_0);
		List_1_CopyTo_mC0D76635D192C37FDF9CC071DA5319F2A07B341B(L_0, L_1, L_2, List_1_CopyTo_mC0D76635D192C37FDF9CC071DA5319F2A07B341B_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Json.JsonCollection::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonCollection_Equals_mF7CB79FE61B0341479CEE022AF033525BB6A7C1F (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonCollection_Equals_mF7CB79FE61B0341479CEE022AF033525BB6A7C1F_RuntimeMethod_var)));
	}
}
// System.Collections.Generic.IEnumerator`1<System.Net.Json.JsonObject> System.Net.Json.JsonCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonCollection_GetEnumerator_m21319F7498D0BC313453260C9EB35F73283A09F8 (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tB7EC2FB1A13800F2802ADA4A7D665E3A506DABD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7E21AF7D2332DE2E94533709EA94E3BCE12835A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		NullCheck(L_0);
		Enumerator_tB7EC2FB1A13800F2802ADA4A7D665E3A506DABD2 L_1;
		L_1 = List_1_GetEnumerator_m7E21AF7D2332DE2E94533709EA94E3BCE12835A5(L_0, List_1_GetEnumerator_m7E21AF7D2332DE2E94533709EA94E3BCE12835A5_RuntimeMethod_var);
		Enumerator_tB7EC2FB1A13800F2802ADA4A7D665E3A506DABD2 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_tB7EC2FB1A13800F2802ADA4A7D665E3A506DABD2_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Int32 System.Net.Json.JsonCollection::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonCollection_GetHashCode_m71186E41248D296845CCCB8E50BCDA0DAB891E51 (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonCollection_GetHashCode_m71186E41248D296845CCCB8E50BCDA0DAB891E51_RuntimeMethod_var)));
	}
}
// System.Object System.Net.Json.JsonCollection::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonCollection_GetValue_mA2EB965BFC6A1783A7181AE7F9E9E8CC10F09591 (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		return L_0;
	}
}
// System.Int32 System.Net.Json.JsonCollection::IndexOf(System.Net.Json.JsonObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonCollection_IndexOf_m05176B8D44A6B385F62DDE92C0B446532549971A (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m22057BF558E28FBBA58669AB06AFBD5C03705160_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_1 = ___item0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_m22057BF558E28FBBA58669AB06AFBD5C03705160(L_0, L_1, List_1_IndexOf_m22057BF558E28FBBA58669AB06AFBD5C03705160_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void System.Net.Json.JsonCollection::Insert(System.Int32,System.Net.Json.JsonObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonCollection_Insert_m579FBAA90CFB048C047A5253B7A6C5B3336D405D (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, int32_t ___index0, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m8D474921F7540D8FD6694F3B8229E3DF69327508_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		int32_t L_1 = ___index0;
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_2 = ___item1;
		NullCheck(L_0);
		List_1_Insert_m8D474921F7540D8FD6694F3B8229E3DF69327508(L_0, L_1, L_2, List_1_Insert_m8D474921F7540D8FD6694F3B8229E3DF69327508_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Json.JsonCollection::Remove(System.Net.Json.JsonObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonCollection_Remove_mDDDCACB4BE8A8A8B60E2C842F8A289E276A77509 (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mEA81C9F2A3B2755AF768677B6CFF49EE56567F96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_1 = ___item0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mEA81C9F2A3B2755AF768677B6CFF49EE56567F96(L_0, L_1, List_1_Remove_mEA81C9F2A3B2755AF768677B6CFF49EE56567F96_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void System.Net.Json.JsonCollection::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonCollection_RemoveAt_m52C57ADEB4273D851F6DAAE2268FC64597372885 (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m9516800A90BD7EB275EFDD9ADAAE196BB7B84ED1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		List_1_RemoveAt_m9516800A90BD7EB275EFDD9ADAAE196BB7B84ED1(L_0, L_1, List_1_RemoveAt_m9516800A90BD7EB275EFDD9ADAAE196BB7B84ED1_RuntimeMethod_var);
		return;
	}
}
// System.Collections.IEnumerator System.Net.Json.JsonCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonCollection_System_Collections_IEnumerable_GetEnumerator_m6497E734A4407DC8FD927B76A1452FC5D4ED2ED9 (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tB7EC2FB1A13800F2802ADA4A7D665E3A506DABD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7E21AF7D2332DE2E94533709EA94E3BCE12835A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		NullCheck(L_0);
		Enumerator_tB7EC2FB1A13800F2802ADA4A7D665E3A506DABD2 L_1;
		L_1 = List_1_GetEnumerator_m7E21AF7D2332DE2E94533709EA94E3BCE12835A5(L_0, List_1_GetEnumerator_m7E21AF7D2332DE2E94533709EA94E3BCE12835A5_RuntimeMethod_var);
		Enumerator_tB7EC2FB1A13800F2802ADA4A7D665E3A506DABD2 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_tB7EC2FB1A13800F2802ADA4A7D665E3A506DABD2_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.String System.Net.Json.JsonCollection::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonCollection_ToString_m6B090EF063550E10735460929121E3526D13CF00 (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = JsonObject_ToString_mD39D4A0BA3487EFEA1AA3075DCC3F7068E2E72B2(__this, NULL);
		return L_0;
	}
}
// System.Void System.Net.Json.JsonCollection::WriteTo(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonCollection_WriteTo_mDD66637213611FFB97042C0B22D33190705C92D2 (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = JsonObject_get_Name_m12114204C0107BA3FF3AB05AB85EB8BB1834116C(__this, NULL);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_2;
		L_2 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_3 = ___writer0;
		NullCheck(L_3);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)34));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_4 = ___writer0;
		String_t* L_5;
		L_5 = JsonObject_get_Name_m12114204C0107BA3FF3AB05AB85EB8BB1834116C(__this, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, L_5);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_6 = ___writer0;
		NullCheck(L_6);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, ((int32_t)34));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_7 = ___writer0;
		NullCheck(L_7);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_7, ((int32_t)58));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_8 = ___writer0;
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		JsonUtility_WriteSpace_m6F84D9E718FEB34A0EEA96AFFF1E0FEF94F981BA(L_8, NULL);
	}

IL_003c:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_9 = ___writer0;
		Il2CppChar L_10;
		L_10 = VirtualFuncInvoker0< Il2CppChar >::Invoke(20 /* System.Char System.Net.Json.JsonCollection::get_BeginCollection() */, __this);
		NullCheck(L_9);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, L_10);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_11 = ___writer0;
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		JsonUtility_WriteLine_m50E09C17B807D9BA2FD4F96C9D8481DB8F1174E6(L_11, NULL);
		int32_t L_12;
		L_12 = JsonUtility_get_IndentDepth_m4A521CC7F1966DF98B0D8715807D707050BD6157(NULL);
		JsonUtility_set_IndentDepth_mA8688EEC0B75577FC4D421557ACE4F08FB708177(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_13 = ___writer0;
		JsonUtility_WriteIndent_m118FD2A844BDC2C5C1B36DB216C183CF8E539D65(L_13, NULL);
		V_0 = 0;
		goto IL_008d;
	}

IL_0064:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_15 = ___writer0;
		NullCheck(L_15);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_15, ((int32_t)44));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_16 = ___writer0;
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		JsonUtility_WriteLine_m50E09C17B807D9BA2FD4F96C9D8481DB8F1174E6(L_16, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_17 = ___writer0;
		JsonUtility_WriteIndent_m118FD2A844BDC2C5C1B36DB216C183CF8E539D65(L_17, NULL);
	}

IL_007c:
	{
		int32_t L_18 = V_0;
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_19;
		L_19 = JsonCollection_get_Item_mA13F0D2625F03C2233079379EAF31C71BD53925E(__this, L_18, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_20 = ___writer0;
		NullCheck(L_19);
		VirtualActionInvoker1< TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* >::Invoke(5 /* System.Void System.Net.Json.JsonObject::WriteTo(System.IO.TextWriter) */, L_19, L_20);
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008d:
	{
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = JsonCollection_get_Count_m61EC53F6FAB6D45C91E749B6655FE54D9BC361D0(__this, NULL);
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0064;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_24 = ___writer0;
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		JsonUtility_WriteLine_m50E09C17B807D9BA2FD4F96C9D8481DB8F1174E6(L_24, NULL);
		int32_t L_25;
		L_25 = JsonUtility_get_IndentDepth_m4A521CC7F1966DF98B0D8715807D707050BD6157(NULL);
		JsonUtility_set_IndentDepth_mA8688EEC0B75577FC4D421557ACE4F08FB708177(((int32_t)il2cpp_codegen_subtract(L_25, 1)), NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_26 = ___writer0;
		JsonUtility_WriteIndent_m118FD2A844BDC2C5C1B36DB216C183CF8E539D65(L_26, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_27 = ___writer0;
		Il2CppChar L_28;
		L_28 = VirtualFuncInvoker0< Il2CppChar >::Invoke(21 /* System.Char System.Net.Json.JsonCollection::get_EndCollection() */, __this);
		NullCheck(L_27);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_27, L_28);
		return;
	}
}
// System.Int32 System.Net.Json.JsonCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonCollection_get_Count_m61EC53F6FAB6D45C91E749B6655FE54D9BC361D0 (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1F31DE7D2FC337FF1CF29548C8C552E1D63C3EC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1F31DE7D2FC337FF1CF29548C8C552E1D63C3EC6_inline(L_0, List_1_get_Count_m1F31DE7D2FC337FF1CF29548C8C552E1D63C3EC6_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean System.Net.Json.JsonCollection::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonCollection_get_IsReadOnly_mBB1B454B20410ABCF024C41731594C7D8DC0831A (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Net.Json.JsonObject System.Net.Json.JsonCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* JsonCollection_get_Item_mA13F0D2625F03C2233079379EAF31C71BD53925E (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F1DD0EB00DB8F34843D0211AF3C619CCCA09251_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_2;
		L_2 = List_1_get_Item_m8F1DD0EB00DB8F34843D0211AF3C619CCCA09251(L_0, L_1, List_1_get_Item_m8F1DD0EB00DB8F34843D0211AF3C619CCCA09251_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void System.Net.Json.JsonCollection::set_Item(System.Int32,System.Net.Json.JsonObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonCollection_set_Item_mD752B45B95C08AA7AEEFF2BAC7DDD42346DB2383 (JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* __this, int32_t ___index0, JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mC4C4D918399DB196909A0E8367CF5328AB76A4F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t8BFD6344D76A31203FA8962CE645B2EC8EF858E3* L_0 = __this->____list_2;
		int32_t L_1 = ___index0;
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_2 = ___value1;
		NullCheck(L_0);
		List_1_set_Item_mC4C4D918399DB196909A0E8367CF5328AB76A4F8(L_0, L_1, L_2, List_1_set_Item_mC4C4D918399DB196909A0E8367CF5328AB76A4F8_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Json.JsonArrayCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArrayCollection__ctor_m0E87D726D0F024A5E64B96703692A1C3B8ACD285 (JsonArrayCollection_t85CF048B82F865031112B46573B874DA1BBA6566* __this, const RuntimeMethod* method) 
{
	{
		JsonCollection__ctor_mB01D940892F35F424E0A63A2DF4A6DD5255D80CE(__this, NULL);
		return;
	}
}
// System.Char System.Net.Json.JsonArrayCollection::get_BeginCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar JsonArrayCollection_get_BeginCollection_m5717A22EF3B165B874BA13DBE992D0A3C3168387 (JsonArrayCollection_t85CF048B82F865031112B46573B874DA1BBA6566* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)91);
	}
}
// System.Char System.Net.Json.JsonArrayCollection::get_EndCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar JsonArrayCollection_get_EndCollection_m98D6DDDB895F845FA6802826E6217EF3D7836F40 (JsonArrayCollection_t85CF048B82F865031112B46573B874DA1BBA6566* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)93);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Net.Json.JsonObject System.Net.Json.JsonTextParser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* JsonTextParser_Parse_mC94B16CB27763D002871E88ABD81CF4A295E698F (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___SyncObject_4;
		RuntimeObject* L_1 = L_0;
		V_1 = L_1;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_1;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				__this->___c_2 = 0;
				String_t* L_3 = ___text0;
				if (L_3)
				{
					goto IL_001d_1;
				}
			}
			{
				FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_4 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
				NullCheck(L_4);
				FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_4, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_Parse_mC94B16CB27763D002871E88ABD81CF4A295E698F_RuntimeMethod_var)));
			}

IL_001d_1:
			{
				String_t* L_5 = ___text0;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_5, NULL);
				__this->___s_3 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___s_3), (void*)L_6);
				String_t* L_7 = __this->___s_3;
				String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				bool L_9;
				L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, L_8, NULL);
				if (!L_9)
				{
					goto IL_0041_1;
				}
			}
			{
				FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_10 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
				NullCheck(L_10);
				FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_10, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_Parse_mC94B16CB27763D002871E88ABD81CF4A295E698F_RuntimeMethod_var)));
			}

IL_0041_1:
			try
			{// begin try (depth: 2)

IL_0041_2:
				JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_11;
				L_11 = JsonTextParser_ParseSomethingWithoutName_mE397ADCEF5E3BF752A1F83C27E8037A2C449AF78(__this, NULL);
				V_0 = L_11;
				goto IL_004d_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_004a_1;
				}
				throw e;
			}

CATCH_004a_1:
			{// begin catch(System.Exception)
				IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			}// end catch (depth: 2)

IL_004d_1:
			{
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_12 = V_0;
		return L_12;
	}
}
// System.Net.Json.JsonCollection System.Net.Json.JsonTextParser::ParseCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* JsonTextParser_ParseCollection_mBA5E0337ECA42ED065B862816D738EC3B5524C27 (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArrayCollection_t85CF048B82F865031112B46573B874DA1BBA6566_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObjectCollection_t43F58098958F53849AD6B4DA19C9008EBC07FAEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* V_3 = NULL;
	{
		JsonTextParser_SkipWhiteSpace_m1D446C25EA6EB292F9345CC5532BCF9B133017BD(__this, NULL);
		V_2 = (bool)0;
		String_t* L_0 = __this->___s_3;
		int32_t L_1 = __this->___c_2;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0025;
		}
	}
	{
		JsonObjectCollection_t43F58098958F53849AD6B4DA19C9008EBC07FAEB* L_3 = (JsonObjectCollection_t43F58098958F53849AD6B4DA19C9008EBC07FAEB*)il2cpp_codegen_object_new(JsonObjectCollection_t43F58098958F53849AD6B4DA19C9008EBC07FAEB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JsonObjectCollection__ctor_mFF8C4CD5A76274639E90C630E654672CC6ADAC3C(L_3, NULL);
		V_0 = L_3;
		goto IL_004a;
	}

IL_0025:
	{
		String_t* L_4 = __this->___s_3;
		int32_t L_5 = __this->___c_2;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0044;
		}
	}
	{
		V_2 = (bool)1;
		JsonArrayCollection_t85CF048B82F865031112B46573B874DA1BBA6566* L_7 = (JsonArrayCollection_t85CF048B82F865031112B46573B874DA1BBA6566*)il2cpp_codegen_object_new(JsonArrayCollection_t85CF048B82F865031112B46573B874DA1BBA6566_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		JsonArrayCollection__ctor_m0E87D726D0F024A5E64B96703692A1C3B8ACD285(L_7, NULL);
		V_0 = L_7;
		goto IL_004a;
	}

IL_0044:
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_8 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseCollection_mBA5E0337ECA42ED065B862816D738EC3B5524C27_RuntimeMethod_var)));
	}

IL_004a:
	{
		int32_t L_9 = __this->___c_2;
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		JsonTextParser_SkipWhiteSpace_m1D446C25EA6EB292F9345CC5532BCF9B133017BD(__this, NULL);
		String_t* L_10 = __this->___s_3;
		int32_t L_11 = __this->___c_2;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)125))))
		{
			goto IL_00f0;
		}
	}
	{
		String_t* L_13 = __this->___s_3;
		int32_t L_14 = __this->___c_2;
		NullCheck(L_13);
		Il2CppChar L_15;
		L_15 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, L_14, NULL);
		if ((((int32_t)L_15) == ((int32_t)((int32_t)93))))
		{
			goto IL_00f0;
		}
	}

IL_0088:
	{
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_16;
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_0098;
		}
	}
	{
		String_t* L_18;
		L_18 = JsonTextParser_ParseName_mDB5223167B3168D2654BCF180A1BEA338DFD18E4(__this, NULL);
		V_1 = L_18;
	}

IL_0098:
	{
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_19;
		L_19 = JsonTextParser_ParseSomethingWithoutName_mE397ADCEF5E3BF752A1F83C27E8037A2C449AF78(__this, NULL);
		V_3 = L_19;
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_20 = V_3;
		if (L_20)
		{
			goto IL_00a8;
		}
	}
	{
		Exception_t* L_21 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseCollection_mBA5E0337ECA42ED065B862816D738EC3B5524C27_RuntimeMethod_var)));
	}

IL_00a8:
	{
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_00b2;
		}
	}
	{
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_23 = V_3;
		String_t* L_24 = V_1;
		NullCheck(L_23);
		JsonObject_set_Name_mA28668FF7DE862DA5093D0765ACC08BC98FAAA36(L_23, L_24, NULL);
	}

IL_00b2:
	{
		JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* L_25 = V_0;
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_26 = V_3;
		NullCheck(L_25);
		JsonCollection_Add_m16FB14CB7E305897A5BD4EA1EC210B77427CACAE(L_25, L_26, NULL);
		JsonTextParser_SkipWhiteSpace_m1D446C25EA6EB292F9345CC5532BCF9B133017BD(__this, NULL);
		String_t* L_27 = __this->___s_3;
		int32_t L_28 = __this->___c_2;
		NullCheck(L_27);
		Il2CppChar L_29;
		L_29 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_27, L_28, NULL);
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_30 = __this->___c_2;
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		JsonTextParser_SkipWhiteSpace_m1D446C25EA6EB292F9345CC5532BCF9B133017BD(__this, NULL);
		goto IL_0088;
	}

IL_00ea:
	{
		JsonTextParser_SkipWhiteSpace_m1D446C25EA6EB292F9345CC5532BCF9B133017BD(__this, NULL);
	}

IL_00f0:
	{
		bool L_31 = V_2;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_32 = __this->___s_3;
		int32_t L_33 = __this->___c_2;
		NullCheck(L_32);
		Il2CppChar L_34;
		L_34 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_32, L_33, NULL);
		if ((((int32_t)L_34) == ((int32_t)((int32_t)93))))
		{
			goto IL_0129;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_35 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseCollection_mBA5E0337ECA42ED065B862816D738EC3B5524C27_RuntimeMethod_var)));
	}

IL_010e:
	{
		String_t* L_36 = __this->___s_3;
		int32_t L_37 = __this->___c_2;
		NullCheck(L_36);
		Il2CppChar L_38;
		L_38 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_36, L_37, NULL);
		if ((((int32_t)L_38) == ((int32_t)((int32_t)125))))
		{
			goto IL_0129;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_39 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_39);
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_39, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseCollection_mBA5E0337ECA42ED065B862816D738EC3B5524C27_RuntimeMethod_var)));
	}

IL_0129:
	{
		int32_t L_40 = __this->___c_2;
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* L_41 = V_0;
		return L_41;
	}
}
// System.Net.Json.JsonBooleanValue System.Net.Json.JsonTextParser::ParseLiteralValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* JsonTextParser_ParseLiteralValue_mEF64494E399B6D2E7E967CD4712419EA3058A0D2 (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTextParser_t11F672A526337869AE37577053684A57D3092522_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonTextParser_t11F672A526337869AE37577053684A57D3092522_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = ((JsonTextParser_t11F672A526337869AE37577053684A57D3092522_StaticFields*)il2cpp_codegen_static_fields_for(JsonTextParser_t11F672A526337869AE37577053684A57D3092522_il2cpp_TypeInfo_var))->____regexLiteral_0;
		String_t* L_1 = __this->___s_3;
		int32_t L_2 = __this->___c_2;
		NullCheck(L_0);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_3;
		L_3 = Regex_Match_mDF110993CAA26CD41AE9F5DB7F0C307B2680CED3(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_4, NULL);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_6 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF2933F4385CB36A1BA0B1A9E5666D8AE9C5B8ED4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseLiteralValue_mEF64494E399B6D2E7E967CD4712419EA3058A0D2_RuntimeMethod_var)));
	}

IL_002a:
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_7 = V_0;
		NullCheck(L_7);
		CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* L_8;
		L_8 = Group_get_Captures_m624EA19098D759F4B7513F702328E60D84B4C32A(L_7, NULL);
		NullCheck(L_8);
		Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* L_9;
		L_9 = CaptureCollection_get_Item_m9E773C623570B88CA00A8E1309C69EE1C60719CC(L_8, 0, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = __this->___c_2;
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_11, L_13));
		String_t* L_14 = V_1;
		JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* L_15 = (JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB*)il2cpp_codegen_object_new(JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		JsonBooleanValue__ctor_mF6FFE6D8C135D0B984A86A03EC72D15C86F2BCAD(L_15, (String_t*)NULL, L_14, NULL);
		return L_15;
	}
}
// System.String System.Net.Json.JsonTextParser::ParseName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonTextParser_ParseName_mDB5223167B3168D2654BCF180A1BEA338DFD18E4 (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	Il2CppChar V_2 = 0x0;
	{
		bool L_0;
		L_0 = JsonTextParser_get_IsEOS_m29BF9A0C38E4517F7BBACB39EF8528AC38CB41E3(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_1 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75506725E7A359F806E408280DC48057A6D8BFB5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseName_mDB5223167B3168D2654BCF180A1BEA338DFD18E4_RuntimeMethod_var)));
	}

IL_0013:
	{
		String_t* L_2 = __this->___s_3;
		int32_t L_3 = __this->___c_2;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)34))))
		{
			goto IL_002e;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_5 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseName_mDB5223167B3168D2654BCF180A1BEA338DFD18E4_RuntimeMethod_var)));
	}

IL_002e:
	{
		int32_t L_6 = __this->___c_2;
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		V_1 = (bool)0;
	}

IL_0044:
	{
		bool L_8;
		L_8 = JsonTextParser_get_IsEOS_m29BF9A0C38E4517F7BBACB39EF8528AC38CB41E3(__this, NULL);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_9 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseName_mDB5223167B3168D2654BCF180A1BEA338DFD18E4_RuntimeMethod_var)));
	}

IL_0052:
	{
		String_t* L_10 = __this->___s_3;
		int32_t L_11 = __this->___c_2;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		V_2 = L_12;
		Il2CppChar L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0086;
		}
	}
	{
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0086;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		Il2CppChar L_16 = V_2;
		NullCheck(L_15);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, L_16, NULL);
		int32_t L_18 = __this->___c_2;
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		V_1 = (bool)1;
		goto IL_0044;
	}

IL_0086:
	{
		Il2CppChar L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008e;
		}
	}
	{
		bool L_20 = V_1;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}

IL_008e:
	{
		StringBuilder_t* L_21 = V_0;
		Il2CppChar L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_21, L_22, NULL);
		int32_t L_24 = __this->___c_2;
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		V_1 = (bool)0;
		goto IL_0044;
	}

IL_00a8:
	{
		int32_t L_25 = __this->___c_2;
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		JsonTextParser_SkipWhiteSpace_m1D446C25EA6EB292F9345CC5532BCF9B133017BD(__this, NULL);
		bool L_26;
		L_26 = JsonTextParser_get_IsEOS_m29BF9A0C38E4517F7BBACB39EF8528AC38CB41E3(__this, NULL);
		if (!L_26)
		{
			goto IL_00ca;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_27 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseName_mDB5223167B3168D2654BCF180A1BEA338DFD18E4_RuntimeMethod_var)));
	}

IL_00ca:
	{
		String_t* L_28 = __this->___s_3;
		int32_t L_29 = __this->___c_2;
		NullCheck(L_28);
		Il2CppChar L_30;
		L_30 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_28, L_29, NULL);
		if ((((int32_t)L_30) == ((int32_t)((int32_t)58))))
		{
			goto IL_00e5;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_31 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_31);
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_31, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseName_mDB5223167B3168D2654BCF180A1BEA338DFD18E4_RuntimeMethod_var)));
	}

IL_00e5:
	{
		int32_t L_32 = __this->___c_2;
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		StringBuilder_t* L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		String_t* L_35;
		L_35 = JsonUtility_UnEscapeString_m84D2B60F627223DDBBA092EE09060CF3A010F3C6(L_34, NULL);
		return L_35;
	}
}
// System.Net.Json.JsonNumericValue System.Net.Json.JsonTextParser::ParseNumericValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* JsonTextParser_ParseNumericValue_m2D6ED83352A46DED45548FC4779B8C9F707FAC7F (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTextParser_t11F672A526337869AE37577053684A57D3092522_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonTextParser_t11F672A526337869AE37577053684A57D3092522_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = ((JsonTextParser_t11F672A526337869AE37577053684A57D3092522_StaticFields*)il2cpp_codegen_static_fields_for(JsonTextParser_t11F672A526337869AE37577053684A57D3092522_il2cpp_TypeInfo_var))->____regexNumber_1;
		String_t* L_1 = __this->___s_3;
		int32_t L_2 = __this->___c_2;
		NullCheck(L_0);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_3;
		L_3 = Regex_Match_mDF110993CAA26CD41AE9F5DB7F0C307B2680CED3(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_4, NULL);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_6 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF983D788C2B7AC5109ABA34314E34A69FBCEB835)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseNumericValue_m2D6ED83352A46DED45548FC4779B8C9F707FAC7F_RuntimeMethod_var)));
	}

IL_002a:
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_7 = V_0;
		NullCheck(L_7);
		CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* L_8;
		L_8 = Group_get_Captures_m624EA19098D759F4B7513F702328E60D84B4C32A(L_7, NULL);
		NullCheck(L_8);
		Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* L_9;
		L_9 = CaptureCollection_get_Item_m9E773C623570B88CA00A8E1309C69EE1C60719CC(L_8, 0, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = __this->___c_2;
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_11, L_13));
		String_t* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_15 = ((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___CultureInfo_0;
		double L_16;
		L_16 = Double_Parse_m282A37E997C8F446BD373A4DE4673B8FECC37866(L_14, ((int32_t)164), L_15, NULL);
		JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* L_17 = (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A*)il2cpp_codegen_object_new(JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		JsonNumericValue__ctor_m358D319394C8EDE48508449AB994F557A8A3E110(L_17, L_16, NULL);
		return L_17;
	}
}
// System.Net.Json.JsonObject System.Net.Json.JsonTextParser::ParseSomethingWithoutName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* JsonTextParser_ParseSomethingWithoutName_mE397ADCEF5E3BF752A1F83C27E8037A2C449AF78 (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonTextParser_SkipWhiteSpace_m1D446C25EA6EB292F9345CC5532BCF9B133017BD(__this, NULL);
		String_t* L_0 = __this->___s_3;
		int32_t L_1 = __this->___c_2;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		String_t* L_3 = __this->___s_3;
		int32_t L_4 = __this->___c_2;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		if (!((int32_t)(((((int32_t)L_2) == ((int32_t)((int32_t)123)))? 1 : 0)|((((int32_t)L_5) == ((int32_t)((int32_t)91)))? 1 : 0))))
		{
			goto IL_003a;
		}
	}
	{
		JsonCollection_t2EEEAE34D07E023AD9611FE61E358A0471373745* L_6;
		L_6 = JsonTextParser_ParseCollection_mBA5E0337ECA42ED065B862816D738EC3B5524C27(__this, NULL);
		return L_6;
	}

IL_003a:
	{
		String_t* L_7 = __this->___s_3;
		int32_t L_8 = __this->___c_2;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0056;
		}
	}
	{
		JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* L_10;
		L_10 = JsonTextParser_ParseStringValue_m3FE430AA52B125748109959B5ED8FA56B21D43BA(__this, NULL);
		return L_10;
	}

IL_0056:
	{
		String_t* L_11 = __this->___s_3;
		int32_t L_12 = __this->___c_2;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Char_IsDigit_mC98DAF907860EFB7D26C3E126D80AD3A2CE72715(L_13, NULL);
		if (L_14)
		{
			goto IL_0083;
		}
	}
	{
		String_t* L_15 = __this->___s_3;
		int32_t L_16 = __this->___c_2;
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, L_16, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_008a;
		}
	}

IL_0083:
	{
		JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* L_18;
		L_18 = JsonTextParser_ParseNumericValue_m2D6ED83352A46DED45548FC4779B8C9F707FAC7F(__this, NULL);
		return L_18;
	}

IL_008a:
	{
		String_t* L_19 = __this->___s_3;
		int32_t L_20 = __this->___c_2;
		NullCheck(L_19);
		Il2CppChar L_21;
		L_21 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, L_20, NULL);
		if ((((int32_t)L_21) == ((int32_t)((int32_t)116))))
		{
			goto IL_00d4;
		}
	}
	{
		String_t* L_22 = __this->___s_3;
		int32_t L_23 = __this->___c_2;
		NullCheck(L_22);
		Il2CppChar L_24;
		L_24 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_22, L_23, NULL);
		if ((((int32_t)L_24) == ((int32_t)((int32_t)102))))
		{
			goto IL_00d4;
		}
	}
	{
		String_t* L_25 = __this->___s_3;
		int32_t L_26 = __this->___c_2;
		NullCheck(L_25);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_25, L_26, NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d4;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_28 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral481848FB0C840209E8E30034D37D03C129F26CE4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseSomethingWithoutName_mE397ADCEF5E3BF752A1F83C27E8037A2C449AF78_RuntimeMethod_var)));
	}

IL_00d4:
	{
		JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* L_29;
		L_29 = JsonTextParser_ParseLiteralValue_mEF64494E399B6D2E7E967CD4712419EA3058A0D2(__this, NULL);
		return L_29;
	}
}
// System.Net.Json.JsonStringValue System.Net.Json.JsonTextParser::ParseStringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* JsonTextParser_ParseStringValue_m3FE430AA52B125748109959B5ED8FA56B21D43BA (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	Il2CppChar V_2 = 0x0;
	JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* V_3 = NULL;
	{
		String_t* L_0 = __this->___s_3;
		int32_t L_1 = __this->___c_2;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)34))))
		{
			goto IL_001b;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_3 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseStringValue_m3FE430AA52B125748109959B5ED8FA56B21D43BA_RuntimeMethod_var)));
	}

IL_001b:
	{
		int32_t L_4 = __this->___c_2;
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		StringBuilder_t* L_5 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_5, NULL);
		V_0 = L_5;
		V_1 = (bool)0;
	}

IL_0031:
	{
		bool L_6;
		L_6 = JsonTextParser_get_IsEOS_m29BF9A0C38E4517F7BBACB39EF8528AC38CB41E3(__this, NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_7 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseStringValue_m3FE430AA52B125748109959B5ED8FA56B21D43BA_RuntimeMethod_var)));
	}

IL_003f:
	{
		String_t* L_8 = __this->___s_3;
		int32_t L_9 = __this->___c_2;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		V_2 = L_10;
		Il2CppChar L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0073;
		}
	}
	{
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_0073;
		}
	}
	{
		StringBuilder_t* L_13 = V_0;
		Il2CppChar L_14 = V_2;
		NullCheck(L_13);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, L_14, NULL);
		int32_t L_16 = __this->___c_2;
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		V_1 = (bool)1;
		goto IL_0031;
	}

IL_0073:
	{
		Il2CppChar L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_007b;
		}
	}
	{
		bool L_18 = V_1;
		if (!L_18)
		{
			goto IL_0095;
		}
	}

IL_007b:
	{
		StringBuilder_t* L_19 = V_0;
		Il2CppChar L_20 = V_2;
		NullCheck(L_19);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_19, L_20, NULL);
		int32_t L_22 = __this->___c_2;
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		V_1 = (bool)0;
		goto IL_0031;
	}

IL_0095:
	{
		String_t* L_23 = __this->___s_3;
		int32_t L_24 = __this->___c_2;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		if ((((int32_t)L_25) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b0;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_26 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_ParseStringValue_m3FE430AA52B125748109959B5ED8FA56B21D43BA_RuntimeMethod_var)));
	}

IL_00b0:
	{
		int32_t L_27 = __this->___c_2;
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* L_28 = (JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3*)il2cpp_codegen_object_new(JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		JsonStringValue__ctor_mAAE90FBAA765938053AB47BC13287180BFEA7F84(L_28, NULL);
		V_3 = L_28;
		JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* L_29 = V_3;
		StringBuilder_t* L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		String_t* L_32;
		L_32 = JsonUtility_UnEscapeString_m84D2B60F627223DDBBA092EE09060CF3A010F3C6(L_31, NULL);
		NullCheck(L_29);
		JsonStringValue_set_Value_mFE700F379A246F50DDB2F569932E30740E481119_inline(L_29, L_32, NULL);
		JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* L_33 = V_3;
		return L_33;
	}
}
// System.Void System.Net.Json.JsonTextParser::SkipWhiteSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextParser_SkipWhiteSpace_m1D446C25EA6EB292F9345CC5532BCF9B133017BD (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}

IL_0000:
	{
		bool L_0;
		L_0 = JsonTextParser_get_IsEOS_m29BF9A0C38E4517F7BBACB39EF8528AC38CB41E3(__this, NULL);
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_1 = __this->___s_3;
		int32_t L_2 = __this->___c_2;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->___c_2;
		__this->___c_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_0000;
	}

IL_0030:
	{
		bool L_6;
		L_6 = JsonTextParser_get_IsEOS_m29BF9A0C38E4517F7BBACB39EF8528AC38CB41E3(__this, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_7 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTextParser_SkipWhiteSpace_m1D446C25EA6EB292F9345CC5532BCF9B133017BD_RuntimeMethod_var)));
	}

IL_003e:
	{
		return;
	}
}
// System.Boolean System.Net.Json.JsonTextParser::get_IsEOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonTextParser_get_IsEOS_m29BF9A0C38E4517F7BBACB39EF8528AC38CB41E3 (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___c_2;
		String_t* L_1 = __this->___s_3;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Net.Json.JsonTextParser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextParser__ctor_m80243E1530D0ABC597B2D68711890CDFA46D3BA2 (JsonTextParser_t11F672A526337869AE37577053684A57D3092522* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___s_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___s_3), (void*)L_0);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->___SyncObject_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SyncObject_4), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Net.Json.JsonTextParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextParser__cctor_m11B2BF0C90DC81AB59D147AF3DED893367891B85 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTextParser_t11F672A526337869AE37577053684A57D3092522_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23715F57DAE40DED7C4161D966C04FA5FB7686F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70F47C130CDD2EA6E3CBF45EAB355B59916D891E);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_0, _stringLiteral23715F57DAE40DED7C4161D966C04FA5FB7686F6, ((int32_t)9), NULL);
		((JsonTextParser_t11F672A526337869AE37577053684A57D3092522_StaticFields*)il2cpp_codegen_static_fields_for(JsonTextParser_t11F672A526337869AE37577053684A57D3092522_il2cpp_TypeInfo_var))->____regexLiteral_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonTextParser_t11F672A526337869AE37577053684A57D3092522_StaticFields*)il2cpp_codegen_static_fields_for(JsonTextParser_t11F672A526337869AE37577053684A57D3092522_il2cpp_TypeInfo_var))->____regexLiteral_0), (void*)L_0);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_1, _stringLiteral70F47C130CDD2EA6E3CBF45EAB355B59916D891E, 8, NULL);
		((JsonTextParser_t11F672A526337869AE37577053684A57D3092522_StaticFields*)il2cpp_codegen_static_fields_for(JsonTextParser_t11F672A526337869AE37577053684A57D3092522_il2cpp_TypeInfo_var))->____regexNumber_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonTextParser_t11F672A526337869AE37577053684A57D3092522_StaticFields*)il2cpp_codegen_static_fields_for(JsonTextParser_t11F672A526337869AE37577053684A57D3092522_il2cpp_TypeInfo_var))->____regexNumber_1), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Json.JsonStringValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonStringValue__ctor_mAAE90FBAA765938053AB47BC13287180BFEA7F84 (JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* __this, const RuntimeMethod* method) 
{
	{
		JsonObject__ctor_mBFFE17CFBA6ED8A56C81834EF59DDD5EB6320411(__this, NULL);
		return;
	}
}
// System.Boolean System.Net.Json.JsonStringValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonStringValue_Equals_mB6C5D6743790B28E9ABAB06576EA9BCB4FB3F832 (JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3*)IsInstClass((RuntimeObject*)L_0, JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3_il2cpp_TypeInfo_var));
		JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		String_t* L_2;
		L_2 = JsonStringValue_get_Value_m0D82991D869E89E9050C91A880AF232EA22C63BA(__this, NULL);
		JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = JsonStringValue_get_Value_m0D82991D869E89E9050C91A880AF232EA22C63BA(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, L_4, NULL);
		return L_5;
	}
}
// System.Int32 System.Net.Json.JsonStringValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonStringValue_GetHashCode_mEF099E64109600C8919197065A9200209C312AE4 (JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = JsonStringValue_get_Value_m0D82991D869E89E9050C91A880AF232EA22C63BA(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Object System.Net.Json.JsonStringValue::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonStringValue_GetValue_m96B329798E2E25C2D7BF8F24A722767321B89F7B (JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = JsonStringValue_get_Value_m0D82991D869E89E9050C91A880AF232EA22C63BA(__this, NULL);
		return L_0;
	}
}
// System.String System.Net.Json.JsonStringValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonStringValue_ToString_m6E53B4E84518D6039B1C3420A76B08CE117A7015 (JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = JsonObject_ToString_mD39D4A0BA3487EFEA1AA3075DCC3F7068E2E72B2(__this, NULL);
		return L_0;
	}
}
// System.Void System.Net.Json.JsonStringValue::WriteTo(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonStringValue_WriteTo_mB09D7ACAD614E4A0CB4D1DA350DD6F5A28F71AB6 (JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = JsonObject_get_Name_m12114204C0107BA3FF3AB05AB85EB8BB1834116C(__this, NULL);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_2;
		L_2 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_3 = ___writer0;
		NullCheck(L_3);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)34));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_4 = ___writer0;
		String_t* L_5;
		L_5 = JsonObject_get_Name_m12114204C0107BA3FF3AB05AB85EB8BB1834116C(__this, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, L_5);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_6 = ___writer0;
		NullCheck(L_6);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, ((int32_t)34));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_7 = ___writer0;
		NullCheck(L_7);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_7, ((int32_t)58));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_8 = ___writer0;
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		JsonUtility_WriteSpace_m6F84D9E718FEB34A0EEA96AFFF1E0FEF94F981BA(L_8, NULL);
	}

IL_003c:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_9 = ___writer0;
		String_t* L_10;
		L_10 = JsonStringValue_get_Value_m0D82991D869E89E9050C91A880AF232EA22C63BA(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = JsonUtility_EscapeString_m1B64A0D953204574DB73F51B8830A069BA1FE68E(L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_11);
		return;
	}
}
// System.String System.Net.Json.JsonStringValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonStringValue_get_Value_m0D82991D869E89E9050C91A880AF232EA22C63BA (JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->____value_1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->____value_1;
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}
}
// System.Void System.Net.Json.JsonStringValue::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonStringValue_set_Value_mFE700F379A246F50DDB2F569932E30740E481119 (JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Json.JsonObjectCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObjectCollection__ctor_mFF8C4CD5A76274639E90C630E654672CC6ADAC3C (JsonObjectCollection_t43F58098958F53849AD6B4DA19C9008EBC07FAEB* __this, const RuntimeMethod* method) 
{
	{
		JsonCollection__ctor_mB01D940892F35F424E0A63A2DF4A6DD5255D80CE(__this, NULL);
		return;
	}
}
// System.Char System.Net.Json.JsonObjectCollection::get_BeginCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar JsonObjectCollection_get_BeginCollection_mC8942B052114870242A4E57C5CC78D7FBF497C1E (JsonObjectCollection_t43F58098958F53849AD6B4DA19C9008EBC07FAEB* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)123);
	}
}
// System.Char System.Net.Json.JsonObjectCollection::get_EndCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar JsonObjectCollection_get_EndCollection_mE2C2733FB513FF597C35224BDB950803F3E6D2FF (JsonObjectCollection_t43F58098958F53849AD6B4DA19C9008EBC07FAEB* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)125);
	}
}
// System.Net.Json.JsonObject System.Net.Json.JsonObjectCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* JsonObjectCollection_get_Item_m20E55189B2783C57E5A217412D04077D7952697D (JsonObjectCollection_t43F58098958F53849AD6B4DA19C9008EBC07FAEB* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0024;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_1;
		L_1 = JsonCollection_get_Item_mA13F0D2625F03C2233079379EAF31C71BD53925E(__this, L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = JsonObject_get_Name_m12114204C0107BA3FF3AB05AB85EB8BB1834116C(L_1, NULL);
		String_t* L_3 = ___name0;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5 = V_0;
		JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806* L_6;
		L_6 = JsonCollection_get_Item_mA13F0D2625F03C2233079379EAF31C71BD53925E(__this, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0024:
	{
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = JsonCollection_get_Count_m61EC53F6FAB6D45C91E749B6655FE54D9BC361D0(__this, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		return (JsonObject_t0F1BCBCFFB38D479247772D16BA51381A1C50806*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Json.JsonNumericValue::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonNumericValue__ctor_m358D319394C8EDE48508449AB994F557A8A3E110 (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		JsonObject__ctor_mBFFE17CFBA6ED8A56C81834EF59DDD5EB6320411(__this, NULL);
		double L_0 = ___value0;
		JsonNumericValue_set_Value_m1F6F3FC06B6BDE31618A2CB941CA0BF46DAF0490_inline(__this, L_0, NULL);
		return;
	}
}
// System.Boolean System.Net.Json.JsonNumericValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonNumericValue_Equals_mCD46B777EB20D546219A65C8018B4101631F9BBB (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A*)IsInstClass((RuntimeObject*)L_0, JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A_il2cpp_TypeInfo_var));
		JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		double L_2;
		L_2 = JsonNumericValue_get_Value_m3BC44C5B2433AD7C3801D9EF0220A1AC2F08B7A2_inline(__this, NULL);
		JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* L_3 = V_0;
		NullCheck(L_3);
		double L_4;
		L_4 = JsonNumericValue_get_Value_m3BC44C5B2433AD7C3801D9EF0220A1AC2F08B7A2_inline(L_3, NULL);
		return (bool)((((double)L_2) == ((double)L_4))? 1 : 0);
	}
}
// System.Int32 System.Net.Json.JsonNumericValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonNumericValue_GetHashCode_mE7FF6DAC415FE92D6337334169CCD7FB24C772BF (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = JsonNumericValue_get_Value_m3BC44C5B2433AD7C3801D9EF0220A1AC2F08B7A2_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		return L_1;
	}
}
// System.Object System.Net.Json.JsonNumericValue::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonNumericValue_GetValue_mBB027028705B8C7C5E31AF0F39F4DDC1FCB082DB (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0;
		L_0 = JsonNumericValue_get_Value_m3BC44C5B2433AD7C3801D9EF0220A1AC2F08B7A2_inline(__this, NULL);
		double L_1 = L_0;
		RuntimeObject* L_2 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.String System.Net.Json.JsonNumericValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonNumericValue_ToString_mA48F8A3C014F639ADA2099AF2B8BD3688BF26822 (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = JsonObject_ToString_mD39D4A0BA3487EFEA1AA3075DCC3F7068E2E72B2(__this, NULL);
		return L_0;
	}
}
// System.Void System.Net.Json.JsonNumericValue::WriteTo(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonNumericValue_WriteTo_m5737E14E28DDDFC6ACE82101E90DDB0A0BC0DB88 (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		String_t* L_0;
		L_0 = JsonObject_get_Name_m12114204C0107BA3FF3AB05AB85EB8BB1834116C(__this, NULL);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_2;
		L_2 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_3 = ___writer0;
		NullCheck(L_3);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)34));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_4 = ___writer0;
		String_t* L_5;
		L_5 = JsonObject_get_Name_m12114204C0107BA3FF3AB05AB85EB8BB1834116C(__this, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, L_5);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_6 = ___writer0;
		NullCheck(L_6);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, ((int32_t)34));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_7 = ___writer0;
		NullCheck(L_7);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_7, ((int32_t)58));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_8 = ___writer0;
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		JsonUtility_WriteSpace_m6F84D9E718FEB34A0EEA96AFFF1E0FEF94F981BA(L_8, NULL);
	}

IL_003c:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_9 = ___writer0;
		double L_10;
		L_10 = JsonNumericValue_get_Value_m3BC44C5B2433AD7C3801D9EF0220A1AC2F08B7A2_inline(__this, NULL);
		V_0 = L_10;
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11 = ((JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_StaticFields*)il2cpp_codegen_static_fields_for(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var))->___CultureInfo_0;
		String_t* L_12;
		L_12 = Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789((&V_0), _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1, L_11, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_12);
		return;
	}
}
// System.Double System.Net.Json.JsonNumericValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonNumericValue_get_Value_m3BC44C5B2433AD7C3801D9EF0220A1AC2F08B7A2 (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____value_1;
		return L_0;
	}
}
// System.Void System.Net.Json.JsonNumericValue::set_Value(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonNumericValue_set_Value_m1F6F3FC06B6BDE31618A2CB941CA0BF46DAF0490 (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->____value_1 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Json.JsonBooleanValue::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonBooleanValue__ctor_mF6FFE6D8C135D0B984A86A03EC72D15C86F2BCAD (JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		JsonObject__ctor_mBFFE17CFBA6ED8A56C81834EF59DDD5EB6320411(__this, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* L_0 = (&__this->____value_1);
		il2cpp_codegen_initobj(L_0, sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		String_t* L_1 = ___name0;
		JsonObject_set_Name_mA28668FF7DE862DA5093D0765ACC08BC98FAAA36(__this, L_1, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* L_2 = (&__this->____value_1);
		il2cpp_codegen_initobj(L_2, sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		String_t* L_3 = ___value1;
		if (!L_3)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_4 = ___value1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_5, NULL);
		___value1 = L_6;
		String_t* L_7 = ___value1;
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_9;
		L_9 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_10 = ___value1;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_11, NULL);
		String_t* L_13 = L_12;
		V_0 = L_13;
		if (!L_13)
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_16 = V_0;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (L_17)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_18 = V_0;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (L_19)
		{
			goto IL_0094;
		}
	}
	{
		goto IL_00a1;
	}

IL_007a:
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* L_20 = (&__this->____value_1);
		il2cpp_codegen_initobj(L_20, sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		return;
	}

IL_0087:
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_21), (bool)1, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->____value_1 = L_21;
		return;
	}

IL_0094:
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_22), (bool)0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->____value_1 = L_22;
		return;
	}

IL_00a1:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_23 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonBooleanValue__ctor_mF6FFE6D8C135D0B984A86A03EC72D15C86F2BCAD_RuntimeMethod_var)));
	}

IL_00a7:
	{
		return;
	}
}
// System.Boolean System.Net.Json.JsonBooleanValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonBooleanValue_Equals_mC28E2CB5A8EA5563271B39C6F1905DFB47C8D666 (JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* V_0 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB*)IsInstClass((RuntimeObject*)L_0, JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB_il2cpp_TypeInfo_var));
		JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_2;
		L_2 = JsonBooleanValue_get_Value_mD63FBE60AA8BC46E965B7561A401120B01DBD7BA_inline(__this, NULL);
		V_1 = L_2;
		JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* L_3 = V_0;
		NullCheck(L_3);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_4;
		L_4 = JsonBooleanValue_get_Value_mD63FBE60AA8BC46E965B7561A401120B01DBD7BA_inline(L_3, NULL);
		V_2 = L_4;
		bool L_5;
		L_5 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_1), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		bool L_6;
		L_6 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_2), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_003b;
		}
	}
	{
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_1), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_2), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		return (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_003b:
	{
		return (bool)0;
	}
}
// System.Int32 System.Net.Json.JsonBooleanValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonBooleanValue_GetHashCode_m92C3BEC69FC647D63E9A159F336FB36033B41E38 (JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetHashCode_m2AFEAD36F48D2F5DE8ECE59A6D10D73B229DDAC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		L_0 = JsonBooleanValue_get_Value_mD63FBE60AA8BC46E965B7561A401120B01DBD7BA_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Nullable_1_GetHashCode_m2AFEAD36F48D2F5DE8ECE59A6D10D73B229DDAC7((&V_0), Nullable_1_GetHashCode_m2AFEAD36F48D2F5DE8ECE59A6D10D73B229DDAC7_RuntimeMethod_var);
		return L_1;
	}
}
// System.Object System.Net.Json.JsonBooleanValue::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonBooleanValue_GetValue_m187C935B2BDBAA4F887894CF81EC8BDFCAE45E3D (JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		L_0 = JsonBooleanValue_get_Value_mD63FBE60AA8BC46E965B7561A401120B01DBD7BA_inline(__this, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1 = L_0;
		RuntimeObject* L_2 = Box(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.String System.Net.Json.JsonBooleanValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonBooleanValue_ToString_m2343C388170F2E87E593B0153C3CA7C94B60D69F (JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = JsonObject_ToString_mD39D4A0BA3487EFEA1AA3075DCC3F7068E2E72B2(__this, NULL);
		return L_0;
	}
}
// System.Void System.Net.Json.JsonBooleanValue::WriteTo(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonBooleanValue_WriteTo_mD06A7B90B567F4E0F5C1BF3E4EDF2DB7B8013260 (JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0;
		L_0 = JsonObject_get_Name_m12114204C0107BA3FF3AB05AB85EB8BB1834116C(__this, NULL);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_2;
		L_2 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_3 = ___writer0;
		NullCheck(L_3);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)34));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_4 = ___writer0;
		String_t* L_5;
		L_5 = JsonObject_get_Name_m12114204C0107BA3FF3AB05AB85EB8BB1834116C(__this, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, L_5);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_6 = ___writer0;
		NullCheck(L_6);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, ((int32_t)34));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_7 = ___writer0;
		NullCheck(L_7);
		VirtualActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_7, ((int32_t)58));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_8 = ___writer0;
		il2cpp_codegen_runtime_class_init_inline(JsonUtility_t5E7AF5CB290211631EEA5B3F90B0AEC420A68B35_il2cpp_TypeInfo_var);
		JsonUtility_WriteSpace_m6F84D9E718FEB34A0EEA96AFFF1E0FEF94F981BA(L_8, NULL);
	}

IL_003c:
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_9;
		L_9 = JsonBooleanValue_get_Value_mD63FBE60AA8BC46E965B7561A401120B01DBD7BA_inline(__this, NULL);
		V_0 = L_9;
		bool L_10;
		L_10 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_11 = ___writer0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_12;
		L_12 = JsonBooleanValue_get_Value_mD63FBE60AA8BC46E965B7561A401120B01DBD7BA_inline(__this, NULL);
		V_1 = L_12;
		String_t* L_13;
		L_13 = Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB((&V_1), Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_13, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_14);
		return;
	}

IL_006c:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_15 = ___writer0;
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		return;
	}
}
// System.Nullable`1<System.Boolean> System.Net.Json.JsonBooleanValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 JsonBooleanValue_get_Value_mD63FBE60AA8BC46E965B7561A401120B01DBD7BA (JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = __this->____value_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonStringValue_set_Value_mFE700F379A246F50DDB2F569932E30740E481119_inline (JsonStringValue_t9436E5E8A311AC5EBCB96A7EE2EC90B10D1EDFC3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonNumericValue_set_Value_m1F6F3FC06B6BDE31618A2CB941CA0BF46DAF0490_inline (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->____value_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double JsonNumericValue_get_Value_m3BC44C5B2433AD7C3801D9EF0220A1AC2F08B7A2_inline (JsonNumericValue_t2D1C6C9D4345C3A093A1FFD222430AC5D7A0391A* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 JsonBooleanValue_get_Value_mD63FBE60AA8BC46E965B7561A401120B01DBD7BA_inline (JsonBooleanValue_tB553F0DFC750086545E4618CDFFE6A5D2D31E8EB* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = __this->____value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
