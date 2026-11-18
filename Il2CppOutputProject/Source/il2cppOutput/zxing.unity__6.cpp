#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3;
struct Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5;
struct IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29;
struct IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383;
struct IList_1_t8286A7CF7BFF172739934A9E72BF4A7E3B631A11;
struct IList_1_tE293EDB493543AB061BD07E172361F5D611E4984;
struct LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C;
struct LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71;
struct LinkedListNode_1_t1211169678E9DBB8506B482F42AFBDDE328AA21B;
struct LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76;
struct LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145;
struct LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StateU5BU5D_tFB790EDE12A1C3D2BE1F1D8FC82A98160416890D;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366;
struct Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6;
struct BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190;
struct BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B;
struct BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7;
struct BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91;
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279;
struct Exception_t;
struct GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0;
struct GenericGFPoly_t85EB6B1C74EDFAA906625D971CBB4276BB28DD43;
struct HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636;
struct ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97;
struct State_tE3C6505B0E83E2D10113F91E853B22093CD5273E;
struct String_t;
struct StringBuilder_t;
struct Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02;
struct DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697;
struct Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____1A8F4E562C2DABE4728E98773DB84DA4BD971C37D436C5750CDD268EA5910902_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____223D2602D7E760EDC918D74F3974774438D5D0E671A3C5BC2D09720BA091D1C1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____25E47AD2FC8E5BB15C5CE4B2349FD6FF82F52EAEC76E84DB445C957A97D86F9A_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____31C335D45EE24E3E73C8752FF336B474B595D625C9752E20124AD00ABAAB6584_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____347DEEE146787EA01C48F2EDA088FFDAF23BB2444A747DD23B11FDA66098C05D_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____45F364B6BC0DA851AB1F1F74FF755A876A1B777D30FC741AFA07D991DEEF17FB_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____8A019BA8F105330945DEE7EB1C1A8F0FD7A6ED50EC1DA572C608744C0B3E24EC_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____CC7FED0F1EECD78D8413D37FCF850C4C60B8178D8EDEE43D9A5158C2CC83D140_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral064E2EB96BFBA4435F9EA2F79B02C0B9259C8FB4;
IL2CPP_EXTERN_C String_t* _stringLiteral162C18A04EA026C9FE3B8E115B781D4E2A0DD47D;
IL2CPP_EXTERN_C String_t* _stringLiteral197796BCD4D9C30711027295FA16517AFF1BE589;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral32725D282232F05FFA02D73D5E41117CB098398B;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B;
IL2CPP_EXTERN_C String_t* _stringLiteral44FEA7A1E076A3D6A4756F1FDA9D67ACD41F2498;
IL2CPP_EXTERN_C String_t* _stringLiteral56B1BA74374AD8DF80D155ECBB6EEC7BFF94E852;
IL2CPP_EXTERN_C String_t* _stringLiteral58979FA49C7A5A263CEC02999EA7EAA4A63DA304;
IL2CPP_EXTERN_C String_t* _stringLiteral6803850F799E6ED7D9874D83FFC8E1A277357256;
IL2CPP_EXTERN_C String_t* _stringLiteral685E2A6F0ABD047E3F1E09DAE2EA394A4EC122AE;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral74DD70BB5597A61452EE717610A0AD7514499D2F;
IL2CPP_EXTERN_C String_t* _stringLiteral8A7C2EA52CC29D9EFF9EB9AEA82AA1456542F7B4;
IL2CPP_EXTERN_C String_t* _stringLiteral8DEFE38892D6ECBD587674E5A0EC40F37474683C;
IL2CPP_EXTERN_C String_t* _stringLiteral9DB622366B79AFA1D2683BD69D32576F36ABA091;
IL2CPP_EXTERN_C String_t* _stringLiteralA0F9DC980EFE5ED49923AE24541EBADAE4582156;
IL2CPP_EXTERN_C String_t* _stringLiteralB4028BD3C005C2DCB9F8A7503F1D241571953900;
IL2CPP_EXTERN_C String_t* _stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B;
IL2CPP_EXTERN_C String_t* _stringLiteralC29BB14BB0743ED84026186CCD7F48F86D00A0A3;
IL2CPP_EXTERN_C String_t* _stringLiteralD033B5766A1B644BF791C9396B14A543AD25C5D4;
IL2CPP_EXTERN_C String_t* _stringLiteralDDB3907A0EDF019AE91C840CB90A31E145AAB0C6;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF4E73755B7B3ABC61F614B6B3404904BDC750906;
IL2CPP_EXTERN_C String_t* _stringLiteralF6141C4AB08557C802E0F9F9EB4A6119F1E484C6;
IL2CPP_EXTERN_C String_t* _stringLiteralFE0551951E4C48B5FCD9FF681A6AAE721895D771;
IL2CPP_EXTERN_C String_t* _stringLiteralFE2BF525BE84B3D6B88D844591311E684F7987A3;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_CompareTo_m23A06863E338B1435F4DB0B623DF06337E7FC79E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_Division_m57071483D87761718875D25F95508E911AC2562C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_ExtendedEuclidGcd_mA66045576D5E8F2D4868B26D5F45E0DC738B2D1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_Gcd_m6150C8563FB7FB08249BCA7B6D149513B52C7066_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_IntegerSqrt_mA422682557BE462264E933DFC977CB4CC9346AB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_ModularExponentiation_m0AA1B5ED63202F564F51DD28F90E5F0DB3D0CF12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_ModularInverse_m9EE96E63E2AF7266A20D4FAA2EBE541E12496477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_Modulo_mD40F396E73AB8D0D705B181B7114C895BA51E7F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_Power_m7BC9759852A80EC800C99A65E7416CF23853C8D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m999BA38986260D19AB01FB3FA910EB66CECC2B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_mF3D1FB073688CCB558884B9CA0304C41C0E16D83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_mEFCFA9C3A001B40ACCD3A98FA215D51582A818F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_encode_mD2CA9E51692636988CF9F3069FB8D0251C2785BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m919D800AE959E626F6852A5973F9717DD6972AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB4A3B09F08984D5F30E792CF521B914AFC3B82AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC8A1C43E022AEED5D184DBFF0341EEA142AFBA4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m28B442E01581BF12D5FCD336A7EDC5B06557C5F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m32AC4B8BA1BA03A4718DBAA581323E2665300758_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA7B575B7C368C0E65640C751580B7BF5C32C26B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2834ED4F986309D222B713E76BEC546C5582E77E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m79F5915848267C47D94B643711512694201CE1A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B378D23D57FA7F888EA61DA6BB0989C97BDCBC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddFirst_m7471223757B061A1F27F17A5C3363ABBE037DEA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddLast_m1C054170CA970A672433FCD495781D76728EEE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_GetEnumerator_m594ECE72AB487FC1A61344B4BBF168057A2004C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_GetEnumerator_mB92C9FCD90869C64C6345961A33C236C99D6A2F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_Remove_mD556C19EC89E137F75116D2DBE8636E7DCFFD7BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_mE1443CF0845DF95D91DCEFF2D4A66F6CD78740ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEEFA0682FF21B1AD6209A6CEE2692423676C0DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8EF78FF0F61C840189C1D984D94640875848FD0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m23D8CEB4D54B73CD12D4987C6B682FAEB4966479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9A4ECE45E618A9ECCEFFB1238D602846ED65CBCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3  : public RuntimeObject
{
	RuntimeObject* ___items;
};
struct LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71  : public RuntimeObject
{
	LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* ___list;
	LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* ___next;
	LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* ___prev;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___item;
};
struct LinkedListNode_1_t1211169678E9DBB8506B482F42AFBDDE328AA21B  : public RuntimeObject
{
	LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E* ___list;
	LinkedListNode_1_t1211169678E9DBB8506B482F42AFBDDE328AA21B* ___next;
	LinkedListNode_1_t1211169678E9DBB8506B482F42AFBDDE328AA21B* ___prev;
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___item;
};
struct LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145  : public RuntimeObject
{
	LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* ___head;
	int32_t ___count;
	int32_t ___version;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E  : public RuntimeObject
{
	LinkedListNode_1_t1211169678E9DBB8506B482F42AFBDDE328AA21B* ___head;
	int32_t ___count;
	int32_t ___version;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797  : public RuntimeObject
{
	StateU5BU5D_tFB790EDE12A1C3D2BE1F1D8FC82A98160416890D* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D  : public RuntimeObject
{
};
struct AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366  : public RuntimeObject
{
	bool ___U3CisCompactU3Ek__BackingField;
	int32_t ___U3CSizeU3Ek__BackingField;
	int32_t ___U3CLayersU3Ek__BackingField;
	int32_t ___U3CCodeWordsU3Ek__BackingField;
	BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___U3CMatrixU3Ek__BackingField;
};
struct BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bits;
	int32_t ___size;
};
struct BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91  : public RuntimeObject
{
	int32_t ___width;
	int32_t ___height;
	int32_t ___rowSize;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bits;
};
struct Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5  : public RuntimeObject
{
};
struct GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___expTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___logTable;
	GenericGFPoly_t85EB6B1C74EDFAA906625D971CBB4276BB28DD43* ___zero;
	GenericGFPoly_t85EB6B1C74EDFAA906625D971CBB4276BB28DD43* ___one;
	int32_t ___size;
	int32_t ___primitive;
	int32_t ___generatorBase;
	bool ___initialized;
};
struct HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___text;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636  : public RuntimeObject
{
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___field;
	RuntimeObject* ___cachedGenerators;
};
struct ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB  : public RuntimeObject
{
	float ___x;
	float ___y;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytesX;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytesY;
	String_t* ___toString;
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct State_tE3C6505B0E83E2D10113F91E853B22093CD5273E  : public RuntimeObject
{
	int32_t ___mode;
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___token;
	int32_t ___binaryShiftByteCount;
	int32_t ___bitCount;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502  : public RuntimeObject
{
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___previous;
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
struct DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02  : public RuntimeObject
{
	Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* ___digits;
};
struct DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697  : public RuntimeObject
{
	Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* ___digits;
};
struct Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A  : public RuntimeObject
{
	int32_t ___U3CXU3Ek__BackingField;
	int32_t ___U3CYU3Ek__BackingField;
};
struct Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22 
{
	LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* ____list;
	LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* ____node;
	int32_t ____version;
	RuntimeObject* ____current;
	int32_t ____index;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D 
{
	LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* ____list;
	LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* ____node;
	int32_t ____version;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ____current;
	int32_t ____index;
};
struct Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC 
{
	List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* ____list;
	int32_t ____index;
	int32_t ____version;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ____current;
};
struct Enumerator_t7F05C70F59FF108604A8D701AD811C9BB6BD8B40 
{
	LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E* ____list;
	LinkedListNode_1_t1211169678E9DBB8506B482F42AFBDDE328AA21B* ____node;
	int32_t ____version;
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ____current;
	int32_t ____index;
};
struct BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110  : public Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502
{
	int16_t ___binaryShiftStart;
	int16_t ___binaryShiftByteCount;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
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
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97  : public Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502
{
	int16_t ___value;
	int16_t ___bitCount;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10_t3A80AC478454019A748956229C2284D48202BABF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t3A80AC478454019A748956229C2284D48202BABF__padding[10];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1024_t6EC6A3E7E7DB0A7072248FCD7228161BB33DB0D5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_t6EC6A3E7E7DB0A7072248FCD7228161BB33DB0D5__padding[1024];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10790_tB802E75CA83AF29051B0D46A2EB770A12F35FB97 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10790_tB802E75CA83AF29051B0D46A2EB770A12F35FB97__padding[10790];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D11148_t06B1CCC26155D364A3BFD9E3AFE4BA730F14BF39 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D11148_t06B1CCC26155D364A3BFD9E3AFE4BA730F14BF39__padding[11148];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D112_t08E002F629547C1B13AC215259A3DE2782AD030D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_t08E002F629547C1B13AC215259A3DE2782AD030D__padding[112];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F__padding[12];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C__padding[120];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D124_tF2056A147B3FEE8FC6D079B531D5E005E0BF000B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D124_tF2056A147B3FEE8FC6D079B531D5E005E0BF000B__padding[124];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_t68BAA10EC835232A7650BF2054DB502B0ECFFFCD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t68BAA10EC835232A7650BF2054DB502B0ECFFFCD__padding[128];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D132_t17CA2427A8420E48002298798ADF94E69DA8DC9C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D132_t17CA2427A8420E48002298798ADF94E69DA8DC9C__padding[132];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D136_t90CF912B9341DF136CE5AF373B04F41182A5AC50 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D136_t90CF912B9341DF136CE5AF373B04F41182A5AC50__padding[136];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D144_t88DBA1A06BA52C64551CAA28CF6A700C7276E4CC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D144_t88DBA1A06BA52C64551CAA28CF6A700C7276E4CC__padding[144];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D148_tB9B7F92C7973454BB2C36DDDB445FABCE8E4B7FA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D148_tB9B7F92C7973454BB2C36DDDB445FABCE8E4B7FA__padding[148];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80__padding[16];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D168_t8E80F36BC1B7BE7B01D5651DE7C69C38C8CA6DCB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D168_t8E80F36BC1B7BE7B01D5651DE7C69C38C8CA6DCB__padding[168];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D176_t554DEA5CFD2155C203C573F2A2A34ABCC790AF7F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D176_t554DEA5CFD2155C203C573F2A2A34ABCC790AF7F__padding[176];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D18248_t6D09868CB7DB88727BF00049D2F83AB5FB06EBDE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D18248_t6D09868CB7DB88727BF00049D2F83AB5FB06EBDE__padding[18248];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D192_t2AC98CA4C20A542AFC875CA106D5FB26658E16AF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_t2AC98CA4C20A542AFC875CA106D5FB26658E16AF__padding[192];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22__padding[20];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2048_tE25931E1FFD4C943523B4FB281CBCB2EEBE2779C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_tE25931E1FFD4C943523B4FB281CBCB2EEBE2779C__padding[2048];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D224_t5755492DB7BFC8BEE69DDA8A67082319B835C4E2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D224_t5755492DB7BFC8BEE69DDA8A67082319B835C4E2__padding[224];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE__padding[24];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D248_t285FA6A194E9054B5B7F2B34D8F1125D3AE13F12 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D248_t285FA6A194E9054B5B7F2B34D8F1125D3AE13F12__padding[248];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D256_tD597FA54545AF0CB15679AB3C10F2858019C8919 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tD597FA54545AF0CB15679AB3C10F2858019C8919__padding[256];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D272_t7A195C0F46D93DA62E7FC125F4AE9EF30B8F384F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D272_t7A195C0F46D93DA62E7FC125F4AE9EF30B8F384F__padding[272];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9__padding[28];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D30_t3EA034A6F637FDA88A9044A38BA22934CD5DE0DE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D30_t3EA034A6F637FDA88A9044A38BA22934CD5DE0DE__padding[30];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42__padding[32];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D36_tD0A59E81D3E66EAA0DEFA5F2717B8BBF2D14E549 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_tD0A59E81D3E66EAA0DEFA5F2717B8BBF2D14E549__padding[36];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3716_tE272F754833B2DA81A2BAF5EDD2CB30C63CD089E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3716_tE272F754833B2DA81A2BAF5EDD2CB30C63CD089E__padding[3716];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D384_t1A1F076C04E5220ED1284BA358D4D0B5A803E3B5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D384_t1A1F076C04E5220ED1284BA358D4D0B5A803E3B5__padding[384];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248__padding[40];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D44_t77759323ECAE5CC41EE3A7CC9D0E80B216875331 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t77759323ECAE5CC41EE3A7CC9D0E80B216875331__padding[44];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D48_tE5607E48123D57172D8B5D881AE877E860F7CBC4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tE5607E48123D57172D8B5D881AE877E860F7CBC4__padding[48];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D50_tCC7AD53A7C30A296F27DE921152C240C04AC9B51 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D50_tCC7AD53A7C30A296F27DE921152C240C04AC9B51__padding[50];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D512_t63E611E57DB9137D2BFD25125E263460A665DF27 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_t63E611E57DB9137D2BFD25125E263460A665DF27__padding[512];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D54_tE8A2E134BEFA0AD9FBCAC8C0FA853BFB9195E7D0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D54_tE8A2E134BEFA0AD9FBCAC8C0FA853BFB9195E7D0__padding[54];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D56_t66702F042D53810B18AD6DD1A9A0C566EB2EE696 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_t66702F042D53810B18AD6DD1A9A0C566EB2EE696__padding[56];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D58_t3C46FFE3827C7AB4799AD6E9E054EE9BAC8E54B3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D58_t3C46FFE3827C7AB4799AD6E9E054EE9BAC8E54B3__padding[58];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2__padding[6];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_tB36AA7DEECCDE509AD8E129D91B108BEBB2938D9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_tB36AA7DEECCDE509AD8E129D91B108BEBB2938D9__padding[64];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D72_t708588A5E342FEDE2E7BBDA6EEAC365EE84CFEE2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t708588A5E342FEDE2E7BBDA6EEAC365EE84CFEE2__padding[72];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D80_t7D8CE215BC3C73CA96CE12287304D5232720B984 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D80_t7D8CE215BC3C73CA96CE12287304D5232720B984__padding[80];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D9_tA9EA4D9A3345D9A71FF7DC176D791EC5F1C3740E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_tA9EA4D9A3345D9A71FF7DC176D791EC5F1C3740E__padding[9];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D90_t72BB402560A26FD4B6D7466FC341F4DE5F28A3D9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D90_t72BB402560A26FD4B6D7466FC341F4DE5F28A3D9__padding[90];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D96_t9CD906CB1D7B605081EDC2DE3DF5BF2ECBF5272C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t9CD906CB1D7B605081EDC2DE3DF5BF2ECBF5272C__padding[96];
	};
};
#pragma pack(pop, tp)
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
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Sign_tC7476AAE4DCD89D653E5BC5E27AD0AD2980EB038 
{
	int32_t ___value__;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6  : public RuntimeObject
{
	DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* ___digits;
	int32_t ___size;
	int32_t ___sign;
};
struct BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190  : public RuntimeObject
{
	DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* ___digits;
	int32_t ___size;
	int32_t ___sign;
};
struct BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B  : public Exception_t
{
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797_StaticFields
{
	StateU5BU5D_tFB790EDE12A1C3D2BE1F1D8FC82A98160416890D* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D_StaticFields
{
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___018A19DA611E24A75122AB7F8638B900202C48C7ACDF482A10C7017E56EA1B0F;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___01D382070575DCF0FE01331D331575280321D7F09C9CAC24673BA181A2F732C1;
	__StaticArrayInitTypeSizeU3D272_t7A195C0F46D93DA62E7FC125F4AE9EF30B8F384F ___031A7DAB4A9DA871178C39A60B07218F323F2FFF0B20515E960157325A736FA5;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___03AFB9095D050E297BBAB2F86D9B867378EA675884180C8984CE0DCE947F3635;
	__StaticArrayInitTypeSizeU3D30_t3EA034A6F637FDA88A9044A38BA22934CD5DE0DE ___048F1C6BA9ABEEE037650E52B43535B87F5D0E33A17E5963078DACC7C730B531;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___04B8238B8817C8D6A2EC59A0CF6831D27FF30B5E0B1541599E0D433BDF8E6DCC;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___058136CC1E0E3BC635D71D3CB6C90CCA260B40324627991E938F59612D216948;
	__StaticArrayInitTypeSizeU3D30_t3EA034A6F637FDA88A9044A38BA22934CD5DE0DE ___05CC43EDCFE1162519DBE1AF7E1335D1DAF982239BCF8053E6105AB2E8661271;
	__StaticArrayInitTypeSizeU3D512_t63E611E57DB9137D2BFD25125E263460A665DF27 ___072A033D360FB1B422E89181C3089B4EB42C4C1DC16226CEC6B76252E78CCC95;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___0755D41A7E6483FE002E8A721F4AC00C2C9BFFFDBF036DC8BF5C720DCCD5558E;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___07D3741213269F079A9FF9B5021B5D06B8CE4D24E84DD85F068991ED352DEFC4;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___08008FE38F6DD9C8CF08EEAA27DAEC72C63D1FBE62A7664617837B7FBE3579DF;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___0923B8F138B2EDD9A1C360BA61E84ADDB537E2B82F9F14F1ADC291CBEAC90EA1;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___0972EA0FC33C85A08C0CB08E9E3A13D70F7C57215ECD0F2F813304AEDBC48A2B;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___099049BB630E06D6F5F9ABE2F3F256E9A1D41A35D4A218832CD6B4651A3FDDAE;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___09FC02D06A518D6A2E42057CA223013CE52E398FB680414062691AA290DA597D;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___0AEC6048672FB3B9BA52C4058EAF228C43C1735163092E53FE244601BEA9D8BA;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___0CD52975D68D04335BC1B147D61D749B87BB641972CE633EDFB5C39C37ACFC17;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___0D29B9AA3D0E997B3CF4FEEB2CE219F2DEEE880AD5451E149A63F42F95B62F64;
	__StaticArrayInitTypeSizeU3D48_tE5607E48123D57172D8B5D881AE877E860F7CBC4 ___0DA449C0FF1FEA38DEDB3CBF33D6EA0BAC52B769108DFBFFC3B3FFBE2BEA62B6;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___0E5A9DA19B5F6C533C7A3FE96B89E352628918F0528547181D6A790A245AEE37;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___0E69E2878FF4865846511AD0F6C3CDFCD35124DA9CBC2DD2FFA9926E5225681D;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___0EFBE15675AE6B086C3E0262CD75F823C7F77CA53A65B42D8B515B7469763CD3;
	__StaticArrayInitTypeSizeU3D54_tE8A2E134BEFA0AD9FBCAC8C0FA853BFB9195E7D0 ___0F326F6333970A0EE0B70548F659019839F42A0D35A4065BB89C5C0973D71EC0;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___0FD1FEF0F55461833DC1732C3CF2BF1D560CE93949C628358451972E2E4DD083;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___0FD23C7C3687A528DA543E34841C6DE85AD4610511D1A1A741B9A7B5E7354FEF;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___0FE5EA953905A7E632F48916BEE4115FA1BC91A8B14BDD57F57CCF3C79F11926;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___10236EF2156BE2047BD3377ABA7937F2102CBE4DC8A927072D302A7E2CEA8F14;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___120146F23536CA41FF3D095892F4AEE1412D96B751FA67D465F45D6A9C1B35BA;
	__StaticArrayInitTypeSizeU3D36_tD0A59E81D3E66EAA0DEFA5F2717B8BBF2D14E549 ___12882299078C85629712D32DC5C8A7585D76A7728B966688FE8BF2E24D5D3EC5;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___13725726F438CF735A00F646A3C0489D18FB4A297067C0186DD358DF4937ECD1;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___13C2A8B2FA10F7CD55272F4FB8F76348444562D66EB8F42C374D51825722C6A2;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___14164DB6AE6DD908B1A17BE450277EF3355DF63A8311EBB056FF03477957D69D;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___1577DEEA3D606B9333A6C16EDC4C38AD182F37F459FE5D2F8BAFB9C03C81B58B;
	__StaticArrayInitTypeSizeU3D64_tB36AA7DEECCDE509AD8E129D91B108BEBB2938D9 ___172272A31C68924D4492AD97C56E7B6989487DDF8D4691C6964EA08403561E91;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___17D36E5A2AD75C191F070405139EE1FAF2DAC6DDEC515605DBFCCB65D1CBA620;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___17EB2D7A14A7305A9CAFC3C9DDFB7189A8EF373A02DA385C379800BFDC952E9A;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___18045443A61D3E6F181335D3BF551A22980853C1E94009B0DD2A79A9279287F4;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___182FE6A6D2E6DF33EF2AF690D41FD78B3BE0CEA43D4E1AF5B2614A02E4E04507;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___195C23306CC1AC0CE60290FCBF363E8A054A493D31F26AE959C4F93B9032EB56;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___19D1DEB92599D0859647A8700314DD2D735B5B00B038278E456EDD676CA38687;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___19F62F45090513D31BFE4B2760AA4C0C9FED0DC89C824BA8788EBAE7DAA58CC2;
	int64_t ___1A408B5C9FB225A7230CC9434D8E38506A1C4E3E5A1471598F98F9B5326DA3F9;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___1A7A05BF60C95989ECB9F9710200B8FF883A46289813087969055CE6B6A4F9AC;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___1A8F4E562C2DABE4728E98773DB84DA4BD971C37D436C5750CDD268EA5910902;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___1B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___1CCF6C0CE61BFFCCA95581F68036B911D3C95F7E3E1486121AE92C688FDA02B6;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___1D7C51C2DFB3815F118B7EA33BFD0C75F5251A7AD77D0E533D82694EFAF77250;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___1F5BBECF6766899B8129CD725DEDD69198C57C1DA1659815ECF08F793CD74184;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___1FE6C4DC18E85E72ED243CA7112D66D156196F93B91C0D79C284C2A25605B9C2;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___2219F43B7ECE977659BDE826A95F92A74A8967AFB37AFF87C51992D2B3CDDA55;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___223D2602D7E760EDC918D74F3974774438D5D0E671A3C5BC2D09720BA091D1C1;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___236B40419B78D6875ED1777CBAA8239EDBD590ABB5984DC20CAF6025406CD41A;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___23BBAD722E68CA6E471CB9A92B60F129B3EDFAB520DBDCFA37A5E35F53DC467B;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___23CD6D0B6979506A1F632C96C0D955183FFA5B396ADB1FECD27EBB7C716CCAE1;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___246FE9DD05C396E40CA5A049DF92840B57E2B7E774419C0332D6C72885A65D02;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___24CA1A9EB94E3FBFE3297337ED4551BB4A6BE33A80C2806D9228F669FC7CD3A6;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___255F6A73A6E636371F66D82AAE4B3DAEB58920D7CFC3DF6BD21B0BC8FB75EDFE;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___25E47AD2FC8E5BB15C5CE4B2349FD6FF82F52EAEC76E84DB445C957A97D86F9A;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___25FA2D49BF8F75F41CD89C29BDA5156E28CBC531FE4BADD44984F087B0443B34;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___26C545B95F17016F053F61ED58396AB398DCC938541BF821A58F9A3172FA6D85;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___26FB6702A18E7D0957DABD387ADF16224EE29E7621C382DBD80ADC87A54C2A87;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___275480D553DA165EBE66E43A97468CA4CB9F11726F5F7C32C0B5FBE7F33940A1;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___27A9AA74316728E24981CD3CA2DA4A7E9C847C3EF43796D6C1B2FE4067D65913;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___27CC37683116A321F4C03B0D7015ACE1FD3B8F258E30AC673D40FBD6D27142C5;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___29A05F6D876C04FC16B06D636BCFE9BDFD13ADBE58379648F5E56F2544979BC1;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___2A59B4E5B0B951A4D482BB2F7EB19895CA52774D9EE40ACB52368E92562FE353;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___2A723B9FCB382FDF7554955D78CDD6EB2F045105ABEEF9053AF538AB954F50A2;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___2DBDEBA00B1457645CBE9B424870A130245DFACFE7ED475D9B75F139F6657F9B;
	__StaticArrayInitTypeSizeU3D3716_tE272F754833B2DA81A2BAF5EDD2CB30C63CD089E ___2FD9F61496C31BB58FD6C416932CBE892EAC01B45F793F108E72E508E1D7275F;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3025292A422A82F39DF287AE586AA96C66B426EBC885D0DB9F375307B700CF26;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___3184A6E5EC4D9DBB4FD240E5D105E90FEC211DC6DAEC4CE88EE0E943487B9049;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___31BC1949C696C3EA72B1C8971B890B4ACD30B64C2243DA6D15F8D4B29B2BE63E;
	__StaticArrayInitTypeSizeU3D112_t08E002F629547C1B13AC215259A3DE2782AD030D ___31C335D45EE24E3E73C8752FF336B474B595D625C9752E20124AD00ABAAB6584;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___326A8CA97825794CBE04EB7E9AC623ED0335ADA08FEC52DF0140973F3C11BF48;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___333EEBA4755BA5655F1E167AC9A194B7A31FD702D0C906EA0C7653BA64F64AC3;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___347DEEE146787EA01C48F2EDA088FFDAF23BB2444A747DD23B11FDA66098C05D;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___34EDBD138605A3D78925D5D15761E45ECC6C14EBFBEF655552AD8203B19EFED5;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___34FE7523D761357A8A0DE3DA82E1C7DDF71B8514A2FAAE4E4987BA78EFFDC42B;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___35E3962D353487BAC8C20382B68B16D946F11EF9D1652B924C17828EB66B8987;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___376FEC89C1DDFBDC7A11B73B88081D866CCD5482393C738AA1CDF96698A7E63C;
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___37E293668894EFC2772598381869A68625AA8E88DF1BAF5A5B4D8CA610B82A7A;
	__StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 ___3986C22E68642385C1AD4952D2CAAA099E7AEAD5D256CF29AB70FFEB2AF7B90D;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3996041EA52DBFCA6404987AF2F578A31BEE64AFA72F6A37068C1A4F4F3C74F7;
	__StaticArrayInitTypeSizeU3D64_tB36AA7DEECCDE509AD8E129D91B108BEBB2938D9 ___39E265F2471EC546352DFF702DAB30438EDB4EC16476177FFDE70686A10D7BA4;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___3A74D57482BD905DA0DBEF3CF35E1B89409A1FD7E186D2471D0D29823C193AE7;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___3A9BB11520249C4F2B1BCA94DCB2D9205720C9398D1A65D64160B02F289703D8;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3C2488D83E1226EAFB83751D49CCD75EA105FC327A5484557DF8E24E4AA188BF;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3C8EA24643709757EB8109CF5AB8FEED8AB1C216672478D85BDEFE8A6133CCA2;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3CAE317EBA02EF12600199FA2D78DFE083C54BE83893BA7E395E36F69EAF8541;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___3CF59A29A6F8B44D23BBEC6DACCD8965E5220C2D4781780A30220CB6A92C0C70;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3E3D5EAB67047C0BA6007007F9B33E31AD46F89A1491E9F92D1A0C8BF84B7E1E;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___3E953A068B94D3C5FDD4B4CA444ACD27C20A432E12AC560D96696F34EA796C50;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3EA2A3529D013F512CCD072CD2F78803EE57FD82A15521EA680135C0872AD98C;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___3FCAC1F7CEEA810B8D6EE6F7D8F017856284B055AB5C6F06B64A6B2968F581F1;
	__StaticArrayInitTypeSizeU3D192_t2AC98CA4C20A542AFC875CA106D5FB26658E16AF ___400C0E18231705F4F9C7BA6F6E8817FD739DFC494E04EC17313B4271B1859934;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___40BD59C08A0A7B004FF75DB64D2029BF358D13E46614A4A4ACE5967D74A314DC;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___42206C420CA0A7A3713C06FC9890A566B99B2883F1AB9F6C30CA3A43BEDE1FE5;
	__StaticArrayInitTypeSizeU3D148_tB9B7F92C7973454BB2C36DDDB445FABCE8E4B7FA ___426936B76072711955E414068F02B9E3F1417C4588DB2C0F07573059826975EC;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___42C10A7950523CCE6B9382EAEB102B25C1454BF1F82A5C866E437FAD5C2E8FA2;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___437620127E191BEBC6C17EFF361BAC59416FF983AFB4C3C9984779E8529A3AF0;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___44093EEA40371522F7004E547716814C46F14668FA3301246EFD1C8F1AB50D7C;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___441CAB64D4900D5EBD01E8C095BC38383C3924C53D5D2BFF6E49B560F2BC13B4;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___443172DD7286929E10A2BFA422F4CD412C05EF05A99F4924ED2031F9B3DCE722;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___443AFE4C7F441BCF1F04D8A8D4147688B72043B95EC79150E40D3DC7ECB8A8BB;
	__StaticArrayInitTypeSizeU3D64_tB36AA7DEECCDE509AD8E129D91B108BEBB2938D9 ___457C3EE1F912D05B2088A38762AF1C4DE10BDE0E6E68F56019F14FDD8052E284;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___459738E68BE1F8C9C40E0AB786DE5DD9B05E2ECEA47D4B1E02A678CC789A71E1;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___45D261060F92FEA257731D4533BA1B6D378854391DF58BFEB8C1FB1778D40CDC;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___45F364B6BC0DA851AB1F1F74FF755A876A1B777D30FC741AFA07D991DEEF17FB;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___46194B677BFC5FF2B7D69B1590995222B63D20D9F68A63DC84B77477C521AB5C;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___461D85ED33B25F3E0E5504D52E29569C2749FC5CEAC373977AD3CFDBA98E1EE7;
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___46909D84EC9AF5DBF9113432593C4E89CCE8D2F54253B62FA0EA71FC3727D888;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___46C94F35DD2C4334C746C03A7010D02F23EE380918C065F451C019E49404648A;
	__StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 ___46F121972539C3A215848630FBD7785316566B2DC48BD8F0A5BAF3FC53109E65;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___47068B7F118B7E435FFB84E669EE2035A7DCBFF9F370B71AFF1010D8F86FD97E;
	__StaticArrayInitTypeSizeU3D192_t2AC98CA4C20A542AFC875CA106D5FB26658E16AF ___48BC48E50F59739E776A473E658720BC6D9433EE1B18922E9C2073AE677EC054;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___4966BE15486C330627518445E374AD3B77A4C753713F34E90832D2637A33EC7D;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___4982C8E15D86BEDB33F39799B5FF5EDEC05852D0693802FCE8E0E69710D0F0F6;
	__StaticArrayInitTypeSizeU3D72_t708588A5E342FEDE2E7BBDA6EEAC365EE84CFEE2 ___49DA175B59DD524F60B4588AA0543382B4CE84AC0EDC7952502C7603F8A32766;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___4AC88F2CF7036F6D1F43EBA474C18C54DD90B6BFE11EC2CFCBC8998F18CCDD97;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___4B8D717CC775EDA73AA604D52E42BDF7F28E2460E4EDB24E04B38BA01C6069E6;
	__StaticArrayInitTypeSizeU3D224_t5755492DB7BFC8BEE69DDA8A67082319B835C4E2 ___4C2817831C601A9BBB49CE6749056395F47322DCB7FF38D100CF0F6E8D3DFC41;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___4D9EEEEC738149F07A06103E0E4B6E75099471DFD8F5EB7C4E2400FFEF064C2F;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___4E64D848E7E810CA70815A7E5E17D793C19920F2B4E480485C947DD72C5E5E30;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___4E84EFE399128EEF84D52B47F979C9BF1FA238CB86F5E44A2A7CD20FD17E2A97;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___4F46B1E848BF6A3FB8F3AED91D0D8E800F708969D1525ADECD4B4C09FE363183;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___4FBEA9B841346FAFF684EC88811CBDF95A2C479284DBB8D7FF76B00741808C68;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___500405D96FA46FC9F1034A6F706DD3938860BD66339432A6BCBB3FCF5C786318;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___503DE4A84834C731CDA8AA9413EF5C1064BF558521B019045531268E6E2FF36F;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___506570EFE367152953FDD1D14D773AF80749A7A79395213C803A3E3A701EE194;
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___51D73E882CADE033AC8DE08370EC96FCEABDFA458A02E6A7ADD0A2D5137DEEA4;
	int64_t ___523F04FF5F245FA953AD94E355ADAD2F2984DCDFBDBA048386221A679BD4550C;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___529F8D7E4FA0B173CD588B1BC9BA588E03827B844303D219AC18396353D68BD6;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___5315ECE4BC5C350C100C417E0C5C2E479EF80E8904507D2869D7FD1CDF1D1D14;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___5355534C824BF0CAEE4451882811E9C0948E18DF5D7E686E024DBB4E8ED5CDD2;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___53C8D809975CEC5C320BC40E1590AD53660F48899C241D2EC8160F9069855075;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___53E045D5B31086C47540542B72EE1B6903167A663E1B49DBD8CA10BCBD6FD2C3;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___54221FD7F79821CDEC2743C128F5B42C700B61BAEE70B77D85629EF174985FFE;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___54AEC9D816A2049C6D5B1B50D53ED28970F7856DF9D4E633186E25E8EEADD2F2;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___54C9639E6CD79D36B9F30418CD5E3E597717992C749A52735BB65E4498449444;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___54CC3130C99E4F12595E1184BD1AAE62D20D43FC6138ED4644FD79A1A2E51D33;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___55477E719FF85B833DE5527EC0B316C4DBBE336790D3BF49447F60D82B087CC4;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___55794D1F460959F1E8325B213DBCADF6C0DD7CEB4C69F297BBBF65C7B16F515E;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___557CA8779C711B333E63BDB32CF9ED72E6C5C5A01115DF80CD7BFAB15E0BDE2A;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___561F14598835BA7E3999D1611F0C4DDAC9F28310267DE2FD1E69B82019968929;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___567040487C6F18CBB8D5E5E4B173E703D178168DAD3AC10943F3557251C58623;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___56B2BFE53C008A4B62C97009BE32F6CF9CBB910933B6ABDCA3AE4314423E2BEC;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___579AED0AC63FF69DAC1BC21BCD1FDDA973007C765FB1E3178829088798846DEB;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___585BC7A636D142652A8ED9100F0940502AFB849EAE508433D2930FB61AD61F36;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___58E8142CDDE695FFE119E16D03B99D32AFA9CEF767F293D16F9C8D527DCE4519;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___5A26869671F415C7CAC00A7BA28071F68D4D13884E815F88F519A51F68242A2D;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___5A62A202412C312108D20942EB0D3461C2B622D0F7489ACED8BCA40FDD25A220;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___5B3338E2FC111228503FBC18BD44C466D47ABF56A089F83E272B2EF7890B8438;
	__StaticArrayInitTypeSizeU3D96_t9CD906CB1D7B605081EDC2DE3DF5BF2ECBF5272C ___5B6F85B8869E38A165A961AF5A2B9046FF1DB878FA266659D539F16C3F96635F;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___5B9D549107093388BC926FEA04B9A3A2DC67AC8CF071E86BD19A61861866E08A;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___5BBA2042E3C1022B2636E3AD2DA3A2189A212BCA10B897E49D1F13ECBC6236ED;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___5BDADD0B152323C10011CC7204303994D6647F495946C4ED80FADE49DCA4A786;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___5BE085A820D9056AA7FABDA1EBE6E33A209795E4198532B69C9EB3E681CE7C73;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___5ECD5993D00FBBE04B032B6779F4B2B102D77DE937884FA161FC5228A81E53E6;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___5EE85A1ECED9BE0350F258BC6847BBDECD3CACFB0304338AA1E09958B876097E;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___5F101F2897521FF049B822F92CD7B53A80F9FB4914D4CBC57EF546B65B7E6839;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___600AC5C1423B779A4C99AE7DA84D1B1933C6D718C96B7561819FF39D757CE0F6;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___61E3C6F89C765AA79F4705C5B6FB5ED942BDB2608A53E2DE1FF6AEEB734CC061;
	__StaticArrayInitTypeSizeU3D384_t1A1F076C04E5220ED1284BA358D4D0B5A803E3B5 ___6209A6AC37E99A6466A972FB4A148367EB001A7EB55C30EBFA216ED4366F06D5;
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___62485F3A7B1400F4F6CCC1898E2270F4198463F9B5D184CD50B58AF56D397F4B;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___6262C97B9D5012BB62ACB236D2F7BC008E5A44085B357D45671B93DC7D573670;
	__StaticArrayInitTypeSizeU3D10_t3A80AC478454019A748956229C2284D48202BABF ___62BDDA37EA0223B1A9DDF568724B8E6ECC01B3CD2FC385C180F4CFF3D965AB04;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___62FEAB611DAA84030B232E7DD216F1BDE075AEDFD08DBCBA8E003D5ECB0F0367;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___642DD7F7203A2E843E095175CFB7A065EBB3D187342591A43AFE864E930CF266;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___643B781D27A00AA328CF5C5823D9FA11E7B6262EFC8008B26C5F77AF11CF65A9;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___64B1A06FA33725266DB34F8BF34BE202C9B17AAD7AF978D1CFBA2C84E5F65F6D;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___64CBA3F00AE73B633361F6F08153C7604C706E9DC3A4B49D5B1141E1C5E8974B;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___6533A1867F4BC99243B3A3404316609ABAC85E9C1F7E6CA85C8797855500615F;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___658F5748D813B4E437FD01EB363922CBAA7DA29D083B650477365BABC15547EA;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___66AA9E76039D3A06244CC7E2F954A1E68113129A35620FD6E589D841F90EB1AA;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___66E2AE5DC56EA19EB250B63843C02B03E69292CF68BE9BF94A695DB5BF39C33C;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___6853876EE0DC6D2CF1608B0E44AC2C0E0A559A10652A17DFC1CDD5A20B924CCA;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___689EB3A9AA00BA7C2C6B9EFF3B6F2CBBD9671BC1F8C4B426B88CFAF213947030;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___6A204E32397EA674B30C93C5BEB7C18BED0CAB135010047DB933C933AA668E12;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___6A8F9E996F931BF7B6F181E0575CE25D4A9E7BC932A6857937E65E0ED29373E0;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___6AE24B485B347F50CDDEA7FFEE54B5BD62D20834ADC93046B5F7BC57CF9060B0;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___6C399E3179C13936765EC535B81E13B677DC1B64BD1D3F60DD0E097838061F74;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___6E03C9336138F77C7CE70FDF8F46C5BC25F7D4CC6B588A52ED21376966FA5CE6;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___6E55BC1411E596DF70CA77A520A57B363E3D71419561280A04D122820B4B8CB3;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___6E8A84CA24C0EEA9E88B84F0E6B29D72F1D3FA2C1C98194D4DA1D9FBCED0BBA0;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___6E9AE95ACA02DF626FA33A9741718E9A2C4E3B2FCEFBBBD19323E7F8C82C99E5;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___6EAD47B68EA871CE5BC138EF9521E54E2DD5F9041ED3693236E3E0A05E07431D;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___7002DE627BC471A98A7A5632AE6C2EB53AB1701A1E0B7795AFA4375ED06ABBB4;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___7043EE766EA3F235BB890D428D4EC34A72E1B1EDC0FEDEE752BBA827D16E0CBD;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___70FEE9D32A08A1392FE88751836582F4138FC99A50A5074354BE850FE954EAA2;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___7315F44964957B6A4D34B2C68297EDE39FA0733AD1F128770FBB57A7C9FBD4A4;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___73414863041C7E9B6AA38694511E37AAF7F5D3DEE1DF825693CD213DDF875837;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___741138C155628CD30B6C81C066C1CA769470357D728F6C7DD0F447E3C1B7FFBE;
	__StaticArrayInitTypeSizeU3D136_t90CF912B9341DF136CE5AF373B04F41182A5AC50 ___747B650D6F668311F4AB3B7CF94372C72A493756EB4AE7E06E1BAC045E2D10B9;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___750DDBE67AE485B234E897FED9A00B8E83BA9100D33AA4D7CD9F3B879969A0AD;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___757E6461DCD89E6D070B806E44A51A08B97920A457933D992CF8C4A24791B2EE;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___76BE198D5251CD0E14A098EAD22BB8CECE4A64C385FEE85631584E162874CD11;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___7742950BE05BECE6E8CA77BE0660E044BF69561055E99E34DD743703114144D1;
	__StaticArrayInitTypeSizeU3D11148_t06B1CCC26155D364A3BFD9E3AFE4BA730F14BF39 ___77A49BD1409C8FFC6F52BAD393E00B54E8D02CF6A9792C695B24234DEE82164B;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___77E8A5EC90916CF9C8870B3073868F207E4B47E3D29F4FDD9A425796D343DC01;
	__StaticArrayInitTypeSizeU3D144_t88DBA1A06BA52C64551CAA28CF6A700C7276E4CC ___783707DEB573CE35EA8ED5733E56C1EB36B6490168A9C3BD6BAC000D7D5BE0E9;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___78719695241A885A134CB1B0DE1C6AB3BFBEFCC154A81A261067CC988CA308AF;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___79A3929AD7981948AA75A38412BE3500D5618D0FB288518918E8C7CDF9F44DF6;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___7C5EFAD50018D440E7CCC2F9FD8E0876436D233BE74A69AB853DD23C9B28618A;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___7D6072048AF62D374C35066E5A55EC50722E525C80B18231BBF1C28693F49B63;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___7E5064A5D5B3E32AEF200544615BA57B26BDD213EEB9A4E67CB27C90B7780709;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___7EEE0A0CFFBC006C874032DE232E6CD3CD7A0151631B023E9CE67731198B3F05;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___7F2594D9703B7AD658198D94EBC8D100DC59C8A6F2C0738087355FE79B9608CC;
	__StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 ___7F379C159024C3171F2888C8E2E9D87641E4344CF1E6959A500AD635BAA782B2;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___7F9F285BDE6257FD7F84ECED557EB570BD7EAF576192E8C33B7F80871F448515;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___7FC14D64A500FEE702DA3A8AD7BB0B27515463E25E53EE60A7BD44295431AD05;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___812EB43FE6430D68CCA61919BE9E158DC69EA9D5FBA247A60BA9B5C39FB3619E;
	__StaticArrayInitTypeSizeU3D3716_tE272F754833B2DA81A2BAF5EDD2CB30C63CD089E ___81512AF6BA6ACE8BD43DC44B1A304AF63820CD97EE9FC3BCCC40E59C50FEDD23;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___81A7FE95471927E1E79CC01C8D4BB688FA366E28CB5DC58B92634B474FE22B82;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___82780DF78F509F95EE94AF8DC252B925D47B58905E2FFA6496F36968A2363C07;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___8288302BAEB1A953FAD17BAB09C75451FEAEC39C5656870E803178CE4CBA4066;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___83DAAB365843C739D4E5F86FD73833FA5422CAE5E07005B8CCBF261620ECF39E;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___844C87A358C6AF886A861C14991CC22D422D45B3BFA75AA4E332C690401F49ED;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___84A29533CD28AA379618E8B5FCA42CEA74BE3BD0BD75DE950A4F82CB05BA1AE2;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___850EE833EB693A978D2B35F598EC6EC66F873F8E433E0DFE3C55DC2248BF697E;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___86CF0DF831FB1324BD0429DE875AEE8B8CAB9B5196128B09C13C78E757A3F9CF;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___870E1A1CCA1540913B709AA4783674D5E440E0CA4E05AF915FB90A9EBEE159C3;
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___8728427AC2E609E58E24D84F1581F1C8BC53386AC64C85D23A1DCEEBC44560DC;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___88BA10E90EFA4621FA25BC36C710D1658574C29C959990030A1727EC5358DD8E;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___8914DCBE85C664DB76FAD57914C5FA3D44EB61413118B1B095148B1C23047D25;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___892DE88D549D0D3CE77CE6B429A83073E507E61E990DD63F74264E8CF5D1612D;
	__StaticArrayInitTypeSizeU3D132_t17CA2427A8420E48002298798ADF94E69DA8DC9C ___8A019BA8F105330945DEE7EB1C1A8F0FD7A6ED50EC1DA572C608744C0B3E24EC;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___8A1992FF7BE7D7A25FD976B3A876092F634B75B2F1A14F3DF22937712F2677F8;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___8B49C497C23B987F166BB1FE82C2D06413B7FBB66E7569B5A32494DFE29A9A02;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___8CC11E14C2AF163BE625C6B583E8BF7A165EBEFB3D1644D7D296799B642610F6;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___8D48571A73F0976ABEB07869D8733CF12C7D654F1405F32896DB7696ACC2C9B2;
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___8E118657ECA03534C0496C6DD6E6F89813594CF00835AC3998384D6D2227574A;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___8ED03B7FA2243D579904305B548B8E88B29DB7E2FF47D8F657A797D4488958EB;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___8F95B01B770EC99709C821F2393DA10B10313ED37AE9B31E8D1EBCF23796232B;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___8FD9A02CC3EC720EFB3B246422557271F0349320C1E14523AD7E1A6D2D963700;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___9053C6EE1BA4FE5CEE59A5A7CC5AA00B07D2A49A10CB55ACE30DC02C51AAB4C1;
	__StaticArrayInitTypeSizeU3D256_tD597FA54545AF0CB15679AB3C10F2858019C8919 ___9174B971D0D8B34ECB569D2CD19CF540783AD868EFCC3617D3457FE1363A064E;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___92EA6942A51A0D5A69C8A0CA5F78BE7703A72A8DFAA8CF7ACAED65BF5304B032;
	__StaticArrayInitTypeSizeU3D10790_tB802E75CA83AF29051B0D46A2EB770A12F35FB97 ___92FFDDD812CC05F4339F78CF26C53F9A2368EAA39B85B07FB6CE022FA142491C;
	__StaticArrayInitTypeSizeU3D58_t3C46FFE3827C7AB4799AD6E9E054EE9BAC8E54B3 ___95DBE57C861B2749944B331C254B85E6AC9E684686A343A5B2826D3C6C4707A9;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___9638834D1F629557D9B80FA7EEB64409E238C0EF2E3149A55A39C3796F66E19A;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___968ADBA3E2ECE472C636EFA80FBFD03AA2924C57FA4A71DDFDBFEB83B9287FED;
	__StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 ___973678ECC720192FEE8B3CB7E6348E351A6520B5620D4DBFFD123DF9F4A822CF;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___97A6B3C64392CF429855F27D9D5C55EBE4A173C832772C415A50E8EF27ECE351;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___98E061174085DD0369B46477B0A3CE3DE9ED7A1D531D3101DB28DF308F050BA3;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___991F035EDCC9B77FD5E3C27DE5B12975B8AAB39E5439FD3FA3BB3FE9A336F6B8;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___992544026A60CA20D417D5E77B10AE8FC892183DF6793F296DBA40F689076816;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___9925F176AF8C92E389E6E75CE745A418ECB941709C07332D23E5EB9ABBB5291F;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___9939539B7D2265E62D73A20F44037369659C9583B1D928A74F2229F02E46013E;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___9A3288E7C15922FAD2897996070560AAD59F004E1507EAEC2B1B942CDFB584C6;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___9A73C02D329D9E8F0AC3D817C986AC86E68D188FDC268B162F09D651FA7A423B;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___9B9D059B2D4058BF13D630725D29D4B3F6BD42B35826850288283DB18AC19FAB;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___9BD6123DF2D6A8DDEC9AA06E102070BF1DA9DE4809978C625745D7C2DF5CCCAE;
	int64_t ___9C7FE09A60ABDE16D8C26D51026AC838249356A34E3139650AC306D10D63360E;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___9CAB136E66A010D8F93F2D20AC6EE292015B95226E34124B00E500F8C064CFA5;
	__StaticArrayInitTypeSizeU3D112_t08E002F629547C1B13AC215259A3DE2782AD030D ___9CEF436DFAEC5D0FF26734AA2AE76EBFAC739240E0A4607387D14F8263B197FA;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___9E86EB930ECA317B383C2B5017E37E7CC6FB409FB834204D4018E8F375F9705D;
	__StaticArrayInitTypeSizeU3D36_tD0A59E81D3E66EAA0DEFA5F2717B8BBF2D14E549 ___9EDC508BAD545AA9EEFBF2E03886D1110E9B823F0A79A8CD3E270AB8D5E9E647;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___9F1134ABC0AA5A88AEE4AA4E02E3EA79E178DB4ED9C0B3533D28DC6CE3EE0D87;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___9F35DF4FD6A5C75EC8D76DA2D9B0F4154E2950B3359F9564CFEAB70DE8A637BF;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___9F95BE23B2795CB3E32C1CC97154AB9E86EDF3A5AE9674F8A1F3C88D2096FAC3;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___A0241A6EC484A8C85C2B2E0E1240E8132BE93CC6A126E4F2DE5FF06D4796209E;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___A0E9EC9F05F3226BB12272E84A311ECE3EFD8C1D2F05D3C8ED4633ACC3BE12A8;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___A1D0A8BD8B25A6D3FA0716D2FD850CB7ECAD8987B70DA9820C4914041D8DCC29;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___A27ADE353E6FFD0D1CBEF68ED136F69430DF6F353D141C8478DA43BC88C14255;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___A40E136CBB0ED5DE2266982B66DD4CB738B3500C6C9EF2896E6BA0448B6917C9;
	__StaticArrayInitTypeSizeU3D90_t72BB402560A26FD4B6D7466FC341F4DE5F28A3D9 ___A46C876C8E9188D83885AF363DD9CBD2452DA83120CEF9823E307A39527AA5E9;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___A5FF20B6647CF687A002662C48875C654228DDF753EB1A4381BF7A628B42EF69;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___A675196C67C8F3F0B7B2868FBEEBAE7881746376063EB86967185B0F9FCD5381;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___A6A5A205BE67F420BD02E97F4D2BA0E900A3C51A28202C583CD40FD8F1E618B8;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___A70CA7E552008F98C0671CC2D24418B2FC74D2DC2CFBBDB9CC2540ED28193EF6;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___A76A68190FFE19EB6D3559CC880038EBA8A75223B3F02FECF74ED33A2E5CA6AE;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___A7CA3A34A7A5B72DE31AD5B26342092F03732E3B50C650BA42FC41064B21802D;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___A7E864C294E56992D029558C6558C7A6A685CCBAE308A471EBBA29C7D3D461B0;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___A8C3A1EECF88D0D654D8DDA84C4EF2873C1BCE7CA570B1B62B756E03A3A6A985;
	__StaticArrayInitTypeSizeU3D168_t8E80F36BC1B7BE7B01D5651DE7C69C38C8CA6DCB ___AA75373A0609E9AD0D3F416A48CE4BB81EC06A3171698F7D131B1E5B6BCB2912;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___AD0CF721AFA5964008CADE69C7C70DCDC667E9BB28759A953013A371AD811665;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___AD15284DD337FFA32661178D3C6F80F692595D3257A9495D155C99B50FC8ECB2;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___AD21EC3956C2E559DB1A9C8F3B27A76DC1C70758A124D994376E1B0A31A184D2;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___AE2F60AE81DCC052A7540D7806FA343591D115242E7EFB824982CCCAE284157F;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___AF011DE7B2D9B312193BA7E541A9990C19B209BD9336B2BC9C53987D2CC3B2F5;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___B04739121B6AB0E4911BBE21B6DD9F0572EE0B5F08EF57E898AA8320F2A0F377;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___B07453F8F8AAFA940E2C6A8B6165F3650C6C877D812604196E8D86273B729619;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___B08B8258982F0B04483D36814D79E9CED6EAE9AA9EE627FFE9988EDF24E0518D;
	__StaticArrayInitTypeSizeU3D1024_t6EC6A3E7E7DB0A7072248FCD7228161BB33DB0D5 ___B2954FFD2DDEC335D6190CB5CFBCB66E602EC593EEDB74C0545639A93C368F7B;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___B3E9E7062C9641F142F31775269CC963115C0AEB17D83EDD7E98E26C2EAAA5AD;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___B3FB30E6CE096761CC4E57F2733960D987A26D0134E856BB7FDC5D0745F0EA16;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___B4181D82DAC1FFDE3CFFCA6639D56290F4DC5B23D15C24C9522FC131DB8911B6;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___B48F50B40234EE3E34270EDC4A811DC3C3063ADF681578D4FCC4E4F57FD402F8;
	__StaticArrayInitTypeSizeU3D44_t77759323ECAE5CC41EE3A7CC9D0E80B216875331 ___B507BA66C95A60706EC089F80F46572640788389E51DEB981DB759D0716082ED;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___B5C581E896007ECE4F2F517C390DB9F3847E64B65F69571B08FB9857FC220104;
	__StaticArrayInitTypeSizeU3D30_t3EA034A6F637FDA88A9044A38BA22934CD5DE0DE ___B65996EF162F905BBE56993DD85D591048C0855FC3DCBEBD8DDE79268379DFDF;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___B6B4E363E4A386012A49F11497D4A553EF87735AFA9DA242BC36D37A6BDBCA6B;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___B737652425D7BB826CA8363DA5748CDAA2A62E143C7D827C2E4797DF13B5C3E0;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___B84DF409355E849ECDDA893E2C57705C1FFE1B8B5386B1F29F1F54F16E0A5FF8;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___B858762AC0E821FE317ABFE5B4D5FE4E8BDC8724A5867C1A5022A3C2AA934BDF;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___B8F82C601B16E9D90512C383806249EFEB720506EA0A14DC3204A9E66FED2D8C;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___B9DEDACEA8A8027DA835F48280C2306804CB0975F426C39E922650D1F6CE92DC;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___BADCCB26B3DDE3E09938F26E859A035FD564824881248FD50A914D04B3D59DD1;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___BAEF3D21CCA3501CA0930391C229D888D7A1481EDA3B2E7CAC0521FFB0D31C66;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___BCA60071BC8236861037DB9B18BC84E80E50DDCCE148DBD3A3BDF66618F6F915;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___BD5D6B9728DF12362F896749937287D68BB6409DBDDFABD7B68623C4E39F0CD2;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___C19C60191EB3B9603C3D7045EEC943E3D9E7776A87CCD82B44BBBF08357B31E6;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___C2A5DAC5C8C5553A8275C880987450886DF24E677D38257FBD23FD4A1B30F08D;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___C30498C67D69A4F46123429F014B2A05EF7DA1683E4FCD249BDEA7FF9B51A869;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___C4BDA8D1A189704101D7C0F3FFA9C49619948C46898B814F643C8B5A35AA47CC;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___C60B8B2173CA19D54F1981AD9BBF9A432732580774471068E1BD5210AF9E272B;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___C7258DC7B8BB950E4F6426BD5CF2530E0C5F37BA06914B36894D8B9DEBDD45CF;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___C738CE6D29606328EA27ABEB83C9A91DEC90E1A7C4B5CC08356C14A2434EA694;
	__StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 ___C7D12A90C94D52A40E5239FA8BD51C1C7D033B17222A15FD2E50F7CC45C5C18A;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___C7E368D1295B382E7637268C99F9F18D4A7864166F631AE31DEEDEDECDC70653;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___C8C362C52A33BDD8C9FA09B44CAF5284E23FD17E4976103C51B9F2FADF957033;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___C8E24BDFAF525FD736DFB45E23240F23B7ED7F09A96BF28CAED0CF94F51BA468;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___C8F88D6E82AA05B0F32EEEA351167F0EAEA23981C1E1F80305F3D75EB4C339DF;
	__StaticArrayInitTypeSizeU3D176_t554DEA5CFD2155C203C573F2A2A34ABCC790AF7F ___C963A51DB145C2F106D3EFEECBCEFFDE979A930B2C69F4617F0701A62FE513A9;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___C9E1CFD4A0D59131F8AC7D3DA5911AF13135548E2C92FC062AFDDA77FA8994FC;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___CA7CF7FA6ED304E35369A8E06948BD82528C9AC1F74CF71207DD723ECD416160;
	__StaticArrayInitTypeSizeU3D50_tCC7AD53A7C30A296F27DE921152C240C04AC9B51 ___CB58AE3A34A5A16305F45A6E13B2404833590850ABE480A4B6739B67AC4493E0;
	__StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 ___CBB4999C365FA0ABE5E75FA63E432602C40CD00CB6A10792AF8496C09576AE4D;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___CBE5AF6AC24E31D566328745DEBCD411DC1E0FE827EAEFA2901D966C02E8A2BA;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___CC0CEFD9E9B2AA59018C4A2CF62D831AD45D404EA5B75E5F53A073CFB92C0F7C;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___CC216089DA4A5F29CEE27180664BD91B6C87991677EF06F97D8103937BB2F47E;
	__StaticArrayInitTypeSizeU3D124_tF2056A147B3FEE8FC6D079B531D5E005E0BF000B ___CC7FED0F1EECD78D8413D37FCF850C4C60B8178D8EDEE43D9A5158C2CC83D140;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___CC9ADB462C05913E6352A852E49FC045370634571080CA1ECF95841B06E63021;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___CDC467024FA6B34C7E9CA501AD1A30225036CC96F6992AA0506C39C17B7F0A43;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___CF922F404DB827EA91F8C423C0621C677B464641FE0B6C6A7AEEB755FA19758B;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___CFCCE641455683949ABEF89889F39B5D4C21229C1C7FB15E1EB59BB0166BA855;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___D00A28AC5285007D566C113AA8E3F52E314F13DCC0F6A6BE6441461F7AB39F0D;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___D00D91AF4D0715FA4CD9DE25815E484FE263BF975E96FD4F27CC3B1EC3CF4B8F;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D028BC86965900EA524F37873E408FFED261A6D493C2E16F53CA9D9B7EA9106B;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___D04468D46671F8BB09408F2DC16A4A4C0F9562BEEBF8835D408317ADCF3A7528;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___D31860D2AAC8572719923B2CDF9405F28404159067F7E6D326F13FBECCCD6F1B;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___D36081EEA47A16BEB470962DA026BC43E7F2C8F877D1D7DE9F012090EBAD2E8E;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D3626DAA08967C0BB98D7DA1C6CA404EC8F747199195DDBD0EBFF1AC09B3DBE2;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D3C1F935901A3BA8AFC8EB475DE9FC61D4DEC55251E6B385760D1D705D7C172F;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D5C5159832DE340CACF18939A1F8BCB4B919226576A4A5B397827CC59717DB8B;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D607394C3FB9CF576A4321D4EFB9C4F4531EFD539CFCCBEB9C2ACE986CDA0F4F;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___D66912A3DEFDE847CE0A094C2C665979574EF1CB3F2A708E08BC9D364DE61BE8;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___D7E91A101F74AA998AB891860D33BF3D41616076011A9C0FA9272E4A0EEBB0CA;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D83EA65830337CF1E9B54F5BB2E519ADAF4468E1955A9424A92B6F88F5AEC7BF;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___D886B98E4F5ADFB2F1A5723F2E14DD4D01D04A2E36FA62749034A4FBCA662CD0;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___D8C1259490BED6A503CB038B8335940093EC88F912BD3E5A02600C43C011740A;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D99B48D838464100EAC00292244245885B37909438B9B4AD22C06F18E9F4A888;
	__StaticArrayInitTypeSizeU3D56_t66702F042D53810B18AD6DD1A9A0C566EB2EE696 ___D9A7E16619B0E4535F822EAA39A5F9AC239D36012705F0F83CD0C09B2B987F24;
	__StaticArrayInitTypeSizeU3D10_t3A80AC478454019A748956229C2284D48202BABF ___DA3E1F9CEF73071793FCA1A5C3FE2B750F875615F7890BB676A908B8E8FFF853;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___DAA961C1C1D1AA3CBC2455ED421C8868E2EF5DBAB325F2BC403F6F2DB66C398C;
	__StaticArrayInitTypeSizeU3D18248_t6D09868CB7DB88727BF00049D2F83AB5FB06EBDE ___DB4556BDB426196513784E51B83A69A099C812F5A575535A1D56129D0F6358FB;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___DBC2134BF2E99C031606EAF07E57D04C6E19A1515B0DAEB497C32101D7080AA5;
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___DD531B41B38534C045D3405CDFB24986F8707992BD6BEC210174A8826C348231;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___DDAD1F1767B72E04B9420DEA0EF16AE383925385908E56C69BCEB06E8635D7B0;
	__StaticArrayInitTypeSizeU3D248_t285FA6A194E9054B5B7F2B34D8F1125D3AE13F12 ___DE64651006CFFFAC311C4370FD15C4D6EB76ACEBEA906C43C3997BFA28EB52B3;
	__StaticArrayInitTypeSizeU3D44_t77759323ECAE5CC41EE3A7CC9D0E80B216875331 ___DF25E2B8991E258E2716505524C09F19368125912A47F4936D0225D417D705DE;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___E01AA2133C0C420D16B81E39FCF4F90012ABCB742AD0E97354B0CC478951B396;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___E0D8A42856EEF19927055C9DA5BF93CC3462BD15BAA5344E425784071C4A624E;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___E132B2FF4D61C28380E68729D93CD753F51EC02FB3713E0CCD2D30D1A67C798D;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___E1D901CCDF12B1DF0D7A4FA7AD82911B2B146D844AF4C3FC07CE5847E8AFBBDC;
	__StaticArrayInitTypeSizeU3D128_t68BAA10EC835232A7650BF2054DB502B0ECFFFCD ___E23B166C4896519A59519AF204DD9025F07F20EB0E7F68F139E455669155303D;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___E300F02750E3D7D01E3F4641FE37B90D20E5102C717E1F8946E4600727E517C6;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___E372C8A58D0F580D5F63C47000D08E7A144D38B1527D24B19B7DA15DAF4D913C;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___E44DA7A1A8B6B6593EE50FBFAD6DCA4E6A2C1A7D87FA62CCD77FF0E7DC4532CC;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___E4AC02EB8FFE5ADB3F4DBD1CF4E351F0699C3EB19D1FD48FF297B62688774D32;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___E5136409EBFF600915DA0604934267F437779EEE9A9AF6B4D0001B6B7160DAB0;
	__StaticArrayInitTypeSizeU3D2048_tE25931E1FFD4C943523B4FB281CBCB2EEBE2779C ___E5138C133342AE7ABCEE10CA327CE3768D65AA469C407D468D01F6A146E644D5;
	__StaticArrayInitTypeSizeU3D11148_t06B1CCC26155D364A3BFD9E3AFE4BA730F14BF39 ___E6158B3DB5ECF885C21279F9A4ECC65456BE79D326F38443499A3C1C808ABB7F;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___E78BBF6E2001D9293C521DC5CC81D45587C9BC129C2A020CF8B9C62A90B3C38C;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___E7DDCEFF47FEB3B9E49C207D4AB1E960F393B75FF2FE51441E6BA56880DBAE65;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___E8C65E4BD080058C3D32617A1DD410386970CD471821AE1EFB9BEB5AE82A3EDC;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___E8C83B5B87239548D39723CD1DB34E4EA679F1FC01E4ABC7DBBD865E19A3F470;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___E996F539ED1C91B7C8CF4051B9441635B9601656501661D84941C15A1169B7C1;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___EAD673C0741C8D152B725DFDE4754C5099BB1584865A42B8DE3DBEE1FBBB2D89;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___EBA6656A254CBA2E98364ED3AD3C577828CB73B2F40E80329519A11D37E7922B;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___EC3CAB4F9004BB9DC57CC5A27BB6B096B3A434A2B359AAB26F9F5BE703904466;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___EC9C6EF0275BDFAB1A7050B556C0CC6A44DBA4F8F9B57BA3C5EAF75FF9B24DA2;
	__StaticArrayInitTypeSizeU3D9_tA9EA4D9A3345D9A71FF7DC176D791EC5F1C3740E ___ED2B39AC00852C1ED845A17AB05473D2E4BCF8EF7A04F76777675E856A559B60;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___ED7E370DFD0BF976F8669790B470A09CF0FF309DC9B1E2B3186CE4F0F9FA7D5A;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___EE1614CFCB93EA38F3C262F47F0A403BDF5F1133150072C1928C5F0E6DF646E4;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___EF201E7067F97E67468C3F485A180A0EF3572D9AFF24671EFDEB9A08644A3177;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___EF63E97002775A666DB9DBC340F0BA4CBFDE3967E7B9748A008B69F0AFFE8BE4;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___F0322FA35D36E5CA22C27848E69224DB4F774AF2F258B4E05CD36A18CCE1E55B;
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___F0389978E6D16536767C3E8C4B08F2AC5C800798C828BBF4F1D721D7DDFA8775;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___F0B77F223AF396342A941058490B4217A319F40FFFADA0CB74A70338A10A751D;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___F0D2E24777179E1D479F7183A3E4544F9C3CCCE4CBF993BC7EC1AF55B687156F;
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___F10EB800F205B09A732C0E1EB94A9D53194237405ABA783F698D7D11C18CFB89;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___F1B64B21C00EB0FD1DF2FAB433EF6C0D8C79B51F83840B7B8CA14C63369F6616;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___F4543B9A7A6A578164DE4769CFE967EC6D9EA12B5D90076E36DB4DD71DE88938;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___F4605E50276D9BDC4D9496DC8DC35AF8084E8CD3A69D550B706B6E8B4DA0B0A3;
	__StaticArrayInitTypeSizeU3D80_t7D8CE215BC3C73CA96CE12287304D5232720B984 ___F500D20090AD6E636B0D0E537458FD41B869C7A7AF499F743A95118464B9C9B7;
	__StaticArrayInitTypeSizeU3D80_t7D8CE215BC3C73CA96CE12287304D5232720B984 ___F5BC6E1EE55ADFAAE875C15542C9BEE5FBA074B29E56A0D5016AC70D04BD53D7;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___F5DCC62363F3F4B53CFED2264390F57D2115F5BED397414B73A48893BF2033D2;
	__StaticArrayInitTypeSizeU3D3716_tE272F754833B2DA81A2BAF5EDD2CB30C63CD089E ___F6146FBD47A9D255913B392A5A265681489D9E0F6544DEE7AD6714120705CAD7;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___F92FF6B3C8A668F4EE5A00A9C9728E432B407910BDB5C8518F092785F964C1DB;
	__StaticArrayInitTypeSizeU3D64_tB36AA7DEECCDE509AD8E129D91B108BEBB2938D9 ___F93FB973C99E7583EB3A16A636DA67B7ADE950FA21624F7EBB766DC9E2062CB1;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___F989FC1A32987AA0550D1B9B512571F86F33CDDD0D4932A8C5E2921851D35A20;
	__StaticArrayInitTypeSizeU3D80_t7D8CE215BC3C73CA96CE12287304D5232720B984 ___FA679997A61BF1A27D5B90BD1C746443BFA7979761F27D63F49058FE27938F2A;
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___FA6A147DB836123BA519E5C5A8A1AD2C85A252878EE51EA2529B00F1231E4A04;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___FB0A68F50C83F6DAF95A2B4C97639231BC3B9250C09BD0B8AADA492BCB4BA617;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___FB53FDE75D6FDED4EF44145A308EDE3DB612293C01A6E170C102980A9F6121A2;
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___FBD4E957EA38F201724E795ED74940339ABCF92AD55B6596018CF982F4376215;
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___FC26CF118BC276877FD6A8A545629A099A6EBA3481CDA11FAEBEB3089F5E2452;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___FC8B60908EDD854C5710A554C6F9425131E81BD1E646323084C109FBA99B9190;
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___FCC16E4D9D2FD1D5DEAF1DC575CE1ECBF7C5FF3D410A9444630B1B2D54931AB0;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___FCD4372EF6300C83F6533AB9DDF6114828B3051745BB352908A0E4010DE0364B;
	__StaticArrayInitTypeSizeU3D80_t7D8CE215BC3C73CA96CE12287304D5232720B984 ___FD0B7AE474CE390E446204EF2A7F3156444FA93BC0A0121EF7211A74D373F745;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___FDD4E3F255AC7426DF6A725F8BECA3BAA0952885CA56FC52B8E981CE8F0C58ED;
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___FDFAE9EBBF7515FB0D6B40D919FF7047DDD7B1FFDCFF8757935846C7B084CDE4;
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___FECE7D38FE2EF8C58A118369B2BEDDDF41C13D19A8992AFCC4FC3A5092E975C0;
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___FF4BCA7CDC06ECF2C289EE0700D92982F25562CA730AE4AB5EFFDF02349440B6;
};
struct BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____lookup;
};
struct Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___WORD_SIZE;
};
struct GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_StaticFields
{
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___AZTEC_DATA_12;
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___AZTEC_DATA_10;
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___AZTEC_DATA_6;
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___AZTEC_PARAM;
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___QR_CODE_FIELD_256;
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___DATA_MATRIX_FIELD_256;
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___AZTEC_DATA_8;
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___MAXICODE_FIELD_64;
};
struct HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___MODE_NAMES;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___LATCH_TABLE;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___CHAR_MAP;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___SHIFT_TABLE;
};
struct State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_StaticFields
{
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___INITIAL_STATE;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_StaticFields
{
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___EMPTY;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_StaticFields
{
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___Zero;
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___One;
};
struct BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields
{
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___Zero;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___One;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___Two;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___Ten;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
struct Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B  : public RuntimeArray
{
	ALIGN_FIELD (8) Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* m_Items[1];

	inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1__ctor_m82A329DF46E01C30AB3FF7AFA314E3CE05945220_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22 LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* LinkedList_1_AddLast_mF5239C871EADC44D51C6B621592A9CAC43449A2E_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkedList_1_Remove_m6548CB1A0181356C321DB1F226FC0598378F7997_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* LinkedList_1_AddFirst_m8AAD292E14E5ED400CA509F740E09CB2C4DE0D60_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_X_mF3C33E0EFDA88B1A3580AF3AE3A8CB8E88DF9BE1_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_Y_m687DD1BCEBF71A02500780F4D6A17FF40DE314F8_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPoint__ctor_m79866B07DD071E8125F003F1A53CEDE675F3213D (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_X_mB8DC20D7D73CEFC50A80F62AB29890940B3F874B_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_Y_m256E53785249359876C09797EEBC8E8DA55E47E8_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_mD2CA9E51692636988CF9F3069FB8D0251C2785BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_minECCPercent, int32_t ___2_userSpecifiedLayers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder__ctor_m5D76513D10748A7055A27AFF6F123E5087088A08 (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* HighLevelEncoder_encode_mA3BA7ECA8AEDD744D40C6136258D6253BF84F94C (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Encoder_TotalBitsInLayer_mE318C9C6A22D489BFA27D57B172F0D90EE4C0A90 (int32_t ___0_layers, bool ___1_compact, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* Encoder_stuffBits_m2916FB84497706133ADE5BCE5EE151C0C6B53E06 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___0_bits, int32_t ___1_wordSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___0_bitArray, int32_t ___1_totalBits, int32_t ___2_wordSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* Encoder_generateModeMessage_m6B5EAFDC92048DFA0E5716055990FF0A92367694 (bool ___0_compact, int32_t ___1_layers, int32_t ___2_messageSizeInWords, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitMatrix__ctor_m43029CCB30F012A15D327BE473B515F6BDAEED68 (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* __this, int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611 (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* __this, int32_t ___0_x, int32_t ___1_y, bool ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_drawModeMessage_m344B010B37DF49C3F7121D4724B29B0AAFCCD410 (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_matrix, bool ___1_compact, int32_t ___2_matrixSize, BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___3_modeMessage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_drawBullsEye_m9DB0322DDB42D393872E62E6092E813159FA75EC (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_matrix, int32_t ___1_center, int32_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode__ctor_mE6C895A9008C285C9375AFBCF5F41800DD0BFC79 (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_isCompact_mEA109DBE1E4632CCABC8FE6CA701948C6794AD01_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Size_m0CA46D7572CEE88A5AFD5D3D0F1EEF7C96EEC646_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Layers_m93A7FD4EC1C095E5B2D09718205E25F0D2A5E1B2_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_CodeWords_m67A81A3769CEA2C80EEE65C2268E9D61547F4250_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Matrix_mF2BCFE42A0D554A00944953AE84748491372E558_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArray__ctor_mF83850FDAA5CF98487FFDD1D29DDB8F3831C7AC4 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* __this, int32_t ___0_value, int32_t ___1_numBits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* Encoder_getGF_m7810BB7858110F0120526691D09D6BB35CCCA939 (int32_t ___0_wordSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReedSolomonEncoder__ctor_m2A4083C8A626B06DFCD3577920083345EEFC0ECB (ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636* __this, GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Encoder_bitsToWords_m8C33CB301119283D80BBEBC75C27DAB639D6CFC3 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___0_stuffedBits, int32_t ___1_wordSize, int32_t ___2_totalWords, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReedSolomonEncoder_encode_mC912E0589BCE6FCFB4B24C6AE27DC980840178BD (ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_toEncode, int32_t ___1_ecBytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
inline void SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3_gshared)(___0_array, ___1_value, method);
}
inline void Collection_1__ctor_mEFCFA9C3A001B40ACCD3A98FA215D51582A818F9 (Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3*, const RuntimeMethod*))Collection_1__ctor_m82A329DF46E01C30AB3FF7AFA314E3CE05945220_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_updateStateListForPair_m8628AD1B6BDA02E6D62146D55DC7001745D5C03E (RuntimeObject* ___0_states, int32_t ___1_index, int32_t ___2_pairCode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_updateStateListForChar_m02F5DE3465C2DC403F16E26DFA954AC446374E6D (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, RuntimeObject* ___0_states, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_BitCount_m374653FBA64911E8466874979251DD8E14DA6F21_inline (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* State_toBitArray_m460830AE00C7651A6157FA35640FA51B827A10D6 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_text, const RuntimeMethod* method) ;
inline void LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*, const RuntimeMethod*))LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_updateStateForChar_mB0639E6B699D70BC04E9CB7A02D7A34F7558C0DA (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___0_state, int32_t ___1_index, RuntimeObject* ___2_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_simplifyStates_m982AF46EB6F0274E3D39FE8C2FC4E045660B972B (RuntimeObject* ___0_states, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_endBinaryShift_mF03B4CF10D15C21B454C42E57FEFEEE9487F3CAA (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_latchAndAppend_mE55C3059484238FFB5074D570DBCACE32F6BC97C (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___0_mode, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_shiftAndAppend_m5BEAC669B35425547C1C107C3B317FB78120F503 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___0_mode, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_BinaryShiftByteCount_mAF226194E9D6F96EC8ADC2E6CD2B77B98BA67460_inline (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_addBinaryShiftChar_mB4EACA49074103F41E90EF3F8B2936D1DA09D9D4 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_updateStateForPair_mD9DA25C1DD807D847C415C35D29A1A8618EDDF3C (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___0_state, int32_t ___1_index, int32_t ___2_pairCode, RuntimeObject* ___3_result, const RuntimeMethod* method) ;
inline void List_1__ctor_m9A4ECE45E618A9ECCEFFB1238D602846ED65CBCB (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1_Clear_m8EF78FF0F61C840189C1D984D94640875848FD0E_inline (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
inline Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D LinkedList_1_GetEnumerator_m594ECE72AB487FC1A61344B4BBF168057A2004C5 (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D (*) (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*, const RuntimeMethod*))LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared)(__this, method);
}
inline void Enumerator_Dispose_m919D800AE959E626F6852A5973F9717DD6972AF8 (Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D*, const RuntimeMethod*))Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared)(__this, method);
}
inline State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* Enumerator_get_Current_m2834ED4F986309D222B713E76BEC546C5582E77E_inline (Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D* __this, const RuntimeMethod* method)
{
	return ((  State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* (*) (Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D*, const RuntimeMethod*))Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool State_isBetterThanOrEqualTo_mB2A3638216A643530BFF3717A7EF7FD2EC236300 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___0_other, const RuntimeMethod* method) ;
inline void List_1_Add_mEEFA0682FF21B1AD6209A6CEE2692423676C0DE2_inline (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797*, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline bool Enumerator_MoveNext_m28B442E01581BF12D5FCD336A7EDC5B06557C5F1 (Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D*, const RuntimeMethod*))Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared)(__this, method);
}
inline LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* LinkedList_1_AddLast_m1C054170CA970A672433FCD495781D76728EEE7D (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___0_value, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* (*) (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*, const RuntimeMethod*))LinkedList_1_AddLast_mF5239C871EADC44D51C6B621592A9CAC43449A2E_gshared)(__this, ___0_value, method);
}
inline Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC List_1_GetEnumerator_m23D8CEB4D54B73CD12D4987C6B682FAEB4966479 (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC (*) (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_mC8A1C43E022AEED5D184DBFF0341EEA142AFBA4C (Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* Enumerator_get_Current_m79F5915848267C47D94B643711512694201CE1A1_inline (Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC* __this, const RuntimeMethod* method)
{
	return ((  State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* (*) (Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool LinkedList_1_Remove_mD556C19EC89E137F75116D2DBE8636E7DCFFD7BF (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*, const RuntimeMethod*))LinkedList_1_Remove_m6548CB1A0181356C321DB1F226FC0598378F7997_gshared)(__this, ___0_value, method);
}
inline bool Enumerator_MoveNext_mA7B575B7C368C0E65640C751580B7BF5C32C26B4 (Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_mFDE0BE419E2FC1E770C533C60F8DEEC691D87517 (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___0_previous, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_ToBinaryString_m6286E8FF516C5C02AAF1F713E215B1073079FFD3 (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8 (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, int32_t ___0_value, int32_t ___1_bitCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___0_token, int32_t ___1_mode, int32_t ___2_binaryBytes, int32_t ___3_bitCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_addBinaryShift_mC69E5C1F383C76DF19B9D993F453370ED8F68EC7 (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, int32_t ___0_start, int32_t ___1_byteCount, const RuntimeMethod* method) ;
inline void LinkedList_1__ctor_mE1443CF0845DF95D91DCEFF2D4A66F6CD78740ED (LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E*, const RuntimeMethod*))LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared)(__this, method);
}
inline LinkedListNode_1_t1211169678E9DBB8506B482F42AFBDDE328AA21B* LinkedList_1_AddFirst_m7471223757B061A1F27F17A5C3363ABBE037DEA8 (LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___0_value, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t1211169678E9DBB8506B482F42AFBDDE328AA21B* (*) (LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E*, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502*, const RuntimeMethod*))LinkedList_1_AddFirst_m8AAD292E14E5ED400CA509F740E09CB2C4DE0D60_gshared)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_get_Previous_mAC3BE6538F07E6CB57CF3632E72EB4E0AA4AED5D_inline (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, const RuntimeMethod* method) ;
inline Enumerator_t7F05C70F59FF108604A8D701AD811C9BB6BD8B40 LinkedList_1_GetEnumerator_mB92C9FCD90869C64C6345961A33C236C99D6A2F4 (LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7F05C70F59FF108604A8D701AD811C9BB6BD8B40 (*) (LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E*, const RuntimeMethod*))LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared)(__this, method);
}
inline void Enumerator_Dispose_mB4A3B09F08984D5F30E792CF521B914AFC3B82AB (Enumerator_t7F05C70F59FF108604A8D701AD811C9BB6BD8B40* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7F05C70F59FF108604A8D701AD811C9BB6BD8B40*, const RuntimeMethod*))Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared)(__this, method);
}
inline Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Enumerator_get_Current_m9B378D23D57FA7F888EA61DA6BB0989C97BDCBC3_inline (Enumerator_t7F05C70F59FF108604A8D701AD811C9BB6BD8B40* __this, const RuntimeMethod* method)
{
	return ((  Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* (*) (Enumerator_t7F05C70F59FF108604A8D701AD811C9BB6BD8B40*, const RuntimeMethod*))Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m32AC4B8BA1BA03A4718DBAA581323E2665300758 (Enumerator_t7F05C70F59FF108604A8D701AD811C9BB6BD8B40* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7F05C70F59FF108604A8D701AD811C9BB6BD8B40*, const RuntimeMethod*))Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleToken__ctor_m851DEE60A78CB01A090350AEF5CF974AA7E5D0A7 (SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___0_previous, int32_t ___1_value, int32_t ___2_bitCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryShiftToken__ctor_mF0B49C7EEB62FE53EFBEA25C6A20C81C1BE41339 (BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___0_previous, int32_t ___1_binaryShiftStart, int32_t ___2_binaryShiftByteCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer__ctor_mD791C918E550D4339735C2831D639D53AB60DE53 (DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62 (DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* __this, int32_t ___0_index, int64_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE (DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_Equals_m9694DAC8F206F6A5A1E5EA67568E361BF46C853C (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m66A74F455BDFDC3C9ED2D8E1BA4C3A093637C3D8 (StringBuilder_t* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base10BigInteger__ctor_mFCACCA0D6C2A9BDEA7F87F0C86F723F0816AE30E (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_op_Inequality_mF3691B1FA72A66A1E4F6C38B4F1CD4DF12C5D30F (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_Greater_mA50D49BFFCAD048807A0629C7E5A53D8AB66D816 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___0_objA, RuntimeObject* ___1_objB, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_GreaterOrEqual_m26D8098544676805D746FE887AB46CE7C20EBD8C (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_op_GreaterThanOrEqual_mE06F5D28DF873A4B7653E38238BA076C470FB428 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Add_mEDB517F9017DA3153FA7CD11596E7237F51934E5 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_op_LessThanOrEqual_mEA114E714B7A0DA1F5DCF362EA865254DE03E988 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Subtract_m8EBD83212C6FDC3006194C64D648FC3C55606FBA (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_op_Equality_m4E3B5ABB0DC28D5C3D1EF91E27E47BC87433F332 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Abs_m83134DCB3728779B6361C0DCFB503C70C26BBB65 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Multiply_mDF7DFBCFC6461D75FB118A0940E137933B4F3301 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base10BigInteger__ctor_m039A3FA37AF307F0A155AD2A8200421E37FA1D01 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, int64_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_Smaller_mEC946A9B442111A8FE92EDE78265217872DFB14D (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_SmallerOrEqual_m0CE95F2BA528E68693FC613732E299D62B5606C4 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Opposite_m1ED9B0BFD66ADDDC32B8778DF452B77E28746619 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Addition_mD1CF58831CE8B052104E0A8B3CCDDD4FECCE2DD1 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Subtraction_m32E3E10F8041E1AC6ED896E4D701DB7816F39488 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Multiplication_mA761C964CBB80CE3BE4955F4DA987F2A590032D4 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_op_Addition_mF7BE4933DA8AA6578EB94809B77C02C233B650B7 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_op_Subtraction_mDA4C42F20AF15B6612C8B904ED8EF38A6F8088AA (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base10BigInteger__ctor_mAB63B333BAAE40C9EF219C3B602573D9569DBB1A (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer__ctor_mA9926035C9FDFB974D04ADD2F33DACAE40010A3D (DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2 (DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* __this, int32_t ___0_index, int64_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458 (DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mBEA4FC657422A98B2594410C3512B5F3AEEAE7A4 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6 (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Implicit_mBFB27CFD2E71D8995FFCB962335DA45BEDB04631 (int64_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Addition_m6A64F691BA94E8062D39DE0284B4BB59172EFE78 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m813739AF0F2C3F6FC96CD5EE4200134E39D6BDB3 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int16_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mEC157400B2842A9DD09AFD460325E7DD9CB11E3D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, uint16_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_mDCC7FC2F31BC7259A8B3DEA5E55AE2FB049546FE (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_op_Implicit_m5EA4D1D053D8455B1F5243A0B495993416AF6D70 (int64_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_op_Multiply_mAFA227A566C79272AA19BE5D2C603E64E5191A91 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Base10BigInteger_set_NumberSign_m9E062A3DA7B3FD3B83E1D75E634FD4B50C5D55E1_inline (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mF3D1FB073688CCB558884B9CA0304C41C0E16D83 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, String_t* ___0_numberString, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Greater_m99269390EC8B30B0C671A850D686A7ADCD81C548 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_CompareTo_mFD37B6071B524EFE0C8C189A9D386BF0CAB23F7A (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_mFA0FEEE71EEA4EAC6458B800D8C9ED0150020AB3 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_GreaterOrEqual_mB5DE8F120F47CD71BE753CA93F6E8848831DFB61 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_m640C467FF5617B99ED7E07D97F4DB5F37CF708CE (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Add_m24BDFD3E2E41D383E1143C2D4CB03C714267CF51 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_m8D0E8D175EA36A9997D285846A88750DA0D20C02 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Subtract_m1A24105932E411671B88B0066EAFAF3568EBBF21 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mF3BFF75E62E509F012AC450D0C766EFAF26593A5 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Multiply_m729E9E81E420BFE6DA9802443150367A9B2A58B6 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m9B5A2DA9A3B7EEA583AA31FCB3F9A7E3313273DE (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_DivideByOneDigitNumber_mA3ABB84E30E6D70416161A76507A2F4186171D79 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, int64_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_DivideByBigNumber_m78DE53BD886E829EC30745FC296FF3FB2C5DDBBC (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Division_m09B82D50BBFC38EE48BCE969E67B0D7234ADB99D (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Subtraction_m759628FA84D82610EC0DBD632ED0E28F59180560 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m40A2DD0D91D82238C51D7BD26892653DB74E39F2 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, int64_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Modulus_mA044A37C510356EB423B48A1BF11F7ADED7CD1D0 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_m54A2E8843A6EA4B7ED9C5E9CF13DC466B790E14C (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Gcd_m6150C8563FB7FB08249BCA7B6D149513B52C7066 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_ExtendedEuclidGcd_mA66045576D5E8F2D4868B26D5F45E0DC738B2D1E (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190** ___2_u, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190** ___3_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Smaller_mA01B318E09D789A393130F79E87DC3EE1FD5CF81 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_SmallerOrEqual_m86C21A77D1446137003CE9C646EC0E70B90AAD9B (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Opposite_m47C98F8330462913B7454703E2A6FBE6FCFB6315 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Addition_m387EE8E8F754BD949A2CF51A6E3CFDAF7D6D08D7 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Subtraction_m9DCA47E1F92340D5C8B44A7611EF61B0280A2E5F (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Multiplication_m89F916E4E4D94751717659D5149917917DE4AAB7 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Division_m57071483D87761718875D25F95508E911AC2562C (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Modulo_mD40F396E73AB8D0D705B181B7114C895BA51E7F5 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BigInteger_Trial_m61CB43ED1646A67BE284D1989643CCA5FEADBBFC (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_r, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_d, int32_t ___2_k, int32_t ___3_m, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_DivideByBigNumberSmaller_mC122031BD2368DA8D4ECC27F1059E288CAB9ABBE (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_r, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_dq, int32_t ___2_k, int32_t ___3_m, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Difference_m356F722619813D07402453AE6AB1D7F08B460454 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_r, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_dq, int32_t ___2_k, int32_t ___3_m, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_get_X_mF3C33E0EFDA88B1A3580AF3AE3A8CB8E88DF9BE1 (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CXU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_set_X_mB8DC20D7D73CEFC50A80F62AB29890940B3F874B (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CXU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_get_Y_m687DD1BCEBF71A02500780F4D6A17FF40DE314F8 (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_set_Y_m256E53785249359876C09797EEBC8E8DA55E47E8 (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CYU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* Point_toResultPoint_m9D8E4D378CE37E5D2D0CF9CFB39659FE6ED64AD4 (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Point_get_X_mF3C33E0EFDA88B1A3580AF3AE3A8CB8E88DF9BE1_inline(__this, NULL);
		int32_t L_1;
		L_1 = Point_get_Y_m687DD1BCEBF71A02500780F4D6A17FF40DE314F8_inline(__this, NULL);
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_2 = (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB*)il2cpp_codegen_object_new(ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB_il2cpp_TypeInfo_var);
		ResultPoint__ctor_m79866B07DD071E8125F003F1A53CEDE675F3213D(L_2, ((float)L_0), ((float)L_1), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_mF652AF4FBE054715A1A2CDBC7443C3A0D8677273 (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_x;
		Point_set_X_mB8DC20D7D73CEFC50A80F62AB29890940B3F874B_inline(__this, L_0, NULL);
		int32_t L_1 = ___1_y;
		Point_set_Y_m256E53785249359876C09797EEBC8E8DA55E47E8_inline(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_mC98432BE50EE60E5BD6EE3BD113CEC6665EF9EBE (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t L_3;
		L_3 = Point_get_X_mF3C33E0EFDA88B1A3580AF3AE3A8CB8E88DF9BE1_inline(__this, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t L_7;
		L_7 = Point_get_Y_m687DD1BCEBF71A02500780F4D6A17FF40DE314F8_inline(__this, NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		return L_10;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_mA8A82D1BFF5517CB6F21D51E6871DD10BE1CD457 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_1;
		L_1 = Encoder_encode_mD2CA9E51692636988CF9F3069FB8D0251C2785BB(L_0, ((int32_t)33), 0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_mD2CA9E51692636988CF9F3069FB8D0251C2785BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_minECCPercent, int32_t ___2_userSpecifiedLayers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_7 = NULL;
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_8 = NULL;
	int32_t V_9 = 0;
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_10 = NULL;
	int32_t V_11 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_12 = NULL;
	int32_t V_13 = 0;
	BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* V_14 = NULL;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B40_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* L_1 = (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE*)il2cpp_codegen_object_new(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		HighLevelEncoder__ctor_m5D76513D10748A7055A27AFF6F123E5087088A08(L_1, L_0, NULL);
		NullCheck(L_1);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_2;
		L_2 = HighLevelEncoder_encode_mA3BA7ECA8AEDD744D40C6136258D6253BF84F94C(L_1, NULL);
		V_0 = L_2;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_3, NULL);
		int32_t L_5 = ___1_minECCPercent;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_4, L_5))/((int32_t)100))), ((int32_t)11)));
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_6, NULL);
		int32_t L_8 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___2_userSpecifiedLayers;
		if (!L_9)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_10 = ___2_userSpecifiedLayers;
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)0))? 1 : 0);
		int32_t L_11 = ___2_userSpecifiedLayers;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = il2cpp_codegen_abs(L_11);
		V_4 = L_12;
		int32_t L_13 = V_4;
		bool L_14 = V_3;
		if (L_14)
		{
			G_B3_0 = L_13;
			goto IL_0040;
		}
		G_B2_0 = L_13;
	}
	{
		G_B4_0 = ((int32_t)32);
		G_B4_1 = G_B2_0;
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 4;
		G_B4_1 = G_B3_0;
	}

IL_0041:
	{
		if ((((int32_t)G_B4_1) <= ((int32_t)G_B4_0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_15 = ___2_userSpecifiedLayers;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE2BF525BE84B3D6B88D844591311E684F7987A3)), L_17, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_encode_mD2CA9E51692636988CF9F3069FB8D0251C2785BB_RuntimeMethod_var)));
	}

IL_0059:
	{
		int32_t L_20 = V_4;
		bool L_21 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = Encoder_TotalBitsInLayer_mE318C9C6A22D489BFA27D57B172F0D90EE4C0A90(L_20, L_21, NULL);
		V_5 = L_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ((Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var))->___WORD_SIZE;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_6 = L_26;
		int32_t L_27 = V_5;
		int32_t L_28 = V_5;
		int32_t L_29 = V_6;
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_27, ((int32_t)(L_28%L_29))));
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_30 = V_0;
		int32_t L_31 = V_6;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_32;
		L_32 = Encoder_stuffBits_m2916FB84497706133ADE5BCE5EE151C0C6B53E06(L_30, L_31, NULL);
		V_7 = L_32;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_33 = V_7;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_33, NULL);
		int32_t L_35 = V_1;
		int32_t L_36 = V_17;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_34, L_35))) <= ((int32_t)L_36)))
		{
			goto IL_0099;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_37 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_37, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A7C2EA52CC29D9EFF9EB9AEA82AA1456542F7B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_encode_mD2CA9E51692636988CF9F3069FB8D0251C2785BB_RuntimeMethod_var)));
	}

IL_0099:
	{
		bool L_38 = V_3;
		if (!L_38)
		{
			goto IL_0151;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_39 = V_7;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_39, NULL);
		int32_t L_41 = V_6;
		if ((((int32_t)L_40) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)64))))))
		{
			goto IL_0151;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_42 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A7C2EA52CC29D9EFF9EB9AEA82AA1456542F7B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_encode_mD2CA9E51692636988CF9F3069FB8D0251C2785BB_RuntimeMethod_var)));
	}

IL_00bb:
	{
		V_6 = 0;
		V_7 = (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7*)NULL;
		V_18 = 0;
	}

IL_00c4:
	{
		int32_t L_43 = V_18;
		if ((((int32_t)L_43) <= ((int32_t)((int32_t)32))))
		{
			goto IL_00d5;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4E73755B7B3ABC61F614B6B3404904BDC750906)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_encode_mD2CA9E51692636988CF9F3069FB8D0251C2785BB_RuntimeMethod_var)));
	}

IL_00d5:
	{
		int32_t L_45 = V_18;
		V_3 = (bool)((((int32_t)((((int32_t)L_45) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_3;
		if (L_46)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_47 = V_18;
		G_B17_0 = L_47;
		goto IL_00e9;
	}

IL_00e5:
	{
		int32_t L_48 = V_18;
		G_B17_0 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00e9:
	{
		V_4 = G_B17_0;
		int32_t L_49 = V_4;
		bool L_50 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		int32_t L_51;
		L_51 = Encoder_TotalBitsInLayer_mE318C9C6A22D489BFA27D57B172F0D90EE4C0A90(L_49, L_50, NULL);
		V_5 = L_51;
		int32_t L_52 = V_2;
		int32_t L_53 = V_5;
		if ((((int32_t)L_52) > ((int32_t)L_53)))
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_54 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = ((Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var))->___WORD_SIZE;
		int32_t L_56 = V_4;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		if ((((int32_t)L_54) == ((int32_t)L_58)))
		{
			goto IL_011a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = ((Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var))->___WORD_SIZE;
		int32_t L_60 = V_4;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		int32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_6 = L_62;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_63 = V_0;
		int32_t L_64 = V_6;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_65;
		L_65 = Encoder_stuffBits_m2916FB84497706133ADE5BCE5EE151C0C6B53E06(L_63, L_64, NULL);
		V_7 = L_65;
	}

IL_011a:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_66 = V_7;
		if (!L_66)
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_67 = V_5;
		int32_t L_68 = V_5;
		int32_t L_69 = V_6;
		V_19 = ((int32_t)il2cpp_codegen_subtract(L_67, ((int32_t)(L_68%L_69))));
		bool L_70 = V_3;
		if (!L_70)
		{
			goto IL_0139;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_71 = V_7;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_71, NULL);
		int32_t L_73 = V_6;
		if ((((int32_t)L_72) > ((int32_t)((int32_t)il2cpp_codegen_multiply(L_73, ((int32_t)64))))))
		{
			goto IL_0146;
		}
	}

IL_0139:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_74 = V_7;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_74, NULL);
		int32_t L_76 = V_1;
		int32_t L_77 = V_19;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_75, L_76))) <= ((int32_t)L_77)))
		{
			goto IL_0151;
		}
	}

IL_0146:
	{
		int32_t L_78 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		goto IL_00c4;
	}

IL_0151:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_79 = V_7;
		int32_t L_80 = V_5;
		int32_t L_81 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_82;
		L_82 = Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362(L_79, L_80, L_81, NULL);
		V_8 = L_82;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_83 = V_7;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_83, NULL);
		int32_t L_85 = V_6;
		V_9 = ((int32_t)(L_84/L_85));
		bool L_86 = V_3;
		int32_t L_87 = V_4;
		int32_t L_88 = V_9;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_89;
		L_89 = Encoder_generateModeMessage_m6B5EAFDC92048DFA0E5716055990FF0A92367694(L_86, L_87, L_88, NULL);
		V_10 = L_89;
		bool L_90 = V_3;
		if (L_90)
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_91 = V_4;
		G_B28_0 = ((int32_t)il2cpp_codegen_add(((int32_t)14), ((int32_t)il2cpp_codegen_multiply(L_91, 4))));
		goto IL_0189;
	}

IL_0182:
	{
		int32_t L_92 = V_4;
		G_B28_0 = ((int32_t)il2cpp_codegen_add(((int32_t)11), ((int32_t)il2cpp_codegen_multiply(L_92, 4))));
	}

IL_0189:
	{
		V_11 = G_B28_0;
		int32_t L_93 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_93);
		V_12 = L_94;
		bool L_95 = V_3;
		if (!L_95)
		{
			goto IL_01b7;
		}
	}
	{
		int32_t L_96 = V_11;
		V_13 = L_96;
		V_20 = 0;
		goto IL_01ad;
	}

IL_01a0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = V_12;
		int32_t L_98 = V_20;
		int32_t L_99 = V_20;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(L_98), (int32_t)L_99);
		int32_t L_100 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_01ad:
	{
		int32_t L_101 = V_20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = V_12;
		NullCheck(L_102);
		if ((((int32_t)L_101) < ((int32_t)((int32_t)(((RuntimeArray*)L_102)->max_length)))))
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_0210;
	}

IL_01b7:
	{
		int32_t L_103 = V_11;
		int32_t L_104 = V_11;
		V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_103, 1)), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_104/2)), 1))/((int32_t)15)))))));
		int32_t L_105 = V_11;
		V_21 = ((int32_t)(L_105/2));
		int32_t L_106 = V_13;
		V_22 = ((int32_t)(L_106/2));
		V_23 = 0;
		goto IL_020a;
	}

IL_01da:
	{
		int32_t L_107 = V_23;
		int32_t L_108 = V_23;
		V_24 = ((int32_t)il2cpp_codegen_add(L_107, ((int32_t)(L_108/((int32_t)15)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = V_12;
		int32_t L_110 = V_21;
		int32_t L_111 = V_23;
		int32_t L_112 = V_22;
		int32_t L_113 = V_24;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_110, L_111)), 1))), (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_112, L_113)), 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_114 = V_12;
		int32_t L_115 = V_21;
		int32_t L_116 = V_23;
		int32_t L_117 = V_22;
		int32_t L_118 = V_24;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_115, L_116))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_117, L_118)), 1)));
		int32_t L_119 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_119, 1));
	}

IL_020a:
	{
		int32_t L_120 = V_23;
		int32_t L_121 = V_21;
		if ((((int32_t)L_120) < ((int32_t)L_121)))
		{
			goto IL_01da;
		}
	}

IL_0210:
	{
		int32_t L_122 = V_13;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_123 = (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91*)il2cpp_codegen_object_new(BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91_il2cpp_TypeInfo_var);
		BitMatrix__ctor_m43029CCB30F012A15D327BE473B515F6BDAEED68(L_123, L_122, NULL);
		V_14 = L_123;
		V_15 = 0;
		V_16 = 0;
		goto IL_0358;
	}

IL_0224:
	{
		bool L_124 = V_3;
		if (L_124)
		{
			goto IL_0233;
		}
	}
	{
		int32_t L_125 = V_4;
		int32_t L_126 = V_15;
		G_B40_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_125, L_126)), 4)), ((int32_t)12)));
		goto IL_023d;
	}

