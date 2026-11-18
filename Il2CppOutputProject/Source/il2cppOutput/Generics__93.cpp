#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4Invoker<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[4] = { p1, p2, &p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4Invoker<T1, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2, T3* p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[4] = { &p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4Invoker<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5Invoker<T1, T2, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3* p3, T4* p4, T5* p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[5] = { &p1, &p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Func_2_t3EAF2B93EE939E57001EAC36B1EA08E92E0AFEDC;
struct Func_2_tD238A70DC96386B9DE16976E0B3317A0A66333D0;
struct Func_2_tCA54BA9E9B6DB1F23951BC25D7C4A66E0ED08EAC;
struct Func_2_t8792772AD37AF6E022CD7B31B36A0E683C18D1FF;
struct Func_2_t4867A42E2514A6601953D7A27CD6C23C538A4668;
struct Func_2_t5F96C7CE92842561B952633B063A4555665ADF36;
struct Func_2_t50EEA1666EFCFCCF54D89B3BF4F629D6DE432202;
struct Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9;
struct Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E;
struct Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38;
struct Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B;
struct Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA;
struct Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA;
struct Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C;
struct Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564;
struct Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F;
struct Func_2_t20E88C14C633E3F5B468584B205973174515C5BF;
struct Func_2_t8B1C7F7D7EB8A61CED366A6102D358476A349F76;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct IEnumerable_1_tAEC48283B1BF2CBDCB57BD91F62DB9210DF38AF2;
struct IEnumerable_1_t3D348EB93FA0D67E3E3F1C11C62864FF4B8BB2D7;
struct IEnumerable_1_t0F83899B721266F0C57CC2ADFE57A2A1E1C70BBE;
struct IEnumerable_1_t562AD6B75BA980F1A8CAD7AD840617926A842329;
struct IEnumerable_1_tAC1DC03E67AC8B978663E4CF3F89114DC8BC677D;
struct IEnumerable_1_t8483A3350253D67AB77C775F463455F2D1969157;
struct IEnumerable_1_tEB292315AF80487E16BC77E10DB7A9A0EA8E39D1;
struct IEnumerable_1_t7E4A9517325608BA6DE8E2721BE614865E3F8ECE;
struct IEnumerable_1_tA2E6699CAFBE04E9528E0EB85230BB236079EEF4;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t9C5D5F654484270206B4894132CD11F65B43CAF2;
struct IEnumerator_1_t56EBD05AF198DBDE47A9E29F6E09D24AF43AB60D;
struct IEnumerator_1_t1787DB020489493692D5B4F82A01DB5831E0FE3D;
struct IEnumerator_1_t7F1C471D22E8F0BAAC03F2D14375163BFB227808;
struct IEnumerator_1_t7FDCAB48847ADD0E6E677BFA63264AF476326BDF;
struct IEnumerator_1_t268D94E10FE3678A122B59B081FA673C5888AD4E;
struct IEnumerator_1_tD0AC5BAE80C21F9F77C06FB172DB3FC8F45AE318;
struct IEnumerator_1_t7F8018FEB234CB211E078F62037D0696AB0B0835;
struct IEnumerator_1_tFC93B7FE4763679FEF1F2D3DEC99559750204E6B;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IXPathBuilder_1_t3465FAFB69008E66E350DF74D49E2B83CC4B3EFD;
struct Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F;
struct Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51;
struct Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5;
struct Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0;
struct Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34;
struct Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED;
struct Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78;
struct Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0;
struct Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D;
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
struct List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6;
struct WhereEnumerableIterator_1_t570A20AE7FFC742C17E0AEE8C233CB24CA310FB1;
struct WhereEnumerableIterator_1_tC3A240393103FF30FD2BEC9EE105FF9814B29C70;
struct WhereEnumerableIterator_1_tF443D791DC26C73ED0C60C8B21C1F9E45B7F0B75;
struct WhereEnumerableIterator_1_t9D15097A83E842EF92CDB2088540D68ED7BD00D2;
struct WhereEnumerableIterator_1_tF791AE08A71478C4C8B08299095A3DD5F9EF8855;
struct WhereEnumerableIterator_1_t7E27E091EC678EC501697F34E6E1C21BF4A56699;
struct WhereEnumerableIterator_1_t07C4F5A839F25CDB9449D7D73AA33CCE8B310CCD;
struct WhereEnumerableIterator_1_t29AEE4F9BE440ADFE175E8D012A59D4516B9EC4A;
struct WhereEnumerableIterator_1_tD5D3017F9BB3E034F15C61D49739411FE419E1CA;
struct WhereSelectListIterator_2_t387944A761CE6487CD8D9E282B5D96F05CB617CE;
struct WhereSelectListIterator_2_t4C24C738DD4776DFFE2758A0859D6E51DC7972F7;
struct WhereSelectListIterator_2_t6029522AE6805F2E68D26A9123D5D407D1C61E62;
struct WhereSelectListIterator_2_tDE626E0FD49610251317574C67BB563AA526A464;
struct WhereSelectListIterator_2_t2AF5F9C6377C38FDFCE9EE6DE4B9F3C8D33E46C4;
struct WhereSelectListIterator_2_t8AA8A0B940E90EF11A0E1C38827876572D9502BF;
struct WhereSelectListIterator_2_t756189302C15CC89E817A010450FE8F74B5F1D71;
struct WhereSelectListIterator_2_tE9323487D852ACFAF0955431F034EA664ECCAB25;
struct WhereSelectListIterator_2_t9E954934132F12E3D8A7FA58C4A20B1BBF70BBE4;
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
struct XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UserTicketLimitDateU5BU5D_tBE5F28C5BC24A32E801DA5A6D26A303F93C8F8E3;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ISourceLineInfo_t58CAD0D9953FC736DD8729510CFA5475B23DE32E;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779;
struct XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF;

IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XPathConvert_t3A90240FEFC71BC81CF892E27D8FD75447484E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____EBE4AD32BDAC76AF58B11BC22B524794675E690378339B833FB03870A4E1A5B8_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE526D790BFB5C892336EFCDA4E3031B9E711B1;
IL2CPP_EXTERN_C String_t* _stringLiteral53F7E9DCA3FCF6EFBFC27A2A835B38226F35C07E;
IL2CPP_EXTERN_C String_t* _stringLiteral58BFE45240542774D63714E6442B9D2CEF79680C;
IL2CPP_EXTERN_C String_t* _stringLiteral5AFC36E35C6231EBD084FB9DB499248D82C1A487;
IL2CPP_EXTERN_C String_t* _stringLiteral60FCDFD0C330A0636DB449998F8C8F58C7522826;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31;
IL2CPP_EXTERN_C String_t* _stringLiteralDD04CAFBC9E6DA5318C057180A0BD0EC13B9B3FC;
IL2CPP_EXTERN_C String_t* _stringLiteralDED9B097AF1027F443F29DD19E448CF15070BC9E;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};
struct List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D  : public RuntimeObject
{
	UserTicketLimitDateU5BU5D_tBE5F28C5BC24A32E801DA5A6D26A303F93C8F8E3* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B  : public RuntimeObject
{
	XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* ___scanner;
	RuntimeObject* ___builder;
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___posInfo;
	int32_t ___parseRelativePath;
	int32_t ___parseSubExprDepth;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UserGetPoint_tCEE0B8C0832DF5EFA89DB3EC4F20DBEFB88D3A16 
{
	int32_t ___getKind;
	int64_t ___point;
};
struct UserIntimate_t6757F190A8DA41A93CA46F3BCC8714FE01EEA228 
{
	int32_t ___partnerId;
	int32_t ___intimateLevel;
	int32_t ___intimateCountRewarded;
};
struct UserItem_tEA3B3B1B525AEF9C5E4D6EC5F888143C524B0FBC 
{
	int32_t ___itemKind;
	int32_t ___itemId;
	int32_t ___stock;
	bool ___isValid;
};
struct UserItem_tEA3B3B1B525AEF9C5E4D6EC5F888143C524B0FBC_marshaled_pinvoke
{
	int32_t ___itemKind;
	int32_t ___itemId;
	int32_t ___stock;
	int32_t ___isValid;
};
struct UserItem_tEA3B3B1B525AEF9C5E4D6EC5F888143C524B0FBC_marshaled_com
{
	int32_t ___itemKind;
	int32_t ___itemId;
	int32_t ___stock;
	int32_t ___isValid;
};
struct UserLoginBonus_t03C5D2BA531947B54667752B718DC8BBDEF6F41C 
{
	int32_t ___bonusId;
	uint32_t ___point;
	bool ___isCurrent;
	bool ___isComplete;
};
struct UserLoginBonus_t03C5D2BA531947B54667752B718DC8BBDEF6F41C_marshaled_pinvoke
{
	int32_t ___bonusId;
	uint32_t ___point;
	int32_t ___isCurrent;
	int32_t ___isComplete;
};
struct UserLoginBonus_t03C5D2BA531947B54667752B718DC8BBDEF6F41C_marshaled_com
{
	int32_t ___bonusId;
	uint32_t ___point;
	int32_t ___isCurrent;
	int32_t ___isComplete;
};
struct UserMap_t1538A599E82D18E8DE83C94AF787BC13397A29CA 
{
	int32_t ___mapId;
	uint32_t ___distance;
	bool ___isLock;
	bool ___isClear;
	bool ___isComplete;
	int32_t ___unlockFlag;
};
struct UserMap_t1538A599E82D18E8DE83C94AF787BC13397A29CA_marshaled_pinvoke
{
	int32_t ___mapId;
	uint32_t ___distance;
	int32_t ___isLock;
	int32_t ___isClear;
	int32_t ___isComplete;
	int32_t ___unlockFlag;
};
struct UserMap_t1538A599E82D18E8DE83C94AF787BC13397A29CA_marshaled_com
{
	int32_t ___mapId;
	uint32_t ___distance;
	int32_t ___isLock;
	int32_t ___isClear;
	int32_t ___isComplete;
	int32_t ___unlockFlag;
};
struct UserScoreRanking_t8C154659FF431E2ED944CE8818CC663229FDB569 
{
	int32_t ___tournamentId;
	int64_t ___totalScore;
	int32_t ___ranking;
	String_t* ___rankingDate;
};
struct UserScoreRanking_t8C154659FF431E2ED944CE8818CC663229FDB569_marshaled_pinvoke
{
	int32_t ___tournamentId;
	int64_t ___totalScore;
	int32_t ___ranking;
	char* ___rankingDate;
};
struct UserScoreRanking_t8C154659FF431E2ED944CE8818CC663229FDB569_marshaled_com
{
	int32_t ___tournamentId;
	int64_t ___totalScore;
	int32_t ___ranking;
	Il2CppChar* ___rankingDate;
};
struct UserShopStock_t2DE3C944A8659BADCDEF5C5B33AA53158D91C7B9 
{
	int32_t ___shopItemId;
	int32_t ___tradeCount;
};
struct UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 
{
	int32_t ___itemId;
	String_t* ___limitDate;
	String_t* ___lastUsedDate;
};
struct UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23_marshaled_pinvoke
{
	int32_t ___itemId;
	char* ___limitDate;
	char* ___lastUsedDate;
};
struct UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23_marshaled_com
{
	int32_t ___itemId;
	Il2CppChar* ___limitDate;
	Il2CppChar* ___lastUsedDate;
};
struct UserTradeItem_tB67C1136122F89963C2F674EACBCB9CA5FC063A9 
{
	int64_t ___shopItemId;
	int64_t ___point;
	int32_t ___tradeCount;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___charProperties;
};
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke
{
	Il2CppSafeArray* ___charProperties;
};
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com
{
	Il2CppSafeArray* ___charProperties;
};
struct Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 
{
	List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ____list;
	int32_t ____index;
	int32_t ____version;
	UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ____current;
};
struct Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	UserGetPoint_tCEE0B8C0832DF5EFA89DB3EC4F20DBEFB88D3A16 ___current;
};
struct Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	UserIntimate_t6757F190A8DA41A93CA46F3BCC8714FE01EEA228 ___current;
};
struct Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	UserItem_tEA3B3B1B525AEF9C5E4D6EC5F888143C524B0FBC ___current;
};
struct Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	UserLoginBonus_t03C5D2BA531947B54667752B718DC8BBDEF6F41C ___current;
};
struct Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	UserMap_t1538A599E82D18E8DE83C94AF787BC13397A29CA ___current;
};
struct Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	UserScoreRanking_t8C154659FF431E2ED944CE8818CC663229FDB569 ___current;
};
struct Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	UserShopStock_t2DE3C944A8659BADCDEF5C5B33AA53158D91C7B9 ___current;
};
struct Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___current;
};
struct Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	UserTradeItem_tB67C1136122F89963C2F674EACBCB9CA5FC063A9 ___current;
};
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct LexKind_tBB0E116600E44C4ECE751CE225D360EB1608A2D9 
{
	int32_t ___value__;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct XPathAxis_t5D56690C61BCACEF4CB336A194777F3B594303E4 
{
	int32_t ___value__;
};
struct XPathNodeType_t9B616C7E0F9C34B8770B16D681C126408C367E6B 
{
	int32_t ___value__;
};
struct XPathOperator_t0104797E2410F790A641B178A12334885927ED16 
{
	int32_t ___value__;
};
struct WhereEnumerableIterator_1_t570A20AE7FFC742C17E0AEE8C233CB24CA310FB1  : public Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F
{
	RuntimeObject* ___source;
	Func_2_t3EAF2B93EE939E57001EAC36B1EA08E92E0AFEDC* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_tC3A240393103FF30FD2BEC9EE105FF9814B29C70  : public Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51
{
	RuntimeObject* ___source;
	Func_2_tD238A70DC96386B9DE16976E0B3317A0A66333D0* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_tF443D791DC26C73ED0C60C8B21C1F9E45B7F0B75  : public Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5
{
	RuntimeObject* ___source;
	Func_2_tCA54BA9E9B6DB1F23951BC25D7C4A66E0ED08EAC* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t9D15097A83E842EF92CDB2088540D68ED7BD00D2  : public Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0
{
	RuntimeObject* ___source;
	Func_2_t8792772AD37AF6E022CD7B31B36A0E683C18D1FF* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_tF791AE08A71478C4C8B08299095A3DD5F9EF8855  : public Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34
{
	RuntimeObject* ___source;
	Func_2_t4867A42E2514A6601953D7A27CD6C23C538A4668* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t7E27E091EC678EC501697F34E6E1C21BF4A56699  : public Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED
{
	RuntimeObject* ___source;
	Func_2_t5F96C7CE92842561B952633B063A4555665ADF36* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t07C4F5A839F25CDB9449D7D73AA33CCE8B310CCD  : public Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78
{
	RuntimeObject* ___source;
	Func_2_t50EEA1666EFCFCCF54D89B3BF4F629D6DE432202* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t29AEE4F9BE440ADFE175E8D012A59D4516B9EC4A  : public Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0
{
	RuntimeObject* ___source;
	Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_tD5D3017F9BB3E034F15C61D49739411FE419E1CA  : public Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D
{
	RuntimeObject* ___source;
	Func_2_t8B1C7F7D7EB8A61CED366A6102D358476A349F76* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereSelectListIterator_2_t387944A761CE6487CD8D9E282B5D96F05CB617CE  : public Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F
{
	List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___source;
	Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___predicate;
	Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E* ___selector;
	Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 ___enumerator;
};
struct WhereSelectListIterator_2_t4C24C738DD4776DFFE2758A0859D6E51DC7972F7  : public Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51
{
	List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___source;
	Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___predicate;
	Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38* ___selector;
	Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 ___enumerator;
};
struct WhereSelectListIterator_2_t6029522AE6805F2E68D26A9123D5D407D1C61E62  : public Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5
{
	List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___source;
	Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___predicate;
	Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B* ___selector;
	Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 ___enumerator;
};
struct WhereSelectListIterator_2_tDE626E0FD49610251317574C67BB563AA526A464  : public Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0
{
	List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___source;
	Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___predicate;
	Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA* ___selector;
	Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 ___enumerator;
};
struct WhereSelectListIterator_2_t2AF5F9C6377C38FDFCE9EE6DE4B9F3C8D33E46C4  : public Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34
{
	List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___source;
	Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___predicate;
	Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA* ___selector;
	Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 ___enumerator;
};
struct WhereSelectListIterator_2_t8AA8A0B940E90EF11A0E1C38827876572D9502BF  : public Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED
{
	List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___source;
	Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___predicate;
	Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C* ___selector;
	Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 ___enumerator;
};
struct WhereSelectListIterator_2_t756189302C15CC89E817A010450FE8F74B5F1D71  : public Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78
{
	List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___source;
	Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___predicate;
	Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564* ___selector;
	Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 ___enumerator;
};
struct WhereSelectListIterator_2_tE9323487D852ACFAF0955431F034EA664ECCAB25  : public Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0
{
	List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___source;
	Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___predicate;
	Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F* ___selector;
	Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 ___enumerator;
};
struct WhereSelectListIterator_2_t9E954934132F12E3D8A7FA58C4A20B1BBF70BBE4  : public Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D
{
	List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___source;
	Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___predicate;
	Func_2_t20E88C14C633E3F5B468584B205973174515C5BF* ___selector;
	Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 ___enumerator;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF  : public RuntimeObject
{
	String_t* ___xpathExpr;
	int32_t ___curIndex;
	Il2CppChar ___curChar;
	int32_t ___kind;
	String_t* ___name;
	String_t* ___prefix;
	String_t* ___stringValue;
	bool ___canBeFunction;
	int32_t ___lexStart;
	int32_t ___prevLexEnd;
	int32_t ___prevKind;
	int32_t ___axis;
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 ___xmlCharType;
};
struct Func_2_t3EAF2B93EE939E57001EAC36B1EA08E92E0AFEDC  : public MulticastDelegate_t
{
};
struct Func_2_tD238A70DC96386B9DE16976E0B3317A0A66333D0  : public MulticastDelegate_t
{
};
struct Func_2_tCA54BA9E9B6DB1F23951BC25D7C4A66E0ED08EAC  : public MulticastDelegate_t
{
};
struct Func_2_t8792772AD37AF6E022CD7B31B36A0E683C18D1FF  : public MulticastDelegate_t
{
};
struct Func_2_t4867A42E2514A6601953D7A27CD6C23C538A4668  : public MulticastDelegate_t
{
};
struct Func_2_t5F96C7CE92842561B952633B063A4555665ADF36  : public MulticastDelegate_t
{
};
struct Func_2_t50EEA1666EFCFCCF54D89B3BF4F629D6DE432202  : public MulticastDelegate_t
{
};
struct Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9  : public MulticastDelegate_t
{
};
struct Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E  : public MulticastDelegate_t
{
};
struct Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38  : public MulticastDelegate_t
{
};
struct Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B  : public MulticastDelegate_t
{
};
struct Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA  : public MulticastDelegate_t
{
};
struct Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA  : public MulticastDelegate_t
{
};
struct Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C  : public MulticastDelegate_t
{
};
struct Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564  : public MulticastDelegate_t
{
};
struct Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F  : public MulticastDelegate_t
{
};
struct Func_2_t20E88C14C633E3F5B468584B205973174515C5BF  : public MulticastDelegate_t
{
};
struct Func_2_t8B1C7F7D7EB8A61CED366A6102D358476A349F76  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234  : public MulticastDelegate_t
{
};
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1  : public MulticastDelegate_t
{
};
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D  : public MulticastDelegate_t
{
};
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7  : public MulticastDelegate_t
{
};
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789  : public MulticastDelegate_t
{
};
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0  : public MulticastDelegate_t
{
};
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8  : public MulticastDelegate_t
{
};
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};
struct XsltException_t068DA14245E560F1D8DD1C0EF96303DE84BAAE1F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ___res;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___args;
	String_t* ___sourceUri;
	int32_t ___lineNumber;
	int32_t ___linePosition;
	String_t* ___message;
};
struct XslTransformException_t7863EE752C488FF1F2169444924665D26020FE52  : public XsltException_t068DA14245E560F1D8DD1C0EF96303DE84BAAE1F
{
};
struct XslLoadException_t7C4CDD29E375ABF71F2A1DC7D7ADB9B0FF260403  : public XslTransformException_t7863EE752C488FF1F2169444924665D26020FE52
{
	RuntimeObject* ___lineInfo;
};
struct XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779  : public XslLoadException_t7C4CDD29E375ABF71F2A1DC7D7ADB9B0FF260403
{
	String_t* ___queryString;
	int32_t ___startChar;
	int32_t ___endChar;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D_StaticFields
{
	UserTicketLimitDateU5BU5D_tBE5F28C5BC24A32E801DA5A6D26A303F93C8F8E3* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___XPathOperatorPrecedence;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mCA4AEDFAFEAD6236E1DAEAFBF87218FD886E6CFE_gshared (Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m7DF0BDB908106B7BD8623015893E837EEE3070E1_gshared (WhereSelectListIterator_2_t387944A761CE6487CD8D9E282B5D96F05CB617CE* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 List_1_GetEnumerator_mE2901DF862546BCE05B51207CC63096EFFA1A6EB_gshared (List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 Enumerator_get_Current_mAFFBCC2C9328A2A9CBD681C70142545A7918FF9A_gshared_inline (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDD9B22FA1618C0EAF3B4E9A7B3BFE1D521BF1020_gshared_inline (Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserGetPoint_tCEE0B8C0832DF5EFA89DB3EC4F20DBEFB88D3A16 Func_2_Invoke_m9431C2CF188E2C600CA6BD9FFDF5C15A25697A40_gshared_inline (Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7D65EAE68015DA1C619CD98DA3192006B9363539_gshared (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m14BA738F1AB05AC2A77E7CC4CCEA4612CEC8CB47_gshared (WhereEnumerableIterator_1_t570A20AE7FFC742C17E0AEE8C233CB24CA310FB1* __this, RuntimeObject* ___0_source, Func_2_t3EAF2B93EE939E57001EAC36B1EA08E92E0AFEDC* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m85ED83C53F112EBF898F69BF64DBBCF12815AC11_gshared (Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5573DDBCB63315161B1F710DEF2181A1F54C345E_gshared (WhereSelectListIterator_2_t4C24C738DD4776DFFE2758A0859D6E51DC7972F7* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserIntimate_t6757F190A8DA41A93CA46F3BCC8714FE01EEA228 Func_2_Invoke_m1DCD518EC3C91151C1ACDCABFFB601FB95EF7CB0_gshared_inline (Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m3E493D287F1B664984B5C0C2A38926D9D114A2D2_gshared (WhereEnumerableIterator_1_tC3A240393103FF30FD2BEC9EE105FF9814B29C70* __this, RuntimeObject* ___0_source, Func_2_tD238A70DC96386B9DE16976E0B3317A0A66333D0* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m6F3894E17F5438221A276CDFCE119907F67FD2DD_gshared (Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0CCB25F5BE1BC478CDCEB726C09BA0D8CF352586_gshared (WhereSelectListIterator_2_t6029522AE6805F2E68D26A9123D5D407D1C61E62* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserItem_tEA3B3B1B525AEF9C5E4D6EC5F888143C524B0FBC Func_2_Invoke_mC8669FFCCB1AB5798DD44EC73981F5BCD55D0835_gshared_inline (Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m1B009DB7C4991F8FDE962122405A06E243778FE0_gshared (WhereEnumerableIterator_1_tF443D791DC26C73ED0C60C8B21C1F9E45B7F0B75* __this, RuntimeObject* ___0_source, Func_2_tCA54BA9E9B6DB1F23951BC25D7C4A66E0ED08EAC* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m4C2554E3B48A805EDCFDA354306BCAB443DFA5AF_gshared (Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA14F28B946F979A465D9AFAC7277B87787A72015_gshared (WhereSelectListIterator_2_tDE626E0FD49610251317574C67BB563AA526A464* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserLoginBonus_t03C5D2BA531947B54667752B718DC8BBDEF6F41C Func_2_Invoke_mFBC99868C7C030993D3E609A5160FE1F8DF9E558_gshared_inline (Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mBAB0A89FA1B58F7CAD2A38DDF56B12C4FD2C3689_gshared (WhereEnumerableIterator_1_t9D15097A83E842EF92CDB2088540D68ED7BD00D2* __this, RuntimeObject* ___0_source, Func_2_t8792772AD37AF6E022CD7B31B36A0E683C18D1FF* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m62BD47C4E1CAD2B2AC69BEA9580B7AB2479DEDE7_gshared (Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4DB99F5557ABD9E9E9C4E867B6C8975CD852779F_gshared (WhereSelectListIterator_2_t2AF5F9C6377C38FDFCE9EE6DE4B9F3C8D33E46C4* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserMap_t1538A599E82D18E8DE83C94AF787BC13397A29CA Func_2_Invoke_mAC1420115313C2730209BBCC2FD1E1F7737DE9FE_gshared_inline (Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mDB0E4C6ACC6F0650A0E1955DE31B9184C34C77D5_gshared (WhereEnumerableIterator_1_tF791AE08A71478C4C8B08299095A3DD5F9EF8855* __this, RuntimeObject* ___0_source, Func_2_t4867A42E2514A6601953D7A27CD6C23C538A4668* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m8496E7E0DF22FC9BAB13187B113B169A2A152CDF_gshared (Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m592AD3B2C2A699200DE1DD8F6FBAC262F552B966_gshared (WhereSelectListIterator_2_t8AA8A0B940E90EF11A0E1C38827876572D9502BF* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserScoreRanking_t8C154659FF431E2ED944CE8818CC663229FDB569 Func_2_Invoke_mF973C512DE1493D32FA0038E309388B7EA125F85_gshared_inline (Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m26015D51BF9020832D5D72C203AB46FF46718FF8_gshared (WhereEnumerableIterator_1_t7E27E091EC678EC501697F34E6E1C21BF4A56699* __this, RuntimeObject* ___0_source, Func_2_t5F96C7CE92842561B952633B063A4555665ADF36* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m4CCC0028D9FBC882C91F2EE87FF34C65A4260365_gshared (Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mECABBF0BFD1FBCDBA37C8274F83869ED9AE1AC4B_gshared (WhereSelectListIterator_2_t756189302C15CC89E817A010450FE8F74B5F1D71* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserShopStock_t2DE3C944A8659BADCDEF5C5B33AA53158D91C7B9 Func_2_Invoke_m6F3F05AFBA87FAD848387D9E2BB05A29AFEE412D_gshared_inline (Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mAC158D871742FEB01113456D9B35B8A28025CB01_gshared (WhereEnumerableIterator_1_t07C4F5A839F25CDB9449D7D73AA33CCE8B310CCD* __this, RuntimeObject* ___0_source, Func_2_t50EEA1666EFCFCCF54D89B3BF4F629D6DE432202* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m75A197E8D678C2C1EA441BCABA17DC53295B839A_gshared (Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA4FEBFF1FAA175C5C529987EEE9465575DC48283_gshared (WhereSelectListIterator_2_tE9323487D852ACFAF0955431F034EA664ECCAB25* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 Func_2_Invoke_m2464126606755562AE457797265653ECE4AAC4FC_gshared_inline (Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m334DC57EF3872F6801BC0EAD89A6AB043D774E5E_gshared (WhereEnumerableIterator_1_t29AEE4F9BE440ADFE175E8D012A59D4516B9EC4A* __this, RuntimeObject* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m1A49935CA571FBA07C1233F3EEB13C7889E6145E_gshared (Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mFCD53D401652BDC13B866927AECD897D8E781C78_gshared (WhereSelectListIterator_2_t9E954934132F12E3D8A7FA58C4A20B1BBF70BBE4* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t20E88C14C633E3F5B468584B205973174515C5BF* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserTradeItem_tB67C1136122F89963C2F674EACBCB9CA5FC063A9 Func_2_Invoke_m1E94EF0D36E7AA4F7C691DF228D83F92F946324A_gshared_inline (Func_2_t20E88C14C633E3F5B468584B205973174515C5BF* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m98B647FD3B1F84954A21659DC004C13328CE39F7_gshared (WhereEnumerableIterator_1_tD5D3017F9BB3E034F15C61D49739411FE419E1CA* __this, RuntimeObject* ___0_source, Func_2_t8B1C7F7D7EB8A61CED366A6102D358476A349F76* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;

inline void Iterator_1__ctor_mCA4AEDFAFEAD6236E1DAEAFBF87218FD886E6CFE (Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F*, const RuntimeMethod*))Iterator_1__ctor_mCA4AEDFAFEAD6236E1DAEAFBF87218FD886E6CFE_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m7DF0BDB908106B7BD8623015893E837EEE3070E1 (WhereSelectListIterator_2_t387944A761CE6487CD8D9E282B5D96F05CB617CE* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t387944A761CE6487CD8D9E282B5D96F05CB617CE*, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D*, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9*, Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m7DF0BDB908106B7BD8623015893E837EEE3070E1_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 List_1_GetEnumerator_mE2901DF862546BCE05B51207CC63096EFFA1A6EB (List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 (*) (List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D*, const RuntimeMethod*))List_1_GetEnumerator_mE2901DF862546BCE05B51207CC63096EFFA1A6EB_gshared)(__this, method);
}
inline UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 Enumerator_get_Current_mAFFBCC2C9328A2A9CBD681C70142545A7918FF9A_inline (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* __this, const RuntimeMethod* method)
{
	return ((  UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 (*) (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*, const RuntimeMethod*))Enumerator_get_Current_mAFFBCC2C9328A2A9CBD681C70142545A7918FF9A_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_mDD9B22FA1618C0EAF3B4E9A7B3BFE1D521BF1020_inline (Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*))Func_2_Invoke_mDD9B22FA1618C0EAF3B4E9A7B3BFE1D521BF1020_gshared_inline)(__this, ___0_arg, method);
}
inline UserGetPoint_tCEE0B8C0832DF5EFA89DB3EC4F20DBEFB88D3A16 Func_2_Invoke_m9431C2CF188E2C600CA6BD9FFDF5C15A25697A40_inline (Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method)
{
	return ((  UserGetPoint_tCEE0B8C0832DF5EFA89DB3EC4F20DBEFB88D3A16 (*) (Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*))Func_2_Invoke_m9431C2CF188E2C600CA6BD9FFDF5C15A25697A40_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m7D65EAE68015DA1C619CD98DA3192006B9363539 (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*, const RuntimeMethod*))Enumerator_MoveNext_m7D65EAE68015DA1C619CD98DA3192006B9363539_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_m14BA738F1AB05AC2A77E7CC4CCEA4612CEC8CB47 (WhereEnumerableIterator_1_t570A20AE7FFC742C17E0AEE8C233CB24CA310FB1* __this, RuntimeObject* ___0_source, Func_2_t3EAF2B93EE939E57001EAC36B1EA08E92E0AFEDC* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t570A20AE7FFC742C17E0AEE8C233CB24CA310FB1*, RuntimeObject*, Func_2_t3EAF2B93EE939E57001EAC36B1EA08E92E0AFEDC*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m14BA738F1AB05AC2A77E7CC4CCEA4612CEC8CB47_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m85ED83C53F112EBF898F69BF64DBBCF12815AC11 (Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51*, const RuntimeMethod*))Iterator_1__ctor_m85ED83C53F112EBF898F69BF64DBBCF12815AC11_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m5573DDBCB63315161B1F710DEF2181A1F54C345E (WhereSelectListIterator_2_t4C24C738DD4776DFFE2758A0859D6E51DC7972F7* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t4C24C738DD4776DFFE2758A0859D6E51DC7972F7*, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D*, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9*, Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m5573DDBCB63315161B1F710DEF2181A1F54C345E_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline UserIntimate_t6757F190A8DA41A93CA46F3BCC8714FE01EEA228 Func_2_Invoke_m1DCD518EC3C91151C1ACDCABFFB601FB95EF7CB0_inline (Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method)
{
	return ((  UserIntimate_t6757F190A8DA41A93CA46F3BCC8714FE01EEA228 (*) (Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*))Func_2_Invoke_m1DCD518EC3C91151C1ACDCABFFB601FB95EF7CB0_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m3E493D287F1B664984B5C0C2A38926D9D114A2D2 (WhereEnumerableIterator_1_tC3A240393103FF30FD2BEC9EE105FF9814B29C70* __this, RuntimeObject* ___0_source, Func_2_tD238A70DC96386B9DE16976E0B3317A0A66333D0* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tC3A240393103FF30FD2BEC9EE105FF9814B29C70*, RuntimeObject*, Func_2_tD238A70DC96386B9DE16976E0B3317A0A66333D0*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m3E493D287F1B664984B5C0C2A38926D9D114A2D2_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m6F3894E17F5438221A276CDFCE119907F67FD2DD (Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5*, const RuntimeMethod*))Iterator_1__ctor_m6F3894E17F5438221A276CDFCE119907F67FD2DD_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m0CCB25F5BE1BC478CDCEB726C09BA0D8CF352586 (WhereSelectListIterator_2_t6029522AE6805F2E68D26A9123D5D407D1C61E62* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t6029522AE6805F2E68D26A9123D5D407D1C61E62*, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D*, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9*, Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m0CCB25F5BE1BC478CDCEB726C09BA0D8CF352586_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline UserItem_tEA3B3B1B525AEF9C5E4D6EC5F888143C524B0FBC Func_2_Invoke_mC8669FFCCB1AB5798DD44EC73981F5BCD55D0835_inline (Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method)
{
	return ((  UserItem_tEA3B3B1B525AEF9C5E4D6EC5F888143C524B0FBC (*) (Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*))Func_2_Invoke_mC8669FFCCB1AB5798DD44EC73981F5BCD55D0835_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m1B009DB7C4991F8FDE962122405A06E243778FE0 (WhereEnumerableIterator_1_tF443D791DC26C73ED0C60C8B21C1F9E45B7F0B75* __this, RuntimeObject* ___0_source, Func_2_tCA54BA9E9B6DB1F23951BC25D7C4A66E0ED08EAC* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tF443D791DC26C73ED0C60C8B21C1F9E45B7F0B75*, RuntimeObject*, Func_2_tCA54BA9E9B6DB1F23951BC25D7C4A66E0ED08EAC*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m1B009DB7C4991F8FDE962122405A06E243778FE0_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m4C2554E3B48A805EDCFDA354306BCAB443DFA5AF (Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0*, const RuntimeMethod*))Iterator_1__ctor_m4C2554E3B48A805EDCFDA354306BCAB443DFA5AF_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mA14F28B946F979A465D9AFAC7277B87787A72015 (WhereSelectListIterator_2_tDE626E0FD49610251317574C67BB563AA526A464* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tDE626E0FD49610251317574C67BB563AA526A464*, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D*, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9*, Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA14F28B946F979A465D9AFAC7277B87787A72015_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline UserLoginBonus_t03C5D2BA531947B54667752B718DC8BBDEF6F41C Func_2_Invoke_mFBC99868C7C030993D3E609A5160FE1F8DF9E558_inline (Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method)
{
	return ((  UserLoginBonus_t03C5D2BA531947B54667752B718DC8BBDEF6F41C (*) (Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*))Func_2_Invoke_mFBC99868C7C030993D3E609A5160FE1F8DF9E558_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_mBAB0A89FA1B58F7CAD2A38DDF56B12C4FD2C3689 (WhereEnumerableIterator_1_t9D15097A83E842EF92CDB2088540D68ED7BD00D2* __this, RuntimeObject* ___0_source, Func_2_t8792772AD37AF6E022CD7B31B36A0E683C18D1FF* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t9D15097A83E842EF92CDB2088540D68ED7BD00D2*, RuntimeObject*, Func_2_t8792772AD37AF6E022CD7B31B36A0E683C18D1FF*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mBAB0A89FA1B58F7CAD2A38DDF56B12C4FD2C3689_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m62BD47C4E1CAD2B2AC69BEA9580B7AB2479DEDE7 (Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34*, const RuntimeMethod*))Iterator_1__ctor_m62BD47C4E1CAD2B2AC69BEA9580B7AB2479DEDE7_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m4DB99F5557ABD9E9E9C4E867B6C8975CD852779F (WhereSelectListIterator_2_t2AF5F9C6377C38FDFCE9EE6DE4B9F3C8D33E46C4* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t2AF5F9C6377C38FDFCE9EE6DE4B9F3C8D33E46C4*, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D*, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9*, Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m4DB99F5557ABD9E9E9C4E867B6C8975CD852779F_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline UserMap_t1538A599E82D18E8DE83C94AF787BC13397A29CA Func_2_Invoke_mAC1420115313C2730209BBCC2FD1E1F7737DE9FE_inline (Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method)
{
	return ((  UserMap_t1538A599E82D18E8DE83C94AF787BC13397A29CA (*) (Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*))Func_2_Invoke_mAC1420115313C2730209BBCC2FD1E1F7737DE9FE_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_mDB0E4C6ACC6F0650A0E1955DE31B9184C34C77D5 (WhereEnumerableIterator_1_tF791AE08A71478C4C8B08299095A3DD5F9EF8855* __this, RuntimeObject* ___0_source, Func_2_t4867A42E2514A6601953D7A27CD6C23C538A4668* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tF791AE08A71478C4C8B08299095A3DD5F9EF8855*, RuntimeObject*, Func_2_t4867A42E2514A6601953D7A27CD6C23C538A4668*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mDB0E4C6ACC6F0650A0E1955DE31B9184C34C77D5_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m8496E7E0DF22FC9BAB13187B113B169A2A152CDF (Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED*, const RuntimeMethod*))Iterator_1__ctor_m8496E7E0DF22FC9BAB13187B113B169A2A152CDF_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m592AD3B2C2A699200DE1DD8F6FBAC262F552B966 (WhereSelectListIterator_2_t8AA8A0B940E90EF11A0E1C38827876572D9502BF* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t8AA8A0B940E90EF11A0E1C38827876572D9502BF*, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D*, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9*, Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m592AD3B2C2A699200DE1DD8F6FBAC262F552B966_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline UserScoreRanking_t8C154659FF431E2ED944CE8818CC663229FDB569 Func_2_Invoke_mF973C512DE1493D32FA0038E309388B7EA125F85_inline (Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method)
{
	return ((  UserScoreRanking_t8C154659FF431E2ED944CE8818CC663229FDB569 (*) (Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*))Func_2_Invoke_mF973C512DE1493D32FA0038E309388B7EA125F85_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m26015D51BF9020832D5D72C203AB46FF46718FF8 (WhereEnumerableIterator_1_t7E27E091EC678EC501697F34E6E1C21BF4A56699* __this, RuntimeObject* ___0_source, Func_2_t5F96C7CE92842561B952633B063A4555665ADF36* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t7E27E091EC678EC501697F34E6E1C21BF4A56699*, RuntimeObject*, Func_2_t5F96C7CE92842561B952633B063A4555665ADF36*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m26015D51BF9020832D5D72C203AB46FF46718FF8_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m4CCC0028D9FBC882C91F2EE87FF34C65A4260365 (Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78*, const RuntimeMethod*))Iterator_1__ctor_m4CCC0028D9FBC882C91F2EE87FF34C65A4260365_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mECABBF0BFD1FBCDBA37C8274F83869ED9AE1AC4B (WhereSelectListIterator_2_t756189302C15CC89E817A010450FE8F74B5F1D71* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t756189302C15CC89E817A010450FE8F74B5F1D71*, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D*, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9*, Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mECABBF0BFD1FBCDBA37C8274F83869ED9AE1AC4B_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline UserShopStock_t2DE3C944A8659BADCDEF5C5B33AA53158D91C7B9 Func_2_Invoke_m6F3F05AFBA87FAD848387D9E2BB05A29AFEE412D_inline (Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method)
{
	return ((  UserShopStock_t2DE3C944A8659BADCDEF5C5B33AA53158D91C7B9 (*) (Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*))Func_2_Invoke_m6F3F05AFBA87FAD848387D9E2BB05A29AFEE412D_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_mAC158D871742FEB01113456D9B35B8A28025CB01 (WhereEnumerableIterator_1_t07C4F5A839F25CDB9449D7D73AA33CCE8B310CCD* __this, RuntimeObject* ___0_source, Func_2_t50EEA1666EFCFCCF54D89B3BF4F629D6DE432202* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t07C4F5A839F25CDB9449D7D73AA33CCE8B310CCD*, RuntimeObject*, Func_2_t50EEA1666EFCFCCF54D89B3BF4F629D6DE432202*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mAC158D871742FEB01113456D9B35B8A28025CB01_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m75A197E8D678C2C1EA441BCABA17DC53295B839A (Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0*, const RuntimeMethod*))Iterator_1__ctor_m75A197E8D678C2C1EA441BCABA17DC53295B839A_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mA4FEBFF1FAA175C5C529987EEE9465575DC48283 (WhereSelectListIterator_2_tE9323487D852ACFAF0955431F034EA664ECCAB25* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE9323487D852ACFAF0955431F034EA664ECCAB25*, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D*, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9*, Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA4FEBFF1FAA175C5C529987EEE9465575DC48283_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 Func_2_Invoke_m2464126606755562AE457797265653ECE4AAC4FC_inline (Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method)
{
	return ((  UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 (*) (Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*))Func_2_Invoke_m2464126606755562AE457797265653ECE4AAC4FC_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m334DC57EF3872F6801BC0EAD89A6AB043D774E5E (WhereEnumerableIterator_1_t29AEE4F9BE440ADFE175E8D012A59D4516B9EC4A* __this, RuntimeObject* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t29AEE4F9BE440ADFE175E8D012A59D4516B9EC4A*, RuntimeObject*, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m334DC57EF3872F6801BC0EAD89A6AB043D774E5E_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m1A49935CA571FBA07C1233F3EEB13C7889E6145E (Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D*, const RuntimeMethod*))Iterator_1__ctor_m1A49935CA571FBA07C1233F3EEB13C7889E6145E_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mFCD53D401652BDC13B866927AECD897D8E781C78 (WhereSelectListIterator_2_t9E954934132F12E3D8A7FA58C4A20B1BBF70BBE4* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t20E88C14C633E3F5B468584B205973174515C5BF* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t9E954934132F12E3D8A7FA58C4A20B1BBF70BBE4*, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D*, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9*, Func_2_t20E88C14C633E3F5B468584B205973174515C5BF*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mFCD53D401652BDC13B866927AECD897D8E781C78_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline UserTradeItem_tB67C1136122F89963C2F674EACBCB9CA5FC063A9 Func_2_Invoke_m1E94EF0D36E7AA4F7C691DF228D83F92F946324A_inline (Func_2_t20E88C14C633E3F5B468584B205973174515C5BF* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method)
{
	return ((  UserTradeItem_tB67C1136122F89963C2F674EACBCB9CA5FC063A9 (*) (Func_2_t20E88C14C633E3F5B468584B205973174515C5BF*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*))Func_2_Invoke_m1E94EF0D36E7AA4F7C691DF228D83F92F946324A_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m98B647FD3B1F84954A21659DC004C13328CE39F7 (WhereEnumerableIterator_1_tD5D3017F9BB3E034F15C61D49739411FE419E1CA* __this, RuntimeObject* ___0_source, Func_2_t8B1C7F7D7EB8A61CED366A6102D358476A349F76* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tD5D3017F9BB3E034F15C61D49739411FE419E1CA*, RuntimeObject*, Func_2_t8B1C7F7D7EB8A61CED366A6102D358476A349F76*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m98B647FD3B1F84954A21659DC004C13328CE39F7_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathScanner_CheckToken_mC40A3EDACF1EF8314530E3B6BDAFCE283BE5E685 (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, int32_t ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathScanner_get_Source_m7B9204C3A3F87CE4C33304C455115A0905AEF99D_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsltConfigSection_get_LimitXPathComplexity_m576EFBA751F918B661BEDE3852200DFA4C88EB3C (const RuntimeMethod* method) ;
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779* XPathScanner_CreateException_mC419A8A01BB08B3A4C11673E8902AB0AFCC193CE (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, String_t* ___0_resId, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathScanner_get_Axis_m95BF56D2E50F18371695F34DCCCC650485E298A6_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathScanner_get_RawValue_m84A64CEBD21224E9B8189606AA8800FD9ECF3902 (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathScanner_get_LexStart_m46AF18EFE511BF4CBFBF70CF57EA5EB9AD636A2B_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathScanner_get_PrevLexEnd_m2D64BDDFBBC6B7CFE354F45C2099F8B8FDC6B047_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathScanner_get_Prefix_m797D3B93302BB564302346DC76353DE6FD4121B0_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathScanner_get_Name_m055DE1221B1D0005F77861C0C41EB76134B05309_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XPathScanner_get_CanBeFunction_mC85FE3671876A8523D967AFF98883A1FC3FBE844_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathScanner_PassToken_m5D254A9BDDF09A650AF4BF560F5950A2359F8AAD (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, int32_t ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathScanner_get_StringValue_m468A1E24F4204EB9612403A899F305FABA7CB196_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double XPathConvert_StringToDouble_mBFB091D18D91BB58048193C994503765E244B726 (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathScanner_get_LexSize_m91DAF5E99E3E2EFF4C9C905FBF6D8114AF4F7BFD (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) ;
inline void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, int32_t, const RuntimeMethod*))Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared)(__this, ___0_item, method);
}
inline int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared)(__this, method);
}
inline void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m7DF0BDB908106B7BD8623015893E837EEE3070E1_gshared (WhereSelectListIterator_2_t387944A761CE6487CD8D9E282B5D96F05CB617CE* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mCA4AEDFAFEAD6236E1DAEAFBF87218FD886E6CFE((Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F* WhereSelectListIterator_2_Clone_mBA01FE3B9F3AD5449E168134BDE8472A54F3F1E7_gshared (WhereSelectListIterator_2_t387944A761CE6487CD8D9E282B5D96F05CB617CE* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = __this->___source;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = __this->___predicate;
		Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E* L_2 = __this->___selector;
		WhereSelectListIterator_2_t387944A761CE6487CD8D9E282B5D96F05CB617CE* L_3 = (WhereSelectListIterator_2_t387944A761CE6487CD8D9E282B5D96F05CB617CE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m7DF0BDB908106B7BD8623015893E837EEE3070E1(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m29342672E17ED12EB4FE5F9053B4879E9B76384B_gshared (WhereSelectListIterator_2_t387944A761CE6487CD8D9E282B5D96F05CB617CE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 L_4;
		L_4 = List_1_GetEnumerator_mE2901DF862546BCE05B51207CC63096EFFA1A6EB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___limitDate), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___lastUsedDate), (void*)NULL);
		#endif
		((Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_5 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_6;
		L_6 = Enumerator_get_Current_mAFFBCC2C9328A2A9CBD681C70142545A7918FF9A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_8 = __this->___predicate;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDD9B22FA1618C0EAF3B4E9A7B3BFE1D521BF1020_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E* L_11 = __this->___selector;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_12 = V_1;
		NullCheck(L_11);
		UserGetPoint_tCEE0B8C0832DF5EFA89DB3EC4F20DBEFB88D3A16 L_13;
		L_13 = Func_2_Invoke_m9431C2CF188E2C600CA6BD9FFDF5C15A25697A40_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_14 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7D65EAE68015DA1C619CD98DA3192006B9363539(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t187F0305E898B81B09668EE49C2B492FD1D6222F*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m450F32E83846AA2548BF49B86349BF32DB360108_gshared (WhereSelectListIterator_2_t387944A761CE6487CD8D9E282B5D96F05CB617CE* __this, Func_2_t3EAF2B93EE939E57001EAC36B1EA08E92E0AFEDC* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3EAF2B93EE939E57001EAC36B1EA08E92E0AFEDC* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t570A20AE7FFC742C17E0AEE8C233CB24CA310FB1* L_1 = (WhereEnumerableIterator_1_t570A20AE7FFC742C17E0AEE8C233CB24CA310FB1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m14BA738F1AB05AC2A77E7CC4CCEA4612CEC8CB47(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5573DDBCB63315161B1F710DEF2181A1F54C345E_gshared (WhereSelectListIterator_2_t4C24C738DD4776DFFE2758A0859D6E51DC7972F7* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m85ED83C53F112EBF898F69BF64DBBCF12815AC11((Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51* WhereSelectListIterator_2_Clone_m7B18A120042AF1976FB9B2A5EAE312F49B0314C8_gshared (WhereSelectListIterator_2_t4C24C738DD4776DFFE2758A0859D6E51DC7972F7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = __this->___source;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = __this->___predicate;
		Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38* L_2 = __this->___selector;
		WhereSelectListIterator_2_t4C24C738DD4776DFFE2758A0859D6E51DC7972F7* L_3 = (WhereSelectListIterator_2_t4C24C738DD4776DFFE2758A0859D6E51DC7972F7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m5573DDBCB63315161B1F710DEF2181A1F54C345E(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9A795C432DD129864B1C581F1A7DA4D7C34D9930_gshared (WhereSelectListIterator_2_t4C24C738DD4776DFFE2758A0859D6E51DC7972F7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 L_4;
		L_4 = List_1_GetEnumerator_mE2901DF862546BCE05B51207CC63096EFFA1A6EB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___limitDate), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___lastUsedDate), (void*)NULL);
		#endif
		((Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_5 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_6;
		L_6 = Enumerator_get_Current_mAFFBCC2C9328A2A9CBD681C70142545A7918FF9A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_8 = __this->___predicate;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDD9B22FA1618C0EAF3B4E9A7B3BFE1D521BF1020_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38* L_11 = __this->___selector;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_12 = V_1;
		NullCheck(L_11);
		UserIntimate_t6757F190A8DA41A93CA46F3BCC8714FE01EEA228 L_13;
		L_13 = Func_2_Invoke_m1DCD518EC3C91151C1ACDCABFFB601FB95EF7CB0_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_14 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7D65EAE68015DA1C619CD98DA3192006B9363539(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tBD74EC97AFBAB380AAB32BF87A5B0E616BDB6F51*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m82F7C52A447FA15D2EBCC79DC1D90609373995D8_gshared (WhereSelectListIterator_2_t4C24C738DD4776DFFE2758A0859D6E51DC7972F7* __this, Func_2_tD238A70DC96386B9DE16976E0B3317A0A66333D0* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tD238A70DC96386B9DE16976E0B3317A0A66333D0* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC3A240393103FF30FD2BEC9EE105FF9814B29C70* L_1 = (WhereEnumerableIterator_1_tC3A240393103FF30FD2BEC9EE105FF9814B29C70*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m3E493D287F1B664984B5C0C2A38926D9D114A2D2(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0CCB25F5BE1BC478CDCEB726C09BA0D8CF352586_gshared (WhereSelectListIterator_2_t6029522AE6805F2E68D26A9123D5D407D1C61E62* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m6F3894E17F5438221A276CDFCE119907F67FD2DD((Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5* WhereSelectListIterator_2_Clone_m1F1C3B3F8085479FCC46D89BBA5C28F59E1673E2_gshared (WhereSelectListIterator_2_t6029522AE6805F2E68D26A9123D5D407D1C61E62* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = __this->___source;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = __this->___predicate;
		Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B* L_2 = __this->___selector;
		WhereSelectListIterator_2_t6029522AE6805F2E68D26A9123D5D407D1C61E62* L_3 = (WhereSelectListIterator_2_t6029522AE6805F2E68D26A9123D5D407D1C61E62*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m0CCB25F5BE1BC478CDCEB726C09BA0D8CF352586(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m91B4871BB1121E946DFC3041DB40A984139029CD_gshared (WhereSelectListIterator_2_t6029522AE6805F2E68D26A9123D5D407D1C61E62* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 L_4;
		L_4 = List_1_GetEnumerator_mE2901DF862546BCE05B51207CC63096EFFA1A6EB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___limitDate), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___lastUsedDate), (void*)NULL);
		#endif
		((Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_5 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_6;
		L_6 = Enumerator_get_Current_mAFFBCC2C9328A2A9CBD681C70142545A7918FF9A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_8 = __this->___predicate;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDD9B22FA1618C0EAF3B4E9A7B3BFE1D521BF1020_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B* L_11 = __this->___selector;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_12 = V_1;
		NullCheck(L_11);
		UserItem_tEA3B3B1B525AEF9C5E4D6EC5F888143C524B0FBC L_13;
		L_13 = Func_2_Invoke_mC8669FFCCB1AB5798DD44EC73981F5BCD55D0835_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_14 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7D65EAE68015DA1C619CD98DA3192006B9363539(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t1B1A6A60159C39EE0625AC6F82386343764153F5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC449ADA86EE9946DE354018B5221F99F4930CD60_gshared (WhereSelectListIterator_2_t6029522AE6805F2E68D26A9123D5D407D1C61E62* __this, Func_2_tCA54BA9E9B6DB1F23951BC25D7C4A66E0ED08EAC* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tCA54BA9E9B6DB1F23951BC25D7C4A66E0ED08EAC* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tF443D791DC26C73ED0C60C8B21C1F9E45B7F0B75* L_1 = (WhereEnumerableIterator_1_tF443D791DC26C73ED0C60C8B21C1F9E45B7F0B75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m1B009DB7C4991F8FDE962122405A06E243778FE0(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA14F28B946F979A465D9AFAC7277B87787A72015_gshared (WhereSelectListIterator_2_tDE626E0FD49610251317574C67BB563AA526A464* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m4C2554E3B48A805EDCFDA354306BCAB443DFA5AF((Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0* WhereSelectListIterator_2_Clone_m1B244C845A2533DCA54977D943A0B49B77DC5107_gshared (WhereSelectListIterator_2_tDE626E0FD49610251317574C67BB563AA526A464* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = __this->___source;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = __this->___predicate;
		Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA* L_2 = __this->___selector;
		WhereSelectListIterator_2_tDE626E0FD49610251317574C67BB563AA526A464* L_3 = (WhereSelectListIterator_2_tDE626E0FD49610251317574C67BB563AA526A464*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mA14F28B946F979A465D9AFAC7277B87787A72015(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m46CFE85127449736BFB0D655949532A848A87349_gshared (WhereSelectListIterator_2_tDE626E0FD49610251317574C67BB563AA526A464* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 L_4;
		L_4 = List_1_GetEnumerator_mE2901DF862546BCE05B51207CC63096EFFA1A6EB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___limitDate), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___lastUsedDate), (void*)NULL);
		#endif
		((Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_5 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_6;
		L_6 = Enumerator_get_Current_mAFFBCC2C9328A2A9CBD681C70142545A7918FF9A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_8 = __this->___predicate;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDD9B22FA1618C0EAF3B4E9A7B3BFE1D521BF1020_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA* L_11 = __this->___selector;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_12 = V_1;
		NullCheck(L_11);
		UserLoginBonus_t03C5D2BA531947B54667752B718DC8BBDEF6F41C L_13;
		L_13 = Func_2_Invoke_mFBC99868C7C030993D3E609A5160FE1F8DF9E558_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_14 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7D65EAE68015DA1C619CD98DA3192006B9363539(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t56B8E6AC67BFF8C17B641FBB02F7DE7D24DB70B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE38DB887A53B3640501C47E91FCF521D2D8BFC7F_gshared (WhereSelectListIterator_2_tDE626E0FD49610251317574C67BB563AA526A464* __this, Func_2_t8792772AD37AF6E022CD7B31B36A0E683C18D1FF* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t8792772AD37AF6E022CD7B31B36A0E683C18D1FF* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t9D15097A83E842EF92CDB2088540D68ED7BD00D2* L_1 = (WhereEnumerableIterator_1_t9D15097A83E842EF92CDB2088540D68ED7BD00D2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mBAB0A89FA1B58F7CAD2A38DDF56B12C4FD2C3689(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4DB99F5557ABD9E9E9C4E867B6C8975CD852779F_gshared (WhereSelectListIterator_2_t2AF5F9C6377C38FDFCE9EE6DE4B9F3C8D33E46C4* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m62BD47C4E1CAD2B2AC69BEA9580B7AB2479DEDE7((Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34* WhereSelectListIterator_2_Clone_m7374C8A94BDB7D3015EC6C7685BCC756E634DB3E_gshared (WhereSelectListIterator_2_t2AF5F9C6377C38FDFCE9EE6DE4B9F3C8D33E46C4* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = __this->___source;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = __this->___predicate;
		Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA* L_2 = __this->___selector;
		WhereSelectListIterator_2_t2AF5F9C6377C38FDFCE9EE6DE4B9F3C8D33E46C4* L_3 = (WhereSelectListIterator_2_t2AF5F9C6377C38FDFCE9EE6DE4B9F3C8D33E46C4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m4DB99F5557ABD9E9E9C4E867B6C8975CD852779F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m1A31F5886816224DA927D417738426104613BB74_gshared (WhereSelectListIterator_2_t2AF5F9C6377C38FDFCE9EE6DE4B9F3C8D33E46C4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 L_4;
		L_4 = List_1_GetEnumerator_mE2901DF862546BCE05B51207CC63096EFFA1A6EB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___limitDate), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___lastUsedDate), (void*)NULL);
		#endif
		((Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_5 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_6;
		L_6 = Enumerator_get_Current_mAFFBCC2C9328A2A9CBD681C70142545A7918FF9A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_8 = __this->___predicate;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDD9B22FA1618C0EAF3B4E9A7B3BFE1D521BF1020_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA* L_11 = __this->___selector;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_12 = V_1;
		NullCheck(L_11);
		UserMap_t1538A599E82D18E8DE83C94AF787BC13397A29CA L_13;
		L_13 = Func_2_Invoke_mAC1420115313C2730209BBCC2FD1E1F7737DE9FE_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_14 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7D65EAE68015DA1C619CD98DA3192006B9363539(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tEA3BFAA65F0E2844DB03921ED31EA6DE79C20C34*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m868070B30C754978396C3A8F6D6C348D7ACD29E7_gshared (WhereSelectListIterator_2_t2AF5F9C6377C38FDFCE9EE6DE4B9F3C8D33E46C4* __this, Func_2_t4867A42E2514A6601953D7A27CD6C23C538A4668* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t4867A42E2514A6601953D7A27CD6C23C538A4668* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tF791AE08A71478C4C8B08299095A3DD5F9EF8855* L_1 = (WhereEnumerableIterator_1_tF791AE08A71478C4C8B08299095A3DD5F9EF8855*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mDB0E4C6ACC6F0650A0E1955DE31B9184C34C77D5(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m592AD3B2C2A699200DE1DD8F6FBAC262F552B966_gshared (WhereSelectListIterator_2_t8AA8A0B940E90EF11A0E1C38827876572D9502BF* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m8496E7E0DF22FC9BAB13187B113B169A2A152CDF((Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED* WhereSelectListIterator_2_Clone_mC721F9BC87D4A58BC7EE3EF3D64F0F1682708227_gshared (WhereSelectListIterator_2_t8AA8A0B940E90EF11A0E1C38827876572D9502BF* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = __this->___source;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = __this->___predicate;
		Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C* L_2 = __this->___selector;
		WhereSelectListIterator_2_t8AA8A0B940E90EF11A0E1C38827876572D9502BF* L_3 = (WhereSelectListIterator_2_t8AA8A0B940E90EF11A0E1C38827876572D9502BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m592AD3B2C2A699200DE1DD8F6FBAC262F552B966(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m09C369B30ED5F3B6D0EAB2A35E1C6C0D2AFBF614_gshared (WhereSelectListIterator_2_t8AA8A0B940E90EF11A0E1C38827876572D9502BF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 L_4;
		L_4 = List_1_GetEnumerator_mE2901DF862546BCE05B51207CC63096EFFA1A6EB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___limitDate), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___lastUsedDate), (void*)NULL);
		#endif
		((Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_5 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_6;
		L_6 = Enumerator_get_Current_mAFFBCC2C9328A2A9CBD681C70142545A7918FF9A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_8 = __this->___predicate;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDD9B22FA1618C0EAF3B4E9A7B3BFE1D521BF1020_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C* L_11 = __this->___selector;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_12 = V_1;
		NullCheck(L_11);
		UserScoreRanking_t8C154659FF431E2ED944CE8818CC663229FDB569 L_13;
		L_13 = Func_2_Invoke_mF973C512DE1493D32FA0038E309388B7EA125F85_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED*)__this)->___current))->___rankingDate), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_14 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7D65EAE68015DA1C619CD98DA3192006B9363539(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t40CED4AE149FDF2067954E2EDB18DD5F8C9EFDED*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3089547CC87E53C62BB504580A4BB108035F3AC3_gshared (WhereSelectListIterator_2_t8AA8A0B940E90EF11A0E1C38827876572D9502BF* __this, Func_2_t5F96C7CE92842561B952633B063A4555665ADF36* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t5F96C7CE92842561B952633B063A4555665ADF36* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t7E27E091EC678EC501697F34E6E1C21BF4A56699* L_1 = (WhereEnumerableIterator_1_t7E27E091EC678EC501697F34E6E1C21BF4A56699*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m26015D51BF9020832D5D72C203AB46FF46718FF8(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mECABBF0BFD1FBCDBA37C8274F83869ED9AE1AC4B_gshared (WhereSelectListIterator_2_t756189302C15CC89E817A010450FE8F74B5F1D71* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m4CCC0028D9FBC882C91F2EE87FF34C65A4260365((Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78* WhereSelectListIterator_2_Clone_m7BD7320FCEE72F868EB3C156D55EF45A9DB37636_gshared (WhereSelectListIterator_2_t756189302C15CC89E817A010450FE8F74B5F1D71* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = __this->___source;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = __this->___predicate;
		Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564* L_2 = __this->___selector;
		WhereSelectListIterator_2_t756189302C15CC89E817A010450FE8F74B5F1D71* L_3 = (WhereSelectListIterator_2_t756189302C15CC89E817A010450FE8F74B5F1D71*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mECABBF0BFD1FBCDBA37C8274F83869ED9AE1AC4B(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA778695F0C8BD91C963D732F662DB05BDB3A5869_gshared (WhereSelectListIterator_2_t756189302C15CC89E817A010450FE8F74B5F1D71* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 L_4;
		L_4 = List_1_GetEnumerator_mE2901DF862546BCE05B51207CC63096EFFA1A6EB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___limitDate), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___lastUsedDate), (void*)NULL);
		#endif
		((Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_5 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_6;
		L_6 = Enumerator_get_Current_mAFFBCC2C9328A2A9CBD681C70142545A7918FF9A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_8 = __this->___predicate;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDD9B22FA1618C0EAF3B4E9A7B3BFE1D521BF1020_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564* L_11 = __this->___selector;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_12 = V_1;
		NullCheck(L_11);
		UserShopStock_t2DE3C944A8659BADCDEF5C5B33AA53158D91C7B9 L_13;
		L_13 = Func_2_Invoke_m6F3F05AFBA87FAD848387D9E2BB05A29AFEE412D_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_14 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7D65EAE68015DA1C619CD98DA3192006B9363539(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tC4AF6B72147F550B65FB6C282A3B4588AA5BFA78*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA8F91328D40EDA2B8A6E8C02617BB571E44A934A_gshared (WhereSelectListIterator_2_t756189302C15CC89E817A010450FE8F74B5F1D71* __this, Func_2_t50EEA1666EFCFCCF54D89B3BF4F629D6DE432202* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t50EEA1666EFCFCCF54D89B3BF4F629D6DE432202* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t07C4F5A839F25CDB9449D7D73AA33CCE8B310CCD* L_1 = (WhereEnumerableIterator_1_t07C4F5A839F25CDB9449D7D73AA33CCE8B310CCD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mAC158D871742FEB01113456D9B35B8A28025CB01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA4FEBFF1FAA175C5C529987EEE9465575DC48283_gshared (WhereSelectListIterator_2_tE9323487D852ACFAF0955431F034EA664ECCAB25* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m75A197E8D678C2C1EA441BCABA17DC53295B839A((Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0* WhereSelectListIterator_2_Clone_m06022A300568DD8A854E1BCAC271828B3924859D_gshared (WhereSelectListIterator_2_tE9323487D852ACFAF0955431F034EA664ECCAB25* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = __this->___source;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = __this->___predicate;
		Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F* L_2 = __this->___selector;
		WhereSelectListIterator_2_tE9323487D852ACFAF0955431F034EA664ECCAB25* L_3 = (WhereSelectListIterator_2_tE9323487D852ACFAF0955431F034EA664ECCAB25*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mA4FEBFF1FAA175C5C529987EEE9465575DC48283(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m6C363A1DEAE981873E3F9984536E0578436FFDB4_gshared (WhereSelectListIterator_2_tE9323487D852ACFAF0955431F034EA664ECCAB25* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 L_4;
		L_4 = List_1_GetEnumerator_mE2901DF862546BCE05B51207CC63096EFFA1A6EB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___limitDate), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___lastUsedDate), (void*)NULL);
		#endif
		((Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_5 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_6;
		L_6 = Enumerator_get_Current_mAFFBCC2C9328A2A9CBD681C70142545A7918FF9A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_8 = __this->___predicate;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDD9B22FA1618C0EAF3B4E9A7B3BFE1D521BF1020_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F* L_11 = __this->___selector;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_12 = V_1;
		NullCheck(L_11);
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_13;
		L_13 = Func_2_Invoke_m2464126606755562AE457797265653ECE4AAC4FC_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0*)__this)->___current))->___limitDate), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0*)__this)->___current))->___lastUsedDate), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_14 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7D65EAE68015DA1C619CD98DA3192006B9363539(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t196FA0008AF38DA48F35DA351E5A33242E092CE0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mDF4C59830DB44F4054D67CC082A27187A5E35979_gshared (WhereSelectListIterator_2_tE9323487D852ACFAF0955431F034EA664ECCAB25* __this, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t29AEE4F9BE440ADFE175E8D012A59D4516B9EC4A* L_1 = (WhereEnumerableIterator_1_t29AEE4F9BE440ADFE175E8D012A59D4516B9EC4A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m334DC57EF3872F6801BC0EAD89A6AB043D774E5E(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mFCD53D401652BDC13B866927AECD897D8E781C78_gshared (WhereSelectListIterator_2_t9E954934132F12E3D8A7FA58C4A20B1BBF70BBE4* __this, List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* ___0_source, Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* ___1_predicate, Func_2_t20E88C14C633E3F5B468584B205973174515C5BF* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1A49935CA571FBA07C1233F3EEB13C7889E6145E((Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t20E88C14C633E3F5B468584B205973174515C5BF* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D* WhereSelectListIterator_2_Clone_m838E2A6FD78A880AD981208F72FE03A77C2F419E_gshared (WhereSelectListIterator_2_t9E954934132F12E3D8A7FA58C4A20B1BBF70BBE4* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_0 = __this->___source;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_1 = __this->___predicate;
		Func_2_t20E88C14C633E3F5B468584B205973174515C5BF* L_2 = __this->___selector;
		WhereSelectListIterator_2_t9E954934132F12E3D8A7FA58C4A20B1BBF70BBE4* L_3 = (WhereSelectListIterator_2_t9E954934132F12E3D8A7FA58C4A20B1BBF70BBE4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mFCD53D401652BDC13B866927AECD897D8E781C78(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m36BD821FACEEA7D694DE30D46B1803D8061C4BE8_gshared (WhereSelectListIterator_2_t9E954934132F12E3D8A7FA58C4A20B1BBF70BBE4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2ED0BC96AE11BD04E17FE66029DE64455A4D1E0D* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0 L_4;
		L_4 = List_1_GetEnumerator_mE2901DF862546BCE05B51207CC63096EFFA1A6EB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___limitDate), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___lastUsedDate), (void*)NULL);
		#endif
		((Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_5 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_6;
		L_6 = Enumerator_get_Current_mAFFBCC2C9328A2A9CBD681C70142545A7918FF9A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* L_8 = __this->___predicate;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDD9B22FA1618C0EAF3B4E9A7B3BFE1D521BF1020_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t20E88C14C633E3F5B468584B205973174515C5BF* L_11 = __this->___selector;
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_12 = V_1;
		NullCheck(L_11);
		UserTradeItem_tB67C1136122F89963C2F674EACBCB9CA5FC063A9 L_13;
		L_13 = Func_2_Invoke_m1E94EF0D36E7AA4F7C691DF228D83F92F946324A_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* L_14 = (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7D65EAE68015DA1C619CD98DA3192006B9363539(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t3AADA0CC067D6F4292C5682E46C7AF6E8522D60D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m45D82061E1A9377F4EF3082918534CD2A5E9DD81_gshared (WhereSelectListIterator_2_t9E954934132F12E3D8A7FA58C4A20B1BBF70BBE4* __this, Func_2_t8B1C7F7D7EB8A61CED366A6102D358476A349F76* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t8B1C7F7D7EB8A61CED366A6102D358476A349F76* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tD5D3017F9BB3E034F15C61D49739411FE419E1CA* L_1 = (WhereEnumerableIterator_1_tD5D3017F9BB3E034F15C61D49739411FE419E1CA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m98B647FD3B1F84954A21659DC004C13328CE39F7(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* currentDelegate = reinterpret_cast<WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m630834333CB7AE51AB01F7713157EE57991D03D7_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* currentDelegate = reinterpret_cast<WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m2AA9BE88F67A2DA68720D6B5F2AFFA89E23BB597_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* currentDelegate = reinterpret_cast<WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m4F33ED7C62B9E61B33CC81A7B5C739D0396BC209_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* currentDelegate = reinterpret_cast<WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m1067E857FEE330354C23F3DB8C7B30143BCA679D_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* currentDelegate = reinterpret_cast<WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mC9073752A9F993A89037EB0FCF8968BCB14AE3A3_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* currentDelegate = reinterpret_cast<WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mAA1CB4066F7346F24DA38ED5A1240309F0C4BC60_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* currentDelegate = reinterpret_cast<WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m6165AFE856EC0CC9CDE8A145B404312481261696_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	NullCheck(___0_val);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_val, ___1_fieldValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_Parse_m12C0A4788A4C588EC9FC869533FA1A4A3856A82C_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* ___0_scanner, RuntimeObject* ___1_builder, int32_t ___2_endLex, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_7 = L_4;
	const Il2CppFullySharedGenericAny L_20 = L_4;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	memset(V_0, 0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_0 = ___0_scanner;
		__this->___scanner = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scanner), (void*)L_0);
		RuntimeObject* L_1 = ___1_builder;
		__this->___builder = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___builder), (void*)L_1);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_2 = __this->___posInfo;
		NullCheck(L_2);
		Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0(L_2, Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{
				RuntimeObject* L_3 = ___1_builder;
				il2cpp_codegen_memcpy(L_4, V_0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
				NullCheck(L_3);
				InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_4: *(void**)L_4), (Il2CppFullySharedGenericAny*)L_5);
				il2cpp_codegen_memcpy(V_0, L_5, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = ___1_builder;
				NullCheck(L_6);
				InterfaceActionInvoker0::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_6);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), __this, (Il2CppFullySharedGenericAny*)L_7);
				il2cpp_codegen_memcpy(V_0, L_7, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
				XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_8 = ___0_scanner;
				int32_t L_9 = ___2_endLex;
				NullCheck(L_8);
				XPathScanner_CheckToken_mC40A3EDACF1EF8314530E3B6BDAFCE283BE5E685(L_8, L_9, NULL);
				goto IL_0069;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0037_1;
				}
				throw e;
			}

CATCH_0037_1:
			{
				{
					XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779* L_10 = ((XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779*)IL2CPP_GET_ACTIVE_EXCEPTION(XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779*));;
					V_1 = L_10;
					XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779* L_11 = V_1;
					NullCheck(L_11);
					String_t* L_12 = L_11->___queryString;
					if (L_12)
					{
						goto IL_005e_1;
					}
				}
				{
					XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779* L_13 = V_1;
					XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_14 = ___0_scanner;
					NullCheck(L_14);
					String_t* L_15;
					L_15 = XPathScanner_get_Source_m7B9204C3A3F87CE4C33304C455115A0905AEF99D_inline(L_14, NULL);
					NullCheck(L_13);
					L_13->___queryString = L_15;
					Il2CppCodeGenWriteBarrier((void**)(&L_13->___queryString), (void*)L_15);
					XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779* L_16 = V_1;
					NullCheck(L_16);
					int32_t* L_17 = (int32_t*)(&L_16->___startChar);
					XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779* L_18 = V_1;
					NullCheck(L_18);
					int32_t* L_19 = (int32_t*)(&L_18->___endChar);
					((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, int32_t*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, L_17, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				}

IL_005e_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_20, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathParser_1_IsStep_m1188C6EFBA56E9762779141A7CEF26629B8C8FAF_gshared (int32_t ___0_lexKind, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_lexKind;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)46))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___0_lexKind;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)16))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = ___0_lexKind;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)64))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_lexKind;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)20))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = ___0_lexKind;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)42))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_5 = ___0_lexKind;
		return (bool)((((int32_t)L_5) == ((int32_t)((int32_t)21)))? 1 : 0);
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_ParseLocationPath_m511455F96C38379FBD97A0A3931CAA806A1B678E_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	const Il2CppFullySharedGenericAny L_12 = L_4;
	const Il2CppFullySharedGenericAny L_18 = L_4;
	const Il2CppFullySharedGenericAny L_25 = L_4;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_21 = L_10;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_22 = L_11;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	memset(V_0, 0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_0 = __this->___scanner;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0053;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_2 = __this->___scanner;
		NullCheck(L_2);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_2, NULL);
		RuntimeObject* L_3 = __this->___builder;
		NullCheck(L_3);
		InterfaceActionInvoker5Invoker< int32_t, int32_t, String_t*, String_t*, Il2CppFullySharedGenericAny* >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3, (int32_t)((int32_t)14), (int32_t)((int32_t)9), (String_t*)NULL, (String_t*)NULL, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_5 = __this->___scanner;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		bool L_7;
		L_7 = ((  bool (*) (int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		RuntimeObject* L_8 = __this->___builder;
		il2cpp_codegen_memcpy(L_9, V_0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_10);
		NullCheck(L_8);
		InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(6, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_10: *(void**)L_10), (Il2CppFullySharedGenericAny*)L_11);
		il2cpp_codegen_memcpy(V_0, L_11, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	}

IL_0051:
	{
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}

IL_0053:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_13 = __this->___scanner;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_13, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_00ab;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_15 = __this->___scanner;
		NullCheck(L_15);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_15, NULL);
		RuntimeObject* L_16 = __this->___builder;
		RuntimeObject* L_17 = __this->___builder;
		NullCheck(L_17);
		InterfaceActionInvoker5Invoker< int32_t, int32_t, String_t*, String_t*, Il2CppFullySharedGenericAny* >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_17, (int32_t)((int32_t)14), (int32_t)((int32_t)9), (String_t*)NULL, (String_t*)NULL, (Il2CppFullySharedGenericAny*)L_18);
		RuntimeObject* L_19 = __this->___builder;
		RuntimeObject* L_20 = __this->___builder;
		NullCheck(L_20);
		InterfaceActionInvoker5Invoker< int32_t, int32_t, String_t*, String_t*, Il2CppFullySharedGenericAny* >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_20, (int32_t)6, (int32_t)((int32_t)9), (String_t*)NULL, (String_t*)NULL, (Il2CppFullySharedGenericAny*)L_21);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_22);
		NullCheck(L_19);
		InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(6, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_22: *(void**)L_22), (Il2CppFullySharedGenericAny*)L_23);
		NullCheck(L_16);
		InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(6, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_18: *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_23: *(void**)L_23), (Il2CppFullySharedGenericAny*)L_24);
		il2cpp_codegen_memcpy(il2cppRetVal, L_24, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}

IL_00ab:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_25);
		il2cpp_codegen_memcpy(il2cppRetVal, L_25, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_ParseRelativeLocationPath_mA97587C4532F064A9353C03AADF400343D29E5A3_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_12 = L_7;
	const Il2CppFullySharedGenericAny L_19 = L_7;
	const Il2CppFullySharedGenericAny L_27 = L_7;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_22 = L_13;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_23 = L_14;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	memset(V_0, 0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___parseRelativePath;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_1;
		__this->___parseRelativePath = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_0035;
		}
	}
	{
		bool L_3;
		L_3 = XsltConfigSection_get_LimitXPathComplexity_m576EFBA751F918B661BEDE3852200DFA4C88EB3C(NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_4 = __this->___scanner;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var)));
		NullCheck(L_4);
		XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779* L_6;
		L_6 = XPathScanner_CreateException_mC419A8A01BB08B3A4C11673E8902AB0AFCC193CE(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58BFE45240542774D63714E6442B9D2CEF79680C)), L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0035:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy(V_0, L_7, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_8 = __this->___scanner;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_006b;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_10 = __this->___scanner;
		NullCheck(L_10);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_10, NULL);
		RuntimeObject* L_11 = __this->___builder;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_13);
		NullCheck(L_11);
		InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(6, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_12: *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_13: *(void**)L_13), (Il2CppFullySharedGenericAny*)L_14);
		il2cpp_codegen_memcpy(V_0, L_14, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		goto IL_00b3;
	}

IL_006b:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_15 = __this->___scanner;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_15, NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_00b3;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_17 = __this->___scanner;
		NullCheck(L_17);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_17, NULL);
		RuntimeObject* L_18 = __this->___builder;
		il2cpp_codegen_memcpy(L_19, V_0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		RuntimeObject* L_20 = __this->___builder;
		RuntimeObject* L_21 = __this->___builder;
		NullCheck(L_21);
		InterfaceActionInvoker5Invoker< int32_t, int32_t, String_t*, String_t*, Il2CppFullySharedGenericAny* >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_21, (int32_t)6, (int32_t)((int32_t)9), (String_t*)NULL, (String_t*)NULL, (Il2CppFullySharedGenericAny*)L_22);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_23);
		NullCheck(L_20);
		InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(6, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_22: *(void**)L_22), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_23: *(void**)L_23), (Il2CppFullySharedGenericAny*)L_24);
		NullCheck(L_18);
		InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(6, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_19: *(void**)L_19), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_24: *(void**)L_24), (Il2CppFullySharedGenericAny*)L_25);
		il2cpp_codegen_memcpy(V_0, L_25, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	}

IL_00b3:
	{
		int32_t L_26 = __this->___parseRelativePath;
		__this->___parseRelativePath = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		il2cpp_codegen_memcpy(L_27, V_0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_27, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_ParseStep_m597BD41C4B0C95147E0C5D254A767643DF390691_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_14 = L_4;
	const Il2CppFullySharedGenericAny L_39 = L_4;
	const Il2CppFullySharedGenericAny L_41 = L_4;
	const Il2CppFullySharedGenericAny L_48 = L_4;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_45 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	memset(V_0, 0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_0 = __this->___scanner;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_0, NULL);
		if ((!(((uint32_t)((int32_t)46)) == ((uint32_t)L_1))))
		{
			goto IL_0054;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_2 = __this->___scanner;
		NullCheck(L_2);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_2, NULL);
		RuntimeObject* L_3 = __this->___builder;
		NullCheck(L_3);
		InterfaceActionInvoker5Invoker< int32_t, int32_t, String_t*, String_t*, Il2CppFullySharedGenericAny* >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3, (int32_t)((int32_t)13), (int32_t)((int32_t)9), (String_t*)NULL, (String_t*)NULL, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_5 = __this->___scanner;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_5, NULL);
		if ((!(((uint32_t)((int32_t)91)) == ((uint32_t)L_6))))
		{
			goto IL_015f;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_7 = __this->___scanner;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
		L_8 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var)));
		NullCheck(L_7);
		XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779* L_9;
		L_9 = XPathScanner_CreateException_mC419A8A01BB08B3A4C11673E8902AB0AFCC193CE(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AFC36E35C6231EBD084FB9DB499248D82C1A487)), L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0054:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_10 = __this->___scanner;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_10, NULL);
		if ((!(((uint32_t)((int32_t)16)) == ((uint32_t)L_11))))
		{
			goto IL_00a8;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_12 = __this->___scanner;
		NullCheck(L_12);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_12, NULL);
		RuntimeObject* L_13 = __this->___builder;
		NullCheck(L_13);
		InterfaceActionInvoker5Invoker< int32_t, int32_t, String_t*, String_t*, Il2CppFullySharedGenericAny* >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13, (int32_t)((int32_t)10), (int32_t)((int32_t)9), (String_t*)NULL, (String_t*)NULL, (Il2CppFullySharedGenericAny*)L_14);
		il2cpp_codegen_memcpy(V_0, L_14, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_15 = __this->___scanner;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_15, NULL);
		if ((!(((uint32_t)((int32_t)91)) == ((uint32_t)L_16))))
		{
			goto IL_015f;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_17 = __this->___scanner;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18;
		L_18 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var)));
		NullCheck(L_17);
		XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779* L_19;
		L_19 = XPathScanner_CreateException_mC419A8A01BB08B3A4C11673E8902AB0AFCC193CE(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BE526D790BFB5C892336EFCDA4E3031B9E711B1)), L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_00a8:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_20 = __this->___scanner;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_20, NULL);
		V_2 = L_21;
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) > ((int32_t)((int32_t)21))))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)20))))
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)21))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0108;
	}

IL_00c5:
	{
		int32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)42))))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)64))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0108;
	}

IL_00d1:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_27 = __this->___scanner;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = XPathScanner_get_Axis_m95BF56D2E50F18371695F34DCCCC650485E298A6_inline(L_27, NULL);
		V_1 = L_28;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_29 = __this->___scanner;
		NullCheck(L_29);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_29, NULL);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_30 = __this->___scanner;
		NullCheck(L_30);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_30, NULL);
		goto IL_012d;
	}

IL_00f5:
	{
		V_1 = (int32_t)3;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_31 = __this->___scanner;
		NullCheck(L_31);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_31, NULL);
		goto IL_012d;
	}

IL_0104:
	{
		V_1 = (int32_t)4;
		goto IL_012d;
	}

IL_0108:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_32 = __this->___scanner;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_35 = __this->___scanner;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = XPathScanner_get_RawValue_m84A64CEBD21224E9B8189606AA8800FD9ECF3902(L_35, NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_36);
		NullCheck(L_32);
		XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779* L_37;
		L_37 = XPathScanner_CreateException_mC419A8A01BB08B3A4C11673E8902AB0AFCC193CE(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53F7E9DCA3FCF6EFBFC27A2A835B38226F35C07E)), L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, method);
	}

IL_012d:
	{
		int32_t L_38 = V_1;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, L_38, (Il2CppFullySharedGenericAny*)L_39);
		il2cpp_codegen_memcpy(V_0, L_39, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		goto IL_0150;
	}

IL_0137:
	{
		RuntimeObject* L_40 = __this->___builder;
		il2cpp_codegen_memcpy(L_41, V_0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (Il2CppFullySharedGenericAny*)L_42);
		int32_t L_43 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		bool L_44;
		L_44 = ((  bool (*) (int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_40);
		InterfaceActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, bool, Il2CppFullySharedGenericAny* >::Invoke(7, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_41: *(void**)L_41), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_42: *(void**)L_42), L_44, (Il2CppFullySharedGenericAny*)L_45);
		il2cpp_codegen_memcpy(V_0, L_45, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	}

IL_0150:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_46 = __this->___scanner;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_46, NULL);
		if ((((int32_t)((int32_t)91)) == ((int32_t)L_47)))
		{
			goto IL_0137;
		}
	}

IL_015f:
	{
		il2cpp_codegen_memcpy(L_48, V_0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_48, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathParser_1_IsReverseAxis_m3B7E0FEF2EE29624B1B848C3EA3F46289DDB6D11_gshared (int32_t ___0_axis, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_axis;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_axis;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___0_axis;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = ___0_axis;
		return (bool)((((int32_t)L_3) == ((int32_t)((int32_t)12)))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_ParseNodeTest_m7C795B52CFF9900762612364DAD7F508BCB1C96E_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, int32_t ___0_axis, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_0 = __this->___scanner;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = XPathScanner_get_LexStart_m46AF18EFE511BF4CBFBF70CF57EA5EB9AD636A2B_inline(L_0, NULL);
		V_3 = L_1;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_2 = __this->___scanner;
		int32_t L_3 = ___0_axis;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		((  void (*) (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF*, int32_t, int32_t*, String_t**, String_t**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_2, L_3, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		int32_t L_4 = V_3;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_5 = __this->___scanner;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = XPathScanner_get_PrevLexEnd_m2D64BDDFBBC6B7CFE354F45C2099F8B8FDC6B047_inline(L_5, NULL);
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_4, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_7 = __this->___builder;
		int32_t L_8 = ___0_axis;
		int32_t L_9 = V_0;
		String_t* L_10 = V_1;
		String_t* L_11 = V_2;
		NullCheck(L_7);
		InterfaceActionInvoker5Invoker< int32_t, int32_t, String_t*, String_t*, Il2CppFullySharedGenericAny* >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_7, L_8, L_9, L_10, L_11, (Il2CppFullySharedGenericAny*)L_12);
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathParser_1_IsNodeType_m2AF3D8236DFB03635F947AAFF942538CCA0B2C15_gshared (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* ___0_scanner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60FCDFD0C330A0636DB449998F8C8F58C7522826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD04CAFBC9E6DA5318C057180A0BD0EC13B9B3FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_0 = ___0_scanner;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XPathScanner_get_Prefix_m797D3B93302BB564302346DC76353DE6FD4121B0_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0056;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_3 = ___0_scanner;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = XPathScanner_get_Name_m055DE1221B1D0005F77861C0C41EB76134B05309_inline(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31, NULL);
		if (L_5)
		{
			goto IL_0054;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_6 = ___0_scanner;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = XPathScanner_get_Name_m055DE1221B1D0005F77861C0C41EB76134B05309_inline(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0, NULL);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_9 = ___0_scanner;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = XPathScanner_get_Name_m055DE1221B1D0005F77861C0C41EB76134B05309_inline(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteralDD04CAFBC9E6DA5318C057180A0BD0EC13B9B3FC, NULL);
		if (L_11)
		{
			goto IL_0054;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_12 = ___0_scanner;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = XPathScanner_get_Name_m055DE1221B1D0005F77861C0C41EB76134B05309_inline(L_12, NULL);
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral60FCDFD0C330A0636DB449998F8C8F58C7522826, NULL);
		return L_14;
	}

IL_0054:
	{
		return (bool)1;
	}

IL_0056:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathParser_1_PrincipalNodeType_m7D91AFEB6C1F9C45657DB06B40078EC1AE902A72_gshared (int32_t ___0_axis, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_axis;
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_axis;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)9))))
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		return (int32_t)(3);
	}

IL_000d:
	{
		return (int32_t)(2);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_InternalParseNodeTest_m6DE1F97168C14045289DD832A6A8391A1BB9F683_gshared (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* ___0_scanner, int32_t ___1_axis, int32_t* ___2_nodeType, String_t** ___3_nodePrefix, String_t** ___4_nodeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60FCDFD0C330A0636DB449998F8C8F58C7522826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_0 = ___0_scanner;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)21))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)42))))
		{
			goto IL_00f0;
		}
	}
	{
		goto IL_0106;
	}

IL_0019:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_4 = ___0_scanner;
		NullCheck(L_4);
		bool L_5;
		L_5 = XPathScanner_get_CanBeFunction_mC85FE3671876A8523D967AFF98883A1FC3FBE844_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_00bd;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_6 = ___0_scanner;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		bool L_7;
		L_7 = ((  bool (*) (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)))(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		if (!L_7)
		{
			goto IL_00bd;
		}
	}
	{
		String_t** L_8 = ___3_nodePrefix;
		*((RuntimeObject**)L_8) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)NULL);
		String_t** L_9 = ___4_nodeName;
		*((RuntimeObject**)L_9) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)NULL);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_10 = ___0_scanner;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = XPathScanner_get_Name_m055DE1221B1D0005F77861C0C41EB76134B05309_inline(L_10, NULL);
		V_1 = L_11;
		String_t* L_12 = V_1;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral60FCDFD0C330A0636DB449998F8C8F58C7522826, NULL);
		if (L_13)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0, NULL);
		if (L_15)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31, NULL);
		if (L_17)
		{
			goto IL_0070;
		}
	}
	{
		goto IL_0076;
	}

IL_0066:
	{
		int32_t* L_18 = ___2_nodeType;
		*((int32_t*)L_18) = (int32_t)8;
		goto IL_0079;
	}

IL_006b:
	{
		int32_t* L_19 = ___2_nodeType;
		*((int32_t*)L_19) = (int32_t)4;
		goto IL_0079;
	}

IL_0070:
	{
		int32_t* L_20 = ___2_nodeType;
		*((int32_t*)L_20) = (int32_t)((int32_t)9);
		goto IL_0079;
	}

IL_0076:
	{
		int32_t* L_21 = ___2_nodeType;
		*((int32_t*)L_21) = (int32_t)7;
	}

IL_0079:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_22 = ___0_scanner;
		NullCheck(L_22);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_22, NULL);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_23 = ___0_scanner;
		NullCheck(L_23);
		XPathScanner_PassToken_m5D254A9BDDF09A650AF4BF560F5950A2359F8AAD(L_23, (int32_t)((int32_t)40), NULL);
		int32_t* L_24 = ___2_nodeType;
		int32_t L_25 = *((int32_t*)L_24);
		if ((!(((uint32_t)L_25) == ((uint32_t)7))))
		{
			goto IL_00b4;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_26 = ___0_scanner;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_26, NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)41))))
		{
			goto IL_00b4;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_28 = ___0_scanner;
		NullCheck(L_28);
		XPathScanner_CheckToken_mC40A3EDACF1EF8314530E3B6BDAFCE283BE5E685(L_28, (int32_t)((int32_t)22), NULL);
		String_t** L_29 = ___3_nodePrefix;
		String_t* L_30 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		*((RuntimeObject**)L_29) = (RuntimeObject*)L_30;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_29, (void*)(RuntimeObject*)L_30);
		String_t** L_31 = ___4_nodeName;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_32 = ___0_scanner;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = XPathScanner_get_StringValue_m468A1E24F4204EB9612403A899F305FABA7CB196_inline(L_32, NULL);
		*((RuntimeObject**)L_31) = (RuntimeObject*)L_33;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_31, (void*)(RuntimeObject*)L_33);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_34 = ___0_scanner;
		NullCheck(L_34);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_34, NULL);
	}

IL_00b4:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_35 = ___0_scanner;
		NullCheck(L_35);
		XPathScanner_PassToken_m5D254A9BDDF09A650AF4BF560F5950A2359F8AAD(L_35, (int32_t)((int32_t)41), NULL);
		return;
	}

IL_00bd:
	{
		String_t** L_36 = ___3_nodePrefix;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_37 = ___0_scanner;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = XPathScanner_get_Prefix_m797D3B93302BB564302346DC76353DE6FD4121B0_inline(L_37, NULL);
		*((RuntimeObject**)L_36) = (RuntimeObject*)L_38;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_36, (void*)(RuntimeObject*)L_38);
		String_t** L_39 = ___4_nodeName;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_40 = ___0_scanner;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = XPathScanner_get_Name_m055DE1221B1D0005F77861C0C41EB76134B05309_inline(L_40, NULL);
		*((RuntimeObject**)L_39) = (RuntimeObject*)L_41;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_39, (void*)(RuntimeObject*)L_41);
		int32_t* L_42 = ___2_nodeType;
		int32_t L_43 = ___1_axis;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		int32_t L_44;
		L_44 = ((  int32_t (*) (int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)))(L_43, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		*((int32_t*)L_42) = (int32_t)L_44;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_45 = ___0_scanner;
		NullCheck(L_45);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_45, NULL);
		String_t** L_46 = ___4_nodeName;
		String_t* L_47 = *((String_t**)L_46);
		bool L_48;
		L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		if (!L_48)
		{
			goto IL_0121;
		}
	}
	{
		String_t** L_49 = ___4_nodeName;
		*((RuntimeObject**)L_49) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_49, (void*)(RuntimeObject*)NULL);
		return;
	}

IL_00f0:
	{
		String_t** L_50 = ___3_nodePrefix;
		*((RuntimeObject**)L_50) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_50, (void*)(RuntimeObject*)NULL);
		String_t** L_51 = ___4_nodeName;
		*((RuntimeObject**)L_51) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_51, (void*)(RuntimeObject*)NULL);
		int32_t* L_52 = ___2_nodeType;
		int32_t L_53 = ___1_axis;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		int32_t L_54;
		L_54 = ((  int32_t (*) (int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)))(L_53, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		*((int32_t*)L_52) = (int32_t)L_54;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_55 = ___0_scanner;
		NullCheck(L_55);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_55, NULL);
		return;
	}

IL_0106:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_56 = ___0_scanner;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_57;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_59 = ___0_scanner;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = XPathScanner_get_RawValue_m84A64CEBD21224E9B8189606AA8800FD9ECF3902(L_59, NULL);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_60);
		NullCheck(L_56);
		XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779* L_61;
		L_61 = XPathScanner_CreateException_mC419A8A01BB08B3A4C11673E8902AB0AFCC193CE(L_56, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDED9B097AF1027F443F29DD19E448CF15070BC9E)), L_58, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, method);
	}

IL_0121:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_ParsePredicate_m4484A108428C4F673379105B76E528C202428624_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_0 = __this->___scanner;
		NullCheck(L_0);
		XPathScanner_PassToken_m5D254A9BDDF09A650AF4BF560F5950A2359F8AAD(L_0, (int32_t)((int32_t)91), NULL);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), __this, (Il2CppFullySharedGenericAny*)L_1);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_2 = __this->___scanner;
		NullCheck(L_2);
		XPathScanner_PassToken_m5D254A9BDDF09A650AF4BF560F5950A2359F8AAD(L_2, (int32_t)((int32_t)93), NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_ParseExpr_m0C82D23832F547AF517C4086A77595D6B421A1C1_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	{
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, 0, (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_ParseSubExpr_m15802103E3D86CC84145F18D1648F15FE5886ECD_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, int32_t ___0_callerPrec, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_20 = L_17;
	const Il2CppFullySharedGenericAny L_34 = L_17;
	const Il2CppFullySharedGenericAny L_39 = L_17;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_36 = L_18;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_37 = L_19;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	memset(V_1, 0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	memset(V_4, 0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	int32_t V_5 = 0;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = __this->___parseSubExprDepth;
		V_2 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_2;
		__this->___parseSubExprDepth = L_1;
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_0035;
		}
	}
	{
		bool L_3;
		L_3 = XsltConfigSection_get_LimitXPathComplexity_m576EFBA751F918B661BEDE3852200DFA4C88EB3C(NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_4 = __this->___scanner;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var)));
		NullCheck(L_4);
		XPathCompileException_t91C3C2A94770E246471F554D38607FE708462779* L_6;
		L_6 = XPathScanner_CreateException_mC419A8A01BB08B3A4C11673E8902AB0AFCC193CE(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58BFE45240542774D63714E6442B9D2CEF79680C)), L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0035:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_7 = __this->___scanner;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_007a;
		}
	}
	{
		V_0 = (int32_t)((int32_t)14);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ((XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___XPathOperatorPrecedence;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_13 = __this->___scanner;
		NullCheck(L_13);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_13, NULL);
		RuntimeObject* L_14 = __this->___builder;
		int32_t L_15 = V_0;
		int32_t L_16 = V_3;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, L_16, (Il2CppFullySharedGenericAny*)L_17);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		il2cpp_codegen_memcpy(L_18, V_4, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		NullCheck(L_14);
		InterfaceActionInvoker4Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_14, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_17: *(void**)L_17), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_18: *(void**)L_18), (Il2CppFullySharedGenericAny*)L_19);
		il2cpp_codegen_memcpy(V_1, L_19, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		goto IL_0081;
	}

IL_007a:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), __this, (Il2CppFullySharedGenericAny*)L_20);
		il2cpp_codegen_memcpy(V_1, L_20, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	}

IL_0081:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_21 = __this->___scanner;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_21, NULL);
		if ((((int32_t)L_22) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0093;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_009e;
	}

IL_0093:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_23 = __this->___scanner;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_23, NULL);
		G_B9_0 = ((int32_t)(L_24));
	}

IL_009e:
	{
		V_0 = (int32_t)G_B9_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ((XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___XPathOperatorPrecedence;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_5 = L_28;
		int32_t L_29 = V_5;
		int32_t L_30 = ___0_callerPrec;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00d0;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_31 = __this->___scanner;
		NullCheck(L_31);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_31, NULL);
		RuntimeObject* L_32 = __this->___builder;
		int32_t L_33 = V_0;
		il2cpp_codegen_memcpy(L_34, V_1, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		int32_t L_35 = V_5;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, L_35, (Il2CppFullySharedGenericAny*)L_36);
		NullCheck(L_32);
		InterfaceActionInvoker4Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_32, L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_36: *(void**)L_36), (Il2CppFullySharedGenericAny*)L_37);
		il2cpp_codegen_memcpy(V_1, L_37, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		goto IL_0081;
	}

IL_00d0:
	{
		int32_t L_38 = __this->___parseSubExprDepth;
		__this->___parseSubExprDepth = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		il2cpp_codegen_memcpy(L_39, V_1, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_39, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_ParseUnionExpr_m71668276DD22E2E2D67AC1DA68B3C8491E824493_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_9 = L_2;
	const Il2CppFullySharedGenericAny L_15 = L_2;
	const Il2CppFullySharedGenericAny L_25 = L_2;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_20 = L_10;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_21 = L_11;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	memset(V_1, 0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	memset(V_2, 0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	memset(V_3, 0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_0 = __this->___scanner;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = XPathScanner_get_LexStart_m46AF18EFE511BF4CBFBF70CF57EA5EB9AD636A2B_inline(L_0, NULL);
		V_0 = L_1;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)), il2cpp_rgctx_method(method->klass->rgctx_data, 25), __this, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_1, L_2, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_3 = __this->___scanner;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_3, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_5 = V_0;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_6 = __this->___scanner;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = XPathScanner_get_PrevLexEnd_m2D64BDDFBBC6B7CFE354F45C2099F8B8FDC6B047_inline(L_6, NULL);
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_5, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_8 = __this->___builder;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		NullCheck(L_8);
		InterfaceActionInvoker4Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_8, (int32_t)((int32_t)15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_10: *(void**)L_10), (Il2CppFullySharedGenericAny*)L_11);
		il2cpp_codegen_memcpy(V_1, L_11, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		goto IL_009d;
	}

IL_0057:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_12 = __this->___scanner;
		NullCheck(L_12);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_12, NULL);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_13 = __this->___scanner;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = XPathScanner_get_LexStart_m46AF18EFE511BF4CBFBF70CF57EA5EB9AD636A2B_inline(L_13, NULL);
		V_0 = L_14;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)), il2cpp_rgctx_method(method->klass->rgctx_data, 25), __this, (Il2CppFullySharedGenericAny*)L_15);
		il2cpp_codegen_memcpy(V_3, L_15, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		int32_t L_16 = V_0;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_17 = __this->___scanner;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = XPathScanner_get_PrevLexEnd_m2D64BDDFBBC6B7CFE354F45C2099F8B8FDC6B047_inline(L_17, NULL);
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_16, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_19 = __this->___builder;
		il2cpp_codegen_memcpy(L_20, V_1, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		il2cpp_codegen_memcpy(L_21, V_3, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		NullCheck(L_19);
		InterfaceActionInvoker4Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19, (int32_t)((int32_t)15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_20: *(void**)L_20), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_21: *(void**)L_21), (Il2CppFullySharedGenericAny*)L_22);
		il2cpp_codegen_memcpy(V_1, L_22, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
	}

IL_009d:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_23 = __this->___scanner;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_23, NULL);
		if ((((int32_t)L_24) == ((int32_t)((int32_t)15))))
		{
			goto IL_0057;
		}
	}

IL_00ac:
	{
		il2cpp_codegen_memcpy(L_25, V_1, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_25, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_ParsePathExpr_mBE2BC751DBD11D920FC2770C921E1D0745673FEB_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_12 = L_3;
	const Il2CppFullySharedGenericAny L_21 = L_3;
	const Il2CppFullySharedGenericAny L_28 = L_3;
	const Il2CppFullySharedGenericAny L_29 = L_3;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_24 = L_13;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_25 = L_14;
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	memset(V_1, 0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	int32_t V_2 = 0;
	{
		bool L_0;
		L_0 = ((  bool (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_0)
		{
			goto IL_00bf;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_1 = __this->___scanner;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = XPathScanner_get_LexStart_m46AF18EFE511BF4CBFBF70CF57EA5EB9AD636A2B_inline(L_1, NULL);
		V_0 = L_2;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), __this, (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_4 = __this->___scanner;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = XPathScanner_get_PrevLexEnd_m2D64BDDFBBC6B7CFE354F45C2099F8B8FDC6B047_inline(L_4, NULL);
		V_2 = L_5;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_6 = __this->___scanner;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_6, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0067;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_8 = __this->___scanner;
		NullCheck(L_8);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_8, NULL);
		int32_t L_9 = V_0;
		int32_t L_10 = V_2;
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_11 = __this->___builder;
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_13);
		NullCheck(L_11);
		InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(6, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_12: *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_13: *(void**)L_13), (Il2CppFullySharedGenericAny*)L_14);
		il2cpp_codegen_memcpy(V_1, L_14, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		goto IL_00bd;
	}

IL_0067:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_15 = __this->___scanner;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_15, NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_00bd;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_17 = __this->___scanner;
		NullCheck(L_17);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_17, NULL);
		int32_t L_18 = V_0;
		int32_t L_19 = V_2;
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_18, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_20 = __this->___builder;
		il2cpp_codegen_memcpy(L_21, V_1, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		RuntimeObject* L_22 = __this->___builder;
		RuntimeObject* L_23 = __this->___builder;
		NullCheck(L_23);
		InterfaceActionInvoker5Invoker< int32_t, int32_t, String_t*, String_t*, Il2CppFullySharedGenericAny* >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_23, (int32_t)6, (int32_t)((int32_t)9), (String_t*)NULL, (String_t*)NULL, (Il2CppFullySharedGenericAny*)L_24);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_25);
		NullCheck(L_22);
		InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(6, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_24: *(void**)L_24), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_25: *(void**)L_25), (Il2CppFullySharedGenericAny*)L_26);
		NullCheck(L_20);
		InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(6, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_26: *(void**)L_26), (Il2CppFullySharedGenericAny*)L_27);
		il2cpp_codegen_memcpy(V_1, L_27, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
	}

IL_00bd:
	{
		il2cpp_codegen_memcpy(L_28, V_1, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_28, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}

IL_00bf:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), __this, (Il2CppFullySharedGenericAny*)L_29);
		il2cpp_codegen_memcpy(il2cppRetVal, L_29, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_ParseFilterExpr_m0F249A385831B8708917D3E7CF92BFB8561FD633_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_8 = L_2;
	const Il2CppFullySharedGenericAny L_13 = L_2;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	memset(V_1, 0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	int32_t V_2 = 0;
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_0 = __this->___scanner;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = XPathScanner_get_LexStart_m46AF18EFE511BF4CBFBF70CF57EA5EB9AD636A2B_inline(L_0, NULL);
		V_0 = L_1;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), __this, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_1, L_2, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_3 = __this->___scanner;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = XPathScanner_get_PrevLexEnd_m2D64BDDFBBC6B7CFE354F45C2099F8B8FDC6B047_inline(L_3, NULL);
		V_2 = L_4;
		goto IL_0043;
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = V_2;
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_7 = __this->___builder;
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (Il2CppFullySharedGenericAny*)L_9);
		NullCheck(L_7);
		InterfaceActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, bool, Il2CppFullySharedGenericAny* >::Invoke(7, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_9: *(void**)L_9), (bool)0, (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(V_1, L_10, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
	}

IL_0043:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_11 = __this->___scanner;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_11, NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)91))))
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathParser_1_IsPrimaryExpr_m0A9385CAF7C4A73358892DD3152DA4963F7CD8F7_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, const RuntimeMethod* method) 
{
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_0 = __this->___scanner;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)22))))
		{
			goto IL_0069;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_2 = __this->___scanner;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)19))))
		{
			goto IL_0069;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_4 = __this->___scanner;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_4, NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)36))))
		{
			goto IL_0069;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_6 = __this->___scanner;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_6, NULL);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)40))))
		{
			goto IL_0069;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_8 = __this->___scanner;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_0067;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_10 = __this->___scanner;
		NullCheck(L_10);
		bool L_11;
		L_11 = XPathScanner_get_CanBeFunction_mC85FE3671876A8523D967AFF98883A1FC3FBE844_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_12 = __this->___scanner;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		bool L_13;
		L_13 = ((  bool (*) (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
	}

IL_0067:
	{
		return (bool)0;
	}

IL_0069:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_ParsePrimaryExpr_m8DF087EB5EE6FF325D062695EC3AD4BFE272651E_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XPathConvert_t3A90240FEFC71BC81CF892E27D8FD75447484E04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_16 = L_10;
	const Il2CppFullySharedGenericAny L_32 = L_10;
	const Il2CppFullySharedGenericAny L_35 = L_10;
	const Il2CppFullySharedGenericAny L_37 = L_10;
	const Il2CppFullySharedGenericAny L_38 = L_10;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	memset(V_0, 0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_0 = __this->___scanner;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_0, NULL);
		V_2 = L_1;
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)22))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)19))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)22))))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_011d;
	}

IL_0020:
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)36))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)40))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_011d;
	}