IL_0233:
	{
		int32_t L_127 = V_4;
		int32_t L_128 = V_15;
		G_B40_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_127, L_128)), 4)), ((int32_t)9)));
	}

IL_023d:
	{
		V_25 = G_B40_0;
		V_26 = 0;
		goto IL_0340;
	}

IL_0247:
	{
		int32_t L_129 = V_26;
		V_27 = ((int32_t)il2cpp_codegen_multiply(L_129, 2));
		V_28 = 0;
		goto IL_0332;
	}

IL_0255:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_130 = V_8;
		int32_t L_131 = V_16;
		int32_t L_132 = V_27;
		int32_t L_133 = V_28;
		NullCheck(L_130);
		bool L_134;
		L_134 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_130, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_131, L_132)), L_133)), NULL);
		if (!L_134)
		{
			goto IL_0282;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_135 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = V_12;
		int32_t L_137 = V_15;
		int32_t L_138 = V_28;
		NullCheck(L_136);
		int32_t L_139 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_137, 2)), L_138));
		int32_t L_140 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = V_12;
		int32_t L_142 = V_15;
		int32_t L_143 = V_26;
		NullCheck(L_141);
		int32_t L_144 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_142, 2)), L_143));
		int32_t L_145 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		NullCheck(L_135);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_135, L_140, L_145, (bool)1, NULL);
	}