IL_0032:
	{
		RuntimeObject* L_7 = __this->___builder;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_8 = __this->___scanner;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = XPathScanner_get_StringValue_m468A1E24F4204EB9612403A899F305FABA7CB196_inline(L_8, NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2Invoker< String_t*, Il2CppFullySharedGenericAny* >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_7, L_9, (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(V_0, L_10, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_11 = __this->___scanner;
		NullCheck(L_11);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_11, NULL);
		goto IL_0124;
	}

IL_0059:
	{
		RuntimeObject* L_12 = __this->___builder;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_13 = __this->___scanner;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = XPathScanner_get_RawValue_m84A64CEBD21224E9B8189606AA8800FD9ECF3902(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(XPathConvert_t3A90240FEFC71BC81CF892E27D8FD75447484E04_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = XPathConvert_StringToDouble_mBFB091D18D91BB58048193C994503765E244B726(L_14, NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2Invoker< double, Il2CppFullySharedGenericAny* >::Invoke(3, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_12, L_15, (Il2CppFullySharedGenericAny*)L_16);
		il2cpp_codegen_memcpy(V_0, L_16, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_17 = __this->___scanner;
		NullCheck(L_17);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_17, NULL);
		goto IL_0124;
	}

IL_0085:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_18 = __this->___scanner;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = XPathScanner_get_LexStart_m46AF18EFE511BF4CBFBF70CF57EA5EB9AD636A2B_inline(L_18, NULL);
		V_1 = L_19;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_20 = __this->___scanner;
		NullCheck(L_20);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_20, NULL);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_21 = __this->___scanner;
		NullCheck(L_21);
		XPathScanner_CheckToken_mC40A3EDACF1EF8314530E3B6BDAFCE283BE5E685(L_21, (int32_t)((int32_t)21), NULL);
		int32_t L_22 = V_1;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_23 = __this->___scanner;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = XPathScanner_get_LexStart_m46AF18EFE511BF4CBFBF70CF57EA5EB9AD636A2B_inline(L_23, NULL);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_25 = __this->___scanner;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = XPathScanner_get_LexSize_m91DAF5E99E3E2EFF4C9C905FBF6D8114AF4F7BFD(L_25, NULL);
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_22, ((int32_t)il2cpp_codegen_add(L_24, L_26)), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_27 = __this->___builder;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_28 = __this->___scanner;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = XPathScanner_get_Prefix_m797D3B93302BB564302346DC76353DE6FD4121B0_inline(L_28, NULL);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_30 = __this->___scanner;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = XPathScanner_get_Name_m055DE1221B1D0005F77861C0C41EB76134B05309_inline(L_30, NULL);
		NullCheck(L_27);
		InterfaceActionInvoker3Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny* >::Invoke(8, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_27, L_29, L_31, (Il2CppFullySharedGenericAny*)L_32);
		il2cpp_codegen_memcpy(V_0, L_32, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_33 = __this->___scanner;
		NullCheck(L_33);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_33, NULL);
		goto IL_0124;
	}

IL_00fc:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_34 = __this->___scanner;
		NullCheck(L_34);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_34, NULL);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), __this, (Il2CppFullySharedGenericAny*)L_35);
		il2cpp_codegen_memcpy(V_0, L_35, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_36 = __this->___scanner;
		NullCheck(L_36);
		XPathScanner_PassToken_m5D254A9BDDF09A650AF4BF560F5950A2359F8AAD(L_36, (int32_t)((int32_t)41), NULL);
		goto IL_0124;
	}