IL_0282:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_146 = V_8;
		int32_t L_147 = V_16;
		int32_t L_148 = V_25;
		int32_t L_149 = V_27;
		int32_t L_150 = V_28;
		NullCheck(L_146);
		bool L_151;
		L_151 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_146, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_147, ((int32_t)il2cpp_codegen_multiply(L_148, 2)))), L_149)), L_150)), NULL);
		if (!L_151)
		{
			goto IL_02b9;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_152 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_153 = V_12;
		int32_t L_154 = V_15;
		int32_t L_155 = V_26;
		NullCheck(L_153);
		int32_t L_156 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_154, 2)), L_155));
		int32_t L_157 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_158 = V_12;
		int32_t L_159 = V_11;
		int32_t L_160 = V_15;
		int32_t L_161 = V_28;
		NullCheck(L_158);
		int32_t L_162 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_159, 1)), ((int32_t)il2cpp_codegen_multiply(L_160, 2)))), L_161));
		int32_t L_163 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_152);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_152, L_157, L_163, (bool)1, NULL);
	}

IL_02b9:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_164 = V_8;
		int32_t L_165 = V_16;
		int32_t L_166 = V_25;
		int32_t L_167 = V_27;
		int32_t L_168 = V_28;
		NullCheck(L_164);
		bool L_169;
		L_169 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_164, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 4)))), L_167)), L_168)), NULL);
		if (!L_169)
		{
			goto IL_02f5;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_170 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = V_12;
		int32_t L_172 = V_11;
		int32_t L_173 = V_15;
		int32_t L_174 = V_28;
		NullCheck(L_171);
		int32_t L_175 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_172, 1)), ((int32_t)il2cpp_codegen_multiply(L_173, 2)))), L_174));
		int32_t L_176 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = V_12;
		int32_t L_178 = V_11;
		int32_t L_179 = V_15;
		int32_t L_180 = V_26;
		NullCheck(L_177);
		int32_t L_181 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_178, 1)), ((int32_t)il2cpp_codegen_multiply(L_179, 2)))), L_180));
		int32_t L_182 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		NullCheck(L_170);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_170, L_176, L_182, (bool)1, NULL);
	}

IL_02f5:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_183 = V_8;
		int32_t L_184 = V_16;
		int32_t L_185 = V_25;
		int32_t L_186 = V_27;
		int32_t L_187 = V_28;
		NullCheck(L_183);
		bool L_188;
		L_188 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_183, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_184, ((int32_t)il2cpp_codegen_multiply(L_185, 6)))), L_186)), L_187)), NULL);
		if (!L_188)
		{
			goto IL_032c;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_189 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_190 = V_12;
		int32_t L_191 = V_11;
		int32_t L_192 = V_15;
		int32_t L_193 = V_26;
		NullCheck(L_190);
		int32_t L_194 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_191, 1)), ((int32_t)il2cpp_codegen_multiply(L_192, 2)))), L_193));
		int32_t L_195 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_196 = V_12;
		int32_t L_197 = V_15;
		int32_t L_198 = V_28;
		NullCheck(L_196);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_197, 2)), L_198));
		int32_t L_200 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		NullCheck(L_189);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_189, L_195, L_200, (bool)1, NULL);
	}

IL_032c:
	{
		int32_t L_201 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_201, 1));
	}

IL_0332:
	{
		int32_t L_202 = V_28;
		if ((((int32_t)L_202) < ((int32_t)2)))
		{
			goto IL_0255;
		}
	}
	{
		int32_t L_203 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_203, 1));
	}

IL_0340:
	{
		int32_t L_204 = V_26;
		int32_t L_205 = V_25;
		if ((((int32_t)L_204) < ((int32_t)L_205)))
		{
			goto IL_0247;
		}
	}
	{
		int32_t L_206 = V_16;
		int32_t L_207 = V_25;
		V_16 = ((int32_t)il2cpp_codegen_add(L_206, ((int32_t)il2cpp_codegen_multiply(L_207, 8))));
		int32_t L_208 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_208, 1));
	}

IL_0358:
	{
		int32_t L_209 = V_15;
		int32_t L_210 = V_4;
		if ((((int32_t)L_209) < ((int32_t)L_210)))
		{
			goto IL_0224;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_211 = V_14;
		bool L_212 = V_3;
		int32_t L_213 = V_13;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_214 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		Encoder_drawModeMessage_m344B010B37DF49C3F7121D4724B29B0AAFCCD410(L_211, L_212, L_213, L_214, NULL);
		bool L_215 = V_3;
		if (!L_215)
		{
			goto IL_0381;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_216 = V_14;
		int32_t L_217 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		Encoder_drawBullsEye_m9DB0322DDB42D393872E62E6092E813159FA75EC(L_216, ((int32_t)(L_217/2)), 5, NULL);
		goto IL_0407;
	}

IL_0381:
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_218 = V_14;
		int32_t L_219 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		Encoder_drawBullsEye_m9DB0322DDB42D393872E62E6092E813159FA75EC(L_218, ((int32_t)(L_219/2)), 7, NULL);
		V_29 = 0;
		V_30 = 0;
		goto IL_03fd;
	}

IL_0395:
	{
		int32_t L_220 = V_13;
		V_31 = ((int32_t)(((int32_t)(L_220/2))&1));
		goto IL_03e9;
	}

IL_039f:
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_221 = V_14;
		int32_t L_222 = V_13;
		int32_t L_223 = V_30;
		int32_t L_224 = V_31;
		NullCheck(L_221);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_221, ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_222/2)), L_223)), L_224, (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_225 = V_14;
		int32_t L_226 = V_13;
		int32_t L_227 = V_30;
		int32_t L_228 = V_31;
		NullCheck(L_225);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_225, ((int32_t)il2cpp_codegen_add(((int32_t)(L_226/2)), L_227)), L_228, (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_229 = V_14;
		int32_t L_230 = V_31;
		int32_t L_231 = V_13;
		int32_t L_232 = V_30;
		NullCheck(L_229);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_229, L_230, ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_231/2)), L_232)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_233 = V_14;
		int32_t L_234 = V_31;
		int32_t L_235 = V_13;
		int32_t L_236 = V_30;
		NullCheck(L_233);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_233, L_234, ((int32_t)il2cpp_codegen_add(((int32_t)(L_235/2)), L_236)), (bool)1, NULL);
		int32_t L_237 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_237, 2));
	}

IL_03e9:
	{
		int32_t L_238 = V_31;
		int32_t L_239 = V_13;
		if ((((int32_t)L_238) < ((int32_t)L_239)))
		{
			goto IL_039f;
		}
	}
	{
		int32_t L_240 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_240, ((int32_t)15)));
		int32_t L_241 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_241, ((int32_t)16)));
	}

IL_03fd:
	{
		int32_t L_242 = V_29;
		int32_t L_243 = V_11;
		if ((((int32_t)L_242) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_243/2)), 1)))))
		{
			goto IL_0395;
		}
	}