IL_011d:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), __this, (Il2CppFullySharedGenericAny*)L_37);
		il2cpp_codegen_memcpy(V_0, L_37, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	}

IL_0124:
	{
		il2cpp_codegen_memcpy(L_38, V_0, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_38, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_ParseFunctionCall_mD79809B99F752A7CD4AEA61ECD71C0FECBDF4E49_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
	const Il2CppFullySharedGenericAny L_25 = L_12;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 34));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_0 = L_0;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_1 = __this->___scanner;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XPathScanner_get_Name_m055DE1221B1D0005F77861C0C41EB76134B05309_inline(L_1, NULL);
		V_1 = L_2;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_3 = __this->___scanner;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = XPathScanner_get_Prefix_m797D3B93302BB564302346DC76353DE6FD4121B0_inline(L_3, NULL);
		V_2 = L_4;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_5 = __this->___scanner;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = XPathScanner_get_LexStart_m46AF18EFE511BF4CBFBF70CF57EA5EB9AD636A2B_inline(L_5, NULL);
		V_3 = L_6;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_7 = __this->___scanner;
		NullCheck(L_7);
		XPathScanner_PassToken_m5D254A9BDDF09A650AF4BF560F5950A2359F8AAD(L_7, (int32_t)((int32_t)21), NULL);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_8 = __this->___scanner;
		NullCheck(L_8);
		XPathScanner_PassToken_m5D254A9BDDF09A650AF4BF560F5950A2359F8AAD(L_8, (int32_t)((int32_t)40), NULL);
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_9 = __this->___scanner;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_9, NULL);
		if ((((int32_t)L_10) == ((int32_t)((int32_t)41))))
		{
			goto IL_008a;
		}
	}