IL_0407:
	{
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_244 = (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366*)il2cpp_codegen_object_new(AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366_il2cpp_TypeInfo_var);
		AztecCode__ctor_mE6C895A9008C285C9375AFBCF5F41800DD0BFC79(L_244, NULL);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_245 = L_244;
		bool L_246 = V_3;
		NullCheck(L_245);
		AztecCode_set_isCompact_mEA109DBE1E4632CCABC8FE6CA701948C6794AD01_inline(L_245, L_246, NULL);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_247 = L_245;
		int32_t L_248 = V_13;
		NullCheck(L_247);
		AztecCode_set_Size_m0CA46D7572CEE88A5AFD5D3D0F1EEF7C96EEC646_inline(L_247, L_248, NULL);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_249 = L_247;
		int32_t L_250 = V_4;
		NullCheck(L_249);
		AztecCode_set_Layers_m93A7FD4EC1C095E5B2D09718205E25F0D2A5E1B2_inline(L_249, L_250, NULL);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_251 = L_249;
		int32_t L_252 = V_9;
		NullCheck(L_251);
		AztecCode_set_CodeWords_m67A81A3769CEA2C80EEE65C2268E9D61547F4250_inline(L_251, L_252, NULL);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_253 = L_251;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_254 = V_14;
		NullCheck(L_253);
		AztecCode_set_Matrix_mF2BCFE42A0D554A00944953AE84748491372E558_inline(L_253, L_254, NULL);
		return L_253;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_drawBullsEye_m9DB0322DDB42D393872E62E6092E813159FA75EC (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_matrix, int32_t ___1_center, int32_t ___2_size, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0044;
	}

IL_0004:
	{
		int32_t L_0 = ___1_center;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_003a;
	}

IL_000a:
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_2 = ___0_matrix;
		int32_t L_3 = V_1;
		int32_t L_4 = ___1_center;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_2, L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_6 = ___0_matrix;
		int32_t L_7 = V_1;
		int32_t L_8 = ___1_center;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_10 = ___0_matrix;
		int32_t L_11 = ___1_center;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_10);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_10, ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), L_13, (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_14 = ___0_matrix;
		int32_t L_15 = ___1_center;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_14);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), L_17, (bool)1, NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_003a:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___1_center;
		int32_t L_21 = V_0;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21)))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 2));
	}

IL_0044:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___2_size;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_25 = ___0_matrix;
		int32_t L_26 = ___1_center;
		int32_t L_27 = ___2_size;
		int32_t L_28 = ___1_center;
		int32_t L_29 = ___2_size;
		NullCheck(L_25);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_25, ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_30 = ___0_matrix;
		int32_t L_31 = ___1_center;
		int32_t L_32 = ___2_size;
		int32_t L_33 = ___1_center;
		int32_t L_34 = ___2_size;
		NullCheck(L_30);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_30, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_31, L_32)), 1)), ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_35 = ___0_matrix;
		int32_t L_36 = ___1_center;
		int32_t L_37 = ___2_size;
		int32_t L_38 = ___1_center;
		int32_t L_39 = ___2_size;
		NullCheck(L_35);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_38, L_39)), 1)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_40 = ___0_matrix;
		int32_t L_41 = ___1_center;
		int32_t L_42 = ___2_size;
		int32_t L_43 = ___1_center;
		int32_t L_44 = ___2_size;
		NullCheck(L_40);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_40, ((int32_t)il2cpp_codegen_add(L_41, L_42)), ((int32_t)il2cpp_codegen_subtract(L_43, L_44)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_45 = ___0_matrix;
		int32_t L_46 = ___1_center;
		int32_t L_47 = ___2_size;
		int32_t L_48 = ___1_center;
		int32_t L_49 = ___2_size;
		NullCheck(L_45);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_45, ((int32_t)il2cpp_codegen_add(L_46, L_47)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_48, L_49)), 1)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_50 = ___0_matrix;
		int32_t L_51 = ___1_center;
		int32_t L_52 = ___2_size;
		int32_t L_53 = ___1_center;
		int32_t L_54 = ___2_size;
		NullCheck(L_50);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_50, ((int32_t)il2cpp_codegen_add(L_51, L_52)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_53, L_54)), 1)), (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* Encoder_generateModeMessage_m6B5EAFDC92048DFA0E5716055990FF0A92367694 (bool ___0_compact, int32_t ___1_layers, int32_t ___2_messageSizeInWords, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_0 = NULL;
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_0 = (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7*)il2cpp_codegen_object_new(BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		BitArray__ctor_mF83850FDAA5CF98487FFDD1D29DDB8F3831C7AC4(L_0, NULL);
		V_0 = L_0;
		bool L_1 = ___0_compact;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_2 = V_0;
		int32_t L_3 = ___1_layers;
		NullCheck(L_2);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), 2, NULL);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_4 = V_0;
		int32_t L_5 = ___2_messageSizeInWords;
		NullCheck(L_4);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_4, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), 6, NULL);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_7;
		L_7 = Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362(L_6, ((int32_t)28), 4, NULL);
		return L_7;
	}

IL_0027:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_8 = V_0;
		int32_t L_9 = ___1_layers;
		NullCheck(L_8);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_8, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), 5, NULL);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_10 = V_0;
		int32_t L_11 = ___2_messageSizeInWords;
		NullCheck(L_10);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_10, ((int32_t)il2cpp_codegen_subtract(L_11, 1)), ((int32_t)11), NULL);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_13;
		L_13 = Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362(L_12, ((int32_t)40), 4, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_drawModeMessage_m344B010B37DF49C3F7121D4724B29B0AAFCCD410 (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_matrix, bool ___1_compact, int32_t ___2_matrixSize, BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___3_modeMessage, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___2_matrixSize;
		V_0 = ((int32_t)(L_0/2));
		bool L_1 = ___1_compact;
		if (!L_1)
		{
			goto IL_0072;
		}
	}
	{
		V_1 = 0;
		goto IL_006d;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_2, 3)), L_3));
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_4 = ___3_modeMessage;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_7 = ___0_matrix;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, 5)), (bool)1, NULL);
	}

IL_0025:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_10 = ___3_modeMessage;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_10, ((int32_t)il2cpp_codegen_add(L_11, 7)), NULL);
		if (!L_12)
		{
			goto IL_003b;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_13 = ___0_matrix;
		int32_t L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_13);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_13, ((int32_t)il2cpp_codegen_add(L_14, 5)), L_15, (bool)1, NULL);
	}

IL_003b:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_16 = ___3_modeMessage;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		bool L_18;
		L_18 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)20), L_17)), NULL);
		if (!L_18)
		{
			goto IL_0052;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_19 = ___0_matrix;
		int32_t L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_19);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_19, L_20, ((int32_t)il2cpp_codegen_add(L_21, 5)), (bool)1, NULL);
	}

IL_0052:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_22 = ___3_modeMessage;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		bool L_24;
		L_24 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_22, ((int32_t)il2cpp_codegen_subtract(((int32_t)27), L_23)), NULL);
		if (!L_24)
		{
			goto IL_0069;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_25 = ___0_matrix;
		int32_t L_26 = V_0;
		int32_t L_27 = V_2;
		NullCheck(L_25);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_25, ((int32_t)il2cpp_codegen_subtract(L_26, 5)), L_27, (bool)1, NULL);
	}

IL_0069:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_006d:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) < ((int32_t)7)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_0072:
	{
		V_3 = 0;
		goto IL_00e2;
	}

IL_0076:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_3;
		int32_t L_32 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_30, 5)), L_31)), ((int32_t)(L_32/5))));
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_33 = ___3_modeMessage;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		bool L_35;
		L_35 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_33, L_34, NULL);
		if (!L_35)
		{
			goto IL_0096;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_36 = ___0_matrix;
		int32_t L_37 = V_4;
		int32_t L_38 = V_0;
		NullCheck(L_36);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_36, L_37, ((int32_t)il2cpp_codegen_subtract(L_38, 7)), (bool)1, NULL);
	}

IL_0096:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_39 = ___3_modeMessage;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		bool L_41;
		L_41 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_39, ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)10))), NULL);
		if (!L_41)
		{
			goto IL_00ae;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_42 = ___0_matrix;
		int32_t L_43 = V_0;
		int32_t L_44 = V_4;
		NullCheck(L_42);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_42, ((int32_t)il2cpp_codegen_add(L_43, 7)), L_44, (bool)1, NULL);
	}

IL_00ae:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_45 = ___3_modeMessage;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		bool L_47;
		L_47 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_45, ((int32_t)il2cpp_codegen_subtract(((int32_t)29), L_46)), NULL);
		if (!L_47)
		{
			goto IL_00c6;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_48 = ___0_matrix;
		int32_t L_49 = V_4;
		int32_t L_50 = V_0;
		NullCheck(L_48);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_48, L_49, ((int32_t)il2cpp_codegen_add(L_50, 7)), (bool)1, NULL);
	}

IL_00c6:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_51 = ___3_modeMessage;
		int32_t L_52 = V_3;
		NullCheck(L_51);
		bool L_53;
		L_53 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_51, ((int32_t)il2cpp_codegen_subtract(((int32_t)39), L_52)), NULL);
		if (!L_53)
		{
			goto IL_00de;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_54 = ___0_matrix;
		int32_t L_55 = V_0;
		int32_t L_56 = V_4;
		NullCheck(L_54);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_54, ((int32_t)il2cpp_codegen_subtract(L_55, 7)), L_56, (bool)1, NULL);
	}

IL_00de:
	{
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00e2:
	{
		int32_t L_58 = V_3;
		if ((((int32_t)L_58) < ((int32_t)((int32_t)10))))
		{
			goto IL_0076;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___0_bitArray, int32_t ___1_totalBits, int32_t ___2_wordSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_0 = ___0_bitArray;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_0, NULL);
		int32_t L_2 = ___2_wordSize;
		if (!((int32_t)(L_1%L_2)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32725D282232F05FFA02D73D5E41117CB098398B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362_RuntimeMethod_var)));
	}

IL_0015:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_4 = ___0_bitArray;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_4, NULL);
		int32_t L_6 = ___2_wordSize;
		V_0 = ((int32_t)(L_5/L_6));
		int32_t L_7 = ___2_wordSize;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* L_8;
		L_8 = Encoder_getGF_m7810BB7858110F0120526691D09D6BB35CCCA939(L_7, NULL);
		ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636* L_9 = (ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636*)il2cpp_codegen_object_new(ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636_il2cpp_TypeInfo_var);
		ReedSolomonEncoder__ctor_m2A4083C8A626B06DFCD3577920083345EEFC0ECB(L_9, L_8, NULL);
		int32_t L_10 = ___1_totalBits;
		int32_t L_11 = ___2_wordSize;
		V_1 = ((int32_t)(L_10/L_11));
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_12 = ___0_bitArray;
		int32_t L_13 = ___2_wordSize;
		int32_t L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15;
		L_15 = Encoder_bitsToWords_m8C33CB301119283D80BBEBC75C27DAB639D6CFC3(L_12, L_13, L_14, NULL);
		V_2 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_2;
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		NullCheck(L_9);
		ReedSolomonEncoder_encode_mC912E0589BCE6FCFB4B24C6AE27DC980840178BD(L_9, L_16, ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
		int32_t L_19 = ___1_totalBits;
		int32_t L_20 = ___2_wordSize;
		V_3 = ((int32_t)(L_19%L_20));
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_21 = (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7*)il2cpp_codegen_object_new(BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		BitArray__ctor_mF83850FDAA5CF98487FFDD1D29DDB8F3831C7AC4(L_21, NULL);
		V_4 = L_21;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_22 = V_4;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_22, 0, L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_2;
		V_5 = L_24;
		V_6 = 0;
		goto IL_0072;
	}

IL_005b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_5;
		int32_t L_26 = V_6;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_7 = L_28;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_29 = V_4;
		int32_t L_30 = V_7;
		int32_t L_31 = ___2_wordSize;
		NullCheck(L_29);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_29, L_30, L_31, NULL);
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0072:
	{
		int32_t L_33 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_5;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_005b;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_35 = V_4;
		return L_35;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Encoder_bitsToWords_m8C33CB301119283D80BBEBC75C27DAB639D6CFC3 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___0_stuffedBits, int32_t ___1_wordSize, int32_t ___2_totalWords, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	{
		int32_t L_0 = ___2_totalWords;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_2 = ___0_stuffedBits;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_2, NULL);
		int32_t L_4 = ___1_wordSize;
		V_2 = ((int32_t)(L_3/L_4));
		goto IL_004d;
	}

IL_0014:
	{
		V_3 = 0;
		V_4 = 0;
		goto IL_0040;
	}

IL_001b:
	{
		int32_t L_5 = V_3;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_6 = ___0_stuffedBits;
		int32_t L_7 = V_1;
		int32_t L_8 = ___1_wordSize;
		int32_t L_9 = V_4;
		NullCheck(L_6);
		bool L_10;
		L_10 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_6, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, L_8)), L_9)), NULL);
		if (L_10)
		{
			G_B4_0 = L_5;
			goto IL_002d;
		}
		G_B3_0 = L_5;
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_0038;
	}

IL_002d:
	{
		int32_t L_11 = ___1_wordSize;
		int32_t L_12 = V_4;
		G_B5_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_11, L_12)), 1))&((int32_t)31)))));
		G_B5_1 = G_B4_0;
	}

IL_0038:
	{
		V_3 = ((int32_t)(G_B5_1|G_B5_0));
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0040:
	{
		int32_t L_14 = V_4;
		int32_t L_15 = ___1_wordSize;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_001b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)L_18);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004d:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0014;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* Encoder_getGF_m7810BB7858110F0120526691D09D6BB35CCCA939 (int32_t ___0_wordSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_wordSize;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 4)))
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_004c;
			}
			case 4:
			{
				goto IL_003a;
			}
			case 5:
			{
				goto IL_004c;
			}
			case 6:
			{
				goto IL_0040;
			}
			case 7:
			{
				goto IL_004c;
			}
			case 8:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_004c;
	}

IL_002e:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var);
		GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* L_1 = ((GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var))->___AZTEC_PARAM;
		return L_1;
	}

IL_0034:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var);
		GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* L_2 = ((GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var))->___AZTEC_DATA_6;
		return L_2;
	}

IL_003a:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var);
		GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* L_3 = ((GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var))->___AZTEC_DATA_8;
		return L_3;
	}

IL_0040:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var);
		GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* L_4 = ((GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var))->___AZTEC_DATA_10;
		return L_4;
	}

IL_0046:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var);
		GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* L_5 = ((GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var))->___AZTEC_DATA_12;
		return L_5;
	}

IL_004c:
	{
		return (GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* Encoder_stuffBits_m2916FB84497706133ADE5BCE5EE151C0C6B53E06 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___0_bits, int32_t ___1_wordSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_0 = (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7*)il2cpp_codegen_object_new(BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		BitArray__ctor_mF83850FDAA5CF98487FFDD1D29DDB8F3831C7AC4(L_0, NULL);
		V_0 = L_0;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_1 = ___0_bits;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = ___1_wordSize;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))), 2));
		V_3 = 0;
		goto IL_008c;
	}

IL_001a:
	{
		V_4 = 0;
		V_5 = 0;
		goto IL_004b;
	}

IL_0022:
	{
		int32_t L_4 = V_3;
		int32_t L_5 = V_5;
		int32_t L_6 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) >= ((int32_t)L_6)))
		{
			goto IL_0035;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_7 = ___0_bits;
		int32_t L_8 = V_3;
		int32_t L_9 = V_5;
		NullCheck(L_7);
		bool L_10;
		L_10 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}

IL_0035:
	{
		int32_t L_11 = V_4;
		int32_t L_12 = ___1_wordSize;
		int32_t L_13 = V_5;
		V_4 = ((int32_t)(L_11|((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_12, 1)), L_13))&((int32_t)31)))))));
	}

IL_0045:
	{
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004b:
	{
		int32_t L_15 = V_5;
		int32_t L_16 = ___1_wordSize;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_2;
		int32_t L_19 = V_2;
		if ((!(((uint32_t)((int32_t)(L_17&L_18))) == ((uint32_t)L_19))))
		{
			goto IL_0068;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_20 = V_0;
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		int32_t L_23 = ___1_wordSize;
		NullCheck(L_20);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_20, ((int32_t)(L_21&L_22)), L_23, NULL);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		goto IL_0088;
	}

IL_0068:
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_2;
		if (((int32_t)(L_25&L_26)))
		{
			goto IL_007f;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_27 = V_0;
		int32_t L_28 = V_4;
		int32_t L_29 = ___1_wordSize;
		NullCheck(L_27);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_27, ((int32_t)(L_28|1)), L_29, NULL);
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		goto IL_0088;
	}

IL_007f:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_31 = V_0;
		int32_t L_32 = V_4;
		int32_t L_33 = ___1_wordSize;
		NullCheck(L_31);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_31, L_32, L_33, NULL);
	}

IL_0088:
	{
		int32_t L_34 = V_3;
		int32_t L_35 = ___1_wordSize;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
	}

IL_008c:
	{
		int32_t L_36 = V_3;
		int32_t L_37 = V_1;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_001a;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_38 = V_0;
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Encoder_TotalBitsInLayer_mE318C9C6A22D489BFA27D57B172F0D90EE4C0A90 (int32_t ___0_layers, bool ___1_compact, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___1_compact;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = ((int32_t)112);
		goto IL_0009;
	}

IL_0007:
	{
		G_B3_0 = ((int32_t)88);
	}

IL_0009:
	{
		int32_t L_1 = ___0_layers;
		int32_t L_2 = ___0_layers;
		return ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(G_B3_0, ((int32_t)il2cpp_codegen_multiply(((int32_t)16), L_1)))), L_2));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__cctor_mE5A7AA7413722F76E2DF2346BF3C09C20EC424F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____8A019BA8F105330945DEE7EB1C1A8F0FD7A6ED50EC1DA572C608744C0B3E24EC_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)33));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____8A019BA8F105330945DEE7EB1C1A8F0FD7A6ED50EC1DA572C608744C0B3E24EC_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var))->___WORD_SIZE = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var))->___WORD_SIZE), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder__cctor_m2D13A027FE9CB5856027F48B0A39977F1204496A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____1A8F4E562C2DABE4728E98773DB84DA4BD971C37D436C5750CDD268EA5910902_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____223D2602D7E760EDC918D74F3974774438D5D0E671A3C5BC2D09720BA091D1C1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____25E47AD2FC8E5BB15C5CE4B2349FD6FF82F52EAEC76E84DB445C957A97D86F9A_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____31C335D45EE24E3E73C8752FF336B474B595D625C9752E20124AD00ABAAB6584_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____347DEEE146787EA01C48F2EDA088FFDAF23BB2444A747DD23B11FDA66098C05D_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____45F364B6BC0DA851AB1F1F74FF755A876A1B777D30FC741AFA07D991DEEF17FB_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____CC7FED0F1EECD78D8413D37FCF850C4C60B8178D8EDEE43D9A5158C2CC83D140_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral064E2EB96BFBA4435F9EA2F79B02C0B9259C8FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DEFE38892D6ECBD587674E5A0EC40F37474683C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD033B5766A1B644BF791C9396B14A543AD25C5D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE0551951E4C48B5FCD9FF681A6AAE721895D771);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_7 = NULL;
	int32_t V_8 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD033B5766A1B644BF791C9396B14A543AD25C5D4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8DEFE38892D6ECBD587674E5A0EC40F37474683C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralFE0551951E4C48B5FCD9FF681A6AAE721895D771);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral064E2EB96BFBA4435F9EA2F79B02C0B9259C8FB4);
		((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___MODE_NAMES = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___MODE_NAMES), (void*)L_5);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_6 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_7 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_10 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____1A8F4E562C2DABE4728E98773DB84DA4BD971C37D436C5750CDD268EA5910902_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_9, L_10, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_9);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_11 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____347DEEE146787EA01C48F2EDA088FFDAF23BB2444A747DD23B11FDA66098C05D_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_13);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_15 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_18 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____45F364B6BC0DA851AB1F1F74FF755A876A1B777D30FC741AFA07D991DEEF17FB_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_17, L_18, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_17);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_19 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_22 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____223D2602D7E760EDC918D74F3974774438D5D0E671A3C5BC2D09720BA091D1C1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_21, L_22, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_21);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_23 = L_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = L_24;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_26 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____25E47AD2FC8E5BB15C5CE4B2349FD6FF82F52EAEC76E84DB445C957A97D86F9A_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_25, L_26, NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_25);
		((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___LATCH_TABLE = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___LATCH_TABLE), (void*)L_23);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_27 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)5);
		((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP), (void*)L_27);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_28 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)6);
		((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE), (void*)L_28);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_29 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_30);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_31 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_32);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_33 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_34);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_35 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(3), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_36);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_37 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_38);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_39 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_40);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_41 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_42);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_43 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_44);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_45 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(3), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_46);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_47 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_48);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_49 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(5), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_50);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_51 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_51);
		int32_t L_52 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)1);
		V_2 = ((int32_t)65);
		goto IL_017e;
	}

IL_016b:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_54 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_54);
		int32_t L_55 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		int32_t L_57 = V_2;
		int32_t L_58 = V_2;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_58, ((int32_t)65))), 2)));
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_017e:
	{
		int32_t L_60 = V_2;
		if ((((int32_t)L_60) <= ((int32_t)((int32_t)90))))
		{
			goto IL_016b;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_61 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_61);
		int32_t L_62 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)1);
		V_3 = ((int32_t)97);
		goto IL_01a6;
	}

IL_0193:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_64 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_64);
		int32_t L_65 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = V_3;
		int32_t L_68 = V_3;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_68, ((int32_t)97))), 2)));
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_01a6:
	{
		int32_t L_70 = V_3;
		if ((((int32_t)L_70) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0193;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_71 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_71);
		int32_t L_72 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)1);
		V_4 = ((int32_t)48);
		goto IL_01d3;
	}

IL_01bc:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_74 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_74);
		int32_t L_75 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		int32_t L_77 = V_4;
		int32_t L_78 = V_4;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_78, ((int32_t)48))), 2)));
		int32_t L_79 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_01d3:
	{
		int32_t L_80 = V_4;
		if ((((int32_t)L_80) <= ((int32_t)((int32_t)57))))
		{
			goto IL_01bc;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_81 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_81);
		int32_t L_82 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (int32_t)((int32_t)12));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_84 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_84);
		int32_t L_85 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (int32_t)((int32_t)13));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = L_87;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_89 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____31C335D45EE24E3E73C8752FF336B474B595D625C9752E20124AD00ABAAB6584_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_88, L_89, NULL);
		V_0 = L_88;
		V_5 = 0;
		goto IL_021d;
	}

IL_0209:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_90 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_90);
		int32_t L_91 = 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_0;
		int32_t L_94 = V_5;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		int32_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		int32_t L_97 = V_5;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (int32_t)L_97);
		int32_t L_98 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_021d:
	{
		int32_t L_99 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length)))))
		{
			goto IL_0209;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = L_101;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_103 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____CC7FED0F1EECD78D8413D37FCF850C4C60B8178D8EDEE43D9A5158C2CC83D140_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_102, L_103, NULL);
		V_1 = L_102;
		V_6 = 0;
		goto IL_0257;
	}

IL_023c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = V_1;
		int32_t L_105 = V_6;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		int32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		if ((((int32_t)L_107) <= ((int32_t)0)))
		{
			goto IL_0251;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_108 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_108);
		int32_t L_109 = 4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = V_1;
		int32_t L_112 = V_6;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		int32_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		int32_t L_115 = V_6;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_114), (int32_t)L_115);
	}

IL_0251:
	{
		int32_t L_116 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_0257:
	{
		int32_t L_117 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = V_1;
		NullCheck(L_118);
		if ((((int32_t)L_117) < ((int32_t)((int32_t)(((RuntimeArray*)L_118)->max_length)))))
		{
			goto IL_023c;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_119 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		V_7 = L_119;
		V_8 = 0;
		goto IL_027b;
	}

IL_026a:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_120 = V_7;
		int32_t L_121 = V_8;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3(L_123, (-1), SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3_RuntimeMethod_var);
		int32_t L_124 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_027b:
	{
		int32_t L_125 = V_8;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_126 = V_7;
		NullCheck(L_126);
		if ((((int32_t)L_125) < ((int32_t)((int32_t)(((RuntimeArray*)L_126)->max_length)))))
		{
			goto IL_026a;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_127 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		NullCheck(L_127);
		int32_t L_128 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_130 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		NullCheck(L_130);
		int32_t L_131 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_133 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		NullCheck(L_133);
		int32_t L_134 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)28));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_136 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		NullCheck(L_136);
		int32_t L_137 = 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_139 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		NullCheck(L_139);
		int32_t L_140 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_142 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		NullCheck(L_142);
		int32_t L_143 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder__ctor_m5D76513D10748A7055A27AFF6F123E5087088A08 (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_text, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_text;
		__this->___text = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* HighLevelEncoder_encode_mA3BA7ECA8AEDD744D40C6136258D6253BF84F94C (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_mEFCFA9C3A001B40ACCD3A98FA215D51582A818F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	RuntimeObject* V_6 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_7 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3* L_0 = (Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3*)il2cpp_codegen_object_new(Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3_il2cpp_TypeInfo_var);
		Collection_1__ctor_mEFCFA9C3A001B40ACCD3A98FA215D51582A818F9(L_0, Collection_1__ctor_mEFCFA9C3A001B40ACCD3A98FA215D51582A818F9_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_2 = ((State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_StaticFields*)il2cpp_codegen_static_fields_for(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var))->___INITIAL_STATE;
		NullCheck(L_1);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_1, L_2);
		V_2 = 0;
		goto IL_00b8;
	}

IL_0018:
	{
		int32_t L_3 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___text;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, 1))) < ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0032;
	}

IL_0028:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___text;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		G_B4_0 = ((int32_t)(L_8));
	}

IL_0032:
	{
		V_3 = G_B4_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___text;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_5 = L_12;
		uint8_t L_13 = V_5;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)44)))))
		{
			goto IL_0051;
		}
	}
	{
		uint8_t L_14 = V_5;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)13))))
		{
			goto IL_005f;
		}
	}
	{
		uint8_t L_15 = V_5;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)44))))
		{
			goto IL_0079;
		}
	}
	{
		goto IL_0093;
	}

IL_0051:
	{
		uint8_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)46))))
		{
			goto IL_006c;
		}
	}
	{
		uint8_t L_17 = V_5;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)58))))
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0093;
	}

IL_005f:
	{
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)10))))
		{
			goto IL_0067;
		}
	}
	{
		G_B14_0 = 0;
		goto IL_0068;
	}

IL_0067:
	{
		G_B14_0 = 2;
	}

IL_0068:
	{
		V_4 = G_B14_0;
		goto IL_0096;
	}

IL_006c:
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)32))))
		{
			goto IL_0074;
		}
	}
	{
		G_B18_0 = 0;
		goto IL_0075;
	}

IL_0074:
	{
		G_B18_0 = 3;
	}

IL_0075:
	{
		V_4 = G_B18_0;
		goto IL_0096;
	}

IL_0079:
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}
	{
		G_B22_0 = 0;
		goto IL_0082;
	}

IL_0081:
	{
		G_B22_0 = 4;
	}

IL_0082:
	{
		V_4 = G_B22_0;
		goto IL_0096;
	}

IL_0086:
	{
		int32_t L_21 = V_3;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)32))))
		{
			goto IL_008e;
		}
	}
	{
		G_B26_0 = 0;
		goto IL_008f;
	}

IL_008e:
	{
		G_B26_0 = 5;
	}

IL_008f:
	{
		V_4 = G_B26_0;
		goto IL_0096;
	}

IL_0093:
	{
		V_4 = 0;
	}

IL_0096:
	{
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00ab;
		}
	}
	{
		RuntimeObject* L_23 = V_0;
		int32_t L_24 = V_2;
		int32_t L_25 = V_4;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_26;
		L_26 = HighLevelEncoder_updateStateListForPair_m8628AD1B6BDA02E6D62146D55DC7001745D5C03E(L_23, L_24, L_25, NULL);
		V_0 = L_26;
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		goto IL_00b4;
	}

IL_00ab:
	{
		RuntimeObject* L_28 = V_0;
		int32_t L_29 = V_2;
		RuntimeObject* L_30;
		L_30 = HighLevelEncoder_updateStateListForChar_m02F5DE3465C2DC403F16E26DFA954AC446374E6D(__this, L_28, L_29, NULL);
		V_0 = L_30;
	}

IL_00b4:
	{
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00b8:
	{
		int32_t L_32 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___text;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		V_1 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)NULL;
		RuntimeObject* L_34 = V_0;
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var, L_34);
		V_6 = L_35;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0100:
			{
				{
					RuntimeObject* L_36 = V_6;
					if (!L_36)
					{
						goto IL_010b;
					}
				}
				{
					RuntimeObject* L_37 = V_6;
					NullCheck(L_37);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_37);
				}

IL_010b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00f5_1;
			}

IL_00d2_1:
			{
				RuntimeObject* L_38 = V_6;
				NullCheck(L_38);
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_39;
				L_39 = InterfaceFuncInvoker0< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(0, IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var, L_38);
				V_7 = L_39;
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_40 = V_1;
				if (L_40)
				{
					goto IL_00e3_1;
				}
			}
			{
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_41 = V_7;
				V_1 = L_41;
				goto IL_00f5_1;
			}

IL_00e3_1:
			{
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_42 = V_7;
				NullCheck(L_42);
				int32_t L_43;
				L_43 = State_get_BitCount_m374653FBA64911E8466874979251DD8E14DA6F21_inline(L_42, NULL);
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_44 = V_1;
				NullCheck(L_44);
				int32_t L_45;
				L_45 = State_get_BitCount_m374653FBA64911E8466874979251DD8E14DA6F21_inline(L_44, NULL);
				if ((((int32_t)L_43) >= ((int32_t)L_45)))
				{
					goto IL_00f5_1;
				}
			}
			{
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_46 = V_7;
				V_1 = L_46;
			}

IL_00f5_1:
			{
				RuntimeObject* L_47 = V_6;
				NullCheck(L_47);
				bool L_48;
				L_48 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_47);
				if (L_48)
				{
					goto IL_00d2_1;
				}
			}
			{
				goto IL_010c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010c:
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_49 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = __this->___text;
		NullCheck(L_49);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_51;
		L_51 = State_toBitArray_m460830AE00C7651A6157FA35640FA51B827A10D6(L_49, L_50, NULL);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_updateStateListForChar_m02F5DE3465C2DC403F16E26DFA954AC446374E6D (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, RuntimeObject* ___0_states, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_2 = NULL;
	{
		LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_0 = (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*)il2cpp_codegen_object_new(LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E(L_0, LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_states;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0032;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0032:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001f_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_6;
				L_6 = InterfaceFuncInvoker0< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(0, IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_7 = V_2;
				int32_t L_8 = ___1_index;
				LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_9 = V_0;
				HighLevelEncoder_updateStateForChar_mB0639E6B699D70BC04E9CB7A02D7A34F7558C0DA(__this, L_7, L_8, L_9, NULL);
			}

IL_001f_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0033;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_13;
		L_13 = HighLevelEncoder_simplifyStates_m982AF46EB6F0274E3D39FE8C2FC4E045660B972B(L_12, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_updateStateForChar_mB0639E6B699D70BC04E9CB7A02D7A34F7558C0DA (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___0_state, int32_t ___1_index, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	bool V_1 = false;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_5 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_6 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_7 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___text;
		int32_t L_1 = ___1_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int32_t)(uint16_t)((int32_t)((int32_t)L_3&((int32_t)255))));
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_5 = ___0_state;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline(L_5, NULL);
		NullCheck(L_4);
		int32_t L_7 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Il2CppChar L_9 = V_0;
		NullCheck(L_8);
		Il2CppChar L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		V_2 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)NULL;
		V_3 = 0;
		goto IL_0091;
	}

IL_0028:
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_12 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Il2CppChar L_16 = V_0;
		NullCheck(L_15);
		Il2CppChar L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_20 = V_2;
		if (L_20)
		{
			goto IL_0043;
		}
	}
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_21 = ___0_state;
		int32_t L_22 = ___1_index;
		NullCheck(L_21);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_23;
		L_23 = State_endBinaryShift_mF03B4CF10D15C21B454C42E57FEFEEE9487F3CAA(L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_0043:
	{
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_25 = V_3;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_26 = ___0_state;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline(L_26, NULL);
		if ((((int32_t)L_25) == ((int32_t)L_27)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_0066;
		}
	}

IL_0053:
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_29 = V_2;
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		NullCheck(L_29);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_32;
		L_32 = State_latchAndAppend_mE55C3059484238FFB5074D570DBCACE32F6BC97C(L_29, L_30, L_31, NULL);
		V_5 = L_32;
		RuntimeObject* L_33 = ___2_result;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_34 = V_5;
		NullCheck(L_33);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_33, L_34);
	}

IL_0066:
	{
		bool L_35 = V_1;
		if (L_35)
		{
			goto IL_008d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_36 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_37 = ___0_state;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline(L_37, NULL);
		NullCheck(L_36);
		int32_t L_39 = L_38;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		int32_t L_41 = V_3;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_44 = V_2;
		int32_t L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_44);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_47;
		L_47 = State_shiftAndAppend_m5BEAC669B35425547C1C107C3B317FB78120F503(L_44, L_45, L_46, NULL);
		V_6 = L_47;
		RuntimeObject* L_48 = ___2_result;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_49 = V_6;
		NullCheck(L_48);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_48, L_49);
	}

IL_008d:
	{
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0091:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) <= ((int32_t)4)))
		{
			goto IL_0028;
		}
	}
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_52 = ___0_state;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = State_get_BinaryShiftByteCount_mAF226194E9D6F96EC8ADC2E6CD2B77B98BA67460_inline(L_52, NULL);
		if ((((int32_t)L_53) > ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_54 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_55 = ___0_state;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline(L_55, NULL);
		NullCheck(L_54);
		int32_t L_57 = L_56;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Il2CppChar L_59 = V_0;
		NullCheck(L_58);
		Il2CppChar L_60 = L_59;
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		if (L_61)
		{
			goto IL_00bf;
		}
	}

IL_00ae:
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_62 = ___0_state;
		int32_t L_63 = ___1_index;
		NullCheck(L_62);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_64;
		L_64 = State_addBinaryShiftChar_mB4EACA49074103F41E90EF3F8B2936D1DA09D9D4(L_62, L_63, NULL);
		V_7 = L_64;
		RuntimeObject* L_65 = ___2_result;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_66 = V_7;
		NullCheck(L_65);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_65, L_66);
	}

IL_00bf:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_updateStateListForPair_m8628AD1B6BDA02E6D62146D55DC7001745D5C03E (RuntimeObject* ___0_states, int32_t ___1_index, int32_t ___2_pairCode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_0 = (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*)il2cpp_codegen_object_new(LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E(L_0, LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_states;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_6;
				L_6 = InterfaceFuncInvoker0< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(0, IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var, L_5);
				int32_t L_7 = ___1_index;
				int32_t L_8 = ___2_pairCode;
				LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_9 = V_0;
				il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
				HighLevelEncoder_updateStateForPair_mD9DA25C1DD807D847C415C35D29A1A8618EDDF3C(L_6, L_7, L_8, L_9, NULL);
			}

IL_001d_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_13;
		L_13 = HighLevelEncoder_simplifyStates_m982AF46EB6F0274E3D39FE8C2FC4E045660B972B(L_12, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_updateStateForPair_mD9DA25C1DD807D847C415C35D29A1A8618EDDF3C (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___0_state, int32_t ___1_index, int32_t ___2_pairCode, RuntimeObject* ___3_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_0 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_1 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_2 = NULL;
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_0 = ___0_state;
		int32_t L_1 = ___1_index;
		NullCheck(L_0);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_2;
		L_2 = State_endBinaryShift_mF03B4CF10D15C21B454C42E57FEFEEE9487F3CAA(L_0, L_1, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___3_result;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_4 = V_0;
		int32_t L_5 = ___2_pairCode;
		NullCheck(L_4);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_6;
		L_6 = State_latchAndAppend_mE55C3059484238FFB5074D570DBCACE32F6BC97C(L_4, 4, L_5, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_3, L_6);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_7 = ___0_state;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline(L_7, NULL);
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_9 = ___3_result;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_10 = V_0;
		int32_t L_11 = ___2_pairCode;
		NullCheck(L_10);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_12;
		L_12 = State_shiftAndAppend_m5BEAC669B35425547C1C107C3B317FB78120F503(L_10, 4, L_11, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_9, L_12);
	}

IL_002d:
	{
		int32_t L_13 = ___2_pairCode;
		if ((((int32_t)L_13) == ((int32_t)3)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_14 = ___2_pairCode;
		if ((!(((uint32_t)L_14) == ((uint32_t)4))))
		{
			goto IL_004f;
		}
	}

IL_0035:
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_15 = V_0;
		int32_t L_16 = ___2_pairCode;
		NullCheck(L_15);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_17;
		L_17 = State_latchAndAppend_mE55C3059484238FFB5074D570DBCACE32F6BC97C(L_15, 2, ((int32_t)il2cpp_codegen_subtract(((int32_t)16), L_16)), NULL);
		NullCheck(L_17);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_18;
		L_18 = State_latchAndAppend_mE55C3059484238FFB5074D570DBCACE32F6BC97C(L_17, 2, 1, NULL);
		V_1 = L_18;
		RuntimeObject* L_19 = ___3_result;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_20 = V_1;
		NullCheck(L_19);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_19, L_20);
	}

IL_004f:
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_21 = ___0_state;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = State_get_BinaryShiftByteCount_mAF226194E9D6F96EC8ADC2E6CD2B77B98BA67460_inline(L_21, NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_23 = ___0_state;
		int32_t L_24 = ___1_index;
		NullCheck(L_23);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_25;
		L_25 = State_addBinaryShiftChar_mB4EACA49074103F41E90EF3F8B2936D1DA09D9D4(L_23, L_24, NULL);
		int32_t L_26 = ___1_index;
		NullCheck(L_25);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_27;
		L_27 = State_addBinaryShiftChar_mB4EACA49074103F41E90EF3F8B2936D1DA09D9D4(L_25, ((int32_t)il2cpp_codegen_add(L_26, 1)), NULL);
		V_2 = L_27;
		RuntimeObject* L_28 = ___3_result;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_29 = V_2;
		NullCheck(L_28);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_28, L_29);
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_simplifyStates_m982AF46EB6F0274E3D39FE8C2FC4E045660B972B (RuntimeObject* ___0_states, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m919D800AE959E626F6852A5973F9717DD6972AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC8A1C43E022AEED5D184DBFF0341EEA142AFBA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m28B442E01581BF12D5FCD336A7EDC5B06557C5F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA7B575B7C368C0E65640C751580B7BF5C32C26B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2834ED4F986309D222B713E76BEC546C5582E77E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m79F5915848267C47D94B643711512694201CE1A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_m1C054170CA970A672433FCD495781D76728EEE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_m594ECE72AB487FC1A61344B4BBF168057A2004C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Remove_mD556C19EC89E137F75116D2DBE8636E7DCFFD7BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEEFA0682FF21B1AD6209A6CEE2692423676C0DE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8EF78FF0F61C840189C1D984D94640875848FD0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m23D8CEB4D54B73CD12D4987C6B682FAEB4966479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9A4ECE45E618A9ECCEFFB1238D602846ED65CBCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* V_0 = NULL;
	List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_3 = NULL;
	bool V_4 = false;
	Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D V_5;
	memset((&V_5), 0, sizeof(V_5));
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_6 = NULL;
	Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC V_7;
	memset((&V_7), 0, sizeof(V_7));
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_8 = NULL;
	{
		LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_0 = (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*)il2cpp_codegen_object_new(LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E(L_0, LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* L_1 = (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797*)il2cpp_codegen_object_new(List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797_il2cpp_TypeInfo_var);
		List_1__ctor_m9A4ECE45E618A9ECCEFFB1238D602846ED65CBCB(L_1, List_1__ctor_m9A4ECE45E618A9ECCEFFB1238D602846ED65CBCB_RuntimeMethod_var);
		V_1 = L_1;
		RuntimeObject* L_2 = ___0_states;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c3:
			{
				{
					RuntimeObject* L_4 = V_2;
					if (!L_4)
					{
						goto IL_00cc;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_00cc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00b6_1;
			}

IL_0018_1:
			{
				RuntimeObject* L_6 = V_2;
				NullCheck(L_6);
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_7;
				L_7 = InterfaceFuncInvoker0< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(0, IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var, L_6);
				V_3 = L_7;
				V_4 = (bool)1;
				List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* L_8 = V_1;
				NullCheck(L_8);
				List_1_Clear_m8EF78FF0F61C840189C1D984D94640875848FD0E_inline(L_8, List_1_Clear_m8EF78FF0F61C840189C1D984D94640875848FD0E_RuntimeMethod_var);
				LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_9 = V_0;
				NullCheck(L_9);
				Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D L_10;
				L_10 = LinkedList_1_GetEnumerator_m594ECE72AB487FC1A61344B4BBF168057A2004C5(L_9, LinkedList_1_GetEnumerator_m594ECE72AB487FC1A61344B4BBF168057A2004C5_RuntimeMethod_var);
				V_5 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0067_1:
					{
						Enumerator_Dispose_m919D800AE959E626F6852A5973F9717DD6972AF8((&V_5), Enumerator_Dispose_m919D800AE959E626F6852A5973F9717DD6972AF8_RuntimeMethod_var);
						return;
					}
				});
				try
				{
					{
						goto IL_005c_2;
					}

IL_0032_2:
					{
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_11;
						L_11 = Enumerator_get_Current_m2834ED4F986309D222B713E76BEC546C5582E77E_inline((&V_5), Enumerator_get_Current_m2834ED4F986309D222B713E76BEC546C5582E77E_RuntimeMethod_var);
						V_6 = L_11;
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_12 = V_6;
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_13 = V_3;
						NullCheck(L_12);
						bool L_14;
						L_14 = State_isBetterThanOrEqualTo_mB2A3638216A643530BFF3717A7EF7FD2EC236300(L_12, L_13, NULL);
						if (!L_14)
						{
							goto IL_004a_2;
						}
					}
					{
						V_4 = (bool)0;
						goto IL_0075_1;
					}

IL_004a_2:
					{
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_15 = V_3;
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_16 = V_6;
						NullCheck(L_15);
						bool L_17;
						L_17 = State_isBetterThanOrEqualTo_mB2A3638216A643530BFF3717A7EF7FD2EC236300(L_15, L_16, NULL);
						if (!L_17)
						{
							goto IL_005c_2;
						}
					}
					{
						List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* L_18 = V_1;
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_19 = V_6;
						NullCheck(L_18);
						List_1_Add_mEEFA0682FF21B1AD6209A6CEE2692423676C0DE2_inline(L_18, L_19, List_1_Add_mEEFA0682FF21B1AD6209A6CEE2692423676C0DE2_RuntimeMethod_var);
					}

IL_005c_2:
					{
						bool L_20;
						L_20 = Enumerator_MoveNext_m28B442E01581BF12D5FCD336A7EDC5B06557C5F1((&V_5), Enumerator_MoveNext_m28B442E01581BF12D5FCD336A7EDC5B06557C5F1_RuntimeMethod_var);
						if (L_20)
						{
							goto IL_0032_2;
						}
					}
					{
						goto IL_0075_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0075_1:
			{
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0081_1;
				}
			}
			{
				LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_22 = V_0;
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_23 = V_3;
				NullCheck(L_22);
				LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* L_24;
				L_24 = LinkedList_1_AddLast_m1C054170CA970A672433FCD495781D76728EEE7D(L_22, L_23, LinkedList_1_AddLast_m1C054170CA970A672433FCD495781D76728EEE7D_RuntimeMethod_var);
			}

IL_0081_1:
			{
				List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* L_25 = V_1;
				NullCheck(L_25);
				Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC L_26;
				L_26 = List_1_GetEnumerator_m23D8CEB4D54B73CD12D4987C6B682FAEB4966479(L_25, List_1_GetEnumerator_m23D8CEB4D54B73CD12D4987C6B682FAEB4966479_RuntimeMethod_var);
				V_7 = L_26;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a8_1:
					{
						Enumerator_Dispose_mC8A1C43E022AEED5D184DBFF0341EEA142AFBA4C((&V_7), Enumerator_Dispose_mC8A1C43E022AEED5D184DBFF0341EEA142AFBA4C_RuntimeMethod_var);
						return;
					}
				});
				try
				{
					{
						goto IL_009d_2;
					}

IL_008b_2:
					{
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_27;
						L_27 = Enumerator_get_Current_m79F5915848267C47D94B643711512694201CE1A1_inline((&V_7), Enumerator_get_Current_m79F5915848267C47D94B643711512694201CE1A1_RuntimeMethod_var);
						V_8 = L_27;
						LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_28 = V_0;
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_29 = V_8;
						NullCheck(L_28);
						bool L_30;
						L_30 = LinkedList_1_Remove_mD556C19EC89E137F75116D2DBE8636E7DCFFD7BF(L_28, L_29, LinkedList_1_Remove_mD556C19EC89E137F75116D2DBE8636E7DCFFD7BF_RuntimeMethod_var);
					}

IL_009d_2:
					{
						bool L_31;
						L_31 = Enumerator_MoveNext_mA7B575B7C368C0E65640C751580B7BF5C32C26B4((&V_7), Enumerator_MoveNext_mA7B575B7C368C0E65640C751580B7BF5C32C26B4_RuntimeMethod_var);
						if (L_31)
						{
							goto IL_008b_2;
						}
					}
					{
						goto IL_00b6_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b6_1:
			{
				RuntimeObject* L_32 = V_2;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_00cd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cd:
	{
		LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_34 = V_0;
		return L_34;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleToken__ctor_m851DEE60A78CB01A090350AEF5CF974AA7E5D0A7 (SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___0_previous, int32_t ___1_value, int32_t ___2_bitCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = ___0_previous;
		il2cpp_codegen_runtime_class_init_inline(Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var);
		Token__ctor_mFDE0BE419E2FC1E770C533C60F8DEEC691D87517(__this, L_0, NULL);
		int32_t L_1 = ___1_value;
		__this->___value = ((int16_t)L_1);
		int32_t L_2 = ___2_bitCount;
		__this->___bitCount = ((int16_t)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleToken_appendTo_m715C9E07F3660009FED256B016EB303C9B515DC1 (SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97* __this, BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___0_bitArray, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_text, const RuntimeMethod* method) 
{
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_0 = ___0_bitArray;
		int16_t L_1 = __this->___value;
		int16_t L_2 = __this->___bitCount;
		NullCheck(L_0);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleToken_ToString_m87208A9FB8CD554BB9DC386892776D5877FEEF4B (SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int16_t L_0 = __this->___value;
		int16_t L_1 = __this->___bitCount;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)((int32_t)L_1&((int32_t)31))))), 1))));
		int32_t L_2 = V_0;
		int16_t L_3 = __this->___bitCount;
		V_0 = ((int32_t)(L_2|((int32_t)(1<<((int32_t)((int32_t)L_3&((int32_t)31)))))));
		int32_t L_4 = V_0;
		int16_t L_5 = __this->___bitCount;
		String_t* L_6;
		L_6 = SupportClass_ToBinaryString_m6286E8FF516C5C02AAF1F713E215B1073079FFD3(((int32_t)(L_4|((int32_t)(1<<((int32_t)((int32_t)L_5&((int32_t)31))))))), NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_6, 1, NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_7, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return L_8;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mode;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* State_get_Token_mF195C26E4E990EF946988A97FA2BFB87A7B39C28 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = __this->___token;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_get_BinaryShiftByteCount_mAF226194E9D6F96EC8ADC2E6CD2B77B98BA67460 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___binaryShiftByteCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_get_BitCount_m374653FBA64911E8466874979251DD8E14DA6F21 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___bitCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___0_token, int32_t ___1_mode, int32_t ___2_binaryBytes, int32_t ___3_bitCount, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = ___0_token;
		__this->___token = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token), (void*)L_0);
		int32_t L_1 = ___1_mode;
		__this->___mode = L_1;
		int32_t L_2 = ___2_binaryBytes;
		__this->___binaryShiftByteCount = L_2;
		int32_t L_3 = ___3_bitCount;
		__this->___bitCount = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_latchAndAppend_mE55C3059484238FFB5074D570DBCACE32F6BC97C (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___0_mode, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->___bitCount;
		V_0 = L_0;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_1 = __this->___token;
		V_1 = L_1;
		int32_t L_2 = ___0_mode;
		int32_t L_3 = __this->___mode;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_003f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___LATCH_TABLE;
		int32_t L_5 = __this->___mode;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ___0_mode;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_11 = V_1;
		int32_t L_12 = V_3;
		int32_t L_13 = V_3;
		NullCheck(L_11);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_14;
		L_14 = Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8(L_11, ((int32_t)(L_12&((int32_t)65535))), ((int32_t)(L_13>>((int32_t)16))), NULL);
		V_1 = L_14;
		int32_t L_15 = V_0;
		int32_t L_16 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)(L_16>>((int32_t)16)))));
	}

IL_003f:
	{
		int32_t L_17 = ___0_mode;
		if ((((int32_t)L_17) == ((int32_t)2)))
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 5;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 4;
	}

IL_0047:
	{
		V_2 = G_B5_0;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_18 = V_1;
		int32_t L_19 = ___1_value;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_21;
		L_21 = Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8(L_18, L_19, L_20, NULL);
		V_1 = L_21;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_22 = V_1;
		int32_t L_23 = ___0_mode;
		int32_t L_24 = V_0;
		int32_t L_25 = V_2;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_26 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)il2cpp_codegen_object_new(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7(L_26, L_22, L_23, 0, ((int32_t)il2cpp_codegen_add(L_24, L_25)), NULL);
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_shiftAndAppend_m5BEAC669B35425547C1C107C3B317FB78120F503 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___0_mode, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* G_B2_0 = NULL;
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* G_B3_1 = NULL;
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = __this->___token;
		int32_t L_1 = __this->___mode;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
		G_B1_0 = L_0;
	}
	{
		G_B3_0 = 5;
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_2 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		int32_t L_3 = __this->___mode;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ___0_mode;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = V_0;
		NullCheck(G_B3_1);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_10;
		L_10 = Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8(G_B3_1, L_8, L_9, NULL);
		int32_t L_11 = ___1_value;
		NullCheck(L_10);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_12;
		L_12 = Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8(L_10, L_11, 5, NULL);
		int32_t L_13 = __this->___mode;
		int32_t L_14 = __this->___bitCount;
		int32_t L_15 = V_0;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_16 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)il2cpp_codegen_object_new(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7(L_16, L_12, L_13, 0, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), 5)), NULL);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_addBinaryShiftChar_mB4EACA49074103F41E90EF3F8B2936D1DA09D9D4 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t G_B9_0 = 0;
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = __this->___token;
		V_0 = L_0;
		int32_t L_1 = __this->___mode;
		V_1 = L_1;
		int32_t L_2 = __this->___bitCount;
		V_2 = L_2;
		int32_t L_3 = __this->___mode;
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = __this->___mode;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0050;
		}
	}

IL_0027:
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_5 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___LATCH_TABLE;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = L_10;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_11 = V_0;
		int32_t L_12 = V_5;
		int32_t L_13 = V_5;
		NullCheck(L_11);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_14;
		L_14 = Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8(L_11, ((int32_t)(L_12&((int32_t)65535))), ((int32_t)(L_13>>((int32_t)16))), NULL);
		V_0 = L_14;
		int32_t L_15 = V_2;
		int32_t L_16 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)(L_16>>((int32_t)16)))));
		V_1 = 0;
	}

IL_0050:
	{
		int32_t L_17 = __this->___binaryShiftByteCount;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_18 = __this->___binaryShiftByteCount;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)31))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_19 = __this->___binaryShiftByteCount;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)62))))
		{
			goto IL_006f;
		}
	}
	{
		G_B9_0 = 8;
		goto IL_0075;
	}

IL_006f:
	{
		G_B9_0 = ((int32_t)9);
		goto IL_0075;
	}

IL_0073:
	{
		G_B9_0 = ((int32_t)18);
	}

IL_0075:
	{
		V_3 = G_B9_0;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = __this->___binaryShiftByteCount;
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_25 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)il2cpp_codegen_object_new(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7(L_25, L_20, L_21, ((int32_t)il2cpp_codegen_add(L_22, 1)), ((int32_t)il2cpp_codegen_add(L_23, L_24)), NULL);
		V_4 = L_25;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_26 = V_4;
		NullCheck(L_26);
		int32_t L_27 = L_26->___binaryShiftByteCount;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)2078)))))
		{
			goto IL_00a4;
		}
	}
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_28 = V_4;
		int32_t L_29 = ___0_index;
		NullCheck(L_28);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_30;
		L_30 = State_endBinaryShift_mF03B4CF10D15C21B454C42E57FEFEEE9487F3CAA(L_28, ((int32_t)il2cpp_codegen_add(L_29, 1)), NULL);
		V_4 = L_30;
	}

IL_00a4:
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_31 = V_4;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_endBinaryShift_mF03B4CF10D15C21B454C42E57FEFEEE9487F3CAA (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___binaryShiftByteCount;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_1 = __this->___token;
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___binaryShiftByteCount;
		int32_t L_4 = __this->___binaryShiftByteCount;
		NullCheck(L_1);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_5;
		L_5 = Token_addBinaryShift_mC69E5C1F383C76DF19B9D993F453370ED8F68EC7(L_1, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), L_4, NULL);
		int32_t L_6 = __this->___mode;
		int32_t L_7 = __this->___bitCount;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_8 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)il2cpp_codegen_object_new(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7(L_8, L_5, L_6, 0, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool State_isBetterThanOrEqualTo_mB2A3638216A643530BFF3717A7EF7FD2EC236300 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bitCount;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___LATCH_TABLE;
		int32_t L_2 = __this->___mode;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_5 = ___0_other;
		NullCheck(L_5);
		int32_t L_6 = L_5->___mode;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(L_8>>((int32_t)16)))));
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_9 = ___0_other;
		NullCheck(L_9);
		int32_t L_10 = L_9->___binaryShiftByteCount;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_11 = __this->___binaryShiftByteCount;
		if (!L_11)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_12 = __this->___binaryShiftByteCount;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_13 = ___0_other;
		NullCheck(L_13);
		int32_t L_14 = L_13->___binaryShiftByteCount;
		if ((((int32_t)L_12) <= ((int32_t)L_14)))
		{
			goto IL_0042;
		}
	}

IL_003d:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)10)));
	}

IL_0042:
	{
		int32_t L_16 = V_0;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_17 = ___0_other;
		NullCheck(L_17);
		int32_t L_18 = L_17->___bitCount;
		return (bool)((((int32_t)((((int32_t)L_16) > ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* State_toBitArray_m460830AE00C7651A6157FA35640FA51B827A10D6 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB4A3B09F08984D5F30E792CF521B914AFC3B82AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32AC4B8BA1BA03A4718DBAA581323E2665300758_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B378D23D57FA7F888EA61DA6BB0989C97BDCBC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddFirst_m7471223757B061A1F27F17A5C3363ABBE037DEA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_mB92C9FCD90869C64C6345961A33C236C99D6A2F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_mE1443CF0845DF95D91DCEFF2D4A66F6CD78740ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E* V_0 = NULL;
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_1 = NULL;
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* V_2 = NULL;
	Enumerator_t7F05C70F59FF108604A8D701AD811C9BB6BD8B40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E* L_0 = (LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E*)il2cpp_codegen_object_new(LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_mE1443CF0845DF95D91DCEFF2D4A66F6CD78740ED(L_0, LinkedList_1__ctor_mE1443CF0845DF95D91DCEFF2D4A66F6CD78740ED_RuntimeMethod_var);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_text;
		NullCheck(L_1);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_2;
		L_2 = State_endBinaryShift_mF03B4CF10D15C21B454C42E57FEFEEE9487F3CAA(__this, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		NullCheck(L_2);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_3 = L_2->___token;
		V_2 = L_3;
		goto IL_0026;
	}

IL_0017:
	{
		LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E* L_4 = V_0;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_5 = V_2;
		NullCheck(L_4);
		LinkedListNode_1_t1211169678E9DBB8506B482F42AFBDDE328AA21B* L_6;
		L_6 = LinkedList_1_AddFirst_m7471223757B061A1F27F17A5C3363ABBE037DEA8(L_4, L_5, LinkedList_1_AddFirst_m7471223757B061A1F27F17A5C3363ABBE037DEA8_RuntimeMethod_var);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_7 = V_2;
		NullCheck(L_7);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_8;
		L_8 = Token_get_Previous_mAC3BE6538F07E6CB57CF3632E72EB4E0AA4AED5D_inline(L_7, NULL);
		V_2 = L_8;
	}

IL_0026:
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_9 = V_2;
		if (L_9)
		{
			goto IL_0017;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_10 = (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7*)il2cpp_codegen_object_new(BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		BitArray__ctor_mF83850FDAA5CF98487FFDD1D29DDB8F3831C7AC4(L_10, NULL);
		V_1 = L_10;
		LinkedList_1_tDDD47896492A940E8717EE6644F520123F16719E* L_11 = V_0;
		NullCheck(L_11);
		Enumerator_t7F05C70F59FF108604A8D701AD811C9BB6BD8B40 L_12;
		L_12 = LinkedList_1_GetEnumerator_mB92C9FCD90869C64C6345961A33C236C99D6A2F4(L_11, LinkedList_1_GetEnumerator_mB92C9FCD90869C64C6345961A33C236C99D6A2F4_RuntimeMethod_var);
		V_3 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{
				Enumerator_Dispose_mB4A3B09F08984D5F30E792CF521B914AFC3B82AB((&V_3), Enumerator_Dispose_mB4A3B09F08984D5F30E792CF521B914AFC3B82AB_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0046_1;
			}

IL_0038_1:
			{
				Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_13;
				L_13 = Enumerator_get_Current_m9B378D23D57FA7F888EA61DA6BB0989C97BDCBC3_inline((&V_3), Enumerator_get_Current_m9B378D23D57FA7F888EA61DA6BB0989C97BDCBC3_RuntimeMethod_var);
				BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_14 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_text;
				NullCheck(L_13);
				VirtualActionInvoker2< BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4, L_13, L_14, L_15);
			}

IL_0046_1:
			{
				bool L_16;
				L_16 = Enumerator_MoveNext_m32AC4B8BA1BA03A4718DBAA581323E2665300758((&V_3), Enumerator_MoveNext_m32AC4B8BA1BA03A4718DBAA581323E2665300758_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_005f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* State_ToString_m5908CA9A1AE40EA4884F95D79492F82C273F09BD (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56B1BA74374AD8DF80D155ECBB6EEC7BFF94E852);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___MODE_NAMES;
		int32_t L_1 = __this->___mode;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = __this->___bitCount;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		int32_t L_7 = __this->___binaryShiftByteCount;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral56B1BA74374AD8DF80D155ECBB6EEC7BFF94E852, L_3, L_6, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__cctor_mE913F19C88B8D114D38343BD9E61EEAEC17AE842 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = ((Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_StaticFields*)il2cpp_codegen_static_fields_for(Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var))->___EMPTY;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_1 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)il2cpp_codegen_object_new(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7(L_1, L_0, 0, 0, 0, NULL);
		((State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_StaticFields*)il2cpp_codegen_static_fields_for(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var))->___INITIAL_STATE = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_StaticFields*)il2cpp_codegen_static_fields_for(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var))->___INITIAL_STATE), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_get_Previous_mAC3BE6538F07E6CB57CF3632E72EB4E0AA4AED5D (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, const RuntimeMethod* method) 
{
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = __this->___previous;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_mFDE0BE419E2FC1E770C533C60F8DEEC691D87517 (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___0_previous, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = ___0_previous;
		__this->___previous = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previous), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8 (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, int32_t ___0_value, int32_t ___1_bitCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_bitCount;
		SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97* L_2 = (SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97*)il2cpp_codegen_object_new(SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97_il2cpp_TypeInfo_var);
		SimpleToken__ctor_m851DEE60A78CB01A090350AEF5CF974AA7E5D0A7(L_2, __this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_addBinaryShift_mC69E5C1F383C76DF19B9D993F453370ED8F68EC7 (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, int32_t ___0_start, int32_t ___1_byteCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = ___1_byteCount;
		BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110* L_2 = (BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110*)il2cpp_codegen_object_new(BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110_il2cpp_TypeInfo_var);
		BinaryShiftToken__ctor_mF0B49C7EEB62FE53EFBEA25C6A20C81C1BE41339(L_2, __this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__cctor_m273C57C3A884D6AFA7665F713B808AD851C779EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97* L_0 = (SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97*)il2cpp_codegen_object_new(SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97_il2cpp_TypeInfo_var);
		SimpleToken__ctor_m851DEE60A78CB01A090350AEF5CF974AA7E5D0A7(L_0, (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502*)NULL, 0, 0, NULL);
		((Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_StaticFields*)il2cpp_codegen_static_fields_for(Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var))->___EMPTY = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_StaticFields*)il2cpp_codegen_static_fields_for(Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var))->___EMPTY), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base10BigInteger_set_NumberSign_m9E062A3DA7B3FD3B83E1D75E634FD4B50C5D55E1 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___sign = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base10BigInteger__ctor_mAB63B333BAAE40C9EF219C3B602573D9569DBB1A (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_0 = (DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02*)il2cpp_codegen_object_new(DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02_il2cpp_TypeInfo_var);
		DigitContainer__ctor_mD791C918E550D4339735C2831D639D53AB60DE53(L_0, NULL);
		__this->___digits = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digits), (void*)L_0);
		__this->___size = 1;
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_1 = __this->___digits;
		int32_t L_2 = __this->___size;
		NullCheck(L_1);
		DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62(L_1, L_2, ((int64_t)0), NULL);
		__this->___sign = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base10BigInteger__ctor_m039A3FA37AF307F0A155AD2A8200421E37FA1D01 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, int64_t ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_0 = (DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02*)il2cpp_codegen_object_new(DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02_il2cpp_TypeInfo_var);
		DigitContainer__ctor_mD791C918E550D4339735C2831D639D53AB60DE53(L_0, NULL);
		__this->___digits = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digits), (void*)L_0);
		__this->___sign = 0;
		int64_t L_1 = ___0_n;
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		__this->___size = 1;
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_2 = __this->___digits;
		int32_t L_3 = __this->___size;
		NullCheck(L_2);
		DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62(L_2, L_3, ((int64_t)0), NULL);
		return;
	}

IL_0036:
	{
		int64_t L_4 = ___0_n;
		if ((((int64_t)L_4) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0046;
		}
	}
	{
		int64_t L_5 = ___0_n;
		___0_n = ((-L_5));
		__this->___sign = 1;
	}

IL_0046:
	{
		__this->___size = 0;
		goto IL_007a;
	}

IL_004f:
	{
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_6 = __this->___digits;
		int32_t L_7 = __this->___size;
		int64_t L_8 = ___0_n;
		NullCheck(L_6);
		DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62(L_6, L_7, ((int64_t)(L_8%((int64_t)((int32_t)10)))), NULL);
		int64_t L_9 = ___0_n;
		___0_n = ((int64_t)(L_9/((int64_t)((int32_t)10))));
		int32_t L_10 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_007a:
	{
		int64_t L_11 = ___0_n;
		if ((((int64_t)L_11) > ((int64_t)((int64_t)0))))
		{
			goto IL_004f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base10BigInteger__ctor_mFCACCA0D6C2A9BDEA7F87F0C86F723F0816AE30E (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_0 = (DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02*)il2cpp_codegen_object_new(DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02_il2cpp_TypeInfo_var);
		DigitContainer__ctor_mD791C918E550D4339735C2831D639D53AB60DE53(L_0, NULL);
		__this->___digits = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digits), (void*)L_0);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___0_n;
		NullCheck(L_1);
		int32_t L_2 = L_1->___size;
		__this->___size = L_2;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_3 = ___0_n;
		NullCheck(L_3);
		int32_t L_4 = L_3->___sign;
		__this->___sign = L_4;
		V_0 = 0;
		goto IL_0049;
	}

IL_002d:
	{
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_5 = __this->___digits;
		int32_t L_6 = V_0;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_7 = ___0_n;
		NullCheck(L_7);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_8 = L_7->___digits;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int64_t L_10;
		L_10 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_8, L_9, NULL);
		NullCheck(L_5);
		DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62(L_5, L_6, L_10, NULL);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0049:
	{
		int32_t L_12 = V_0;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_13 = ___0_n;
		NullCheck(L_13);
		int32_t L_14 = L_13->___size;
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_Equals_m9694DAC8F206F6A5A1E5EA67568E361BF46C853C (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___sign;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___0_other;
		NullCheck(L_1);
		int32_t L_2 = L_1->___sign;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		int32_t L_3 = __this->___size;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_4 = ___0_other;
		NullCheck(L_4);
		int32_t L_5 = L_4->___size;
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		V_0 = 0;
		goto IL_0044;
	}

IL_0024:
	{
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_6 = __this->___digits;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int64_t L_8;
		L_8 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_6, L_7, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_9 = ___0_other;
		NullCheck(L_9);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_10 = L_9->___digits;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int64_t L_12;
		L_12 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_10, L_11, NULL);
		if ((((int64_t)L_8) == ((int64_t)L_12)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0040:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0044:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_Equals_m27A743999E542FEBD9A90C841ED486C360A7F333 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_o;
		if (((Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)IsInstSealed((RuntimeObject*)L_0, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_o;
		bool L_2;
		L_2 = Base10BigInteger_Equals_m9694DAC8F206F6A5A1E5EA67568E361BF46C853C(__this, ((Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)CastclassSealed((RuntimeObject*)L_1, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base10BigInteger_GetHashCode_m0D04B2AF0FFA06F847179A7DEB5CEA1D27AC78CE (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_001a;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_1 = __this->___digits;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int64_t L_3;
		L_3 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_1, L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)L_3)));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Base10BigInteger_ToString_mA6E3DCA994FC021A6AF8DA5AC17748D1878E52D8 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___sign;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___size;
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_2, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		V_0 = L_2;
		StringBuilder_t* L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_3, ((int32_t)45), NULL);
		goto IL_002e;
	}

IL_0022:
	{
		int32_t L_5 = __this->___size;
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_6, L_5, NULL);
		V_0 = L_6;
	}

IL_002e:
	{
		int32_t L_7 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0050;
	}

IL_0039:
	{
		StringBuilder_t* L_8 = V_0;
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_9 = __this->___digits;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int64_t L_11;
		L_11 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_9, L_10, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m66A74F455BDFDC3C9ED2D8E1BA4C3A093637C3D8(L_8, L_11, NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_15);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Opposite_m1ED9B0BFD66ADDDC32B8778DF452B77E28746619 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* V_0 = NULL;
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_n;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)il2cpp_codegen_object_new(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger__ctor_mFCACCA0D6C2A9BDEA7F87F0C86F723F0816AE30E(L_1, L_0, NULL);
		V_0 = L_1;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_3 = ((Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_StaticFields*)il2cpp_codegen_static_fields_for(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var))->___Zero;
		bool L_4;
		L_4 = Base10BigInteger_op_Inequality_mF3691B1FA72A66A1E4F6C38B4F1CD4DF12C5D30F(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___sign;
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_7 = V_0;
		NullCheck(L_7);
		L_7->___sign = 1;
		goto IL_002c;
	}

IL_0025:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_8 = V_0;
		NullCheck(L_8);
		L_8->___sign = 0;
	}

IL_002c:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_Greater_mA50D49BFFCAD048807A0629C7E5A53D8AB66D816 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1 = L_0->___sign;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3 = L_2->___sign;
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_003a;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_4 = ___0_a;
		NullCheck(L_4);
		int32_t L_5 = L_4->___sign;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_6 = ___1_b;
		NullCheck(L_6);
		int32_t L_7 = L_6->___sign;
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_8 = ___0_a;
		NullCheck(L_8);
		int32_t L_9 = L_8->___sign;
		if (L_9)
		{
			goto IL_011a;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_10 = ___1_b;
		NullCheck(L_10);
		int32_t L_11 = L_10->___sign;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_011a;
		}
	}
	{
		return (bool)1;
	}

IL_003a:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_12 = ___0_a;
		NullCheck(L_12);
		int32_t L_13 = L_12->___sign;
		if (L_13)
		{
			goto IL_00af;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_14 = ___0_a;
		NullCheck(L_14);
		int32_t L_15 = L_14->___size;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_16 = ___1_b;
		NullCheck(L_16);
		int32_t L_17 = L_16->___size;
		if ((((int32_t)L_15) <= ((int32_t)L_17)))
		{
			goto IL_0052;
		}
	}
	{
		return (bool)1;
	}

IL_0052:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_18 = ___0_a;
		NullCheck(L_18);
		int32_t L_19 = L_18->___size;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_20 = ___1_b;
		NullCheck(L_20);
		int32_t L_21 = L_20->___size;
		if ((((int32_t)L_19) >= ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		return (bool)0;
	}

IL_0062:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_22 = ___0_a;
		NullCheck(L_22);
		int32_t L_23 = L_22->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_00a9;
	}

IL_006d:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_24 = ___0_a;
		NullCheck(L_24);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_25 = L_24->___digits;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int64_t L_27;
		L_27 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_25, L_26, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_28 = ___1_b;
		NullCheck(L_28);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_29 = L_28->___digits;
		int32_t L_30 = V_0;
		NullCheck(L_29);
		int64_t L_31;
		L_31 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_29, L_30, NULL);
		if ((((int64_t)L_27) <= ((int64_t)L_31)))
		{
			goto IL_0089;
		}
	}
	{
		return (bool)1;
	}

IL_0089:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_32 = ___0_a;
		NullCheck(L_32);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_33 = L_32->___digits;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int64_t L_35;
		L_35 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_33, L_34, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_36 = ___1_b;
		NullCheck(L_36);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_37 = L_36->___digits;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		int64_t L_39;
		L_39 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_37, L_38, NULL);
		if ((((int64_t)L_35) >= ((int64_t)L_39)))
		{
			goto IL_00a5;
		}
	}
	{
		return (bool)0;
	}

IL_00a5:
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
	}

IL_00a9:
	{
		int32_t L_41 = V_0;
		if ((((int32_t)L_41) >= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_011a;
	}

IL_00af:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_42 = ___0_a;
		NullCheck(L_42);
		int32_t L_43 = L_42->___size;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_44 = ___1_b;
		NullCheck(L_44);
		int32_t L_45 = L_44->___size;
		if ((((int32_t)L_43) >= ((int32_t)L_45)))
		{
			goto IL_00bf;
		}
	}
	{
		return (bool)1;
	}

IL_00bf:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_46 = ___0_a;
		NullCheck(L_46);
		int32_t L_47 = L_46->___size;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_48 = ___1_b;
		NullCheck(L_48);
		int32_t L_49 = L_48->___size;
		if ((((int32_t)L_47) <= ((int32_t)L_49)))
		{
			goto IL_00cf;
		}
	}
	{
		return (bool)0;
	}

IL_00cf:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_50 = ___0_a;
		NullCheck(L_50);
		int32_t L_51 = L_50->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		goto IL_0116;
	}

IL_00da:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_52 = ___0_a;
		NullCheck(L_52);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_53 = L_52->___digits;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int64_t L_55;
		L_55 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_53, L_54, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_56 = ___1_b;
		NullCheck(L_56);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_57 = L_56->___digits;
		int32_t L_58 = V_1;
		NullCheck(L_57);
		int64_t L_59;
		L_59 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_57, L_58, NULL);
		if ((((int64_t)L_55) >= ((int64_t)L_59)))
		{
			goto IL_00f6;
		}
	}
	{
		return (bool)1;
	}

IL_00f6:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_60 = ___0_a;
		NullCheck(L_60);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_61 = L_60->___digits;
		int32_t L_62 = V_1;
		NullCheck(L_61);
		int64_t L_63;
		L_63 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_61, L_62, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_64 = ___1_b;
		NullCheck(L_64);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_65 = L_64->___digits;
		int32_t L_66 = V_1;
		NullCheck(L_65);
		int64_t L_67;
		L_67 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_65, L_66, NULL);
		if ((((int64_t)L_63) <= ((int64_t)L_67)))
		{
			goto IL_0112;
		}
	}
	{
		return (bool)0;
	}

IL_0112:
	{
		int32_t L_68 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
	}

IL_0116:
	{
		int32_t L_69 = V_1;
		if ((((int32_t)L_69) >= ((int32_t)0)))
		{
			goto IL_00da;
		}
	}

IL_011a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_GreaterOrEqual_m26D8098544676805D746FE887AB46CE7C20EBD8C (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Base10BigInteger_Greater_mA50D49BFFCAD048807A0629C7E5A53D8AB66D816(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_3 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_4 = ___1_b;
		bool L_5;
		L_5 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_3, L_4, NULL);
		return L_5;
	}