IL_0053:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_11 = V_0;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), __this, (Il2CppFullySharedGenericAny*)L_12);
		NullCheck(L_11);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_12: *(void**)L_12));
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_13 = __this->___scanner;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline(L_13, NULL);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)44))))
		{
			goto IL_007d;
		}
	}
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_15 = __this->___scanner;
		NullCheck(L_15);
		XPathScanner_CheckToken_mC40A3EDACF1EF8314530E3B6BDAFCE283BE5E685(L_15, (int32_t)((int32_t)41), NULL);
		goto IL_008a;
	}

IL_007d:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_16 = __this->___scanner;
		NullCheck(L_16);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_16, NULL);
		goto IL_0053;
	}

IL_008a:
	{
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_17 = __this->___scanner;
		NullCheck(L_17);
		XPathScanner_NextLex_m8C16839197431AE5C1D2B1E382152E4A7A12B05D(L_17, NULL);
		int32_t L_18 = V_3;
		XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* L_19 = __this->___scanner;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = XPathScanner_get_PrevLexEnd_m2D64BDDFBBC6B7CFE354F45C2099F8B8FDC6B047_inline(L_19, NULL);
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_18, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_21 = __this->___builder;
		String_t* L_22 = V_2;
		String_t* L_23 = V_1;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_24 = V_0;
		NullCheck(L_21);
		InterfaceActionInvoker4Invoker< String_t*, String_t*, RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(9, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_21, L_22, L_23, (RuntimeObject*)L_24, (Il2CppFullySharedGenericAny*)L_25);
		((  void (*) (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		il2cpp_codegen_memcpy(il2cppRetVal, L_25, SizeOf_Node_tDCB694173C76DA64E8777235202AB0DC15486E0D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_PushPosInfo_mD787B3ADF67D2430B2414FA2E6781E11AA8164D9_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, int32_t ___0_startChar, int32_t ___1_endChar, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_0 = __this->___posInfo;
		int32_t L_1 = ___0_startChar;
		NullCheck(L_0);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_0, L_1, Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_2 = __this->___posInfo;
		int32_t L_3 = ___1_endChar;
		NullCheck(L_2);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_2, L_3, Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_PopPosInfo_m5CF860272BEF49D117823615212D27486F922513_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_0 = __this->___posInfo;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_0, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_2 = __this->___posInfo;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_2, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1_PopPosInfo_mA68B7BADA6E271C4C4EC1A480C42AB1A7314AE38_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, int32_t* ___0_startChar, int32_t* ___1_endChar, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = ___1_endChar;
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_1 = __this->___posInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_1, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		*((int32_t*)L_0) = (int32_t)L_2;
		int32_t* L_3 = ___0_startChar;
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_4 = __this->___posInfo;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_4, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		*((int32_t*)L_3) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1__ctor_m76AECB73E510E8C57823E51004C42E8B222FF0AD_gshared (XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_0 = (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*)il2cpp_codegen_object_new(Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1(L_0, Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		__this->___posInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___posInfo), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathParser_1__cctor_m7326701A9E1BE1D33E0D3DEE705CB8D8CECE4FCD_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____EBE4AD32BDAC76AF58B11BC22B524794675E690378339B833FB03870A4E1A5B8_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____EBE4AD32BDAC76AF58B11BC22B524794675E690378339B833FB03870A4E1A5B8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___XPathOperatorPrecedence = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((XPathParser_1_t70263C1831311EA4A3DE3541DC1B9994C02E553B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___XPathOperatorPrecedence), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathScanner_get_Source_m7B9204C3A3F87CE4C33304C455115A0905AEF99D_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___xpathExpr;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathScanner_get_Kind_m83D6508DA789BB1B66924C86D9FB3550B876737D_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___kind;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathScanner_get_Axis_m95BF56D2E50F18371695F34DCCCC650485E298A6_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___axis;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathScanner_get_LexStart_m46AF18EFE511BF4CBFBF70CF57EA5EB9AD636A2B_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___lexStart;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathScanner_get_PrevLexEnd_m2D64BDDFBBC6B7CFE354F45C2099F8B8FDC6B047_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___prevLexEnd;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathScanner_get_Prefix_m797D3B93302BB564302346DC76353DE6FD4121B0_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___prefix;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathScanner_get_Name_m055DE1221B1D0005F77861C0C41EB76134B05309_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XPathScanner_get_CanBeFunction_mC85FE3671876A8523D967AFF98883A1FC3FBE844_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___canBeFunction;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathScanner_get_StringValue_m468A1E24F4204EB9612403A899F305FABA7CB196_inline (XPathScanner_tB574137E309554982F71D04D4C7E1302A7B99ACF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___stringValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 Enumerator_get_Current_mAFFBCC2C9328A2A9CBD681C70142545A7918FF9A_gshared_inline (Enumerator_tA347CB2CA1F3A2DE23C72CAC5F42F4A7016F82F0* __this, const RuntimeMethod* method) 
{
	{
		UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDD9B22FA1618C0EAF3B4E9A7B3BFE1D521BF1020_gshared_inline (Func_2_t17BBAD6372650C102B947A15C77F7A671565A7D9* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserGetPoint_tCEE0B8C0832DF5EFA89DB3EC4F20DBEFB88D3A16 Func_2_Invoke_m9431C2CF188E2C600CA6BD9FFDF5C15A25697A40_gshared_inline (Func_2_t791F6D9871C35F8D49726E6F74826A8FB07E434E* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) 
{
	typedef UserGetPoint_tCEE0B8C0832DF5EFA89DB3EC4F20DBEFB88D3A16 (*FunctionPointerType) (RuntimeObject*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserIntimate_t6757F190A8DA41A93CA46F3BCC8714FE01EEA228 Func_2_Invoke_m1DCD518EC3C91151C1ACDCABFFB601FB95EF7CB0_gshared_inline (Func_2_t99D9D9A3163B1E763A14F54A9D5E3B9D87E90A38* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) 
{
	typedef UserIntimate_t6757F190A8DA41A93CA46F3BCC8714FE01EEA228 (*FunctionPointerType) (RuntimeObject*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserItem_tEA3B3B1B525AEF9C5E4D6EC5F888143C524B0FBC Func_2_Invoke_mC8669FFCCB1AB5798DD44EC73981F5BCD55D0835_gshared_inline (Func_2_t21A20CDF5950C9ABCCF024B6FB4FB0CAF9C35C6B* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) 
{
	typedef UserItem_tEA3B3B1B525AEF9C5E4D6EC5F888143C524B0FBC (*FunctionPointerType) (RuntimeObject*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserLoginBonus_t03C5D2BA531947B54667752B718DC8BBDEF6F41C Func_2_Invoke_mFBC99868C7C030993D3E609A5160FE1F8DF9E558_gshared_inline (Func_2_t531C3437A4D6476833BE2E5D71223983CE2046EA* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) 
{
	typedef UserLoginBonus_t03C5D2BA531947B54667752B718DC8BBDEF6F41C (*FunctionPointerType) (RuntimeObject*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserMap_t1538A599E82D18E8DE83C94AF787BC13397A29CA Func_2_Invoke_mAC1420115313C2730209BBCC2FD1E1F7737DE9FE_gshared_inline (Func_2_tEC3467F42FF5CB02C087D307FBFD3A4B50C5FAAA* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) 
{
	typedef UserMap_t1538A599E82D18E8DE83C94AF787BC13397A29CA (*FunctionPointerType) (RuntimeObject*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserScoreRanking_t8C154659FF431E2ED944CE8818CC663229FDB569 Func_2_Invoke_mF973C512DE1493D32FA0038E309388B7EA125F85_gshared_inline (Func_2_t55B0B91C74DCF10CDF33726DE0B886C83190952C* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) 
{
	typedef UserScoreRanking_t8C154659FF431E2ED944CE8818CC663229FDB569 (*FunctionPointerType) (RuntimeObject*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserShopStock_t2DE3C944A8659BADCDEF5C5B33AA53158D91C7B9 Func_2_Invoke_m6F3F05AFBA87FAD848387D9E2BB05A29AFEE412D_gshared_inline (Func_2_tB63767E9488597536A6F5A27D29DEC5131E58564* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) 
{
	typedef UserShopStock_t2DE3C944A8659BADCDEF5C5B33AA53158D91C7B9 (*FunctionPointerType) (RuntimeObject*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 Func_2_Invoke_m2464126606755562AE457797265653ECE4AAC4FC_gshared_inline (Func_2_t1D44907DF933F86215B29184EB5BAA310A31B73F* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) 
{
	typedef UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 (*FunctionPointerType) (RuntimeObject*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserTradeItem_tB67C1136122F89963C2F674EACBCB9CA5FC063A9 Func_2_Invoke_m1E94EF0D36E7AA4F7C691DF228D83F92F946324A_gshared_inline (Func_2_t20E88C14C633E3F5B468584B205973174515C5BF* __this, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23 ___0_arg, const RuntimeMethod* method) 
{
	typedef UserTradeItem_tB67C1136122F89963C2F674EACBCB9CA5FC063A9 (*FunctionPointerType) (RuntimeObject*, UserTicketLimitDate_tFBD491412167AAF9C5CF3A7968B4F0EFF644FA23, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