IL_0011:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_Smaller_mEC946A9B442111A8FE92EDE78265217872DFB14D (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Base10BigInteger_GreaterOrEqual_m26D8098544676805D746FE887AB46CE7C20EBD8C(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_SmallerOrEqual_m0CE95F2BA528E68693FC613732E299D62B5606C4 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Base10BigInteger_Greater_mA50D49BFFCAD048807A0629C7E5A53D8AB66D816(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Abs_m83134DCB3728779B6361C0DCFB503C70C26BBB65 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_n;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)il2cpp_codegen_object_new(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger__ctor_mFCACCA0D6C2A9BDEA7F87F0C86F723F0816AE30E(L_1, L_0, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2 = L_1;
		NullCheck(L_2);
		L_2->___sign = 0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Addition_mD1CF58831CE8B052104E0A8B3CCDDD4FECCE2DD1 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* V_0 = NULL;
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* G_B5_0 = NULL;
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* G_B11_0 = NULL;
	{
		V_0 = (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)NULL;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1 = L_0->___sign;
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3 = L_2->___sign;
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_4 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_5 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Base10BigInteger_op_GreaterThanOrEqual_mE06F5D28DF873A4B7653E38238BA076C470FB428(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_7 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_8 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_9;
		L_9 = Base10BigInteger_Add_mEDB517F9017DA3153FA7CD11596E7237F51934E5(L_7, L_8, NULL);
		G_B5_0 = L_9;
		goto IL_002b;
	}

IL_0024:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_10 = ___1_b;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_11 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_12;
		L_12 = Base10BigInteger_Add_mEDB517F9017DA3153FA7CD11596E7237F51934E5(L_10, L_11, NULL);
		G_B5_0 = L_12;
	}

IL_002b:
	{
		V_0 = G_B5_0;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_13 = V_0;
		NullCheck(L_13);
		L_13->___sign = 0;
	}

IL_0033:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_14 = ___0_a;
		NullCheck(L_14);
		int32_t L_15 = L_14->___sign;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_16 = ___1_b;
		NullCheck(L_16);
		int32_t L_17 = L_16->___sign;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_18 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_19 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Base10BigInteger_op_LessThanOrEqual_mEA114E714B7A0DA1F5DCF362EA865254DE03E988(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_0061;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_21 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_22;
		L_22 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_21, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_23 = ___1_b;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_24;
		L_24 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_23, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_25;
		L_25 = Base10BigInteger_Add_mEDB517F9017DA3153FA7CD11596E7237F51934E5(L_22, L_24, NULL);
		G_B11_0 = L_25;
		goto IL_0072;
	}

IL_0061:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_26 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_27;
		L_27 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_26, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_28 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_29;
		L_29 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_28, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_30;
		L_30 = Base10BigInteger_Add_mEDB517F9017DA3153FA7CD11596E7237F51934E5(L_27, L_29, NULL);
		G_B11_0 = L_30;
	}

IL_0072:
	{
		V_0 = G_B11_0;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_31 = V_0;
		NullCheck(L_31);
		L_31->___sign = 1;
	}

IL_007a:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_32 = ___0_a;
		NullCheck(L_32);
		int32_t L_33 = L_32->___sign;
		if (L_33)
		{
			goto IL_00c3;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_34 = ___1_b;
		NullCheck(L_34);
		int32_t L_35 = L_34->___sign;
		if ((!(((uint32_t)L_35) == ((uint32_t)1))))
		{
			goto IL_00c3;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_36 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_37 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_38;
		L_38 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_37, NULL);
		bool L_39;
		L_39 = Base10BigInteger_op_GreaterThanOrEqual_mE06F5D28DF873A4B7653E38238BA076C470FB428(L_36, L_38, NULL);
		if (!L_39)
		{
			goto IL_00af;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_40 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_41 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_42;
		L_42 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_41, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_43;
		L_43 = Base10BigInteger_Subtract_m8EBD83212C6FDC3006194C64D648FC3C55606FBA(L_40, L_42, NULL);
		V_0 = L_43;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_44 = V_0;
		NullCheck(L_44);
		L_44->___sign = 0;
		goto IL_00c3;
	}

IL_00af:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_45 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_46;
		L_46 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_45, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_47 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_48;
		L_48 = Base10BigInteger_Subtract_m8EBD83212C6FDC3006194C64D648FC3C55606FBA(L_46, L_47, NULL);
		V_0 = L_48;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_49 = V_0;
		NullCheck(L_49);
		L_49->___sign = 1;
	}

IL_00c3:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_50 = ___0_a;
		NullCheck(L_50);
		int32_t L_51 = L_50->___sign;
		if ((!(((uint32_t)L_51) == ((uint32_t)1))))
		{
			goto IL_010c;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_52 = ___1_b;
		NullCheck(L_52);
		int32_t L_53 = L_52->___sign;
		if (L_53)
		{
			goto IL_010c;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_54 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_55;
		L_55 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_54, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_56 = ___1_b;
		bool L_57;
		L_57 = Base10BigInteger_op_LessThanOrEqual_mEA114E714B7A0DA1F5DCF362EA865254DE03E988(L_55, L_56, NULL);
		if (!L_57)
		{
			goto IL_00f8;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_58 = ___1_b;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_59 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_60;
		L_60 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_59, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_61;
		L_61 = Base10BigInteger_Subtract_m8EBD83212C6FDC3006194C64D648FC3C55606FBA(L_58, L_60, NULL);
		V_0 = L_61;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_62 = V_0;
		NullCheck(L_62);
		L_62->___sign = 0;
		goto IL_010c;
	}

IL_00f8:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_63 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_64;
		L_64 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_63, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_65 = ___1_b;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_66;
		L_66 = Base10BigInteger_Subtract_m8EBD83212C6FDC3006194C64D648FC3C55606FBA(L_64, L_65, NULL);
		V_0 = L_66;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_67 = V_0;
		NullCheck(L_67);
		L_67->___sign = 1;
	}

IL_010c:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_68 = V_0;
		return L_68;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Subtraction_m32E3E10F8041E1AC6ED896E4D701DB7816F39488 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* V_0 = NULL;
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* G_B15_0 = NULL;
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* G_B21_0 = NULL;
	{
		V_0 = (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)NULL;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1 = L_0->___sign;
		if (L_1)
		{
			goto IL_003b;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3 = L_2->___sign;
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_4 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_5 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Base10BigInteger_op_GreaterThanOrEqual_mE06F5D28DF873A4B7653E38238BA076C470FB428(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_7 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_8 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_9;
		L_9 = Base10BigInteger_Subtract_m8EBD83212C6FDC3006194C64D648FC3C55606FBA(L_7, L_8, NULL);
		V_0 = L_9;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_10 = V_0;
		NullCheck(L_10);
		L_10->___sign = 0;
		goto IL_003b;
	}

IL_002c:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_11 = ___1_b;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_12 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_13;
		L_13 = Base10BigInteger_Subtract_m8EBD83212C6FDC3006194C64D648FC3C55606FBA(L_11, L_12, NULL);
		V_0 = L_13;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_14 = V_0;
		NullCheck(L_14);
		L_14->___sign = 1;
	}

IL_003b:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_15 = ___0_a;
		NullCheck(L_15);
		int32_t L_16 = L_15->___sign;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_17 = ___1_b;
		NullCheck(L_17);
		int32_t L_18 = L_17->___sign;
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_19 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_20 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Base10BigInteger_op_LessThanOrEqual_mEA114E714B7A0DA1F5DCF362EA865254DE03E988(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_22 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_23;
		L_23 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_22, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_24 = ___1_b;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_25;
		L_25 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_24, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_26;
		L_26 = Base10BigInteger_Subtract_m8EBD83212C6FDC3006194C64D648FC3C55606FBA(L_23, L_25, NULL);
		V_0 = L_26;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_27 = V_0;
		NullCheck(L_27);
		L_27->___sign = 1;
		goto IL_008a;
	}

IL_0071:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_28 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_29;
		L_29 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_28, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_30 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_31;
		L_31 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_30, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_32;
		L_32 = Base10BigInteger_Subtract_m8EBD83212C6FDC3006194C64D648FC3C55606FBA(L_29, L_31, NULL);
		V_0 = L_32;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_33 = V_0;
		NullCheck(L_33);
		L_33->___sign = 0;
	}

IL_008a:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_34 = ___0_a;
		NullCheck(L_34);
		int32_t L_35 = L_34->___sign;
		if (L_35)
		{
			goto IL_00cb;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_36 = ___1_b;
		NullCheck(L_36);
		int32_t L_37 = L_36->___sign;
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_00cb;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_38 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_39 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_40;
		L_40 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_39, NULL);
		bool L_41;
		L_41 = Base10BigInteger_op_GreaterThanOrEqual_mE06F5D28DF873A4B7653E38238BA076C470FB428(L_38, L_40, NULL);
		if (!L_41)
		{
			goto IL_00b7;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_42 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_43 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_44;
		L_44 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_43, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_45;
		L_45 = Base10BigInteger_Add_mEDB517F9017DA3153FA7CD11596E7237F51934E5(L_42, L_44, NULL);
		G_B15_0 = L_45;
		goto IL_00c3;
	}

IL_00b7:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_46 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_47;
		L_47 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_46, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_48 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_49;
		L_49 = Base10BigInteger_Add_mEDB517F9017DA3153FA7CD11596E7237F51934E5(L_47, L_48, NULL);
		G_B15_0 = L_49;
	}

IL_00c3:
	{
		V_0 = G_B15_0;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_50 = V_0;
		NullCheck(L_50);
		L_50->___sign = 0;
	}

IL_00cb:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_51 = ___0_a;
		NullCheck(L_51);
		int32_t L_52 = L_51->___sign;
		if ((!(((uint32_t)L_52) == ((uint32_t)1))))
		{
			goto IL_010c;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_53 = ___1_b;
		NullCheck(L_53);
		int32_t L_54 = L_53->___sign;
		if (L_54)
		{
			goto IL_010c;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_55 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_56;
		L_56 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_55, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_57 = ___1_b;
		bool L_58;
		L_58 = Base10BigInteger_op_GreaterThanOrEqual_mE06F5D28DF873A4B7653E38238BA076C470FB428(L_56, L_57, NULL);
		if (!L_58)
		{
			goto IL_00f8;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_59 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_60;
		L_60 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_59, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_61 = ___1_b;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_62;
		L_62 = Base10BigInteger_Add_mEDB517F9017DA3153FA7CD11596E7237F51934E5(L_60, L_61, NULL);
		G_B21_0 = L_62;
		goto IL_0104;
	}

IL_00f8:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_63 = ___1_b;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_64 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_65;
		L_65 = Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44(L_64, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_66;
		L_66 = Base10BigInteger_Add_mEDB517F9017DA3153FA7CD11596E7237F51934E5(L_63, L_65, NULL);
		G_B21_0 = L_66;
	}

IL_0104:
	{
		V_0 = G_B21_0;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_67 = V_0;
		NullCheck(L_67);
		L_67->___sign = 1;
	}

IL_010c:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_68 = V_0;
		return L_68;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Multiplication_mA761C964CBB80CE3BE4955F4DA987F2A590032D4 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* V_0 = NULL;
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ((Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_StaticFields*)il2cpp_codegen_static_fields_for(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var))->___Zero;
		bool L_2;
		L_2 = Base10BigInteger_op_Equality_m4E3B5ABB0DC28D5C3D1EF91E27E47BC87433F332(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_3 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_4 = ((Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_StaticFields*)il2cpp_codegen_static_fields_for(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var))->___Zero;
		bool L_5;
		L_5 = Base10BigInteger_op_Equality_m4E3B5ABB0DC28D5C3D1EF91E27E47BC87433F332(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_6 = ((Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_StaticFields*)il2cpp_codegen_static_fields_for(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var))->___Zero;
		return L_6;
	}

IL_0020:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_7 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_8;
		L_8 = Base10BigInteger_Abs_m83134DCB3728779B6361C0DCFB503C70C26BBB65(L_7, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_9 = ___1_b;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_10;
		L_10 = Base10BigInteger_Abs_m83134DCB3728779B6361C0DCFB503C70C26BBB65(L_9, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_11;
		L_11 = Base10BigInteger_Multiply_mDF7DFBCFC6461D75FB118A0940E137933B4F3301(L_8, L_10, NULL);
		V_0 = L_11;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_12 = ___0_a;
		NullCheck(L_12);
		int32_t L_13 = L_12->___sign;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_14 = ___1_b;
		NullCheck(L_14);
		int32_t L_15 = L_14->___sign;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_15))))
		{
			goto IL_0049;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_16 = V_0;
		NullCheck(L_16);
		L_16->___sign = 0;
		goto IL_0050;
	}

IL_0049:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_17 = V_0;
		NullCheck(L_17);
		L_17->___sign = 1;
	}

IL_0050:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_op_Implicit_m5EA4D1D053D8455B1F5243A0B495993416AF6D70 (int64_t ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_n;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)il2cpp_codegen_object_new(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger__ctor_m039A3FA37AF307F0A155AD2A8200421E37FA1D01(L_1, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_op_Equality_m4E3B5ABB0DC28D5C3D1EF91E27E47BC87433F332 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___1_b;
		bool L_2;
		L_2 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_op_Inequality_mF3691B1FA72A66A1E4F6C38B4F1CD4DF12C5D30F (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___1_b;
		bool L_2;
		L_2 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_op_GreaterThan_m0BB7817ECA6AC07BCA61A829D9BB27F99430BB0A (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Base10BigInteger_Greater_mA50D49BFFCAD048807A0629C7E5A53D8AB66D816(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_op_LessThan_m38D98970AE64AB3ADA30BE146CC429B1159D78E3 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Base10BigInteger_Smaller_mEC946A9B442111A8FE92EDE78265217872DFB14D(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_op_GreaterThanOrEqual_mE06F5D28DF873A4B7653E38238BA076C470FB428 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Base10BigInteger_GreaterOrEqual_m26D8098544676805D746FE887AB46CE7C20EBD8C(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base10BigInteger_op_LessThanOrEqual_mEA114E714B7A0DA1F5DCF362EA865254DE03E988 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Base10BigInteger_SmallerOrEqual_m0CE95F2BA528E68693FC613732E299D62B5606C4(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_op_UnaryNegation_mDE91355680DDD8400C91301E63B8B367DC95AB44 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_n;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1;
		L_1 = Base10BigInteger_Opposite_m1ED9B0BFD66ADDDC32B8778DF452B77E28746619(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_op_Addition_mF7BE4933DA8AA6578EB94809B77C02C233B650B7 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2;
		L_2 = Base10BigInteger_Addition_mD1CF58831CE8B052104E0A8B3CCDDD4FECCE2DD1(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_op_Subtraction_mDA4C42F20AF15B6612C8B904ED8EF38A6F8088AA (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2;
		L_2 = Base10BigInteger_Subtraction_m32E3E10F8041E1AC6ED896E4D701DB7816F39488(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_op_Multiply_mAFA227A566C79272AA19BE5D2C603E64E5191A91 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2;
		L_2 = Base10BigInteger_Multiplication_mA761C964CBB80CE3BE4955F4DA987F2A590032D4(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_op_Increment_m65AAF4EC4F07E0B737BB774413C86608BE023915 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_n;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ((Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_StaticFields*)il2cpp_codegen_static_fields_for(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var))->___One;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2;
		L_2 = Base10BigInteger_op_Addition_mF7BE4933DA8AA6578EB94809B77C02C233B650B7(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_op_Decrement_m37F076F68E637007E114F868ED24235EC976334E (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_n;
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = ((Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_StaticFields*)il2cpp_codegen_static_fields_for(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var))->___One;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2;
		L_2 = Base10BigInteger_op_Subtraction_mDA4C42F20AF15B6612C8B904ED8EF38A6F8088AA(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Add_mEDB517F9017DA3153FA7CD11596E7237F51934E5 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)il2cpp_codegen_object_new(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger__ctor_mFCACCA0D6C2A9BDEA7F87F0C86F723F0816AE30E(L_1, L_0, NULL);
		V_0 = L_1;
		V_1 = ((int64_t)0);
		V_2 = 0;
		goto IL_0045;
	}

IL_000e:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2 = V_0;
		NullCheck(L_2);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_3 = L_2->___digits;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int64_t L_5;
		L_5 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_3, L_4, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_6 = ___1_b;
		NullCheck(L_6);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_7 = L_6->___digits;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int64_t L_9;
		L_9 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_7, L_8, NULL);
		int64_t L_10 = V_1;
		V_3 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_5, L_9)), L_10));
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_11 = V_0;
		NullCheck(L_11);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_12 = L_11->___digits;
		int32_t L_13 = V_2;
		int64_t L_14 = V_3;
		NullCheck(L_12);
		DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62(L_12, L_13, ((int64_t)(L_14%((int64_t)((int32_t)10)))), NULL);
		int64_t L_15 = V_3;
		V_1 = ((int64_t)(L_15/((int64_t)((int32_t)10))));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0045:
	{
		int32_t L_17 = V_2;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_18 = ___1_b;
		NullCheck(L_18);
		int32_t L_19 = L_18->___size;
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_000e;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_20 = ___1_b;
		NullCheck(L_20);
		int32_t L_21 = L_20->___size;
		V_4 = L_21;
		goto IL_008e;
	}

IL_0058:
	{
		int64_t L_22 = V_1;
		if ((((int64_t)L_22) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0098;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_23 = V_0;
		NullCheck(L_23);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_24 = L_23->___digits;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int64_t L_26;
		L_26 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_24, L_25, NULL);
		int64_t L_27 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add(L_26, L_27));
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_28 = V_0;
		NullCheck(L_28);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_29 = L_28->___digits;
		int32_t L_30 = V_4;
		int64_t L_31 = V_5;
		NullCheck(L_29);
		DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62(L_29, L_30, ((int64_t)(L_31%((int64_t)((int32_t)10)))), NULL);
		int64_t L_32 = V_5;
		V_1 = ((int64_t)(L_32/((int64_t)((int32_t)10))));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_008e:
	{
		int32_t L_34 = V_4;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_35 = ___0_a;
		NullCheck(L_35);
		int32_t L_36 = L_35->___size;
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0058;
		}
	}

IL_0098:
	{
		int64_t L_37 = V_1;
		if ((((int64_t)L_37) <= ((int64_t)((int64_t)0))))
		{
			goto IL_00c7;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_38 = V_0;
		NullCheck(L_38);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_39 = L_38->___digits;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41 = L_40->___size;
		int64_t L_42 = V_1;
		NullCheck(L_39);
		DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62(L_39, L_41, ((int64_t)(L_42%((int64_t)((int32_t)10)))), NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_43 = V_0;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_44 = L_43;
		NullCheck(L_44);
		int32_t L_45 = L_44->___size;
		NullCheck(L_44);
		L_44->___size = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int64_t L_46 = V_1;
		V_1 = ((int64_t)(L_46/((int64_t)((int32_t)10))));
	}

IL_00c7:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_47 = V_0;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Subtract_m8EBD83212C6FDC3006194C64D648FC3C55606FBA (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = ___0_a;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)il2cpp_codegen_object_new(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger__ctor_mFCACCA0D6C2A9BDEA7F87F0C86F723F0816AE30E(L_1, L_0, NULL);
		V_0 = L_1;
		V_1 = ((int64_t)0);
		V_2 = (bool)1;
		V_3 = 0;
		goto IL_0055;
	}

IL_0010:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2 = V_0;
		NullCheck(L_2);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_3 = L_2->___digits;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int64_t L_5;
		L_5 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_3, L_4, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_6 = ___1_b;
		NullCheck(L_6);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_7 = L_6->___digits;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int64_t L_9;
		L_9 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_7, L_8, NULL);
		int64_t L_10 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(L_5, L_9)), L_10));
		int64_t L_11 = V_4;
		if ((((int64_t)L_11) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0040;
		}
	}
	{
		V_1 = ((int64_t)1);
		int64_t L_12 = V_4;
		V_4 = ((int64_t)il2cpp_codegen_add(L_12, ((int64_t)((int32_t)10))));
		goto IL_0043;
	}

IL_0040:
	{
		V_1 = ((int64_t)0);
	}

IL_0043:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_13 = V_0;
		NullCheck(L_13);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_14 = L_13->___digits;
		int32_t L_15 = V_3;
		int64_t L_16 = V_4;
		NullCheck(L_14);
		DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62(L_14, L_15, L_16, NULL);
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0055:
	{
		int32_t L_18 = V_3;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_19 = ___1_b;
		NullCheck(L_19);
		int32_t L_20 = L_19->___size;
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0010;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_21 = ___1_b;
		NullCheck(L_21);
		int32_t L_22 = L_21->___size;
		V_5 = L_22;
		goto IL_00a9;
	}

IL_0068:
	{
		int64_t L_23 = V_1;
		if ((((int64_t)L_23) <= ((int64_t)((int64_t)0))))
		{
			goto IL_00dc;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_24 = V_0;
		NullCheck(L_24);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_25 = L_24->___digits;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int64_t L_27;
		L_27 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_25, L_26, NULL);
		int64_t L_28 = V_1;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_27, L_28));
		int64_t L_29 = V_6;
		if ((((int64_t)L_29) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0091;
		}
	}
	{
		V_1 = ((int64_t)1);
		int64_t L_30 = V_6;
		V_6 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)((int32_t)10))));
		goto IL_0094;
	}

IL_0091:
	{
		V_1 = ((int64_t)0);
	}

IL_0094:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_31 = V_0;
		NullCheck(L_31);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_32 = L_31->___digits;
		int32_t L_33 = V_5;
		int64_t L_34 = V_6;
		NullCheck(L_32);
		DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62(L_32, L_33, L_34, NULL);
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00a9:
	{
		int32_t L_36 = V_5;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_37 = ___0_a;
		NullCheck(L_37);
		int32_t L_38 = L_37->___size;
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_0068;
		}
	}
	{
		goto IL_00dc;
	}

IL_00b5:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_39 = V_0;
		NullCheck(L_39);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_40 = L_39->___digits;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_41 = V_0;
		NullCheck(L_41);
		int32_t L_42 = L_41->___size;
		NullCheck(L_40);
		int64_t L_43;
		L_43 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_40, ((int32_t)il2cpp_codegen_subtract(L_42, 1)), NULL);
		if (L_43)
		{
			goto IL_00da;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_44 = V_0;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_45 = L_44;
		NullCheck(L_45);
		int32_t L_46 = L_45->___size;
		NullCheck(L_45);
		L_45->___size = ((int32_t)il2cpp_codegen_subtract(L_46, 1));
		goto IL_00dc;
	}

IL_00da:
	{
		V_2 = (bool)0;
	}

IL_00dc:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = L_47->___size;
		bool L_49 = V_2;
		if (((int32_t)(((((int32_t)((int32_t)il2cpp_codegen_subtract(L_48, 1))) > ((int32_t)0))? 1 : 0)&(int32_t)L_49)))
		{
			goto IL_00b5;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* Base10BigInteger_Multiply_mDF7DFBCFC6461D75FB118A0940E137933B4F3301 (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___0_a, Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int64_t V_8 = 0;
	{
		V_0 = ((int64_t)0);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)il2cpp_codegen_object_new(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger__ctor_mAB63B333BAAE40C9EF219C3B602573D9569DBB1A(L_0, NULL);
		V_1 = L_0;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = V_1;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2 = ___0_a;
		NullCheck(L_2);
		int32_t L_3 = L_2->___size;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_4 = ___1_b;
		NullCheck(L_4);
		int32_t L_5 = L_4->___size;
		NullCheck(L_1);
		L_1->___size = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_5)), 1));
		V_2 = 0;
		goto IL_0034;
	}

IL_0022:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_6 = V_1;
		NullCheck(L_6);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_7 = L_6->___digits;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62(L_7, L_8, ((int64_t)0), NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_2;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->___size;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)il2cpp_codegen_add(L_12, 1)))))
		{
			goto IL_0022;
		}
	}
	{
		V_3 = 0;
		goto IL_00b4;
	}

IL_0043:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_13 = ___0_a;
		NullCheck(L_13);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_14 = L_13->___digits;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int64_t L_16;
		L_16 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_00b0;
		}
	}
	{
		V_4 = 0;
		goto IL_00a6;
	}

IL_0056:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_17 = ___1_b;
		NullCheck(L_17);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_18 = L_17->___digits;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int64_t L_20;
		L_20 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_00a0;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_21 = V_1;
		NullCheck(L_21);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_22 = L_21->___digits;
		V_5 = L_22;
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_25 = V_5;
		int32_t L_26 = V_6;
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_27 = V_5;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int64_t L_29;
		L_29 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_27, L_28, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_30 = ___0_a;
		NullCheck(L_30);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_31 = L_30->___digits;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int64_t L_33;
		L_33 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_31, L_32, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_34 = ___1_b;
		NullCheck(L_34);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_35 = L_34->___digits;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		int64_t L_37;
		L_37 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_35, L_36, NULL);
		NullCheck(L_25);
		DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62(L_25, L_26, ((int64_t)il2cpp_codegen_add(L_29, ((int64_t)il2cpp_codegen_multiply(L_33, L_37)))), NULL);
	}

IL_00a0:
	{
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00a6:
	{
		int32_t L_39 = V_4;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_40 = ___1_b;
		NullCheck(L_40);
		int32_t L_41 = L_40->___size;
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_0056;
		}
	}

IL_00b0:
	{
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00b4:
	{
		int32_t L_43 = V_3;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_44 = ___0_a;
		NullCheck(L_44);
		int32_t L_45 = L_44->___size;
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0043;
		}
	}
	{
		V_7 = 0;
		goto IL_00f3;
	}

IL_00c2:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_46 = V_1;
		NullCheck(L_46);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_47 = L_46->___digits;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		int64_t L_49;
		L_49 = DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE(L_47, L_48, NULL);
		int64_t L_50 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add(L_49, L_50));
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_51 = V_1;
		NullCheck(L_51);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_52 = L_51->___digits;
		int32_t L_53 = V_7;
		int64_t L_54 = V_8;
		NullCheck(L_52);
		DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62(L_52, L_53, ((int64_t)(L_54%((int64_t)((int32_t)10)))), NULL);
		int64_t L_55 = V_8;
		V_0 = ((int64_t)(L_55/((int64_t)((int32_t)10))));
		int32_t L_56 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00f3:
	{
		int32_t L_57 = V_7;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = L_58->___size;
		if ((((int32_t)L_57) < ((int32_t)L_59)))
		{
			goto IL_00c2;
		}
	}
	{
		int64_t L_60 = V_0;
		if ((((int64_t)L_60) <= ((int64_t)((int64_t)0))))
		{
			goto IL_012c;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_61 = V_1;
		NullCheck(L_61);
		DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* L_62 = L_61->___digits;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = L_63->___size;
		int64_t L_65 = V_0;
		NullCheck(L_62);
		DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62(L_62, L_64, ((int64_t)(L_65%((int64_t)((int32_t)10)))), NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_66 = V_1;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_67 = L_66;
		NullCheck(L_67);
		int32_t L_68 = L_67->___size;
		NullCheck(L_67);
		L_67->___size = ((int32_t)il2cpp_codegen_add(L_68, 1));
		int64_t L_69 = V_0;
		V_0 = ((int64_t)(L_69/((int64_t)((int32_t)10))));
	}

IL_012c:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_70 = V_1;
		return L_70;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base10BigInteger__cctor_m37E565F4376E10ED84FE9571B742541BC2DC2AC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)il2cpp_codegen_object_new(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger__ctor_mAB63B333BAAE40C9EF219C3B602573D9569DBB1A(L_0, NULL);
		((Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_StaticFields*)il2cpp_codegen_static_fields_for(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var))->___Zero = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_StaticFields*)il2cpp_codegen_static_fields_for(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var))->___Zero), (void*)L_0);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)il2cpp_codegen_object_new(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger__ctor_m039A3FA37AF307F0A155AD2A8200421E37FA1D01(L_1, ((int64_t)1), NULL);
		((Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_StaticFields*)il2cpp_codegen_static_fields_for(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var))->___One = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_StaticFields*)il2cpp_codegen_static_fields_for(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var))->___One), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DigitContainer_get_Item_m32579B3A408981B7C39B9C4CC38E5494AA23C8BE (DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_1 = NULL;
	{
		int32_t L_0 = ___0_index;
		V_0 = ((int32_t)(L_0>>5));
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_1 = __this->___digits;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0017;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = V_1;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)(L_7%((int32_t)32)));
		int64_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}

IL_0017:
	{
		return ((int64_t)0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer_set_Item_mE02E953731A844F9898F6D93DE6BB11DDEEB5A62 (DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* __this, int32_t ___0_index, int64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_1 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* G_B2_0 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* G_B1_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		V_0 = ((int32_t)(L_0>>5));
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_1 = __this->___digits;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = L_4;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0022;
		}
		G_B1_0 = L_5;
	}
	{
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_6 = __this->___digits;
		int32_t L_7 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = L_8;
		V_1 = L_9;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)L_9);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_10 = V_1;
		G_B2_0 = L_10;
	}

IL_0022:
	{
		int32_t L_11 = ___0_index;
		int64_t L_12 = ___1_value;
		NullCheck(G_B2_0);
		(G_B2_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11%((int32_t)32)))), (int64_t)L_12);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer__ctor_mD791C918E550D4339735C2831D639D53AB60DE53 (DigitContainer_t562823C19DAA997D98E7FC3D50A5C4B81BD46F02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_0 = (Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B*)(Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B*)SZArrayNew(Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)200));
		__this->___digits = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digits), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mBEA4FC657422A98B2594410C3512B5F3AEEAE7A4 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_0 = (DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697*)il2cpp_codegen_object_new(DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697_il2cpp_TypeInfo_var);
		DigitContainer__ctor_mA9926035C9FDFB974D04ADD2F33DACAE40010A3D(L_0, NULL);
		__this->___digits = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digits), (void*)L_0);
		__this->___size = 1;
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_1 = __this->___digits;
		int32_t L_2 = __this->___size;
		NullCheck(L_1);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_1, L_2, ((int64_t)0), NULL);
		__this->___sign = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m40A2DD0D91D82238C51D7BD26892653DB74E39F2 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, int64_t ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_0 = (DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697*)il2cpp_codegen_object_new(DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697_il2cpp_TypeInfo_var);
		DigitContainer__ctor_mA9926035C9FDFB974D04ADD2F33DACAE40010A3D(L_0, NULL);
		__this->___digits = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digits), (void*)L_0);
		__this->___sign = 0;
		int64_t L_1 = ___0_n;
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		__this->___size = 1;
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_2 = __this->___digits;
		int32_t L_3 = __this->___size;
		NullCheck(L_2);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_2, L_3, ((int64_t)0), NULL);
		return;
	}

IL_0036:
	{
		int64_t L_4 = ___0_n;
		if ((((int64_t)L_4) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0046;
		}
	}
	{
		int64_t L_5 = ___0_n;
		___0_n = ((-L_5));
		__this->___sign = 1;
	}

IL_0046:
	{
		__this->___size = 0;
		goto IL_0080;
	}

IL_004f:
	{
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_6 = __this->___digits;
		int32_t L_7 = __this->___size;
		int64_t L_8 = ___0_n;
		NullCheck(L_6);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_6, L_7, ((int64_t)(L_8%((int64_t)((int32_t)65536)))), NULL);
		int64_t L_9 = ___0_n;
		___0_n = ((int64_t)(L_9/((int64_t)((int32_t)65536))));
		int32_t L_10 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0080:
	{
		int64_t L_11 = ___0_n;
		if ((((int64_t)L_11) > ((int64_t)((int64_t)0))))
		{
			goto IL_004f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_0 = (DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697*)il2cpp_codegen_object_new(DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697_il2cpp_TypeInfo_var);
		DigitContainer__ctor_mA9926035C9FDFB974D04ADD2F33DACAE40010A3D(L_0, NULL);
		__this->___digits = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digits), (void*)L_0);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___0_n;
		NullCheck(L_1);
		int32_t L_2 = L_1->___size;
		__this->___size = L_2;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_3 = ___0_n;
		NullCheck(L_3);
		int32_t L_4 = L_3->___sign;
		__this->___sign = L_4;
		V_0 = 0;
		goto IL_0049;
	}

IL_002d:
	{
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_5 = __this->___digits;
		int32_t L_6 = V_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_7 = ___0_n;
		NullCheck(L_7);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_8 = L_7->___digits;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int64_t L_10;
		L_10 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_8, L_9, NULL);
		NullCheck(L_5);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_5, L_6, L_10, NULL);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0049:
	{
		int32_t L_12 = V_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_13 = ___0_n;
		NullCheck(L_13);
		int32_t L_14 = L_13->___size;
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mF3D1FB073688CCB558884B9CA0304C41C0E16D83 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, String_t* ___0_numberString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_mBEA4FC657422A98B2594410C3512B5F3AEEAE7A4(L_0, NULL);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		goto IL_0074;
	}

IL_0012:
	{
		String_t* L_1 = ___0_numberString;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)48))))
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4 = ___0_numberString;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0046;
		}
	}

IL_0028:
	{
		int32_t L_7 = V_2;
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_8 = ___0_numberString;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		if ((((int32_t)L_10) == ((int32_t)((int32_t)45))))
		{
			goto IL_0042;
		}
	}

IL_0036:
	{
		BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* L_11 = (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var)));
		BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDDB3907A0EDF019AE91C840CB90A31E145AAB0C6)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_mF3D1FB073688CCB558884B9CA0304C41C0E16D83_RuntimeMethod_var)));
	}

IL_0042:
	{
		V_1 = 1;
		goto IL_0070;
	}

IL_0046:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_13 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Ten;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14;
		L_14 = BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93(L_12, L_13, NULL);
		String_t* L_15 = ___0_numberString;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, L_16, NULL);
		V_3 = L_17;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		int64_t L_19;
		L_19 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_18, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_20;
		L_20 = BigInteger_op_Implicit_mBFB27CFD2E71D8995FFCB962335DA45BEDB04631(L_19, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_21;
		L_21 = BigInteger_op_Addition_m6A64F691BA94E8062D39DE0284B4BB59172EFE78(L_14, L_20, NULL);
		V_0 = L_21;
	}

IL_0070:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0074:
	{
		int32_t L_23 = V_2;
		String_t* L_24 = ___0_numberString;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_24, NULL);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_26 = V_1;
		__this->___sign = L_26;
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_27 = (DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697*)il2cpp_codegen_object_new(DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697_il2cpp_TypeInfo_var);
		DigitContainer__ctor_mA9926035C9FDFB974D04ADD2F33DACAE40010A3D(L_27, NULL);
		__this->___digits = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digits), (void*)L_27);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___size;
		__this->___size = L_29;
		V_4 = 0;
		goto IL_00c0;
	}

IL_00a0:
	{
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_30 = __this->___digits;
		int32_t L_31 = V_4;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_32 = V_0;
		NullCheck(L_32);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_33 = L_32->___digits;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int64_t L_35;
		L_35 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_33, L_34, NULL);
		NullCheck(L_30);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_30, L_31, L_35, NULL);
		int32_t L_36 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00c0:
	{
		int32_t L_37 = V_4;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = L_38->___size;
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_00a0;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m999BA38986260D19AB01FB3FA910EB66CECC2B2F (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_byteArray, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_byteArray;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_0)->max_length))/4))) <= ((int32_t)((int32_t)1280))))
		{
			goto IL_001e;
		}
	}
	{
		BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* L_1 = (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var)));
		BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58979FA49C7A5A263CEC02999EA7EAA4A63DA304)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m999BA38986260D19AB01FB3FA910EB66CECC2B2F_RuntimeMethod_var)));
	}

IL_001e:
	{
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_2 = (DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697*)il2cpp_codegen_object_new(DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697_il2cpp_TypeInfo_var);
		DigitContainer__ctor_mA9926035C9FDFB974D04ADD2F33DACAE40010A3D(L_2, NULL);
		__this->___digits = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digits), (void*)L_2);
		__this->___sign = 0;
		V_1 = 0;
		goto IL_006e;
	}

IL_0034:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_byteArray;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_byteArray;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_7, 1))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)(L_9<<8));
		int32_t L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_byteArray;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, (int32_t)L_14));
	}

IL_004c:
	{
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_15 = __this->___digits;
		int32_t L_16 = __this->___size;
		V_3 = L_16;
		int32_t L_17 = V_3;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		NullCheck(L_15);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_15, L_18, ((int64_t)L_19), NULL);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 2));
	}

IL_006e:
	{
		int32_t L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_byteArray;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0034;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_009f;
	}

IL_0078:
	{
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_23 = __this->___digits;
		int32_t L_24 = __this->___size;
		NullCheck(L_23);
		int64_t L_25;
		L_25 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_23, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), NULL);
		if (L_25)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_26 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		goto IL_009f;
	}

IL_009d:
	{
		V_0 = (bool)0;
	}

IL_009f:
	{
		int32_t L_27 = __this->___size;
		bool L_28 = V_0;
		if (((int32_t)(((((int32_t)((int32_t)il2cpp_codegen_subtract(L_27, 1))) > ((int32_t)0))? 1 : 0)&(int32_t)L_28)))
		{
			goto IL_0078;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mFD8714D3B83B21ED8CA98874364C0A85B7FC2BC2 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4028BD3C005C2DCB9F8A7503F1D241571953900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6141C4AB08557C802E0F9F9EB4A6119F1E484C6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_0, _stringLiteralB4028BD3C005C2DCB9F8A7503F1D241571953900, L_2, NULL);
		if (!((*(bool*)((bool*)(bool*)UnBox(L_3, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			goto IL_002b;
		}
	}
	{
		__this->___sign = 0;
		goto IL_0032;
	}

IL_002b:
	{
		__this->___sign = 1;
	}

IL_0032:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_4, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, L_6, NULL);
		__this->___size = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_7, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_8 = (DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697*)il2cpp_codegen_object_new(DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697_il2cpp_TypeInfo_var);
		DigitContainer__ctor_mA9926035C9FDFB974D04ADD2F33DACAE40010A3D(L_8, NULL);
		__this->___digits = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digits), (void*)L_8);
		V_0 = 0;
		goto IL_009c;
	}

IL_0061:
	{
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_9 = __this->___digits;
		int32_t L_10 = V_0;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_11 = ___0_info;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, _stringLiteralF6141C4AB08557C802E0F9F9EB4A6119F1E484C6, L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_11);
		RuntimeObject* L_16;
		L_16 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_11, L_13, L_15, NULL);
		NullCheck(L_9);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_9, L_10, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_16, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), NULL);
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_009c:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = __this->___size;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0061;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_GetObjectData_mABF107C8F2AA6C363314250A4900119695411943 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4028BD3C005C2DCB9F8A7503F1D241571953900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6141C4AB08557C802E0F9F9EB4A6119F1E484C6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___sign;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_1);
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_1, _stringLiteralB4028BD3C005C2DCB9F8A7503F1D241571953900, (bool)1, NULL);
		goto IL_0022;
	}

IL_0016:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		NullCheck(L_2);
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_2, _stringLiteralB4028BD3C005C2DCB9F8A7503F1D241571953900, (bool)0, NULL);
	}

IL_0022:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		int32_t L_4 = __this->___size;
		NullCheck(L_3);
		SerializationInfo_AddValue_m813739AF0F2C3F6FC96CD5EE4200134E39D6BDB3(L_3, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, ((int16_t)L_4), NULL);
		V_0 = 0;
		goto IL_0065;
	}

IL_0038:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = ___0_info;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, _stringLiteralF6141C4AB08557C802E0F9F9EB4A6119F1E484C6, L_6, NULL);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_8 = __this->___digits;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int64_t L_10;
		L_10 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_8, L_9, NULL);
		NullCheck(L_5);
		SerializationInfo_AddValue_mEC157400B2842A9DD09AFD460325E7DD9CB11E3D(L_5, L_7, (uint16_t)((int32_t)(uint16_t)L_10), NULL);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0038;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_mDCC7FC2F31BC7259A8B3DEA5E55AE2FB049546FE (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___sign;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___0_other;
		NullCheck(L_1);
		int32_t L_2 = L_1->___sign;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		int32_t L_3 = __this->___size;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_4 = ___0_other;
		NullCheck(L_4);
		int32_t L_5 = L_4->___size;
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		V_0 = 0;
		goto IL_0044;
	}

IL_0024:
	{
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_6 = __this->___digits;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int64_t L_8;
		L_8 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_6, L_7, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_9 = ___0_other;
		NullCheck(L_9);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_10 = L_9->___digits;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int64_t L_12;
		L_12 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_10, L_11, NULL);
		if ((((int64_t)L_8) == ((int64_t)L_12)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0040:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0044:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_m40C8DBDC72A2931B865A126C23DD6BCD956925AE (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_o;
		if (((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)IsInstSealed((RuntimeObject*)L_0, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_o;
		bool L_2;
		L_2 = BigInteger_Equals_mDCC7FC2F31BC7259A8B3DEA5E55AE2FB049546FE(__this, ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)CastclassSealed((RuntimeObject*)L_1, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_m44E752E450F797DD432F324273FFA35F3E2470E5 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_001a;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_1 = __this->___digits;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int64_t L_3;
		L_3 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_1, L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)L_3)));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m438A6CE20583FA94454B7E0AC0D73264D18BB9DD (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* V_0 = NULL;
	Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_0 = (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)il2cpp_codegen_object_new(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger__ctor_mAB63B333BAAE40C9EF219C3B602573D9569DBB1A(L_0, NULL);
		V_0 = L_0;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_1 = (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6*)il2cpp_codegen_object_new(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger__ctor_m039A3FA37AF307F0A155AD2A8200421E37FA1D01(L_1, ((int64_t)1), NULL);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0046;
	}

IL_0012:
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_2 = V_0;
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_3 = __this->___digits;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int64_t L_5;
		L_5 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6_il2cpp_TypeInfo_var);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_6;
		L_6 = Base10BigInteger_op_Implicit_m5EA4D1D053D8455B1F5243A0B495993416AF6D70(L_5, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_7 = V_1;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_8;
		L_8 = Base10BigInteger_op_Multiply_mAFA227A566C79272AA19BE5D2C603E64E5191A91(L_6, L_7, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_9;
		L_9 = Base10BigInteger_op_Addition_mF7BE4933DA8AA6578EB94809B77C02C233B650B7(L_2, L_8, NULL);
		V_0 = L_9;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_10 = V_1;
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_11;
		L_11 = Base10BigInteger_op_Implicit_m5EA4D1D053D8455B1F5243A0B495993416AF6D70(((int64_t)((int32_t)65536)), NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_12;
		L_12 = Base10BigInteger_op_Multiply_mAFA227A566C79272AA19BE5D2C603E64E5191A91(L_10, L_11, NULL);
		V_1 = L_12;
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0046:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = __this->___size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0012;
		}
	}
	{
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_16 = V_0;
		int32_t L_17 = __this->___sign;
		NullCheck(L_16);
		Base10BigInteger_set_NumberSign_m9E062A3DA7B3FD3B83E1D75E634FD4B50C5D55E1_inline(L_16, L_17, NULL);
		Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_18);
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Parse_mAAD6E464637E0C3D54BD52B03D7E57331E6BAD1B (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_str;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_mF3D1FB073688CCB558884B9CA0304C41C0E16D83(L_1, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_CompareTo_mFD37B6071B524EFE0C8C189A9D386BF0CAB23F7A (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_Greater_m99269390EC8B30B0C671A850D686A7ADCD81C548(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = ___0_other;
		bool L_3;
		L_3 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_CompareTo_m23A06863E338B1435F4DB0B623DF06337E7FC79E (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)IsInstSealed((RuntimeObject*)L_0, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral197796BCD4D9C30711027295FA16517AFF1BE589)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_CompareTo_m23A06863E338B1435F4DB0B623DF06337E7FC79E_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___0_obj;
		int32_t L_3;
		L_3 = BigInteger_CompareTo_mFD37B6071B524EFE0C8C189A9D386BF0CAB23F7A(__this, ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)CastclassSealed((RuntimeObject*)L_2, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var)), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_SizeInBinaryDigits_mD6902D6C0562D9594625EB8950B685159127949B (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_n, const RuntimeMethod* method) 
{
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_n;
		NullCheck(L_0);
		int32_t L_1 = L_0->___size;
		return ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)16)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Opposite_m47C98F8330462913B7454703E2A6FBE6FCFB6315 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_n;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_1, L_0, NULL);
		V_0 = L_1;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_3 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		bool L_4;
		L_4 = BigInteger_op_Inequality_mFA0FEEE71EEA4EAC6458B800D8C9ED0150020AB3(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___sign;
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_7 = V_0;
		NullCheck(L_7);
		L_7->___sign = 1;
		goto IL_002c;
	}

IL_0025:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8 = V_0;
		NullCheck(L_8);
		L_8->___sign = 0;
	}

IL_002c:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Greater_m99269390EC8B30B0C671A850D686A7ADCD81C548 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1 = L_0->___sign;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3 = L_2->___sign;
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_003a;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_4 = ___0_a;
		NullCheck(L_4);
		int32_t L_5 = L_4->___sign;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = ___1_b;
		NullCheck(L_6);
		int32_t L_7 = L_6->___sign;
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8 = ___0_a;
		NullCheck(L_8);
		int32_t L_9 = L_8->___sign;
		if (L_9)
		{
			goto IL_011a;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10 = ___1_b;
		NullCheck(L_10);
		int32_t L_11 = L_10->___sign;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_011a;
		}
	}
	{
		return (bool)1;
	}

IL_003a:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_12 = ___0_a;
		NullCheck(L_12);
		int32_t L_13 = L_12->___sign;
		if (L_13)
		{
			goto IL_00af;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14 = ___0_a;
		NullCheck(L_14);
		int32_t L_15 = L_14->___size;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_16 = ___1_b;
		NullCheck(L_16);
		int32_t L_17 = L_16->___size;
		if ((((int32_t)L_15) <= ((int32_t)L_17)))
		{
			goto IL_0052;
		}
	}
	{
		return (bool)1;
	}

IL_0052:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_18 = ___0_a;
		NullCheck(L_18);
		int32_t L_19 = L_18->___size;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_20 = ___1_b;
		NullCheck(L_20);
		int32_t L_21 = L_20->___size;
		if ((((int32_t)L_19) >= ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		return (bool)0;
	}

IL_0062:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_22 = ___0_a;
		NullCheck(L_22);
		int32_t L_23 = L_22->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_00a9;
	}

IL_006d:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_24 = ___0_a;
		NullCheck(L_24);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_25 = L_24->___digits;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int64_t L_27;
		L_27 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_25, L_26, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_28 = ___1_b;
		NullCheck(L_28);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_29 = L_28->___digits;
		int32_t L_30 = V_0;
		NullCheck(L_29);
		int64_t L_31;
		L_31 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_29, L_30, NULL);
		if ((((int64_t)L_27) <= ((int64_t)L_31)))
		{
			goto IL_0089;
		}
	}
	{
		return (bool)1;
	}

IL_0089:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_32 = ___0_a;
		NullCheck(L_32);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_33 = L_32->___digits;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int64_t L_35;
		L_35 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_33, L_34, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_36 = ___1_b;
		NullCheck(L_36);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_37 = L_36->___digits;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		int64_t L_39;
		L_39 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_37, L_38, NULL);
		if ((((int64_t)L_35) >= ((int64_t)L_39)))
		{
			goto IL_00a5;
		}
	}
	{
		return (bool)0;
	}

IL_00a5:
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
	}

IL_00a9:
	{
		int32_t L_41 = V_0;
		if ((((int32_t)L_41) >= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_011a;
	}

IL_00af:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_42 = ___0_a;
		NullCheck(L_42);
		int32_t L_43 = L_42->___size;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_44 = ___1_b;
		NullCheck(L_44);
		int32_t L_45 = L_44->___size;
		if ((((int32_t)L_43) >= ((int32_t)L_45)))
		{
			goto IL_00bf;
		}
	}
	{
		return (bool)1;
	}

IL_00bf:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_46 = ___0_a;
		NullCheck(L_46);
		int32_t L_47 = L_46->___size;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_48 = ___1_b;
		NullCheck(L_48);
		int32_t L_49 = L_48->___size;
		if ((((int32_t)L_47) <= ((int32_t)L_49)))
		{
			goto IL_00cf;
		}
	}
	{
		return (bool)0;
	}

IL_00cf:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_50 = ___0_a;
		NullCheck(L_50);
		int32_t L_51 = L_50->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		goto IL_0116;
	}

IL_00da:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_52 = ___0_a;
		NullCheck(L_52);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_53 = L_52->___digits;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int64_t L_55;
		L_55 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_53, L_54, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_56 = ___1_b;
		NullCheck(L_56);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_57 = L_56->___digits;
		int32_t L_58 = V_1;
		NullCheck(L_57);
		int64_t L_59;
		L_59 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_57, L_58, NULL);
		if ((((int64_t)L_55) >= ((int64_t)L_59)))
		{
			goto IL_00f6;
		}
	}
	{
		return (bool)1;
	}

IL_00f6:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_60 = ___0_a;
		NullCheck(L_60);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_61 = L_60->___digits;
		int32_t L_62 = V_1;
		NullCheck(L_61);
		int64_t L_63;
		L_63 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_61, L_62, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_64 = ___1_b;
		NullCheck(L_64);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_65 = L_64->___digits;
		int32_t L_66 = V_1;
		NullCheck(L_65);
		int64_t L_67;
		L_67 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_65, L_66, NULL);
		if ((((int64_t)L_63) <= ((int64_t)L_67)))
		{
			goto IL_0112;
		}
	}
	{
		return (bool)0;
	}

IL_0112:
	{
		int32_t L_68 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
	}

IL_0116:
	{
		int32_t L_69 = V_1;
		if ((((int32_t)L_69) >= ((int32_t)0)))
		{
			goto IL_00da;
		}
	}

IL_011a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_GreaterOrEqual_mB5DE8F120F47CD71BE753CA93F6E8848831DFB61 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_Greater_m99269390EC8B30B0C671A850D686A7ADCD81C548(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_3 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_4 = ___1_b;
		bool L_5;
		L_5 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_3, L_4, NULL);
		return L_5;
	}

IL_0011:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Smaller_mA01B318E09D789A393130F79E87DC3EE1FD5CF81 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_GreaterOrEqual_mB5DE8F120F47CD71BE753CA93F6E8848831DFB61(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_SmallerOrEqual_m86C21A77D1446137003CE9C646EC0E70B90AAD9B (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_Greater_m99269390EC8B30B0C671A850D686A7ADCD81C548(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_n;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_1, L_0, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = L_1;
		NullCheck(L_2);
		L_2->___sign = 0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Addition_m387EE8E8F754BD949A2CF51A6E3CFDAF7D6D08D7 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* G_B5_0 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* G_B11_0 = NULL;
	{
		V_0 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)NULL;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1 = L_0->___sign;
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3 = L_2->___sign;
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_4 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_5 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_GreaterThanOrEqual_m640C467FF5617B99ED7E07D97F4DB5F37CF708CE(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_7 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_9;
		L_9 = BigInteger_Add_m24BDFD3E2E41D383E1143C2D4CB03C714267CF51(L_7, L_8, NULL);
		G_B5_0 = L_9;
		goto IL_002b;
	}

IL_0024:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_11 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_12;
		L_12 = BigInteger_Add_m24BDFD3E2E41D383E1143C2D4CB03C714267CF51(L_10, L_11, NULL);
		G_B5_0 = L_12;
	}

IL_002b:
	{
		V_0 = G_B5_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_13 = V_0;
		NullCheck(L_13);
		L_13->___sign = 0;
	}

IL_0033:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14 = ___0_a;
		NullCheck(L_14);
		int32_t L_15 = L_14->___sign;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_16 = ___1_b;
		NullCheck(L_16);
		int32_t L_17 = L_16->___sign;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_18 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_19 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = BigInteger_op_LessThanOrEqual_m8D0E8D175EA36A9997D285846A88750DA0D20C02(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_0061;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_21 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_22;
		L_22 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_21, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_23 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_24;
		L_24 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_23, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_25;
		L_25 = BigInteger_Add_m24BDFD3E2E41D383E1143C2D4CB03C714267CF51(L_22, L_24, NULL);
		G_B11_0 = L_25;
		goto IL_0072;
	}

IL_0061:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_26 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_27;
		L_27 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_26, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_28 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_29;
		L_29 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_28, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_30;
		L_30 = BigInteger_Add_m24BDFD3E2E41D383E1143C2D4CB03C714267CF51(L_27, L_29, NULL);
		G_B11_0 = L_30;
	}

IL_0072:
	{
		V_0 = G_B11_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_31 = V_0;
		NullCheck(L_31);
		L_31->___sign = 1;
	}

IL_007a:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_32 = ___0_a;
		NullCheck(L_32);
		int32_t L_33 = L_32->___sign;
		if (L_33)
		{
			goto IL_00c3;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_34 = ___1_b;
		NullCheck(L_34);
		int32_t L_35 = L_34->___sign;
		if ((!(((uint32_t)L_35) == ((uint32_t)1))))
		{
			goto IL_00c3;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_36 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_37 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_38;
		L_38 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_37, NULL);
		bool L_39;
		L_39 = BigInteger_op_GreaterThanOrEqual_m640C467FF5617B99ED7E07D97F4DB5F37CF708CE(L_36, L_38, NULL);
		if (!L_39)
		{
			goto IL_00af;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_40 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_41 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_42;
		L_42 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_41, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_43;
		L_43 = BigInteger_Subtract_m1A24105932E411671B88B0066EAFAF3568EBBF21(L_40, L_42, NULL);
		V_0 = L_43;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_44 = V_0;
		NullCheck(L_44);
		L_44->___sign = 0;
		goto IL_00c3;
	}

IL_00af:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_45 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_46;
		L_46 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_45, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_47 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_48;
		L_48 = BigInteger_Subtract_m1A24105932E411671B88B0066EAFAF3568EBBF21(L_46, L_47, NULL);
		V_0 = L_48;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_49 = V_0;
		NullCheck(L_49);
		L_49->___sign = 1;
	}

IL_00c3:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_50 = ___0_a;
		NullCheck(L_50);
		int32_t L_51 = L_50->___sign;
		if ((!(((uint32_t)L_51) == ((uint32_t)1))))
		{
			goto IL_010c;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_52 = ___1_b;
		NullCheck(L_52);
		int32_t L_53 = L_52->___sign;
		if (L_53)
		{
			goto IL_010c;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_54 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_55;
		L_55 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_54, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_56 = ___1_b;
		bool L_57;
		L_57 = BigInteger_op_LessThanOrEqual_m8D0E8D175EA36A9997D285846A88750DA0D20C02(L_55, L_56, NULL);
		if (!L_57)
		{
			goto IL_00f8;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_58 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_59 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_60;
		L_60 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_59, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_61;
		L_61 = BigInteger_Subtract_m1A24105932E411671B88B0066EAFAF3568EBBF21(L_58, L_60, NULL);
		V_0 = L_61;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_62 = V_0;
		NullCheck(L_62);
		L_62->___sign = 0;
		goto IL_010c;
	}

IL_00f8:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_63 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_64;
		L_64 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_63, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_65 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_66;
		L_66 = BigInteger_Subtract_m1A24105932E411671B88B0066EAFAF3568EBBF21(L_64, L_65, NULL);
		V_0 = L_66;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_67 = V_0;
		NullCheck(L_67);
		L_67->___sign = 1;
	}

IL_010c:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_68 = V_0;
		return L_68;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Subtraction_m9DCA47E1F92340D5C8B44A7611EF61B0280A2E5F (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* G_B15_0 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* G_B21_0 = NULL;
	{
		V_0 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)NULL;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1 = L_0->___sign;
		if (L_1)
		{
			goto IL_003b;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3 = L_2->___sign;
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_4 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_5 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_GreaterThanOrEqual_m640C467FF5617B99ED7E07D97F4DB5F37CF708CE(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_7 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_9;
		L_9 = BigInteger_Subtract_m1A24105932E411671B88B0066EAFAF3568EBBF21(L_7, L_8, NULL);
		V_0 = L_9;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10 = V_0;
		NullCheck(L_10);
		L_10->___sign = 0;
		goto IL_003b;
	}

IL_002c:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_11 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_12 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_13;
		L_13 = BigInteger_Subtract_m1A24105932E411671B88B0066EAFAF3568EBBF21(L_11, L_12, NULL);
		V_0 = L_13;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14 = V_0;
		NullCheck(L_14);
		L_14->___sign = 1;
	}

IL_003b:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_15 = ___0_a;
		NullCheck(L_15);
		int32_t L_16 = L_15->___sign;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_17 = ___1_b;
		NullCheck(L_17);
		int32_t L_18 = L_17->___sign;
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_19 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_20 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = BigInteger_op_LessThanOrEqual_m8D0E8D175EA36A9997D285846A88750DA0D20C02(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_22 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_23;
		L_23 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_22, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_24 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_25;
		L_25 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_24, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_26;
		L_26 = BigInteger_Subtract_m1A24105932E411671B88B0066EAFAF3568EBBF21(L_23, L_25, NULL);
		V_0 = L_26;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_27 = V_0;
		NullCheck(L_27);
		L_27->___sign = 1;
		goto IL_008a;
	}

IL_0071:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_28 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_29;
		L_29 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_28, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_30 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_31;
		L_31 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_30, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_32;
		L_32 = BigInteger_Subtract_m1A24105932E411671B88B0066EAFAF3568EBBF21(L_29, L_31, NULL);
		V_0 = L_32;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_33 = V_0;
		NullCheck(L_33);
		L_33->___sign = 0;
	}

IL_008a:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_34 = ___0_a;
		NullCheck(L_34);
		int32_t L_35 = L_34->___sign;
		if (L_35)
		{
			goto IL_00cb;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_36 = ___1_b;
		NullCheck(L_36);
		int32_t L_37 = L_36->___sign;
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_00cb;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_38 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_39 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_40;
		L_40 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_39, NULL);
		bool L_41;
		L_41 = BigInteger_op_GreaterThanOrEqual_m640C467FF5617B99ED7E07D97F4DB5F37CF708CE(L_38, L_40, NULL);
		if (!L_41)
		{
			goto IL_00b7;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_42 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_43 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_44;
		L_44 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_43, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_45;
		L_45 = BigInteger_Add_m24BDFD3E2E41D383E1143C2D4CB03C714267CF51(L_42, L_44, NULL);
		G_B15_0 = L_45;
		goto IL_00c3;
	}

IL_00b7:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_46 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_47;
		L_47 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_46, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_48 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_49;
		L_49 = BigInteger_Add_m24BDFD3E2E41D383E1143C2D4CB03C714267CF51(L_47, L_48, NULL);
		G_B15_0 = L_49;
	}

IL_00c3:
	{
		V_0 = G_B15_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_50 = V_0;
		NullCheck(L_50);
		L_50->___sign = 0;
	}

IL_00cb:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_51 = ___0_a;
		NullCheck(L_51);
		int32_t L_52 = L_51->___sign;
		if ((!(((uint32_t)L_52) == ((uint32_t)1))))
		{
			goto IL_010c;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_53 = ___1_b;
		NullCheck(L_53);
		int32_t L_54 = L_53->___sign;
		if (L_54)
		{
			goto IL_010c;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_55 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_56;
		L_56 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_55, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_57 = ___1_b;
		bool L_58;
		L_58 = BigInteger_op_GreaterThanOrEqual_m640C467FF5617B99ED7E07D97F4DB5F37CF708CE(L_56, L_57, NULL);
		if (!L_58)
		{
			goto IL_00f8;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_59 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_60;
		L_60 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_59, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_61 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_62;
		L_62 = BigInteger_Add_m24BDFD3E2E41D383E1143C2D4CB03C714267CF51(L_60, L_61, NULL);
		G_B21_0 = L_62;
		goto IL_0104;
	}

IL_00f8:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_63 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_64 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_65;
		L_65 = BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE(L_64, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_66;
		L_66 = BigInteger_Add_m24BDFD3E2E41D383E1143C2D4CB03C714267CF51(L_63, L_65, NULL);
		G_B21_0 = L_66;
	}

IL_0104:
	{
		V_0 = G_B21_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_67 = V_0;
		NullCheck(L_67);
		L_67->___sign = 1;
	}

IL_010c:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_68 = V_0;
		return L_68;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Multiplication_m89F916E4E4D94751717659D5149917917DE4AAB7 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		bool L_2;
		L_2 = BigInteger_op_Equality_mF3BFF75E62E509F012AC450D0C766EFAF26593A5(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_3 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_4 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		bool L_5;
		L_5 = BigInteger_op_Equality_mF3BFF75E62E509F012AC450D0C766EFAF26593A5(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		return L_6;
	}

IL_0020:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_7 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8;
		L_8 = BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614(L_7, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_9 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10;
		L_10 = BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614(L_9, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_11;
		L_11 = BigInteger_Multiply_m729E9E81E420BFE6DA9802443150367A9B2A58B6(L_8, L_10, NULL);
		V_0 = L_11;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_12 = ___0_a;
		NullCheck(L_12);
		int32_t L_13 = L_12->___sign;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14 = ___1_b;
		NullCheck(L_14);
		int32_t L_15 = L_14->___sign;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_15))))
		{
			goto IL_0049;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_16 = V_0;
		NullCheck(L_16);
		L_16->___sign = 0;
		goto IL_0050;
	}

IL_0049:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_17 = V_0;
		NullCheck(L_17);
		L_17->___sign = 1;
	}

IL_0050:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Division_m57071483D87761718875D25F95508E911AC2562C (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* G_B9_0 = NULL;
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		bool L_2;
		L_2 = BigInteger_op_Equality_mF3BFF75E62E509F012AC450D0C766EFAF26593A5(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_3 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA(L_3, NULL);
		BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* L_4 = (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var)));
		BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74DD70BB5597A61452EE717610A0AD7514499D2F)), L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_Division_m57071483D87761718875D25F95508E911AC2562C_RuntimeMethod_var)));
	}

IL_001d:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_5 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		bool L_7;
		L_7 = BigInteger_op_Equality_mF3BFF75E62E509F012AC450D0C766EFAF26593A5(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		return L_8;
	}

IL_0030:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_9 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10;
		L_10 = BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614(L_9, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_11 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_12;
		L_12 = BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614(L_11, NULL);
		bool L_13;
		L_13 = BigInteger_op_LessThan_m9B5A2DA9A3B7EEA583AA31FCB3F9A7E3313273DE(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		return L_14;
	}

IL_0049:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_15 = ___1_b;
		NullCheck(L_15);
		int32_t L_16 = L_15->___size;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_17 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_18;
		L_18 = BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614(L_17, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_19 = ___1_b;
		NullCheck(L_19);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_20 = L_19->___digits;
		NullCheck(L_20);
		int64_t L_21;
		L_21 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_20, 0, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_22;
		L_22 = BigInteger_DivideByOneDigitNumber_mA3ABB84E30E6D70416161A76507A2F4186171D79(L_18, L_21, NULL);
		G_B9_0 = L_22;
		goto IL_007c;
	}

IL_006b:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_23 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_24;
		L_24 = BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614(L_23, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_25 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_26;
		L_26 = BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614(L_25, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_27;
		L_27 = BigInteger_DivideByBigNumber_m78DE53BD886E829EC30745FC296FF3FB2C5DDBBC(L_24, L_26, NULL);
		G_B9_0 = L_27;
	}

IL_007c:
	{
		V_0 = G_B9_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_28 = ___0_a;
		NullCheck(L_28);
		int32_t L_29 = L_28->___sign;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_30 = ___1_b;
		NullCheck(L_30);
		int32_t L_31 = L_30->___sign;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_31))))
		{
			goto IL_0094;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_32 = V_0;
		NullCheck(L_32);
		L_32->___sign = 0;
		goto IL_009b;
	}

IL_0094:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_33 = V_0;
		NullCheck(L_33);
		L_33->___sign = 1;
	}

IL_009b:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_34 = V_0;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Modulo_mD40F396E73AB8D0D705B181B7114C895BA51E7F5 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		bool L_2;
		L_2 = BigInteger_op_Equality_mF3BFF75E62E509F012AC450D0C766EFAF26593A5(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_3 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA(L_3, NULL);
		BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* L_4 = (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var)));
		BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74DD70BB5597A61452EE717610A0AD7514499D2F)), L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_Modulo_mD40F396E73AB8D0D705B181B7114C895BA51E7F5_RuntimeMethod_var)));
	}

IL_001d:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_5 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6;
		L_6 = BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614(L_5, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_7 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8;
		L_8 = BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614(L_7, NULL);
		bool L_9;
		L_9 = BigInteger_op_LessThan_m9B5A2DA9A3B7EEA583AA31FCB3F9A7E3313273DE(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_11 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_11, L_10, NULL);
		return L_11;
	}

IL_0037:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_12 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_13 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_15;
		L_15 = BigInteger_op_Division_m09B82D50BBFC38EE48BCE969E67B0D7234ADB99D(L_13, L_14, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_16 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_17;
		L_17 = BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93(L_15, L_16, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_18;
		L_18 = BigInteger_op_Subtraction_m759628FA84D82610EC0DBD632ED0E28F59180560(L_12, L_17, NULL);
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Power_m7BC9759852A80EC800C99A65E7416CF23853C8D2 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, int32_t ___1_exponent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_1 = NULL;
	{
		int32_t L_0 = ___1_exponent;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* L_1 = (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var)));
		BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9DB622366B79AFA1D2683BD69D32576F36ABA091)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_Power_m7BC9759852A80EC800C99A65E7416CF23853C8D2_RuntimeMethod_var)));
	}

IL_0010:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_3 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		bool L_4;
		L_4 = BigInteger_op_Equality_mF3BFF75E62E509F012AC450D0C766EFAF26593A5(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_5 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_mBEA4FC657422A98B2594410C3512B5F3AEEAE7A4(L_5, NULL);
		return L_5;
	}

IL_0023:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m40A2DD0D91D82238C51D7BD26892653DB74E39F2(L_6, ((int64_t)1), NULL);
		V_0 = L_6;
		int32_t L_7 = ___1_exponent;
		if (L_7)
		{
			goto IL_0030;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8 = V_0;
		return L_8;
	}

IL_0030:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_9 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_10, L_9, NULL);
		V_1 = L_10;
		goto IL_0058;
	}

IL_0039:
	{
		int32_t L_11 = ___1_exponent;
		if ((!(((uint32_t)((int32_t)(L_11%2))) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_12 = V_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14;
		L_14 = BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93(L_12, L_13, NULL);
		V_0 = L_14;
	}

IL_0047:
	{
		int32_t L_15 = ___1_exponent;
		___1_exponent = ((int32_t)(L_15/2));
		int32_t L_16 = ___1_exponent;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_17 = V_1;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_19;
		L_19 = BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93(L_17, L_18, NULL);
		V_1 = L_19;
	}

IL_0058:
	{
		int32_t L_20 = ___1_exponent;
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_IntegerSqrt_mA422682557BE462264E933DFC977CB4CC9346AB6 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_1 = NULL;
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_n;
		NullCheck(L_0);
		int32_t L_1 = L_0->___sign;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* L_2 = (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var)));
		BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral685E2A6F0ABD047E3F1E09DAE2EA394A4EC122AE)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_IntegerSqrt_mA422682557BE462264E933DFC977CB4CC9346AB6_RuntimeMethod_var)));
	}

IL_0015:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_3 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m40A2DD0D91D82238C51D7BD26892653DB74E39F2(L_3, ((int64_t)0), NULL);
		V_0 = L_3;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_4 = ___0_n;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_5 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_5, L_4, NULL);
		V_1 = L_5;
		goto IL_0040;
	}

IL_0026:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = V_1;
		V_0 = L_6;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_7 = V_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8 = ___0_n;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10;
		L_10 = BigInteger_op_Division_m09B82D50BBFC38EE48BCE969E67B0D7234ADB99D(L_8, L_9, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_11;
		L_11 = BigInteger_op_Addition_m6A64F691BA94E8062D39DE0284B4BB59172EFE78(L_7, L_10, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_12 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Two;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_13;
		L_13 = BigInteger_op_Division_m09B82D50BBFC38EE48BCE969E67B0D7234ADB99D(L_11, L_12, NULL);
		V_1 = L_13;
	}

IL_0040:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14 = V_1;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_16;
		L_16 = BigInteger_op_Subtraction_m759628FA84D82610EC0DBD632ED0E28F59180560(L_14, L_15, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_17;
		L_17 = BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614(L_16, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_18 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___One;
		bool L_19;
		L_19 = BigInteger_op_GreaterThanOrEqual_m640C467FF5617B99ED7E07D97F4DB5F37CF708CE(L_17, L_18, NULL);
		if (L_19)
		{
			goto IL_0026;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Gcd_m6150C8563FB7FB08249BCA7B6D149513B52C7066 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1 = L_0->___sign;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3 = L_2->___sign;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}

IL_0012:
	{
		BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* L_4 = (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var)));
		BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44FEA7A1E076A3D6A4756F1FDA9D67ACD41F2498)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_Gcd_m6150C8563FB7FB08249BCA7B6D149513B52C7066_RuntimeMethod_var)));
	}

IL_001e:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_5 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_7;
		L_7 = BigInteger_op_Modulus_mA044A37C510356EB423B48A1BF11F7ADED7CD1D0(L_5, L_6, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8 = ___1_b;
		___0_a = L_8;
		___1_b = L_7;
	}

IL_002a:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_9 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		bool L_11;
		L_11 = BigInteger_op_GreaterThan_m54A2E8843A6EA4B7ED9C5E9CF13DC466B790E14C(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_001e;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_12 = ___0_a;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_ExtendedEuclidGcd_mA66045576D5E8F2D4868B26D5F45E0DC738B2D1E (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190** ___2_u, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190** ___3_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_1 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_2 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_3 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_4 = NULL;
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1 = L_0->___sign;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3 = L_2->___sign;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}

IL_0012:
	{
		BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* L_4 = (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var)));
		BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44FEA7A1E076A3D6A4756F1FDA9D67ACD41F2498)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ExtendedEuclidGcd_mA66045576D5E8F2D4868B26D5F45E0DC738B2D1E_RuntimeMethod_var)));
	}

IL_001e:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_5 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_mBEA4FC657422A98B2594410C3512B5F3AEEAE7A4(L_5, NULL);
		V_0 = L_5;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m40A2DD0D91D82238C51D7BD26892653DB74E39F2(L_6, ((int64_t)1), NULL);
		V_1 = L_6;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_7 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m40A2DD0D91D82238C51D7BD26892653DB74E39F2(L_7, ((int64_t)1), NULL);
		V_2 = L_7;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_mBEA4FC657422A98B2594410C3512B5F3AEEAE7A4(L_8, NULL);
		V_3 = L_8;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190** L_9 = ___2_u;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_mBEA4FC657422A98B2594410C3512B5F3AEEAE7A4(L_10, NULL);
		*((RuntimeObject**)L_9) = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)L_10);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190** L_11 = ___3_v;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_12 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_mBEA4FC657422A98B2594410C3512B5F3AEEAE7A4(L_12, NULL);
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_12);
		goto IL_00be;
	}

IL_004a:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_13 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_15;
		L_15 = BigInteger_op_Division_m09B82D50BBFC38EE48BCE969E67B0D7234ADB99D(L_13, L_14, NULL);
		V_4 = L_15;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_16 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_17 = V_4;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_18 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_19;
		L_19 = BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93(L_17, L_18, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_20;
		L_20 = BigInteger_op_Subtraction_m759628FA84D82610EC0DBD632ED0E28F59180560(L_16, L_19, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190** L_21 = ___2_u;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_22 = V_1;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_23 = V_4;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_24 = V_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_25;
		L_25 = BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93(L_23, L_24, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_26;
		L_26 = BigInteger_op_Subtraction_m759628FA84D82610EC0DBD632ED0E28F59180560(L_22, L_25, NULL);
		*((RuntimeObject**)L_21) = (RuntimeObject*)L_26;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)(RuntimeObject*)L_26);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190** L_27 = ___3_v;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_28 = V_3;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_29 = V_4;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_30 = V_2;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_31;
		L_31 = BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93(L_29, L_30, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_32;
		L_32 = BigInteger_op_Subtraction_m759628FA84D82610EC0DBD632ED0E28F59180560(L_28, L_31, NULL);
		*((RuntimeObject**)L_27) = (RuntimeObject*)L_32;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)(RuntimeObject*)L_32);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_33 = ___1_b;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_34 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_34, L_33, NULL);
		___0_a = L_34;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_35 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_35, L_20, NULL);
		___1_b = L_35;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_36 = V_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_37 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_37, L_36, NULL);
		V_1 = L_37;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190** L_38 = ___2_u;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_39 = *((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190**)L_38);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_40 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_40, L_39, NULL);
		V_0 = L_40;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_41 = V_2;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_42 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_42, L_41, NULL);
		V_3 = L_42;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190** L_43 = ___3_v;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_44 = *((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190**)L_43);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_45 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_45, L_44, NULL);
		V_2 = L_45;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190** L_46 = ___2_u;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_47 = V_1;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_48 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_48, L_47, NULL);
		*((RuntimeObject**)L_46) = (RuntimeObject*)L_48;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_46, (void*)(RuntimeObject*)L_48);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190** L_49 = ___3_v;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_50 = V_3;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_51 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_51, L_50, NULL);
		*((RuntimeObject**)L_49) = (RuntimeObject*)L_51;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_49, (void*)(RuntimeObject*)L_51);
	}

IL_00be:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_52 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_53 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		bool L_54;
		L_54 = BigInteger_op_GreaterThan_m54A2E8843A6EA4B7ED9C5E9CF13DC466B790E14C(L_52, L_53, NULL);
		if (L_54)
		{
			goto IL_004a;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_55 = ___0_a;
		return L_55;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_ModularInverse_m9EE96E63E2AF7266A20D4FAA2EBE541E12496477 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_1 = NULL;
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___1_n;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Two;
		bool L_2;
		L_2 = BigInteger_op_LessThan_m9B5A2DA9A3B7EEA583AA31FCB3F9A7E3313273DE(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* L_3 = (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var)));
		BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6803850F799E6ED7D9874D83FFC8E1A277357256)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ModularInverse_m9EE96E63E2AF7266A20D4FAA2EBE541E12496477_RuntimeMethod_var)));
	}

IL_0019:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_4 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_5;
		L_5 = BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614(L_4, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = ___1_n;
		bool L_7;
		L_7 = BigInteger_op_GreaterThanOrEqual_m640C467FF5617B99ED7E07D97F4DB5F37CF708CE(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_9 = ___1_n;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10;
		L_10 = BigInteger_op_Modulus_mA044A37C510356EB423B48A1BF11F7ADED7CD1D0(L_8, L_9, NULL);
		___0_a = L_10;
	}

IL_0030:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_11 = ___0_a;
		NullCheck(L_11);
		int32_t L_12 = L_11->___sign;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_13 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14 = ___1_n;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_15;
		L_15 = BigInteger_op_Addition_m6A64F691BA94E8062D39DE0284B4BB59172EFE78(L_13, L_14, NULL);
		___0_a = L_15;
	}

IL_0042:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_16 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_17 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		bool L_18;
		L_18 = BigInteger_op_Equality_mF3BFF75E62E509F012AC450D0C766EFAF26593A5(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_005b;
		}
	}
	{
		BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* L_19 = (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var)));
		BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA0F9DC980EFE5ED49923AE24541EBADAE4582156)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ModularInverse_m9EE96E63E2AF7266A20D4FAA2EBE541E12496477_RuntimeMethod_var)));
	}

IL_005b:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_20 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_21 = ___1_n;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_22;
		L_22 = BigInteger_Gcd_m6150C8563FB7FB08249BCA7B6D149513B52C7066(L_20, L_21, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_23 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___One;
		bool L_24;
		L_24 = BigInteger_op_Inequality_mFA0FEEE71EEA4EAC6458B800D8C9ED0150020AB3(L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_007a;
		}
	}
	{
		BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* L_25 = (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var)));
		BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC29BB14BB0743ED84026186CCD7F48F86D00A0A3)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ModularInverse_m9EE96E63E2AF7266A20D4FAA2EBE541E12496477_RuntimeMethod_var)));
	}

IL_007a:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_26 = ___1_n;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_27 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_28;
		L_28 = BigInteger_ExtendedEuclidGcd_mA66045576D5E8F2D4868B26D5F45E0DC738B2D1E(L_26, L_27, (&V_0), (&V_1), NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = L_29->___sign;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_0097;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_31 = V_1;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_32 = ___1_n;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_33;
		L_33 = BigInteger_op_Addition_m6A64F691BA94E8062D39DE0284B4BB59172EFE78(L_31, L_32, NULL);
		return L_33;
	}

IL_0097:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_34 = V_1;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_ModularExponentiation_m0AA1B5ED63202F564F51DD28F90E5F0DB3D0CF12 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_exponent, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___2_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_1 = NULL;
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___1_exponent;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1;
		L_1 = BigInteger_op_Implicit_mBFB27CFD2E71D8995FFCB962335DA45BEDB04631(((int64_t)0), NULL);
		bool L_2;
		L_2 = BigInteger_op_LessThan_m9B5A2DA9A3B7EEA583AA31FCB3F9A7E3313273DE(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* L_3 = (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var)));
		BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral162C18A04EA026C9FE3B8E115B781D4E2A0DD47D)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ModularExponentiation_m0AA1B5ED63202F564F51DD28F90E5F0DB3D0CF12_RuntimeMethod_var)));
	}

IL_001b:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_4 = ___2_n;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_5 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Two;
		bool L_6;
		L_6 = BigInteger_op_LessThan_m9B5A2DA9A3B7EEA583AA31FCB3F9A7E3313273DE(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* L_7 = (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B_il2cpp_TypeInfo_var)));
		BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6803850F799E6ED7D9874D83FFC8E1A277357256)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ModularExponentiation_m0AA1B5ED63202F564F51DD28F90E5F0DB3D0CF12_RuntimeMethod_var)));
	}

IL_0034:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_9;
		L_9 = BigInteger_Abs_m9F6C4E2D01D193A10BBD6685F9B136A409071614(L_8, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10 = ___2_n;
		bool L_11;
		L_11 = BigInteger_op_GreaterThanOrEqual_m640C467FF5617B99ED7E07D97F4DB5F37CF708CE(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_12 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_13 = ___2_n;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14;
		L_14 = BigInteger_op_Modulus_mA044A37C510356EB423B48A1BF11F7ADED7CD1D0(L_12, L_13, NULL);
		___0_a = L_14;
	}

IL_004b:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_15 = ___0_a;
		NullCheck(L_15);
		int32_t L_16 = L_15->___sign;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_005d;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_17 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_18 = ___2_n;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_19;
		L_19 = BigInteger_op_Addition_m6A64F691BA94E8062D39DE0284B4BB59172EFE78(L_17, L_18, NULL);
		___0_a = L_19;
	}

IL_005d:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_20 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_21 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		bool L_22;
		L_22 = BigInteger_op_Equality_mF3BFF75E62E509F012AC450D0C766EFAF26593A5(L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_0070;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_23 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_mBEA4FC657422A98B2594410C3512B5F3AEEAE7A4(L_23, NULL);
		return L_23;
	}

IL_0070:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_24 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m40A2DD0D91D82238C51D7BD26892653DB74E39F2(L_24, ((int64_t)1), NULL);
		V_0 = L_24;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_25 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_26 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_26, L_25, NULL);
		V_1 = L_26;
		goto IL_00c1;
	}

IL_0081:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_27 = ___1_exponent;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_28 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Two;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_29;
		L_29 = BigInteger_op_Modulus_mA044A37C510356EB423B48A1BF11F7ADED7CD1D0(L_27, L_28, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_30 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___One;
		bool L_31;
		L_31 = BigInteger_op_Equality_mF3BFF75E62E509F012AC450D0C766EFAF26593A5(L_29, L_30, NULL);
		if (!L_31)
		{
			goto IL_00a6;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_32 = V_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_34;
		L_34 = BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93(L_32, L_33, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_35 = ___2_n;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_36;
		L_36 = BigInteger_op_Modulus_mA044A37C510356EB423B48A1BF11F7ADED7CD1D0(L_34, L_35, NULL);
		V_0 = L_36;
	}

IL_00a6:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_37 = ___1_exponent;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_38 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Two;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_39;
		L_39 = BigInteger_op_Division_m09B82D50BBFC38EE48BCE969E67B0D7234ADB99D(L_37, L_38, NULL);
		___1_exponent = L_39;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_40 = V_1;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_41 = V_1;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_42;
		L_42 = BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93(L_40, L_41, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_43 = ___2_n;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_44;
		L_44 = BigInteger_op_Modulus_mA044A37C510356EB423B48A1BF11F7ADED7CD1D0(L_42, L_43, NULL);
		V_1 = L_44;
	}

IL_00c1:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_45 = ___1_exponent;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_46 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero;
		bool L_47;
		L_47 = BigInteger_op_GreaterThan_m54A2E8843A6EA4B7ED9C5E9CF13DC466B790E14C(L_45, L_46, NULL);
		if (L_47)
		{
			goto IL_0081;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_48 = V_0;
		return L_48;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Implicit_mBFB27CFD2E71D8995FFCB962335DA45BEDB04631 (int64_t ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_n;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m40A2DD0D91D82238C51D7BD26892653DB74E39F2(L_1, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mF3BFF75E62E509F012AC450D0C766EFAF26593A5 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		bool L_2;
		L_2 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_mFA0FEEE71EEA4EAC6458B800D8C9ED0150020AB3 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		bool L_2;
		L_2 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_m54A2E8843A6EA4B7ED9C5E9CF13DC466B790E14C (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_Greater_m99269390EC8B30B0C671A850D686A7ADCD81C548(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m9B5A2DA9A3B7EEA583AA31FCB3F9A7E3313273DE (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_Smaller_mA01B318E09D789A393130F79E87DC3EE1FD5CF81(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_m640C467FF5617B99ED7E07D97F4DB5F37CF708CE (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_GreaterOrEqual_mB5DE8F120F47CD71BE753CA93F6E8848831DFB61(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_m8D0E8D175EA36A9997D285846A88750DA0D20C02 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_SmallerOrEqual_m86C21A77D1446137003CE9C646EC0E70B90AAD9B(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_UnaryNegation_m59ED51B6AA78158706B2F33068F10AB3AB0F4CEE (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_n;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1;
		L_1 = BigInteger_Opposite_m47C98F8330462913B7454703E2A6FBE6FCFB6315(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Addition_m6A64F691BA94E8062D39DE0284B4BB59172EFE78 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2;
		L_2 = BigInteger_Addition_m387EE8E8F754BD949A2CF51A6E3CFDAF7D6D08D7(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Subtraction_m759628FA84D82610EC0DBD632ED0E28F59180560 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2;
		L_2 = BigInteger_Subtraction_m9DCA47E1F92340D5C8B44A7611EF61B0280A2E5F(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2;
		L_2 = BigInteger_Multiplication_m89F916E4E4D94751717659D5149917917DE4AAB7(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Division_m09B82D50BBFC38EE48BCE969E67B0D7234ADB99D (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2;
		L_2 = BigInteger_Division_m57071483D87761718875D25F95508E911AC2562C(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Modulus_mA044A37C510356EB423B48A1BF11F7ADED7CD1D0 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2;
		L_2 = BigInteger_Modulo_mD40F396E73AB8D0D705B181B7114C895BA51E7F5(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Increment_m454FAEDAF08A16FC6CCB3A2D07A35114CEFB0080 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_n;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___One;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2;
		L_2 = BigInteger_op_Addition_m6A64F691BA94E8062D39DE0284B4BB59172EFE78(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_op_Decrement_mD1BD33097694FD875E37A153CFD7CEF887DF1B57 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_n;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___One;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2;
		L_2 = BigInteger_op_Subtraction_m759628FA84D82610EC0DBD632ED0E28F59180560(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Add_m24BDFD3E2E41D383E1143C2D4CB03C714267CF51 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_1, L_0, NULL);
		V_0 = L_1;
		V_1 = ((int64_t)0);
		V_2 = 0;
		goto IL_004b;
	}

IL_000e:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = V_0;
		NullCheck(L_2);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_3 = L_2->___digits;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int64_t L_5;
		L_5 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_3, L_4, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = ___1_b;
		NullCheck(L_6);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_7 = L_6->___digits;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int64_t L_9;
		L_9 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_7, L_8, NULL);
		int64_t L_10 = V_1;
		V_3 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_5, L_9)), L_10));
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_11 = V_0;
		NullCheck(L_11);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_12 = L_11->___digits;
		int32_t L_13 = V_2;
		int64_t L_14 = V_3;
		NullCheck(L_12);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_12, L_13, ((int64_t)(L_14%((int64_t)((int32_t)65536)))), NULL);
		int64_t L_15 = V_3;
		V_1 = ((int64_t)(L_15/((int64_t)((int32_t)65536))));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_004b:
	{
		int32_t L_17 = V_2;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_18 = ___1_b;
		NullCheck(L_18);
		int32_t L_19 = L_18->___size;
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_000e;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_20 = ___1_b;
		NullCheck(L_20);
		int32_t L_21 = L_20->___size;
		V_4 = L_21;
		goto IL_009a;
	}

IL_005e:
	{
		int64_t L_22 = V_1;
		if ((((int64_t)L_22) <= ((int64_t)((int64_t)0))))
		{
			goto IL_00a4;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_23 = V_0;
		NullCheck(L_23);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_24 = L_23->___digits;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int64_t L_26;
		L_26 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_24, L_25, NULL);
		int64_t L_27 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add(L_26, L_27));
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_28 = V_0;
		NullCheck(L_28);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_29 = L_28->___digits;
		int32_t L_30 = V_4;
		int64_t L_31 = V_5;
		NullCheck(L_29);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_29, L_30, ((int64_t)(L_31%((int64_t)((int32_t)65536)))), NULL);
		int64_t L_32 = V_5;
		V_1 = ((int64_t)(L_32/((int64_t)((int32_t)65536))));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_009a:
	{
		int32_t L_34 = V_4;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_35 = ___0_a;
		NullCheck(L_35);
		int32_t L_36 = L_35->___size;
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_005e;
		}
	}

IL_00a4:
	{
		int64_t L_37 = V_1;
		if ((((int64_t)L_37) <= ((int64_t)((int64_t)0))))
		{
			goto IL_00d9;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_38 = V_0;
		NullCheck(L_38);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_39 = L_38->___digits;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41 = L_40->___size;
		int64_t L_42 = V_1;
		NullCheck(L_39);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_39, L_41, ((int64_t)(L_42%((int64_t)((int32_t)65536)))), NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_43 = V_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_44 = L_43;
		NullCheck(L_44);
		int32_t L_45 = L_44->___size;
		NullCheck(L_44);
		L_44->___size = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int64_t L_46 = V_1;
		V_1 = ((int64_t)(L_46/((int64_t)((int32_t)65536))));
	}

IL_00d9:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_47 = V_0;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Subtract_m1A24105932E411671B88B0066EAFAF3568EBBF21 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5237E8D210BDAA59B9C76B4BF5FE783621C3C1C0(L_1, L_0, NULL);
		V_0 = L_1;
		V_1 = ((int64_t)0);
		V_2 = (bool)1;
		V_3 = 0;
		goto IL_0058;
	}

IL_0010:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = V_0;
		NullCheck(L_2);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_3 = L_2->___digits;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int64_t L_5;
		L_5 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_3, L_4, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = ___1_b;
		NullCheck(L_6);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_7 = L_6->___digits;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int64_t L_9;
		L_9 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_7, L_8, NULL);
		int64_t L_10 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(L_5, L_9)), L_10));
		int64_t L_11 = V_4;
		if ((((int64_t)L_11) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0043;
		}
	}
	{
		V_1 = ((int64_t)1);
		int64_t L_12 = V_4;
		V_4 = ((int64_t)il2cpp_codegen_add(L_12, ((int64_t)((int32_t)65536))));
		goto IL_0046;
	}

IL_0043:
	{
		V_1 = ((int64_t)0);
	}

IL_0046:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_13 = V_0;
		NullCheck(L_13);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_14 = L_13->___digits;
		int32_t L_15 = V_3;
		int64_t L_16 = V_4;
		NullCheck(L_14);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_14, L_15, L_16, NULL);
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_3;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_19 = ___1_b;
		NullCheck(L_19);
		int32_t L_20 = L_19->___size;
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0010;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_21 = ___1_b;
		NullCheck(L_21);
		int32_t L_22 = L_21->___size;
		V_5 = L_22;
		goto IL_00af;
	}

IL_006b:
	{
		int64_t L_23 = V_1;
		if ((((int64_t)L_23) <= ((int64_t)((int64_t)0))))
		{
			goto IL_00e2;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_24 = V_0;
		NullCheck(L_24);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_25 = L_24->___digits;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int64_t L_27;
		L_27 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_25, L_26, NULL);
		int64_t L_28 = V_1;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_27, L_28));
		int64_t L_29 = V_6;
		if ((((int64_t)L_29) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0097;
		}
	}
	{
		V_1 = ((int64_t)1);
		int64_t L_30 = V_6;
		V_6 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)((int32_t)65536))));
		goto IL_009a;
	}

IL_0097:
	{
		V_1 = ((int64_t)0);
	}

IL_009a:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_31 = V_0;
		NullCheck(L_31);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_32 = L_31->___digits;
		int32_t L_33 = V_5;
		int64_t L_34 = V_6;
		NullCheck(L_32);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_32, L_33, L_34, NULL);
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00af:
	{
		int32_t L_36 = V_5;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_37 = ___0_a;
		NullCheck(L_37);
		int32_t L_38 = L_37->___size;
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_00e2;
	}

IL_00bb:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_39 = V_0;
		NullCheck(L_39);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_40 = L_39->___digits;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_41 = V_0;
		NullCheck(L_41);
		int32_t L_42 = L_41->___size;
		NullCheck(L_40);
		int64_t L_43;
		L_43 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_40, ((int32_t)il2cpp_codegen_subtract(L_42, 1)), NULL);
		if (L_43)
		{
			goto IL_00e0;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_44 = V_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_45 = L_44;
		NullCheck(L_45);
		int32_t L_46 = L_45->___size;
		NullCheck(L_45);
		L_45->___size = ((int32_t)il2cpp_codegen_subtract(L_46, 1));
		goto IL_00e2;
	}

IL_00e0:
	{
		V_2 = (bool)0;
	}

IL_00e2:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = L_47->___size;
		bool L_49 = V_2;
		if (((int32_t)(((((int32_t)((int32_t)il2cpp_codegen_subtract(L_48, 1))) > ((int32_t)0))? 1 : 0)&(int32_t)L_49)))
		{
			goto IL_00bb;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_Multiply_m729E9E81E420BFE6DA9802443150367A9B2A58B6 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int64_t V_8 = 0;
	{
		V_0 = ((int64_t)0);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_mBEA4FC657422A98B2594410C3512B5F3AEEAE7A4(L_0, NULL);
		V_1 = L_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = V_1;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = ___0_a;
		NullCheck(L_2);
		int32_t L_3 = L_2->___size;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_4 = ___1_b;
		NullCheck(L_4);
		int32_t L_5 = L_4->___size;
		NullCheck(L_1);
		L_1->___size = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_5)), 1));
		V_2 = 0;
		goto IL_0034;
	}

IL_0022:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = V_1;
		NullCheck(L_6);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_7 = L_6->___digits;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_7, L_8, ((int64_t)0), NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_2;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->___size;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)il2cpp_codegen_add(L_12, 1)))))
		{
			goto IL_0022;
		}
	}
	{
		V_3 = 0;
		goto IL_00b4;
	}

IL_0043:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_13 = ___0_a;
		NullCheck(L_13);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_14 = L_13->___digits;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int64_t L_16;
		L_16 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_00b0;
		}
	}
	{
		V_4 = 0;
		goto IL_00a6;
	}

IL_0056:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_17 = ___1_b;
		NullCheck(L_17);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_18 = L_17->___digits;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int64_t L_20;
		L_20 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_00a0;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_21 = V_1;
		NullCheck(L_21);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_22 = L_21->___digits;
		V_5 = L_22;
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_25 = V_5;
		int32_t L_26 = V_6;
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_27 = V_5;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int64_t L_29;
		L_29 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_27, L_28, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_30 = ___0_a;
		NullCheck(L_30);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_31 = L_30->___digits;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int64_t L_33;
		L_33 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_31, L_32, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_34 = ___1_b;
		NullCheck(L_34);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_35 = L_34->___digits;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		int64_t L_37;
		L_37 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_35, L_36, NULL);
		NullCheck(L_25);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_25, L_26, ((int64_t)il2cpp_codegen_add(L_29, ((int64_t)il2cpp_codegen_multiply(L_33, L_37)))), NULL);
	}

IL_00a0:
	{
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00a6:
	{
		int32_t L_39 = V_4;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_40 = ___1_b;
		NullCheck(L_40);
		int32_t L_41 = L_40->___size;
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_0056;
		}
	}

IL_00b0:
	{
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00b4:
	{
		int32_t L_43 = V_3;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_44 = ___0_a;
		NullCheck(L_44);
		int32_t L_45 = L_44->___size;
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0043;
		}
	}
	{
		V_7 = 0;
		goto IL_00f9;
	}

IL_00c2:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_46 = V_1;
		NullCheck(L_46);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_47 = L_46->___digits;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		int64_t L_49;
		L_49 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_47, L_48, NULL);
		int64_t L_50 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add(L_49, L_50));
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_51 = V_1;
		NullCheck(L_51);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_52 = L_51->___digits;
		int32_t L_53 = V_7;
		int64_t L_54 = V_8;
		NullCheck(L_52);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_52, L_53, ((int64_t)(L_54%((int64_t)((int32_t)65536)))), NULL);
		int64_t L_55 = V_8;
		V_0 = ((int64_t)(L_55/((int64_t)((int32_t)65536))));
		int32_t L_56 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00f9:
	{
		int32_t L_57 = V_7;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = L_58->___size;
		if ((((int32_t)L_57) < ((int32_t)L_59)))
		{
			goto IL_00c2;
		}
	}
	{
		int64_t L_60 = V_0;
		if ((((int64_t)L_60) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0138;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_61 = V_1;
		NullCheck(L_61);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_62 = L_61->___digits;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = L_63->___size;
		int64_t L_65 = V_0;
		NullCheck(L_62);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_62, L_64, ((int64_t)(L_65%((int64_t)((int32_t)65536)))), NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_66 = V_1;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_67 = L_66;
		NullCheck(L_67);
		int32_t L_68 = L_67->___size;
		NullCheck(L_67);
		L_67->___size = ((int32_t)il2cpp_codegen_add(L_68, 1));
		int64_t L_69 = V_0;
		V_0 = ((int64_t)(L_69/((int64_t)((int32_t)65536))));
	}

IL_0138:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_70 = V_1;
		return L_70;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_DivideByOneDigitNumber_mA3ABB84E30E6D70416161A76507A2F4186171D79 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, int64_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_0 = NULL;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_mBEA4FC657422A98B2594410C3512B5F3AEEAE7A4(L_0, NULL);
		V_0 = L_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___0_a;
		NullCheck(L_1);
		int32_t L_2 = L_1->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_3 = V_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_4 = ___0_a;
		NullCheck(L_4);
		int32_t L_5 = L_4->___size;
		NullCheck(L_3);
		L_3->___size = L_5;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = ___0_a;
		NullCheck(L_6);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_7 = L_6->___digits;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int64_t L_9;
		L_9 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_7, L_8, NULL);
		V_2 = L_9;
		goto IL_005b;
	}

IL_002a:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10 = V_0;
		NullCheck(L_10);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_11 = L_10->___digits;
		int32_t L_12 = V_1;
		int64_t L_13 = V_2;
		int64_t L_14 = ___1_b;
		NullCheck(L_11);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_11, L_12, ((int64_t)(L_13/L_14)), NULL);
		int64_t L_15 = V_2;
		int64_t L_16 = ___1_b;
		V_2 = ((int64_t)(L_15%L_16));
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		int64_t L_19 = V_2;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_20 = ___0_a;
		NullCheck(L_20);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_21 = L_20->___digits;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int64_t L_23;
		L_23 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_21, L_22, NULL);
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_19, ((int64_t)((int32_t)65536)))), L_23));
	}

IL_005b:
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_25 = V_0;
		NullCheck(L_25);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_26 = L_25->___digits;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___size;
		NullCheck(L_26);
		int64_t L_29;
		L_29 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_26, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), NULL);
		if (L_29)
		{
			goto IL_008b;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = L_30->___size;
		if ((((int32_t)L_31) == ((int32_t)1)))
		{
			goto IL_008b;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_32 = V_0;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_33 = L_32;
		NullCheck(L_33);
		int32_t L_34 = L_33->___size;
		NullCheck(L_33);
		L_33->___size = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
	}

IL_008b:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_35 = V_0;
		return L_35;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* BigInteger_DivideByBigNumber_m78DE53BD886E829EC30745FC296FF3FB2C5DDBBC (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_a, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_3 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_4 = NULL;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_5 = NULL;
	int32_t V_6 = 0;
	int64_t V_7 = 0;
	BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* V_8 = NULL;
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1 = L_0->___size;
		V_0 = L_1;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3 = L_2->___size;
		V_1 = L_3;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_4 = ___1_b;
		NullCheck(L_4);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_5 = L_4->___digits;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int64_t L_7;
		L_7 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		V_2 = ((int64_t)(((int64_t)((int32_t)65536))/((int64_t)il2cpp_codegen_add(L_7, ((int64_t)1)))));
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_8 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_mBEA4FC657422A98B2594410C3512B5F3AEEAE7A4(L_8, NULL);
		V_3 = L_8;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_9 = ___0_a;
		int64_t L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_11;
		L_11 = BigInteger_op_Implicit_mBFB27CFD2E71D8995FFCB962335DA45BEDB04631(L_10, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_12;
		L_12 = BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93(L_9, L_11, NULL);
		V_4 = L_12;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_13 = ___1_b;
		int64_t L_14 = V_2;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_15;
		L_15 = BigInteger_op_Implicit_mBFB27CFD2E71D8995FFCB962335DA45BEDB04631(L_14, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_16;
		L_16 = BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93(L_13, L_15, NULL);
		V_5 = L_16;
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
		goto IL_00b4;
	}

IL_0050:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_19 = V_4;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_20 = V_5;
		int32_t L_21 = V_6;
		int32_t L_22 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		int64_t L_23;
		L_23 = BigInteger_Trial_m61CB43ED1646A67BE284D1989643CCA5FEADBBFC(L_19, L_20, L_21, L_22, NULL);
		V_7 = L_23;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_24 = V_5;
		int64_t L_25 = V_7;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_26;
		L_26 = BigInteger_op_Implicit_mBFB27CFD2E71D8995FFCB962335DA45BEDB04631(L_25, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_27;
		L_27 = BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93(L_24, L_26, NULL);
		V_8 = L_27;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_28 = V_4;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_29 = V_8;
		int32_t L_30 = V_6;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = BigInteger_DivideByBigNumberSmaller_mC122031BD2368DA8D4ECC27F1059E288CAB9ABBE(L_28, L_29, L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_0093;
		}
	}
	{
		int64_t L_33 = V_7;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_33, ((int64_t)1)));
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_34 = V_5;
		int64_t L_35 = V_7;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_36;
		L_36 = BigInteger_op_Implicit_mBFB27CFD2E71D8995FFCB962335DA45BEDB04631(L_35, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_37;
		L_37 = BigInteger_op_Multiply_m0AF02C185F90C5188E08C3585D0CED11465E8C93(L_34, L_36, NULL);
		V_8 = L_37;
	}

IL_0093:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_38 = V_3;
		NullCheck(L_38);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_39 = L_38->___digits;
		int32_t L_40 = V_6;
		int64_t L_41 = V_7;
		NullCheck(L_39);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_39, L_40, L_41, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_42 = V_4;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_43 = V_8;
		int32_t L_44 = V_6;
		int32_t L_45 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger_Difference_m356F722619813D07402453AE6AB1D7F08B460454(L_42, L_43, L_44, L_45, NULL);
		int32_t L_46 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_46, 1));
	}

IL_00b4:
	{
		int32_t L_47 = V_6;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_48 = V_3;
		int32_t L_49 = V_0;
		int32_t L_50 = V_1;
		NullCheck(L_48);
		L_48->___size = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_49, L_50)), 1));
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_51 = V_3;
		NullCheck(L_51);
		int32_t L_52 = L_51->___size;
		if ((((int32_t)L_52) == ((int32_t)1)))
		{
			goto IL_00f0;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_53 = V_3;
		NullCheck(L_53);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_54 = L_53->___digits;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_55 = V_3;
		NullCheck(L_55);
		int32_t L_56 = L_55->___size;
		NullCheck(L_54);
		int64_t L_57;
		L_57 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_54, ((int32_t)il2cpp_codegen_subtract(L_56, 1)), NULL);
		if (L_57)
		{
			goto IL_00f0;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_58 = V_3;
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_59 = L_58;
		NullCheck(L_59);
		int32_t L_60 = L_59->___size;
		NullCheck(L_59);
		L_59->___size = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
	}

IL_00f0:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_61 = V_3;
		return L_61;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_DivideByBigNumberSmaller_mC122031BD2368DA8D4ECC27F1059E288CAB9ABBE (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_r, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_dq, int32_t ___2_k, int32_t ___3_m, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___3_m;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002a;
	}

IL_0006:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = ___0_r;
		NullCheck(L_1);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_2 = L_1->___digits;
		int32_t L_3 = V_0;
		int32_t L_4 = ___2_k;
		NullCheck(L_2);
		int64_t L_5;
		L_5 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_2, ((int32_t)il2cpp_codegen_add(L_3, L_4)), NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = ___1_dq;
		NullCheck(L_6);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_7 = L_6->___digits;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int64_t L_9;
		L_9 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_7, L_8, NULL);
		if ((((int64_t)L_5) == ((int64_t)L_9)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_10 = V_0;
		V_1 = L_10;
		goto IL_002a;
	}

IL_0026:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_002a:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0006;
		}
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14 = ___0_r;
		NullCheck(L_14);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_15 = L_14->___digits;
		int32_t L_16 = V_0;
		int32_t L_17 = ___2_k;
		NullCheck(L_15);
		int64_t L_18;
		L_18 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_15, ((int32_t)il2cpp_codegen_add(L_16, L_17)), NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_19 = ___1_dq;
		NullCheck(L_19);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_20 = L_19->___digits;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int64_t L_22;
		L_22 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_20, L_21, NULL);
		if ((((int64_t)L_18) >= ((int64_t)L_22)))
		{
			goto IL_004c;
		}
	}
	{
		return (bool)1;
	}

IL_004c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Difference_m356F722619813D07402453AE6AB1D7F08B460454 (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_r, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_dq, int32_t ___2_k, int32_t ___3_m, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		V_0 = ((int64_t)0);
		V_1 = 0;
		goto IL_0052;
	}

IL_0007:
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = ___0_r;
		NullCheck(L_0);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_1 = L_0->___digits;
		int32_t L_2 = V_1;
		int32_t L_3 = ___2_k;
		NullCheck(L_1);
		int64_t L_4;
		L_4 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3)), NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_5 = ___1_dq;
		NullCheck(L_5);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_6 = L_5->___digits;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int64_t L_8;
		L_8 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_6, L_7, NULL);
		int64_t L_9 = V_0;
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(L_4, L_8)), L_9)), ((int64_t)((int32_t)65536))));
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10 = ___0_r;
		NullCheck(L_10);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_11 = L_10->___digits;
		int32_t L_12 = V_1;
		int32_t L_13 = ___2_k;
		int64_t L_14 = V_2;
		NullCheck(L_11);
		DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2(L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), ((int64_t)(L_14%((int64_t)((int32_t)65536)))), NULL);
		int64_t L_15 = V_2;
		V_0 = ((int64_t)il2cpp_codegen_subtract(((int64_t)1), ((int64_t)(L_15/((int64_t)((int32_t)65536))))));
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0052:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = ___3_m;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BigInteger_Trial_m61CB43ED1646A67BE284D1989643CCA5FEADBBFC (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___0_r, BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* ___1_d, int32_t ___2_k, int32_t ___3_m, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0 = ___2_k;
		int32_t L_1 = ___3_m;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = ___0_r;
		NullCheck(L_2);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_3 = L_2->___digits;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int64_t L_5;
		L_5 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_3, L_4, NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_6 = ___0_r;
		NullCheck(L_6);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_7 = L_6->___digits;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int64_t L_9;
		L_9 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_7, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_10 = ___0_r;
		NullCheck(L_10);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_11 = L_10->___digits;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int64_t L_13;
		L_13 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 2)), NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_14 = ___1_d;
		NullCheck(L_14);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_15 = L_14->___digits;
		int32_t L_16 = ___3_m;
		NullCheck(L_15);
		int64_t L_17;
		L_17 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_15, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), NULL);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_18 = ___1_d;
		NullCheck(L_18);
		DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* L_19 = L_18->___digits;
		int32_t L_20 = ___3_m;
		NullCheck(L_19);
		int64_t L_21;
		L_21 = DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458(L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 2)), NULL);
		V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_17, ((int64_t)((int32_t)65536)))), L_21));
		int64_t L_22 = V_1;
		V_2 = ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_5, ((int64_t)((int32_t)65536)))), L_9)), ((int64_t)((int32_t)65536)))), L_13))/L_22));
		int64_t L_23 = V_2;
		if ((((int64_t)L_23) >= ((int64_t)((int64_t)((int32_t)65535)))))
		{
			goto IL_0071;
		}
	}
	{
		int64_t L_24 = V_2;
		return ((int64_t)((int32_t)L_24));
	}

IL_0071:
	{
		return ((int64_t)((int32_t)65535));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__cctor_mA6C5D24AB65508115E6D40517F63B956FB706E0F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_0 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_mBEA4FC657422A98B2594410C3512B5F3AEEAE7A4(L_0, NULL);
		((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Zero), (void*)L_0);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_1 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m40A2DD0D91D82238C51D7BD26892653DB74E39F2(L_1, ((int64_t)1), NULL);
		((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___One = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___One), (void*)L_1);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_2 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m40A2DD0D91D82238C51D7BD26892653DB74E39F2(L_2, ((int64_t)2), NULL);
		((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Two = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Two), (void*)L_2);
		BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190* L_3 = (BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190*)il2cpp_codegen_object_new(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var);
		BigInteger__ctor_m40A2DD0D91D82238C51D7BD26892653DB74E39F2(L_3, ((int64_t)((int32_t)10)), NULL);
		((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Ten = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tA98D840E9F3B991EBF236359334CBD0BCA0C8190_il2cpp_TypeInfo_var))->___Ten), (void*)L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DigitContainer_get_Item_mCBA7B494929CD02749DD00D2A65D6A9E21C4C458 (DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_1 = NULL;
	{
		int32_t L_0 = ___0_index;
		V_0 = ((int32_t)(L_0>>4));
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_1 = __this->___digits;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0017;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = V_1;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)(L_7%((int32_t)16)));
		int64_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}

IL_0017:
	{
		return ((int64_t)0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer_set_Item_m8B5D3DA91C4E5E3ADCA5F8F2A3685471BA3536D2 (DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* __this, int32_t ___0_index, int64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_1 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* G_B2_0 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* G_B1_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		V_0 = ((int32_t)(L_0>>4));
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_1 = __this->___digits;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = L_4;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0022;
		}
		G_B1_0 = L_5;
	}
	{
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_6 = __this->___digits;
		int32_t L_7 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = L_8;
		V_1 = L_9;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)L_9);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_10 = V_1;
		G_B2_0 = L_10;
	}

IL_0022:
	{
		int32_t L_11 = ___0_index;
		int64_t L_12 = ___1_value;
		NullCheck(G_B2_0);
		(G_B2_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11%((int32_t)16)))), (int64_t)L_12);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer__ctor_mA9926035C9FDFB974D04ADD2F33DACAE40010A3D (DigitContainer_t226B11FD6E39EB9C4C51C56F61E28D88E382F697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_0 = (Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B*)(Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B*)SZArrayNew(Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->___digits = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digits), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigIntegerException__ctor_m47EC1541E4E10F50C6AE37429468971B6B2558AD (BigIntegerException_tE9738EEADDA9D6B76EACD9352CA4EA0ACDD0EE7B* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_innerException;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_X_mF3C33E0EFDA88B1A3580AF3AE3A8CB8E88DF9BE1_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CXU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_Y_m687DD1BCEBF71A02500780F4D6A17FF40DE314F8_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_X_mB8DC20D7D73CEFC50A80F62AB29890940B3F874B_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CXU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_Y_m256E53785249359876C09797EEBC8E8DA55E47E8_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CYU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_isCompact_mEA109DBE1E4632CCABC8FE6CA701948C6794AD01_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CisCompactU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Size_m0CA46D7572CEE88A5AFD5D3D0F1EEF7C96EEC646_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Layers_m93A7FD4EC1C095E5B2D09718205E25F0D2A5E1B2_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLayersU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_CodeWords_m67A81A3769CEA2C80EEE65C2268E9D61547F4250_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCodeWordsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Matrix_mF2BCFE42A0D554A00944953AE84748491372E558_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_value, const RuntimeMethod* method) 
{
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_0 = ___0_value;
		__this->___U3CMatrixU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMatrixU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_BitCount_m374653FBA64911E8466874979251DD8E14DA6F21_inline (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___bitCount;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mode;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_BinaryShiftByteCount_mAF226194E9D6F96EC8ADC2E6CD2B77B98BA67460_inline (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___binaryShiftByteCount;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_get_Previous_mAC3BE6538F07E6CB57CF3632E72EB4E0AA4AED5D_inline (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, const RuntimeMethod* method) 
{
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = __this->___previous;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Base10BigInteger_set_NumberSign_m9E062A3DA7B3FD3B83E1D75E634FD4B50C5D55E1_inline (Base10BigInteger_t5AF7D0EACA3E92B2EF61DD38220A4F6DBC571DD6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___sign = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
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
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
