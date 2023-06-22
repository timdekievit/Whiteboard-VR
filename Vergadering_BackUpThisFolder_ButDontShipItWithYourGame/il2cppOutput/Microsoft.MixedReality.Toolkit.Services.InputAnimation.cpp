﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_t924EC80B88AF529C31B6BD658C27711A7B2B2A5E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t5BAA4B6E262AC9F9CA03BE0EB72876064BB73549;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose>
struct Dictionary_2_t4CB3031950B66617A6446A284712692F4116FBBD;
// System.Func`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct Func_1_tB640F0B83B467B088B58D7A8AA0829DC23C219B1;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve>
struct IEnumerable_1_t83AFD20A6472B3B13CD20B5F4D60FC08433DC5FF;
// System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve>
struct IEnumerator_1_tDA4450F0D5725963BA9CE55E5C8B238F51C6773F;
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>
struct IEnumerator_1_t564312AF8B93071DD2F64346A3337E1461D22AF9;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_t6AFB4C240131CC78AE41EA29164522ADED0E9CD4;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_tBAEB035A4D3BD623AA6BAB4D446C25A2AD10C6C2;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct KeyCollection_t7C41C8772DA182F4610051EC82A704A9E0879317;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>
struct List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>
struct Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct TaskFactory_1_t629B5788840F017B6582E12056104D260F64F46C;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Object>
struct ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_t2AE0264CE138FC2B8D8839AB6F8E4EE60442470B;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct ValueCollection_tF6578F9E2E9D1B91B3699F496D5DC4BA72DF2591;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_tA56099A91E38976C5903C65561AE117EDF312B57;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>[]
struct EntryU5BU5D_tE9DBA641524D4E5F365B3F38EB7B46703C6E3F36;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker[]
struct InputAnimationMarkerU5BU5D_tC86E3A7F254848D79001CE2574FD9500540F5D86;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_tE50560B4E0C3CC9CC164C71DC627583674EC4247;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_tB0CE3BD4887D9B9BFC82FC1CA265B076BFD7B59F;
// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe[]
struct KeyframeU5BU5D_t1F04764F9D75AC94527320F4373551A8B4345ECC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider
struct IMixedRealityEyeGazeProvider_tC69CFCA4497CFED3639A93E88CA9A6D175004416;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand
struct IMixedRealityHand_tCAF3397A5008BD48D37A9F04A6C7066756C33744;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4B893B7CDAAC977211D826D02C8522ECA327D715;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation
struct InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6;
// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker
struct InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE;
// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer
struct InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5;
// Microsoft.MixedReality.Toolkit.Input.InputRecordingService
struct InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile
struct MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t8715CEF9543AA781186ED864C4E08FE0748993A3;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59
struct U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves
struct PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves
struct RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A;
// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe
struct Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tC1CB8DBFCB8CFB457B71BAAABB458F35DEA2B6EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tB640F0B83B467B088B58D7A8AA0829DC23C219B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t83AFD20A6472B3B13CD20B5F4D60FC08433DC5FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t564312AF8B93071DD2F64346A3337E1461D22AF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tDA4450F0D5725963BA9CE55E5C8B238F51C6773F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEyeGazeProvider_tC69CFCA4497CFED3639A93E88CA9A6D175004416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHand_tCAF3397A5008BD48D37A9F04A6C7066756C33744_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass49_0_t8715CEF9543AA781186ED864C4E08FE0748993A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06265567ED5B353F62334C6ED834095E8F3DA213;
IL2CPP_EXTERN_C String_t* _stringLiteral07F96E76E35E18FF6CE65A73E42CD0652022C014;
IL2CPP_EXTERN_C String_t* _stringLiteral10D826E55CA66B177C3CA8E6D951B2AAC0D06ADC;
IL2CPP_EXTERN_C String_t* _stringLiteral2C1AA484EA907D9AF79CB68FD3615B8BA6AFA10B;
IL2CPP_EXTERN_C String_t* _stringLiteral2C71071781ACA763255B49C62BBF32A19A63C633;
IL2CPP_EXTERN_C String_t* _stringLiteral2F30A225B0E18CECF032D8CBEBC2F77FFC6A9B2B;
IL2CPP_EXTERN_C String_t* _stringLiteral845601714FB132030B7585887918D078E9CE2267;
IL2CPP_EXTERN_C String_t* _stringLiteralD1B4A550FE7439DE4FDA569B91A4624B59B45E5B;
IL2CPP_EXTERN_C String_t* _stringLiteralD98EEFA57F0D44C301E0D9E2C28732491D85C1C5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_m73C986AFCEC7FA39BF0D844BDCD3D9D32536363F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mC59EE90AEF8448D51221F1B1B820AA0378F54406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m1B45B136F9688FBA61D2C36A6C4F1951A8AA1FFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mFE4EBD15399DB4CB1C2038415B6AB26EADCBBD5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m0095EF5E40791A8D9A18D6ED54BD2AD6C4F36943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_mBE0C43E80A09DF5EB146572F1D87C4D5EDD97929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mA97A5D87B54CDC56D6A339A848B68EFE170307F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m02760479713C54BA45D7C946C962C44D9C0021A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m0C1DF55F3888C9C027CAC996F82F6B3D88D2EE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m5BA3B1495D7A52D723E805C6272917A762BFF71B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m26ADEB79B34C788AB79F8E203114332400712CF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB503ABA3C13679286D2C404B06C0F4C781873E4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m104F150208968785DA05ABD8360B85B3F2B308EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0B7CFFD074D9E966CCA86758706D1C448EFB7B70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7FAF0C13119AF1D4B7A1900984AA66034C6C24C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m536AF6F9DEB8D81595983921E40BCDB3CFC10061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7367F5F3A30A2BAFD3CB713209D9C25B71751012_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2ECEDC40E034141FA4F7A2B1E8CD4A8176852482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF180E2D3DB23FC27191FE883617081B134363B6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAnimationSerializationUtils_ReadHeader_m4B3C18A4A00014E59499424D08E99CDB9FFB1207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m54B7516377CD87A702EB52ADCF4B0105717EC602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m95B13A6D907606F0F35D36B6BEA0F1F31F91B6E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0D16C396D05854E01D63F42CB3B6D1DD1A11C650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2E0F0EE3577BF7E4E9044D9F6FA70298DB74A9AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB9B7E51F654BF50957358D771B0F18354D00E1EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m67D865992ADEFE238DD908DD4DCD62202EFEBAE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m6739E35A6637FBF1AC2260748B5FEBB368C8A714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mC64635960AD33E382E6998F6C60BFAF44A729BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mAD480491CB18D18F4D622D7092BE5205C3516368_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_m5952DCCC535AE1086200E210DF339668E915C525_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m3181CC3072E651C6CB3C095C8BB9DA14D2A70348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m22A50CD614158B602874F1FE6C418026CC5F67F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mE1C43309B4F9DC4D685D8A82B9BFC40DD77CA79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m6A0BA8EDF97024AFCD173C690286A748F9BE1811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m0DB8218E2DCED3997828E6A7A23B15C08F920761_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m0482C4BD712078BD3DE8837701EC4C53C83EA09E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisInputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6_mC98296D20E6414D83F70ACB01BDD383BD09BFFF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllAnimationCurvesU3Ed__59_System_Collections_IEnumerator_Reset_m3DF7747B6D79A5E31C1DC97DC179A73C90F20F28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass49_0_U3CFromStreamAsyncU3Eb__0_m68F7BE5B9579F189E0815BD5E228A6A6C5179E0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m8918476BD40C4461125F63B370F5D43F151807FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TrackedHandJoint_tEDCBD4B9A65BBB59D6C182873CEF88E1A12A356B_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF6123C5771A9A2CD7CFBD6AADEF48A4B5F965E17 
{
};

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA56099A91E38976C5903C65561AE117EDF312B57* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tBAEB035A4D3BD623AA6BAB4D446C25A2AD10C6C2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2AE0264CE138FC2B8D8839AB6F8E4EE60442470B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE9DBA641524D4E5F365B3F38EB7B46703C6E3F36* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t7C41C8772DA182F4610051EC82A704A9E0879317* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF6578F9E2E9D1B91B3699F496D5DC4BA72DF2591* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>
struct List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputAnimationMarkerU5BU5D_tC86E3A7F254848D79001CE2574FD9500540F5D86* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>
struct Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	KeyframeU5BU5D_t1F04764F9D75AC94527320F4373551A8B4345ECC* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct ValueCollection_tF6578F9E2E9D1B91B3699F496D5DC4BA72DF2591  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* ____dictionary_0;
};

// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0  : public RuntimeObject
{
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::localJointPoses
	MixedRealityPoseU5BU5D_tE50560B4E0C3CC9CC164C71DC627583674EC4247* ___localJointPoses_2;
};

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

// Microsoft.MixedReality.Toolkit.Input.InputAnimation
struct InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6  : public RuntimeObject
{
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation::duration
	float ___duration_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handTrackedCurveLeft
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___handTrackedCurveLeft_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handTrackedCurveRight
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___handTrackedCurveRight_2;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handPinchCurveLeft
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___handPinchCurveLeft_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handPinchCurveRight
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___handPinchCurveRight_4;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation::handJointCurvesLeft
	Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* ___handJointCurvesLeft_5;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation::handJointCurvesRight
	Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* ___handJointCurvesRight_6;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation::cameraCurves
	PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* ___cameraCurves_7;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation::gazeCurves
	RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* ___gazeCurves_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::<HasHandData>k__BackingField
	bool ___U3CHasHandDataU3Ek__BackingField_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::<HasCameraPose>k__BackingField
	bool ___U3CHasCameraPoseU3Ek__BackingField_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::<HasEyeGaze>k__BackingField
	bool ___U3CHasEyeGazeU3Ek__BackingField_11;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker> Microsoft.MixedReality.Toolkit.Input.InputAnimation::markers
	List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* ___markers_12;
};

// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker
struct InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE  : public RuntimeObject
{
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::time
	float ___time_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::name
	String_t* ___name_1;
};

// Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils
struct InputAnimationSerializationUtils_tD932A45C1BE559151D4E187BD1F9C545B74943E5  : public RuntimeObject
{
};

// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer
struct InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5  : public RuntimeObject
{
	// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::currentKeyframe
	Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* ___currentKeyframe_0;
	// System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::keyframes
	Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* ___keyframes_1;
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
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

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t8715CEF9543AA781186ED864C4E08FE0748993A3  : public RuntimeObject
{
	// System.IO.Stream Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass49_0::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_0;
};

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves
struct PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC  : public RuntimeObject
{
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::PositionX
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___PositionX_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::PositionY
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___PositionY_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::PositionZ
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___PositionZ_2;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::RotationX
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___RotationX_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::RotationY
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___RotationY_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::RotationZ
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___RotationZ_5;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::RotationW
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___RotationW_6;
};

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves
struct RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A  : public RuntimeObject
{
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::OriginX
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___OriginX_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::OriginY
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___OriginY_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::OriginZ
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___OriginZ_2;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::DirectionX
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___DirectionX_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::DirectionY
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___DirectionY_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::DirectionZ
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___DirectionZ_5;
};

// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>
struct Enumerator_tA3B9CE36F90BB994A2D251E4BB3DF436B6740266 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* ____current_3;
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

// System.Collections.Generic.Queue`1/Enumerator<System.Object>
struct Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A 
{
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	RuntimeObject* ____currentElement_3;
};

// System.Collections.Generic.Queue`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>
struct Enumerator_tC1CB8DBFCB8CFB457B71BAAABB458F35DEA2B6EC 
{
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* ____currentElement_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>
struct Enumerator_tF9B1C7464F1BFE1675CFE608CC62D4507968CF08 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* ____currentValue_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* ___m_result_38;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
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
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass70_0
struct U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 
{
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass70_0::inCurveX
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___inCurveX_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass70_0::inCurveY
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___inCurveY_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass70_0::inCurveZ
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___inCurveZ_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass70_0::sqrThreshold
	float ___sqrThreshold_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass70_0::outCurveX
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___outCurveX_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass70_0::outCurveY
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___outCurveY_5;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass70_0::outCurveZ
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___outCurveZ_6;
};

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0
struct U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 
{
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::inCurveX
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___inCurveX_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::inCurveY
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___inCurveY_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::inCurveZ
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___inCurveZ_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::cosThreshold
	float ___cosThreshold_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::outCurveX
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___outCurveX_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::outCurveY
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___outCurveY_5;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::outCurveZ
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___outCurveZ_6;
};

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0
struct U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 
{
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::inCurveX
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___inCurveX_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::inCurveY
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___inCurveY_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::inCurveZ
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___inCurveZ_2;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::inCurveW
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___inCurveW_3;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::compThreshold
	float ___compThreshold_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::outCurveX
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___outCurveX_5;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::outCurveY
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___outCurveY_6;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::outCurveZ
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___outCurveZ_7;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::outCurveW
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___outCurveW_8;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0  : public RuntimeObject
{
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;
};

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_tEDCBD4B9A65BBB59D6C182873CEF88E1A12A356B 
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;
};

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59
struct U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>2__current
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>4__this
	InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>7__wrap1
	Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7 ___U3CU3E7__wrap1_4;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<curves>5__3
	PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* ___U3CcurvesU3E5__3_5;
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20  : public BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0  : public RuntimeObject
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject* ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___poseData_17;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49
struct U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D 
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation> Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49::<>t__builder
	AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171 ___U3CU3Et__builder_1;
	// System.IO.Stream Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_2;
	// System.Action Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49::callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation> Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49::<>u__1
	TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9 ___U3CU3Eu__1_4;
};

// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe
struct Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A  : public RuntimeObject
{
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<Time>k__BackingField
	float ___U3CTimeU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<LeftTracked>k__BackingField
	bool ___U3CLeftTrackedU3Ek__BackingField_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<RightTracked>k__BackingField
	bool ___U3CRightTrackedU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<LeftPinch>k__BackingField
	bool ___U3CLeftPinchU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<RightPinch>k__BackingField
	bool ___U3CRightPinchU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<CameraPose>k__BackingField
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___U3CCameraPoseU3Ek__BackingField_5;
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<GazeRay>k__BackingField
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___U3CGazeRayU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<LeftJoints>k__BackingField
	Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* ___U3CLeftJointsU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<RightJoints>k__BackingField
	Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* ___U3CRightJointsU3Ek__BackingField_8;
};

// System.Func`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct Func_1_tB640F0B83B467B088B58D7A8AA0829DC23C219B1  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC  : public BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_tB0CE3BD4887D9B9BFC82FC1CA265B076BFD7B59F* ___pointerConfigurations_15;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_t924EC80B88AF529C31B6BD658C27711A7B2B2A5E* ___activePointersToConfig_17;
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.MixedReality.Toolkit.Input.InputRecordingService
struct InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45  : public BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC
{
	// System.Action Microsoft.MixedReality.Toolkit.Input.InputRecordingService::OnRecordingStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnRecordingStarted_21;
	// System.Action Microsoft.MixedReality.Toolkit.Input.InputRecordingService::OnRecordingStopped
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnRecordingStopped_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::<IsRecording>k__BackingField
	bool ___U3CIsRecordingU3Ek__BackingField_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::useBufferTimeLimit
	bool ___useBufferTimeLimit_24;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::recordingBufferTimeLimit
	float ___recordingBufferTimeLimit_25;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Input.InputRecordingService::unlimitedRecordingStartTime
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___unlimitedRecordingStartTime_26;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::<EndTime>k__BackingField
	float ___U3CEndTimeU3Ek__BackingField_27;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::frameRate
	float ___frameRate_28;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::frameInterval
	float ___frameInterval_29;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::nextFrame
	float ___nextFrame_30;
	// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer Microsoft.MixedReality.Toolkit.Input.InputRecordingService::recordingBuffer
	InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* ___recordingBuffer_31;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.InputRecordingService::eyeGazeProvider
	RuntimeObject* ___eyeGazeProvider_32;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile
struct MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
{
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::frameRate
	float ___frameRate_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::recordHandData
	bool ___recordHandData_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::jointPositionThreshold
	float ___jointPositionThreshold_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::jointRotationThreshold
	float ___jointRotationThreshold_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::recordCameraPose
	bool ___recordCameraPose_9;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::cameraPositionThreshold
	float ___cameraPositionThreshold_10;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::cameraRotationThreshold
	float ___cameraRotationThreshold_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::recordEyeGaze
	bool ___recordEyeGaze_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::eyeGazeOriginThreshold
	float ___eyeGazeOriginThreshold_13;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::eyeGazeDirectionThreshold
	float ___eyeGazeDirectionThreshold_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::partitionSize
	int32_t ___partitionSize_15;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>
struct List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputAnimationMarkerU5BU5D_tC86E3A7F254848D79001CE2574FD9500540F5D86* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>

// System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>

// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>

// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>

// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::Joints
	TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915* ___Joints_0;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::<JointCount>k__BackingField
	int32_t ___U3CJointCountU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose> Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::handPoses
	Dictionary_2_t4CB3031950B66617A6446A284712692F4116FBBD* ___handPoses_3;
};

// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose

// System.IO.BinaryReader

// System.IO.BinaryReader

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// System.IO.BinaryWriter

// Microsoft.MixedReality.Toolkit.Input.InputAnimation

// Microsoft.MixedReality.Toolkit.Input.InputAnimation

// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker

// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker

// Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils

// Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils

// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer

// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass49_0

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass49_0

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves

// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>

// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.Queue`1/Enumerator<System.Object>

// System.Collections.Generic.Queue`1/Enumerator<System.Object>

// System.Collections.Generic.Queue`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>

// System.Collections.Generic.Queue`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Single>

// System.Nullable`1<System.Single>

// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>

// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t629B5788840F017B6582E12056104D260F64F46C* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Keyframe

// UnityEngine.Keyframe

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass70_0

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass70_0

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// Microsoft.MixedReality.Toolkit.BaseService

// Microsoft.MixedReality.Toolkit.BaseService

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_6;
};

// System.IO.FileStream

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___U3CZeroIdentityU3Ek__BackingField_0;
};

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint

// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59

// UnityEngine.Component

// UnityEngine.Component

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49

// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe

// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe

// System.Func`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>

// System.Func`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>

// System.Action

// System.Action

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile

// System.IO.IOException

// System.IO.IOException

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// Microsoft.MixedReality.Toolkit.Input.InputRecordingService

// Microsoft.MixedReality.Toolkit.Input.InputRecordingService

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915  : public RuntimeArray
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
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE  : public RuntimeArray
{
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* m_Items[1];

	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD8A6CDD5C954C86D2150FCFF1B76EB62F35A881D_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_mE8BE00E1F7B56CC73E30801CE7604D12BBF3C0E5_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D* Dictionary_2_get_Values_m88548D48A871D5B79DB4BAAB82C62D4D61568F64_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF9B1C7464F1BFE1675CFE608CC62D4507968CF08 ValueCollection_GetEnumerator_m412091D90257E6493D8F9404FFC734832E1C5007_gshared (ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m51A04B4A4A98EC6004015ECF7C9605316687CBD3_gshared (Enumerator_tF9B1C7464F1BFE1675CFE608CC62D4507968CF08* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m76B0ECD4B03E606A1CE3DF60589D2E97130B02CA_gshared_inline (Enumerator_tF9B1C7464F1BFE1675CFE608CC62D4507968CF08* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m30C883F9DF743472B2102F74D70DA61074694D1E_gshared (Enumerator_tF9B1C7464F1BFE1675CFE608CC62D4507968CF08* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB5D5552765DD7F333FDBF60A4F6108900A3440D1_gshared (Dictionary_2_t5BAA4B6E262AC9F9CA03BE0EB72876064BB73549* __this, int32_t ___0_key, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_Run_TisRuntimeObject_m030003C532BA57F9193CA5BED8F832043B5758E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_function, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_m9CEB695FB93A26678FFF7FEE265FD3361E72BE30_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m29C450885F45C208301DFBFDD2228A1036A966FF_gshared (Dictionary_2_t5BAA4B6E262AC9F9CA03BE0EB72876064BB73549* __this, int32_t ___0_key, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m08987FA83DC951816545323EACF7050568F58233_gshared (Dictionary_2_t5BAA4B6E262AC9F9CA03BE0EB72876064BB73549* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::.ctor()
inline void Dictionary_2__ctor_m26ADEB79B34C788AB79F8E203114332400712CF8 (Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves__ctor_m2831E8283F32745F844C57C074BC9D1760E377CB (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCurves__ctor_m6F6D1FAAB918D4F08776DB22754FB90FEFD20C2C (RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::.ctor()
inline void List_1__ctor_m2E0F0EE3577BF7E4E9044D9F6FA70298DB74A9AD (List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_output, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteHeader(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteHeader_m0EB6C4CCE43D8839E72DE92E698F98983EADED26 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_HasCameraPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputAnimation_get_HasCameraPose_mA0B2076B76FBC9ACF8F656FB42EDC0956A6BB66F_inline (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_HasHandData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputAnimation_get_HasHandData_m90AD29D91BC247748D1F8A1BE29AD7BBA194E21D_inline (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_HasEyeGaze()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputAnimation_get_HasEyeGaze_m072A146AFEBE26547373981134AD6949D54A9FFB_inline (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesToStream(System.IO.BinaryWriter,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesToStream_mE706BBC3472EF80762CEDBBA418421CB040DFC21 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* ___1_curves, float ___2_startTime, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteBoolCurve(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteBoolCurve_mEE4F0E5FB945F68D8C17E490B7B040E4FFFCE30E (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, float ___2_startTime, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF (Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* __this, int32_t ___0_key, PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861*, int32_t, PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD8A6CDD5C954C86D2150FCFF1B76EB62F35A881D_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::get_JointCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArticulatedHandPose_get_JointCount_m6513BF4BCA1BFA1872A17A94DFD19087B68BD6FD_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::RayCurvesToStream(System.IO.BinaryWriter,Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_RayCurvesToStream_m8FD18A9AFC71F7652D062166F4A95CE2B97D0543 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* ___1_curves, float ___2_startTime, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteMarkerList(System.IO.BinaryWriter,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteMarkerList_mB85C2E078065DB18635B827699D52266B53307D9 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* ___1_markers, float ___2_startTime, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandState(System.Single,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_EvaluateHandState_mF70CBF4801487A077CBE3456AE4246BE2409B7B4 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, float ___0_time, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_trackedCurve, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___2_pinchCurve, bool* ___3_isTracked, bool* ___4_isPinching, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 MixedRealityPose_get_ZeroIdentity_m5F6C0EE34C84272B653BEF09731AC5E219F51EDD_inline (const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 PoseCurves_Evaluate_m19786E8FFC1D7B69EB05A77021E734E2983651F9 (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* __this, float ___0_time, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandJoint(System.Single,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 InputAnimation_EvaluateHandJoint_m2D9376EBE7F4075DA2E28860AFCBDB04153E315C (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, float ___0_time, int32_t ___1_joint, Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* ___2_jointCurves, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 RayCurves_Evaluate_mE071DC483FE318E315DCA26815FA81E333A910F5 (RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation__ctor_mCDBA02C5F5A48AA312EE0A1DA5E8A4D893FEA462 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::get_StartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRecordingBuffer_get_StartTime_m33F70CDEC9D3F8AF591233B053BA5B0C519C05B0 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_RecordHandData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordHandData_m00FB590BB5C2842EBD2A69855D25BE61393FDB8A_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::set_HasHandData(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputAnimation_set_HasHandData_m3480752B1F94F7DB9D94616A6B63FFE140C7FB81_inline (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_RecordCameraPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordCameraPose_mAC2C5D60A010CEA2AED6B77A6AC646DB4164BD17_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::set_HasCameraPose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputAnimation_set_HasCameraPose_m63CDA9AFD9FCE60C9FD8CF5BA3D43978D42A9D92_inline (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_RecordEyeGaze()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordEyeGaze_m7201174C8BF2C24C4C3B6073E16951013DEB1920_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::set_HasEyeGaze(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputAnimation_set_HasEyeGaze_mC7871B969CED484E92FCF27C6934C987CCD9A9A9_inline (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputRecordingBuffer_GetEnumerator_m6594C7E6D0D85F8238D591D5CCF8E4A381C5E59D (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_Time()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Keyframe_get_Time_m4FFDA94203B0BFE0E4D292D0A7D22C3E6070DACA_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_LeftTracked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_LeftTracked_mF2797B136459D689C9F7576909167B76DC409E73_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<FromRecordingBuffer>g__AddBoolKeyIfChanged|47_0(UnityEngine.AnimationCurve,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3CFromRecordingBufferU3Eg__AddBoolKeyIfChangedU7C47_0_m593D76A92A44D98C1DA06A578FBAB04AE87ECB4F (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_curve, float ___1_time, bool ___2_value, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_RightTracked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_RightTracked_m1FCF75796B487D26FAD3B73F29EF0617369B7C08_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_LeftPinch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_LeftPinch_m68D4427463BEE61BC4307893CC797B3F05CE7F07_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_RightPinch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_RightPinch_m4DF67192F78BEDC78BF61536EBC176BB8275EBB8_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_LeftJoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* Keyframe_get_LeftJoints_m22F03CB8DC507FDF1DA749672119B2FEDDE4B5B7_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<FromRecordingBuffer>g__AddJointPoseKeys|47_1(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3CFromRecordingBufferU3Eg__AddJointPoseKeysU7C47_1_m2E87393309B7F8EB3CCB29D90B1DDD577E3AD747 (Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* ___0_jointCurves, Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* ___1_poses, int32_t ___2_joint, float ___3_time, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_RightJoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* Keyframe_get_RightJoints_mA445665FE282A5ED5C81192B57752C2574D6538F_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_CameraPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 Keyframe_get_CameraPose_mF325808078E828CB4C42612A6EA839420AC0F7E1_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::AddKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves_AddKey_mE9EEF598B4AAC81AD36755080BB78DAD8CCE534A (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* __this, float ___0_time, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___1_pose, const RuntimeMethod* method) ;
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_GazeRay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Keyframe_get_GazeRay_m7E3BB33B51B23BB60F6306C7AB37FCD28656B256_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::AddKey(System.Single,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCurves_AddKey_mCA99E12C871ABB0C2A38A52A72C69969C9F43E09 (RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* __this, float ___0_time, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___1_ray, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::Optimize(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_Optimize_mA539990849F6F45B703774E9A4DB78E5003851C7 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* ___0_profile, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ComputeDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_ComputeDuration_m61E9B7D591CBEB72D40C06D027182E44AF8171F5 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadHeader(System.IO.BinaryReader,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadHeader_m4B3C18A4A00014E59499424D08E99CDB9FFB1207 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, int32_t* ___1_fileVersionMajor, int32_t* ___2_fileVersionMinor, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesFromStream(System.IO.BinaryReader,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesFromStream_mE20458691555E9925AC8AA9BC525D69D95104153 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* ___1_curves, bool ___2_readSimple, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadBoolCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadBoolCurve_m7D5F8B3DF38D73BE61275FF9A8A2EC07F90FEDCD (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::Add(TKey,TValue)
inline void Dictionary_2_Add_m0C1DF55F3888C9C027CAC996F82F6B3D88D2EE83 (Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* __this, int32_t ___0_key, PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861*, int32_t, PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::RayCurvesFromStream(System.IO.BinaryReader,Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_RayCurvesFromStream_m6338C38BE38D8948FEE67ACC0B0913CA32CD0615 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* ___1_curves, bool ___2_readSimple, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadMarkerList(System.IO.BinaryReader,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadMarkerList_m6595702A9EFC92A8079D528F44FD86F56DFC1331 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* ___1_markers, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::Create()
inline AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171 AsyncTaskMethodBuilder_1_Create_mC59EE90AEF8448D51221F1B1B820AA0378F54406 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::Start<Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_mBE0C43E80A09DF5EB146572F1D87C4D5EDD97929 (AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171* __this, U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171*, U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_mE8BE00E1F7B56CC73E30801CE7604D12BBF3C0E5_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::get_Task()
inline Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED* AsyncTaskMethodBuilder_1_get_Task_mA97A5D87B54CDC56D6A339A848B68EFE170307F3 (AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED* (*) (AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation::GetAllAnimationCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputAnimation_GetAllAnimationCurves_m34253118BEBD8CD9FD2FD28967468C9E24FAC641 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraPositionThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraPositionThreshold_mB5A054788685266F2E211803C13869379A954D65_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraRotationThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraRotationThreshold_m8D3CA75A3C0F7692B75AA0DF891C8F08D6FE4F08_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_PartitionSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInputRecordingProfile_get_PartitionSize_m48010D085B08463D109D9208352D07099429CC1B_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::Optimize(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves_Optimize_mB804C5C729CD721ADB792D2FD75A8618C023959A (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* __this, float ___0_positionThreshold, float ___1_rotationThreshold, int32_t ___2_partitionSize, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_EyeGazeOriginThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_EyeGazeOriginThreshold_m5F7EBE45435C35AD95867A93A44EC22C2AD4F303_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_EyeGazeDirectionThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_EyeGazeDirectionThreshold_mD1EAA76B78A11878E7FA4E4CC9DEE22058744DC0_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::Optimize(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCurves_Optimize_m5B19DBCE7717A8A68A5855E1044E886D2A6BD8A0 (RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* __this, float ___0_originThreshold, float ___1_directionThreshold, int32_t ___2_partitionSize, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::get_Values()
inline ValueCollection_tF6578F9E2E9D1B91B3699F496D5DC4BA72DF2591* Dictionary_2_get_Values_m104F150208968785DA05ABD8360B85B3F2B308EB (Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tF6578F9E2E9D1B91B3699F496D5DC4BA72DF2591* (*) (Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861*, const RuntimeMethod*))Dictionary_2_get_Values_m88548D48A871D5B79DB4BAAB82C62D4D61568F64_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::GetEnumerator()
inline Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7 ValueCollection_GetEnumerator_m8918476BD40C4461125F63B370F5D43F151807FD (ValueCollection_tF6578F9E2E9D1B91B3699F496D5DC4BA72DF2591* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7 (*) (ValueCollection_tF6578F9E2E9D1B91B3699F496D5DC4BA72DF2591*, const RuntimeMethod*))ValueCollection_GetEnumerator_m412091D90257E6493D8F9404FFC734832E1C5007_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::Dispose()
inline void Enumerator_Dispose_m7FAF0C13119AF1D4B7A1900984AA66034C6C24C1 (Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7*, const RuntimeMethod*))Enumerator_Dispose_m51A04B4A4A98EC6004015ECF7C9605316687CBD3_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::get_Current()
inline PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* Enumerator_get_Current_mF180E2D3DB23FC27191FE883617081B134363B6F_inline (Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7* __this, const RuntimeMethod* method)
{
	return ((  PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* (*) (Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7*, const RuntimeMethod*))Enumerator_get_Current_m76B0ECD4B03E606A1CE3DF60589D2E97130B02CA_gshared_inline)(__this, method);
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointPositionThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointPositionThreshold_m01382059DA5685EE54D1397196DA95F9DF119450_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointRotationThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointRotationThreshold_m4C51611757615DF053436EDCADA3CFA348647213_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::MoveNext()
inline bool Enumerator_MoveNext_m536AF6F9DEB8D81595983921E40BCDB3CFC10061 (Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7*, const RuntimeMethod*))Enumerator_MoveNext_m30C883F9DF743472B2102F74D70DA61074694D1E_gshared)(__this, method);
}
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__59__ctor_m667503E337EAF8FEC9B57FBA46A27A02CC6DEAF7 (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m925C3CB49CB3384D39FF28ED279A866F52665AE3 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___0_time, float ___1_value, float ___2_inTangent, float ___3_outTangent, float ___4_inWeight, float ___5_outWeight, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::set_weightedMode(UnityEngine.WeightedMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_weightedMode_m3F4D6F04144F098E62FF5D888070A9C3DC3EC0E9 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::AddKey(UnityEngine.Keyframe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 ___0_key, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::AddKey(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, float ___1_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteFloatCurveSimple(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, float ___2_startTime, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurveSimple(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, const RuntimeMethod* method) ;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<OptimizePositionCurve>g__Recurse|70_0(System.Int32,System.Int32,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass70_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3COptimizePositionCurveU3Eg__RecurseU7C70_0_m1F8F94AF192E54E3F05BC8E27E7EEF08F0AFD1FC (int32_t ___0_start, int32_t ___1_end, U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* ___2_p, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<OptimizeDirectionCurve>g__Recurse|71_0(System.Int32,System.Int32,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3COptimizeDirectionCurveU3Eg__RecurseU7C71_0_mF662FE3A803F0664E9831B96E6456FDDF7CBBC41 (int32_t ___0_start, int32_t ___1_end, U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* ___2_p, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<OptimizeRotationCurve>g__Recurse|72_0(System.Int32,System.Int32,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3COptimizeRotationCurveU3Eg__RecurseU7C72_0_m6C36F3947C8D11C736E019E9896E55CFA8A1DC68 (int32_t ___0_start, int32_t ___1_end, U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* ___2_p, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddBoolKey(UnityEngine.AnimationCurve,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddBoolKey_mFBE31F951D8047E9ABC451A5CB6F5F1180380F91 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_curve, float ___1_time, bool ___2_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m5BA3B1495D7A52D723E805C6272917A762BFF71B (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* __this, int32_t ___0_key, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7*, int32_t, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5*, const RuntimeMethod*))Dictionary_2_TryGetValue_mB5D5552765DD7F333FDBF60A4F6108900A3440D1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_normalized_m08AB963B13A0EC6F540A29886C5ACFCCCC0A6D16_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityPose_get_Position_mDF63DBEBBB8B0979C9CA6F06902F9281C26ACA81_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddFloatKey(UnityEngine.AnimationCurve,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddFloatKey_mBC34966D90F5DED5B397284BA2D88254C0E1E795 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_curve, float ___1_time, float ___2_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MixedRealityPose_get_Rotation_m1DBCD393A804A4C08ABAF7A867B98CDB3F277D79_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::OptimizePositionCurve(UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_OptimizePositionCurve_mA10CA6599D5067ABDE8589DC57B3442B915AAF22 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___0_curveX, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___1_curveY, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___2_curveZ, float ___3_threshold, int32_t ___4_partitionSize, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::OptimizeRotationCurve(UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_OptimizeRotationCurve_m9C4B502A24F47A02DEFC7829BCF58E2B87F67F87 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___0_curveX, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___1_curveY, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___2_curveZ, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___3_curveW, float ___4_threshold, int32_t ___5_partitionSize, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m9806379126B288614A363F39705935CA0D86888C_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m090951B4A308155032C377FF0AE6BED025C39868_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_Normalize_m0CB5FAED5332234E3F6267F5A4C99B6A6A79CBE1_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddVectorKey(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddVectorKey_mD662F4D138CDC9D589E8DA5D8C84EF7F929F978B (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_curveX, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curveY, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___2_curveZ, float ___3_time, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::OptimizeDirectionCurve(UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_OptimizeDirectionCurve_m181284E0C9CFDB1FFDF8F275AF2CB2013FA53279 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___0_curveX, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___1_curveY, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___2_curveZ, float ___3_threshold, int32_t ___4_partitionSize, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::set_origin(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray_set_origin_m9B19A7BE86636111E3B16BCE08EAE030F37FE64D (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::set_direction(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray_set_direction_m8A8FF8101045BAE51BE5D5C1B6C21D0D5592DA98 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation::FromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* InputAnimation_FromStream_mFBA07F73C3E576CA6CFE674F45763EF31B4BC358 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass49_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0__ctor_mD4B0AB42CF7655DA85C00FADCF3CC7C8D0F45134 (U3CU3Ec__DisplayClass49_0_t8715CEF9543AA781186ED864C4E08FE0748993A3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m90906972CEE4ABC8D035903F551CFF9B4C2C7E1D (Func_1_tB640F0B83B467B088B58D7A8AA0829DC23C219B1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tB640F0B83B467B088B58D7A8AA0829DC23C219B1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Microsoft.MixedReality.Toolkit.Input.InputAnimation>(System.Func`1<TResult>)
inline Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED* Task_Run_TisInputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6_mC98296D20E6414D83F70ACB01BDD383BD09BFFF2 (Func_1_tB640F0B83B467B088B58D7A8AA0829DC23C219B1* ___0_function, const RuntimeMethod* method)
{
	return ((  Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED* (*) (Func_1_tB640F0B83B467B088B58D7A8AA0829DC23C219B1*, const RuntimeMethod*))Task_Run_TisRuntimeObject_m030003C532BA57F9193CA5BED8F832043B5758E8_gshared)(___0_function, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::GetAwaiter()
inline TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9 Task_1_GetAwaiter_m0482C4BD712078BD3DE8837701EC4C53C83EA09E (Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9 (*) (Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m0DB8218E2DCED3997828E6A7A23B15C08F920761 (TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_m73C986AFCEC7FA39BF0D844BDCD3D9D32536363F (AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171* __this, TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9* ___0_awaiter, U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171*, TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9*, U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_m9CEB695FB93A26678FFF7FEE265FD3361E72BE30_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::GetResult()
inline InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* TaskAwaiter_1_GetResult_m6A0BA8EDF97024AFCD173C690286A748F9BE1811 (TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9* __this, const RuntimeMethod* method)
{
	return ((  InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* (*) (TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m1B45B136F9688FBA61D2C36A6C4F1951A8AA1FFC (AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mFE4EBD15399DB4CB1C2038415B6AB26EADCBBD5D (AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171* __this, InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171*, InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFromStreamAsyncU3Ed__49_MoveNext_mFD4E2B858F47C35C960C5D974F055BFB208A19AC (U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m0095EF5E40791A8D9A18D6ED54BD2AD6C4F36943 (AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFromStreamAsyncU3Ed__49_SetStateMachine_m4D17F16597506BBC323D88E783251C7ACCE91224 (U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__59_U3CU3Em__Finally1_mCF932E12CCC71CB7C7AB047F717F21741D2664C6 (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__59_U3CU3Em__Finally2_mD238642E4ED25D5979C6D969D86C79D9D79F6FF3 (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__59_System_IDisposable_Dispose_mCBE14FA35DB4D38F6B49A58CAE7614EEC087FD2D (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::System.Collections.Generic.IEnumerable<UnityEngine.AnimationCurve>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllAnimationCurvesU3Ed__59_System_Collections_Generic_IEnumerableU3CUnityEngine_AnimationCurveU3E_GetEnumerator_m318F17FAC78DC6EF54B3DED653F3AB343CB0B53B (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_time_m98F165193486C0DF1611B562016595B18052A2D6 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_value_m396D6040A4AB72ED5B9797E8C92DD806FA6F5431 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::set_inTangent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::set_outTangent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::set_inWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_inWeight_m19BFF0BCDC3007F70BCFE130F68FBCE3B7987A63 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::set_outWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_outWeight_mFE79885FDA391DDAB1D73EF1B1A032E3EB652602 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_keys_mBE1284B44CDBB1D8381177A3D581A6E71467F95C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_preWrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_preWrapMode_m6F386731866F888BC8BD98B2C1A5B03D2ACCAF14 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_postWrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_postWrapMode_m5A56504372DD5597CF7844ED9E58BDD2D3C805E7 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::get_Count()
inline int32_t List_1_get_Count_mB9B7E51F654BF50957358D771B0F18354D00E1EB_inline (List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::GetEnumerator()
inline Enumerator_tA3B9CE36F90BB994A2D251E4BB3DF436B6740266 List_1_GetEnumerator_m0D16C396D05854E01D63F42CB3B6D1DD1A11C650 (List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA3B9CE36F90BB994A2D251E4BB3DF436B6740266 (*) (List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Dispose()
inline void Enumerator_Dispose_m0B7CFFD074D9E966CCA86758706D1C448EFB7B70 (Enumerator_tA3B9CE36F90BB994A2D251E4BB3DF436B6740266* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA3B9CE36F90BB994A2D251E4BB3DF436B6740266*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::get_Current()
inline InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* Enumerator_get_Current_m2ECEDC40E034141FA4F7A2B1E8CD4A8176852482_inline (Enumerator_tA3B9CE36F90BB994A2D251E4BB3DF436B6740266* __this, const RuntimeMethod* method)
{
	return ((  InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* (*) (Enumerator_tA3B9CE36F90BB994A2D251E4BB3DF436B6740266*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::MoveNext()
inline bool Enumerator_MoveNext_m7367F5F3A30A2BAFD3CB713209D9C25B71751012 (Enumerator_tA3B9CE36F90BB994A2D251E4BB3DF436B6740266* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA3B9CE36F90BB994A2D251E4BB3DF436B6740266*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Clear()
inline void List_1_Clear_m95B13A6D907606F0F35D36B6BEA0F1F31F91B6E9_inline (List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m67D865992ADEFE238DD908DD4DCD62202EFEBAE7 (List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___0_value, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationMarker__ctor_m62786537986D6AE4FF5157FD3F47AF5E9E42C7D6 (InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Add(T)
inline void List_1_Add_m54B7516377CD87A702EB52ADCF4B0105717EC602_inline (List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* __this, InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE*, InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::Peek()
inline Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* Queue_1_Peek_m3181CC3072E651C6CB3C095C8BB9DA14D2A70348 (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* __this, const RuntimeMethod* method)
{
	return ((  Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* (*) (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA*, const RuntimeMethod*))Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::.ctor()
inline void Queue_1__ctor_m22A50CD614158B602874F1FE6C418026CC5F67F4 (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::Clear()
inline void Queue_1_Clear_m6739E35A6637FBF1AC2260748B5FEBB368C8A714 (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
// T System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::Dequeue()
inline Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* Queue_1_Dequeue_mC64635960AD33E382E6998F6C60BFAF44A729BD3 (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* __this, const RuntimeMethod* method)
{
	return ((  Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* (*) (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::get_Count()
inline int32_t Queue_1_get_Count_mE1C43309B4F9DC4D685D8A82B9BFC40DD77CA79F_inline (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_CameraPose(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_CameraPose_mC35D102F18876CB08D9B69AF3029A9B2A7749ABD_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_GazeRay(UnityEngine.Ray)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_GazeRay_m646AF29572384DD341B6C1932BF4077333512612_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_LeftTracked(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_LeftTracked_m04987AB33CC5584DB5EFFE9B348818463EDCF13C_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_LeftPinch(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_LeftPinch_m6722585825204D1BE8D4141CABAF477A80B6F3A9_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_RightTracked(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_RightTracked_m500C841E76DEB3011671FB06CB11DEB0C3B94990_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_RightPinch(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_RightPinch_m008AB8FCB6255E7E6AA7FDF22D5F21807913D0DF_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::Add(TKey,TValue)
inline void Dictionary_2_Add_m02760479713C54BA45D7C946C962C44D9C0021A2 (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* __this, int32_t ___0_key, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7*, int32_t, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5, const RuntimeMethod*))Dictionary_2_Add_m29C450885F45C208301DFBFDD2228A1036A966FF_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mACD720BDFEB7F3E779273AB8C797D848577400CD (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::Enqueue(T)
inline void Queue_1_Enqueue_mAD480491CB18D18F4D622D7092BE5205C3516368 (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* __this, Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA*, Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::GetEnumerator()
inline Enumerator_tC1CB8DBFCB8CFB457B71BAAABB458F35DEA2B6EC Queue_1_GetEnumerator_m5952DCCC535AE1086200E210DF339668E915C525 (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC1CB8DBFCB8CFB457B71BAAABB458F35DEA2B6EC (*) (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA*, const RuntimeMethod*))Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_Time(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_Time_m2DCE7E98D3923E2955D27FCBB28AF08F8E047E00_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_mB503ABA3C13679286D2C404B06C0F4C781873E4C (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7*, const RuntimeMethod*))Dictionary_2__ctor_m08987FA83DC951816545323EACF7050568F58233_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_LeftJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_LeftJoints_m7B17D04999FBC87AD6109479BFE9403BB2F825EB_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_RightJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_RightJoints_mA41AF55774CADF48F661D93A487851AF31A180EE_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* ___0_value, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_StartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRecordingService_get_StartTime_m6F449423C0F0F5698C896F4AFE018AC98F930D56 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, float, const RuntimeMethod*))Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared)(__this, ___0_value, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::PruneBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_PruneBuffer_mC53E32BDA315ACCC170D11CD0400FEC7A44238F1 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_EndTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InputRecordingService_get_EndTime_m1D3BB614498597D6D8C8DB2588AF58F460F2249C_inline (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_mF054160CA265761A1223A3F8CFE50A976C7297E8 (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer__ctor_m3A4AB3D9721FDF5A46D6BA3B5308C67824C40EE7 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4 (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::ResetStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_ResetStartTime_m48A8D54990BE245F9217DC7F47F7F3E278305124 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607 (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_IsRecording(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputRecordingService_set_IsRecording_mF57E9C9C9B8C4FF5D91B8736F57C89136C7535A2_inline (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, bool ___0_value, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_InputRecordingProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* InputRecordingService_get_InputRecordingProfile_mEB8BF479C9088C88BB6E697B430982D77CD59ECC (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_FrameRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_FrameRate_m839FB3C3EF99E9376315AB9B20919854C732AFA0_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_UseBufferTimeLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_UseBufferTimeLimit_m4FE5D027784EC5A4B3E376364063EC81FB70BCCC_inline (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_IsRecording()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsRecording_mA55D42F3E0289948A2743B3417B2BFAB3D686731_inline (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_EndTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputRecordingService_set_EndTime_mDFD0B484544CAD9E98556ED578F70F0CA7FF295D_inline (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordKeyframe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_RecordKeyframe_m026026C9AE742DFDE9210A2DB4CFE7D3ACFF428C (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_Clear_m6267C40ECAA1E8665339AC9DABBB92F6DBD7692D (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::GetOutputFilename(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputAnimationSerializationUtils_GetOutputFilename_m1AB5C4821F099AE6375F79215C4FA3FBF8984879 (String_t* ___0_baseName, bool ___1_appendTimestamp, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Input.InputRecordingService::SaveInputAnimation(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputRecordingService_SaveInputAnimation_m43C139CA2FE924BD1448DE8E2613D45478315F0E (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, String_t* ___0_filename, String_t* ___1_directory, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Open_m3C4C3B31523AC0687F60FFD1B0FD51F49161EB64 (String_t* ___0_path, int32_t ___1_mode, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation::FromRecordingBuffer(Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* InputAnimation_FromRecordingBuffer_m9A5287F72510B5CF84C250DD473F3912DE13A2C5 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* ___0_recordingBuffer, MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* ___1_profile, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ToStream(System.IO.Stream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_ToStream_m5D5561EFAD679FA47D4384D46F44191E1F9BD13A (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, float ___1_startTime, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::NewKeyframe(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputRecordingBuffer_NewKeyframe_m3ABB3E8C31EC3B91A7138DB452660363E21F0228 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordInputHandData(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_RecordInputHandData_mFE161CF4B4885C83B0FD8E22DD5DC51ED78FF442 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, uint8_t ___0_handedness, const RuntimeMethod* method) ;
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose__ctor_mA9F8CDFA80771B30CB085958B1AE0526919755F0 (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetCameraPose(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetCameraPose_m311FA26F2C37070A8D144D6193A316A4B5DD33BF (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___0_pose, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetGazeRay(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetGazeRay_m51FB84CBE2E83192AF3EF1B934CF1519366922E3 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityPose_get_Forward_m4A8B12C79D6C1F1CEC394746E026D08E64BE6A57 (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand Microsoft.MixedReality.Toolkit.Input.HandJointUtils::FindHand(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandJointUtils_FindHand_m2E00C4D4591DBAC2B0241E89215EDB8A063AAD6B (uint8_t ___0_handedness, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetHandState(Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetHandState_m5F55FEDCB175A860CF7B062D78FF2FE0C3A8D9B6 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, uint8_t ___0_handedness, bool ___1_tracked, bool ___2_pinching, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetJointPose(Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetJointPose_m031DF987BD131C6552CB2A983D6941704D2DE7B2 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, uint8_t ___0_handedness, int32_t ___1_joint, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___2_pose, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::RemoveBeforeTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_RemoveBeforeTime_mD289D64436AABD38F7F04DC986451EFBD084D6FB (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_mE6D5359B74BAAEA74B1F24297F435C969CD43DFE (BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Normalize(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Normalize_m8845A29F55B839D0CD43124B1AA34034BFCA9A7D_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_q, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationMarker__ctor_m62786537986D6AE4FF5157FD3F47AF5E9E42C7D6 (InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string name = "";
		__this->___name_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_Duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAnimation_get_Duration_m8F0C9AE5113DA0E267CA6702D7CAFDF35DCB9F17 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) 
{
	{
		// public float Duration => duration;
		float L_0 = __this->___duration_0;
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_HasHandData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAnimation_get_HasHandData_m90AD29D91BC247748D1F8A1BE29AD7BBA194E21D (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasHandData { get; private set; } = false;
		bool L_0 = __this->___U3CHasHandDataU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::set_HasHandData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_set_HasHandData_m3480752B1F94F7DB9D94616A6B63FFE140C7FB81 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool HasHandData { get; private set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CHasHandDataU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_HasCameraPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAnimation_get_HasCameraPose_mA0B2076B76FBC9ACF8F656FB42EDC0956A6BB66F (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasCameraPose { get; private set; } = false;
		bool L_0 = __this->___U3CHasCameraPoseU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::set_HasCameraPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_set_HasCameraPose_m63CDA9AFD9FCE60C9FD8CF5BA3D43978D42A9D92 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool HasCameraPose { get; private set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CHasCameraPoseU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_HasEyeGaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAnimation_get_HasEyeGaze_m072A146AFEBE26547373981134AD6949D54A9FFB (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasEyeGaze { get; private set; } = false;
		bool L_0 = __this->___U3CHasEyeGazeU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::set_HasEyeGaze(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_set_HasEyeGaze_mC7871B969CED484E92FCF27C6934C987CCD9A9A9 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool HasEyeGaze { get; private set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CHasEyeGazeU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation__ctor_mCDBA02C5F5A48AA312EE0A1DA5E8A4D893FEA462 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m26ADEB79B34C788AB79F8E203114332400712CF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E0F0EE3577BF7E4E9044D9F6FA70298DB74A9AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InputAnimation()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// handTrackedCurveLeft = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_0, NULL);
		__this->___handTrackedCurveLeft_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handTrackedCurveLeft_1), (void*)L_0);
		// handTrackedCurveRight = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_1, NULL);
		__this->___handTrackedCurveRight_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handTrackedCurveRight_2), (void*)L_1);
		// handPinchCurveLeft = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_2, NULL);
		__this->___handPinchCurveLeft_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handPinchCurveLeft_3), (void*)L_2);
		// handPinchCurveRight = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_3, NULL);
		__this->___handPinchCurveRight_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handPinchCurveRight_4), (void*)L_3);
		// handJointCurvesLeft = new Dictionary<TrackedHandJoint, PoseCurves>();
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_4 = (Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861*)il2cpp_codegen_object_new(Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m26ADEB79B34C788AB79F8E203114332400712CF8(L_4, Dictionary_2__ctor_m26ADEB79B34C788AB79F8E203114332400712CF8_RuntimeMethod_var);
		__this->___handJointCurvesLeft_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handJointCurvesLeft_5), (void*)L_4);
		// handJointCurvesRight = new Dictionary<TrackedHandJoint, PoseCurves>();
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_5 = (Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861*)il2cpp_codegen_object_new(Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m26ADEB79B34C788AB79F8E203114332400712CF8(L_5, Dictionary_2__ctor_m26ADEB79B34C788AB79F8E203114332400712CF8_RuntimeMethod_var);
		__this->___handJointCurvesRight_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handJointCurvesRight_6), (void*)L_5);
		// cameraCurves = new PoseCurves();
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_6 = (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC*)il2cpp_codegen_object_new(PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		PoseCurves__ctor_m2831E8283F32745F844C57C074BC9D1760E377CB(L_6, NULL);
		__this->___cameraCurves_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraCurves_7), (void*)L_6);
		// gazeCurves = new RayCurves();
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_7 = (RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A*)il2cpp_codegen_object_new(RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		RayCurves__ctor_m6F6D1FAAB918D4F08776DB22754FB90FEFD20C2C(L_7, NULL);
		__this->___gazeCurves_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gazeCurves_8), (void*)L_7);
		// markers = new List<InputAnimationMarker>();
		List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* L_8 = (List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE*)il2cpp_codegen_object_new(List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m2E0F0EE3577BF7E4E9044D9F6FA70298DB74A9AD(L_8, List_1__ctor_m2E0F0EE3577BF7E4E9044D9F6FA70298DB74A9AD_RuntimeMethod_var);
		__this->___markers_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___markers_12), (void*)L_8);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ToStream(System.IO.Stream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_ToStream_m5D5561EFAD679FA47D4384D46F44191E1F9BD13A (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, float ___1_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_0 = NULL;
	PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* V_1 = NULL;
	int32_t V_2 = 0;
	PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* V_3 = NULL;
	int32_t V_4 = 0;
	PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* V_5 = NULL;
	{
		// var writer = new BinaryWriter(stream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_1, L_0, NULL);
		V_0 = L_1;
		// InputAnimationSerializationUtils.WriteHeader(writer);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = V_0;
		InputAnimationSerializationUtils_WriteHeader_m0EB6C4CCE43D8839E72DE92E698F98983EADED26(L_2, NULL);
		// writer.Write(HasCameraPose);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_3 = V_0;
		bool L_4;
		L_4 = InputAnimation_get_HasCameraPose_mA0B2076B76FBC9ACF8F656FB42EDC0956A6BB66F_inline(__this, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_3, L_4);
		// writer.Write(HasHandData);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_5 = V_0;
		bool L_6;
		L_6 = InputAnimation_get_HasHandData_m90AD29D91BC247748D1F8A1BE29AD7BBA194E21D_inline(__this, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_5, L_6);
		// writer.Write(HasEyeGaze);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_7 = V_0;
		bool L_8;
		L_8 = InputAnimation_get_HasEyeGaze_m072A146AFEBE26547373981134AD6949D54A9FFB_inline(__this, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_7, L_8);
		// var defaultCurves = new PoseCurves();
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_9 = (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC*)il2cpp_codegen_object_new(PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		PoseCurves__ctor_m2831E8283F32745F844C57C074BC9D1760E377CB(L_9, NULL);
		V_1 = L_9;
		// if (HasCameraPose)
		bool L_10;
		L_10 = InputAnimation_get_HasCameraPose_mA0B2076B76FBC9ACF8F656FB42EDC0956A6BB66F_inline(__this, NULL);
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		// PoseCurvesToStream(writer, cameraCurves, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_11 = V_0;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_12 = __this->___cameraCurves_7;
		float L_13 = ___1_startTime;
		InputAnimation_PoseCurvesToStream_mE706BBC3472EF80762CEDBBA418421CB040DFC21(L_11, L_12, L_13, NULL);
	}

IL_004c:
	{
		// if (HasHandData)
		bool L_14;
		L_14 = InputAnimation_get_HasHandData_m90AD29D91BC247748D1F8A1BE29AD7BBA194E21D_inline(__this, NULL);
		if (!L_14)
		{
			goto IL_00e6;
		}
	}
	{
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handTrackedCurveLeft, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_15 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_16 = __this->___handTrackedCurveLeft_1;
		float L_17 = ___1_startTime;
		InputAnimationSerializationUtils_WriteBoolCurve_mEE4F0E5FB945F68D8C17E490B7B040E4FFFCE30E(L_15, L_16, L_17, NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handTrackedCurveRight, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_18 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_19 = __this->___handTrackedCurveRight_2;
		float L_20 = ___1_startTime;
		InputAnimationSerializationUtils_WriteBoolCurve_mEE4F0E5FB945F68D8C17E490B7B040E4FFFCE30E(L_18, L_19, L_20, NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handPinchCurveLeft, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_21 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_22 = __this->___handPinchCurveLeft_3;
		float L_23 = ___1_startTime;
		InputAnimationSerializationUtils_WriteBoolCurve_mEE4F0E5FB945F68D8C17E490B7B040E4FFFCE30E(L_21, L_22, L_23, NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handPinchCurveRight, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_24 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_25 = __this->___handPinchCurveRight_4;
		float L_26 = ___1_startTime;
		InputAnimationSerializationUtils_WriteBoolCurve_mEE4F0E5FB945F68D8C17E490B7B040E4FFFCE30E(L_24, L_25, L_26, NULL);
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		V_2 = 0;
		goto IL_00ad;
	}

IL_008f:
	{
		// if (!handJointCurvesLeft.TryGetValue((TrackedHandJoint)i, out var curves))
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_27 = __this->___handJointCurvesLeft_5;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		bool L_29;
		L_29 = Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF(L_27, L_28, (&V_3), Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF_RuntimeMethod_var);
		if (L_29)
		{
			goto IL_00a1;
		}
	}
	{
		// curves = defaultCurves;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_30 = V_1;
		V_3 = L_30;
	}

IL_00a1:
	{
		// PoseCurvesToStream(writer, curves, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_31 = V_0;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_32 = V_3;
		float L_33 = ___1_startTime;
		InputAnimation_PoseCurvesToStream_mE706BBC3472EF80762CEDBBA418421CB040DFC21(L_31, L_32, L_33, NULL);
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ad:
	{
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		int32_t L_35 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_il2cpp_TypeInfo_var);
		int32_t L_36;
		L_36 = ArticulatedHandPose_get_JointCount_m6513BF4BCA1BFA1872A17A94DFD19087B68BD6FD_inline(NULL);
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_008f;
		}
	}
	{
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		V_4 = 0;
		goto IL_00dd;
	}

IL_00ba:
	{
		// if (!handJointCurvesRight.TryGetValue((TrackedHandJoint)i, out var curves))
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_37 = __this->___handJointCurvesRight_6;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		bool L_39;
		L_39 = Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF(L_37, L_38, (&V_5), Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_00ce;
		}
	}
	{
		// curves = defaultCurves;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_40 = V_1;
		V_5 = L_40;
	}

IL_00ce:
	{
		// PoseCurvesToStream(writer, curves, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_41 = V_0;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_42 = V_5;
		float L_43 = ___1_startTime;
		InputAnimation_PoseCurvesToStream_mE706BBC3472EF80762CEDBBA418421CB040DFC21(L_41, L_42, L_43, NULL);
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00dd:
	{
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		int32_t L_45 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_il2cpp_TypeInfo_var);
		int32_t L_46;
		L_46 = ArticulatedHandPose_get_JointCount_m6513BF4BCA1BFA1872A17A94DFD19087B68BD6FD_inline(NULL);
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00ba;
		}
	}

IL_00e6:
	{
		// if (HasEyeGaze)
		bool L_47;
		L_47 = InputAnimation_get_HasEyeGaze_m072A146AFEBE26547373981134AD6949D54A9FFB_inline(__this, NULL);
		if (!L_47)
		{
			goto IL_00fb;
		}
	}
	{
		// RayCurvesToStream(writer, gazeCurves, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_48 = V_0;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_49 = __this->___gazeCurves_8;
		float L_50 = ___1_startTime;
		InputAnimation_RayCurvesToStream_m8FD18A9AFC71F7652D062166F4A95CE2B97D0543(L_48, L_49, L_50, NULL);
	}

IL_00fb:
	{
		// InputAnimationSerializationUtils.WriteMarkerList(writer, markers, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_51 = V_0;
		List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* L_52 = __this->___markers_12;
		float L_53 = ___1_startTime;
		InputAnimationSerializationUtils_WriteMarkerList_mB85C2E078065DB18635B827699D52266B53307D9(L_51, L_52, L_53, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandState(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_EvaluateHandState_m21A0548A3BF3ED2057597DCB5F182670E5320B86 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, float ___0_time, uint8_t ___1_handedness, bool* ___2_isTracked, bool* ___3_isPinching, const RuntimeMethod* method) 
{
	{
		// if (!HasHandData)
		bool L_0;
		L_0 = InputAnimation_get_HasHandData_m90AD29D91BC247748D1F8A1BE29AD7BBA194E21D_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// isTracked = false;
		bool* L_1 = ___2_isTracked;
		*((int8_t*)L_1) = (int8_t)0;
		// isPinching = false;
		bool* L_2 = ___3_isPinching;
		*((int8_t*)L_2) = (int8_t)0;
	}

IL_000f:
	{
		// if (handedness == Handedness.Left)
		uint8_t L_3 = ___1_handedness;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		// EvaluateHandState(time, handTrackedCurveLeft, handPinchCurveLeft, out isTracked, out isPinching);
		float L_4 = ___0_time;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = __this->___handTrackedCurveLeft_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = __this->___handPinchCurveLeft_3;
		bool* L_7 = ___2_isTracked;
		bool* L_8 = ___3_isPinching;
		InputAnimation_EvaluateHandState_mF70CBF4801487A077CBE3456AE4246BE2409B7B4(__this, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}

IL_002a:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_9 = ___1_handedness;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0045;
		}
	}
	{
		// EvaluateHandState(time, handTrackedCurveRight, handPinchCurveRight, out isTracked, out isPinching);
		float L_10 = ___0_time;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->___handTrackedCurveRight_2;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = __this->___handPinchCurveRight_4;
		bool* L_13 = ___2_isTracked;
		bool* L_14 = ___3_isPinching;
		InputAnimation_EvaluateHandState_mF70CBF4801487A077CBE3456AE4246BE2409B7B4(__this, L_10, L_11, L_12, L_13, L_14, NULL);
		return;
	}

IL_0045:
	{
		// isTracked = false;
		bool* L_15 = ___2_isTracked;
		*((int8_t*)L_15) = (int8_t)0;
		// isPinching = false;
		bool* L_16 = ___3_isPinching;
		*((int8_t*)L_16) = (int8_t)0;
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateCameraPose(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 InputAnimation_EvaluateCameraPose_m3FDDE74BAFE56A6BD6CD182A96C6DBBD3D3B7CD9 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, float ___0_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!HasCameraPose)
		bool L_0;
		L_0 = InputAnimation_get_HasCameraPose_mA0B2076B76FBC9ACF8F656FB42EDC0956A6BB66F_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return MixedRealityPose.ZeroIdentity;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_1;
		L_1 = MixedRealityPose_get_ZeroIdentity_m5F6C0EE34C84272B653BEF09731AC5E219F51EDD_inline(NULL);
		return L_1;
	}

IL_000e:
	{
		// return cameraCurves.Evaluate(time);
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_2 = __this->___cameraCurves_7;
		float L_3 = ___0_time;
		NullCheck(L_2);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_4;
		L_4 = PoseCurves_Evaluate_m19786E8FFC1D7B69EB05A77021E734E2983651F9(L_2, L_3, NULL);
		return L_4;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandJoint(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 InputAnimation_EvaluateHandJoint_mE0E96C9C148FA329D1DD1FD1A92435836708B050 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, float ___0_time, uint8_t ___1_handedness, int32_t ___2_joint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!HasHandData)
		bool L_0;
		L_0 = InputAnimation_get_HasHandData_m90AD29D91BC247748D1F8A1BE29AD7BBA194E21D_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return MixedRealityPose.ZeroIdentity;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_1;
		L_1 = MixedRealityPose_get_ZeroIdentity_m5F6C0EE34C84272B653BEF09731AC5E219F51EDD_inline(NULL);
		return L_1;
	}

IL_000e:
	{
		// if (handedness == Handedness.Left)
		uint8_t L_2 = ___1_handedness;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		// return EvaluateHandJoint(time, joint, handJointCurvesLeft);
		float L_3 = ___0_time;
		int32_t L_4 = ___2_joint;
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_5 = __this->___handJointCurvesLeft_5;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_6;
		L_6 = InputAnimation_EvaluateHandJoint_m2D9376EBE7F4075DA2E28860AFCBDB04153E315C(__this, L_3, L_4, L_5, NULL);
		return L_6;
	}

IL_0021:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_7 = ___1_handedness;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		// return EvaluateHandJoint(time, joint, handJointCurvesRight);
		float L_8 = ___0_time;
		int32_t L_9 = ___2_joint;
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_10 = __this->___handJointCurvesRight_6;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_11;
		L_11 = InputAnimation_EvaluateHandJoint_m2D9376EBE7F4075DA2E28860AFCBDB04153E315C(__this, L_8, L_9, L_10, NULL);
		return L_11;
	}

IL_0034:
	{
		// return MixedRealityPose.ZeroIdentity;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_12;
		L_12 = MixedRealityPose_get_ZeroIdentity_m5F6C0EE34C84272B653BEF09731AC5E219F51EDD_inline(NULL);
		return L_12;
	}
}
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateEyeGaze(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 InputAnimation_EvaluateEyeGaze_m86013A452525C7BDB6C58967DA759AC8B8BD58C6 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, float ___0_time, const RuntimeMethod* method) 
{
	{
		// if (!HasEyeGaze)
		bool L_0;
		L_0 = InputAnimation_get_HasEyeGaze_m072A146AFEBE26547373981134AD6949D54A9FFB_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// return new Ray(Vector3.zero, Vector3.forward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_3), L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		// return gazeCurves.Evaluate(time);
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_4 = __this->___gazeCurves_8;
		float L_5 = ___0_time;
		NullCheck(L_4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6;
		L_6 = RayCurves_Evaluate_mE071DC483FE318E315DCA26815FA81E333A910F5(L_4, L_5, NULL);
		return L_6;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation::FromRecordingBuffer(Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* InputAnimation_FromRecordingBuffer_m9A5287F72510B5CF84C250DD473F3912DE13A2C5 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* ___0_recordingBuffer, MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* ___1_profile, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t564312AF8B93071DD2F64346A3337E1461D22AF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJoint_tEDCBD4B9A65BBB59D6C182873CEF88E1A12A356B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* V_0 = NULL;
	float V_1 = 0.0f;
	RuntimeObject* V_2 = NULL;
	Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* V_3 = NULL;
	float V_4 = 0.0f;
	TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// var animation = new InputAnimation();
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_0 = (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6*)il2cpp_codegen_object_new(InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InputAnimation__ctor_mCDBA02C5F5A48AA312EE0A1DA5E8A4D893FEA462(L_0, NULL);
		V_0 = L_0;
		// float startTime = recordingBuffer.StartTime;
		InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* L_1 = ___0_recordingBuffer;
		NullCheck(L_1);
		float L_2;
		L_2 = InputRecordingBuffer_get_StartTime_m33F70CDEC9D3F8AF591233B053BA5B0C519C05B0(L_1, NULL);
		V_1 = L_2;
		// animation.HasHandData = profile.RecordHandData;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_3 = V_0;
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_4 = ___1_profile;
		NullCheck(L_4);
		bool L_5;
		L_5 = MixedRealityInputRecordingProfile_get_RecordHandData_m00FB590BB5C2842EBD2A69855D25BE61393FDB8A_inline(L_4, NULL);
		NullCheck(L_3);
		InputAnimation_set_HasHandData_m3480752B1F94F7DB9D94616A6B63FFE140C7FB81_inline(L_3, L_5, NULL);
		// animation.HasCameraPose = profile.RecordCameraPose;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_6 = V_0;
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_7 = ___1_profile;
		NullCheck(L_7);
		bool L_8;
		L_8 = MixedRealityInputRecordingProfile_get_RecordCameraPose_mAC2C5D60A010CEA2AED6B77A6AC646DB4164BD17_inline(L_7, NULL);
		NullCheck(L_6);
		InputAnimation_set_HasCameraPose_m63CDA9AFD9FCE60C9FD8CF5BA3D43978D42A9D92_inline(L_6, L_8, NULL);
		// animation.HasEyeGaze = profile.RecordEyeGaze;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_9 = V_0;
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_10 = ___1_profile;
		NullCheck(L_10);
		bool L_11;
		L_11 = MixedRealityInputRecordingProfile_get_RecordEyeGaze_m7201174C8BF2C24C4C3B6073E16951013DEB1920_inline(L_10, NULL);
		NullCheck(L_9);
		InputAnimation_set_HasEyeGaze_mC7871B969CED484E92FCF27C6934C987CCD9A9A9_inline(L_9, L_11, NULL);
		// foreach (var keyframe in recordingBuffer)
		InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* L_12 = ___0_recordingBuffer;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InputRecordingBuffer_GetEnumerator_m6594C7E6D0D85F8238D591D5CCF8E4A381C5E59D(L_12, NULL);
		V_2 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0142:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_14 = V_2;
					if (!L_14)
					{
						goto IL_014b;
					}
				}
				{
					RuntimeObject* L_15 = V_2;
					NullCheck(L_15);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
				}

IL_014b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0135_1;
			}

IL_003d_1:
			{
				// foreach (var keyframe in recordingBuffer)
				RuntimeObject* L_16 = V_2;
				NullCheck(L_16);
				Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_17;
				L_17 = InterfaceFuncInvoker0< Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::get_Current() */, IEnumerator_1_t564312AF8B93071DD2F64346A3337E1461D22AF9_il2cpp_TypeInfo_var, L_16);
				V_3 = L_17;
				// float localTime = keyframe.Time - startTime;
				Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_18 = V_3;
				NullCheck(L_18);
				float L_19;
				L_19 = Keyframe_get_Time_m4FFDA94203B0BFE0E4D292D0A7D22C3E6070DACA_inline(L_18, NULL);
				float L_20 = V_1;
				V_4 = ((float)il2cpp_codegen_subtract(L_19, L_20));
				// if (profile.RecordHandData)
				MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_21 = ___1_profile;
				NullCheck(L_21);
				bool L_22;
				L_22 = MixedRealityInputRecordingProfile_get_RecordHandData_m00FB590BB5C2842EBD2A69855D25BE61393FDB8A_inline(L_21, NULL);
				if (!L_22)
				{
					goto IL_00ff_1;
				}
			}
			{
				// AddBoolKeyIfChanged(animation.handTrackedCurveLeft, localTime, keyframe.LeftTracked);
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_23 = V_0;
				NullCheck(L_23);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_24 = L_23->___handTrackedCurveLeft_1;
				float L_25 = V_4;
				Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_26 = V_3;
				NullCheck(L_26);
				bool L_27;
				L_27 = Keyframe_get_LeftTracked_mF2797B136459D689C9F7576909167B76DC409E73_inline(L_26, NULL);
				InputAnimation_U3CFromRecordingBufferU3Eg__AddBoolKeyIfChangedU7C47_0_m593D76A92A44D98C1DA06A578FBAB04AE87ECB4F(L_24, L_25, L_27, NULL);
				// AddBoolKeyIfChanged(animation.handTrackedCurveRight, localTime, keyframe.RightTracked);
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_28 = V_0;
				NullCheck(L_28);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_29 = L_28->___handTrackedCurveRight_2;
				float L_30 = V_4;
				Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_31 = V_3;
				NullCheck(L_31);
				bool L_32;
				L_32 = Keyframe_get_RightTracked_m1FCF75796B487D26FAD3B73F29EF0617369B7C08_inline(L_31, NULL);
				InputAnimation_U3CFromRecordingBufferU3Eg__AddBoolKeyIfChangedU7C47_0_m593D76A92A44D98C1DA06A578FBAB04AE87ECB4F(L_29, L_30, L_32, NULL);
				// AddBoolKeyIfChanged(animation.handPinchCurveLeft, localTime, keyframe.LeftPinch);
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_33 = V_0;
				NullCheck(L_33);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_34 = L_33->___handPinchCurveLeft_3;
				float L_35 = V_4;
				Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_36 = V_3;
				NullCheck(L_36);
				bool L_37;
				L_37 = Keyframe_get_LeftPinch_m68D4427463BEE61BC4307893CC797B3F05CE7F07_inline(L_36, NULL);
				InputAnimation_U3CFromRecordingBufferU3Eg__AddBoolKeyIfChangedU7C47_0_m593D76A92A44D98C1DA06A578FBAB04AE87ECB4F(L_34, L_35, L_37, NULL);
				// AddBoolKeyIfChanged(animation.handPinchCurveRight, localTime, keyframe.RightPinch);
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_38 = V_0;
				NullCheck(L_38);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39 = L_38->___handPinchCurveRight_4;
				float L_40 = V_4;
				Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_41 = V_3;
				NullCheck(L_41);
				bool L_42;
				L_42 = Keyframe_get_RightPinch_m4DF67192F78BEDC78BF61536EBC176BB8275EBB8_inline(L_41, NULL);
				InputAnimation_U3CFromRecordingBufferU3Eg__AddBoolKeyIfChangedU7C47_0_m593D76A92A44D98C1DA06A578FBAB04AE87ECB4F(L_39, L_40, L_42, NULL);
				// foreach (var joint in (TrackedHandJoint[])Enum.GetValues(typeof(TrackedHandJoint)))
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tEDCBD4B9A65BBB59D6C182873CEF88E1A12A356B_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_44;
				L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
				il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
				RuntimeArray* L_45;
				L_45 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_44, NULL);
				V_5 = ((TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915*)Castclass((RuntimeObject*)L_45, TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915_il2cpp_TypeInfo_var));
				V_6 = 0;
				goto IL_00f7_1;
			}

IL_00c0_1:
			{
				// foreach (var joint in (TrackedHandJoint[])Enum.GetValues(typeof(TrackedHandJoint)))
				TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915* L_46 = V_5;
				int32_t L_47 = V_6;
				NullCheck(L_46);
				int32_t L_48 = L_47;
				int32_t L_49 = (int32_t)(L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
				V_7 = L_49;
				// AddJointPoseKeys(animation.handJointCurvesLeft, keyframe.LeftJoints, joint, localTime);
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_50 = V_0;
				NullCheck(L_50);
				Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_51 = L_50->___handJointCurvesLeft_5;
				Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_52 = V_3;
				NullCheck(L_52);
				Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_53;
				L_53 = Keyframe_get_LeftJoints_m22F03CB8DC507FDF1DA749672119B2FEDDE4B5B7_inline(L_52, NULL);
				int32_t L_54 = V_7;
				float L_55 = V_4;
				InputAnimation_U3CFromRecordingBufferU3Eg__AddJointPoseKeysU7C47_1_m2E87393309B7F8EB3CCB29D90B1DDD577E3AD747(L_51, L_53, L_54, L_55, NULL);
				// AddJointPoseKeys(animation.handJointCurvesRight, keyframe.RightJoints, joint, localTime);
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_56 = V_0;
				NullCheck(L_56);
				Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_57 = L_56->___handJointCurvesRight_6;
				Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_58 = V_3;
				NullCheck(L_58);
				Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_59;
				L_59 = Keyframe_get_RightJoints_mA445665FE282A5ED5C81192B57752C2574D6538F_inline(L_58, NULL);
				int32_t L_60 = V_7;
				float L_61 = V_4;
				InputAnimation_U3CFromRecordingBufferU3Eg__AddJointPoseKeysU7C47_1_m2E87393309B7F8EB3CCB29D90B1DDD577E3AD747(L_57, L_59, L_60, L_61, NULL);
				int32_t L_62 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_62, 1));
			}

IL_00f7_1:
			{
				// foreach (var joint in (TrackedHandJoint[])Enum.GetValues(typeof(TrackedHandJoint)))
				int32_t L_63 = V_6;
				TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915* L_64 = V_5;
				NullCheck(L_64);
				if ((((int32_t)L_63) < ((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length)))))
				{
					goto IL_00c0_1;
				}
			}

IL_00ff_1:
			{
				// if (profile.RecordCameraPose)
				MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_65 = ___1_profile;
				NullCheck(L_65);
				bool L_66;
				L_66 = MixedRealityInputRecordingProfile_get_RecordCameraPose_mAC2C5D60A010CEA2AED6B77A6AC646DB4164BD17_inline(L_65, NULL);
				if (!L_66)
				{
					goto IL_011a_1;
				}
			}
			{
				// animation.cameraCurves.AddKey(localTime, keyframe.CameraPose);
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_67 = V_0;
				NullCheck(L_67);
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_68 = L_67->___cameraCurves_7;
				float L_69 = V_4;
				Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_70 = V_3;
				NullCheck(L_70);
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_71;
				L_71 = Keyframe_get_CameraPose_mF325808078E828CB4C42612A6EA839420AC0F7E1_inline(L_70, NULL);
				NullCheck(L_68);
				PoseCurves_AddKey_mE9EEF598B4AAC81AD36755080BB78DAD8CCE534A(L_68, L_69, L_71, NULL);
			}

IL_011a_1:
			{
				// if (profile.RecordEyeGaze)
				MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_72 = ___1_profile;
				NullCheck(L_72);
				bool L_73;
				L_73 = MixedRealityInputRecordingProfile_get_RecordEyeGaze_m7201174C8BF2C24C4C3B6073E16951013DEB1920_inline(L_72, NULL);
				if (!L_73)
				{
					goto IL_0135_1;
				}
			}
			{
				// animation.gazeCurves.AddKey(localTime, keyframe.GazeRay);
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_74 = V_0;
				NullCheck(L_74);
				RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_75 = L_74->___gazeCurves_8;
				float L_76 = V_4;
				Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_77 = V_3;
				NullCheck(L_77);
				Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_78;
				L_78 = Keyframe_get_GazeRay_m7E3BB33B51B23BB60F6306C7AB37FCD28656B256_inline(L_77, NULL);
				NullCheck(L_75);
				RayCurves_AddKey_mCA99E12C871ABB0C2A38A52A72C69969C9F43E09(L_75, L_76, L_78, NULL);
			}

IL_0135_1:
			{
				// foreach (var keyframe in recordingBuffer)
				RuntimeObject* L_79 = V_2;
				NullCheck(L_79);
				bool L_80;
				L_80 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_79);
				if (L_80)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_014c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014c:
	{
		// animation.Optimize(profile);
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_81 = V_0;
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_82 = ___1_profile;
		NullCheck(L_81);
		InputAnimation_Optimize_mA539990849F6F45B703774E9A4DB78E5003851C7(L_81, L_82, NULL);
		// animation.ComputeDuration();
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_83 = V_0;
		NullCheck(L_83);
		InputAnimation_ComputeDuration_m61E9B7D591CBEB72D40C06D027182E44AF8171F5(L_83, NULL);
		// return animation;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_84 = V_0;
		return L_84;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation::FromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* InputAnimation_FromStream_mFBA07F73C3E576CA6CFE674F45763EF31B4BC358 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0C1DF55F3888C9C027CAC996F82F6B3D88D2EE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C1AA484EA907D9AF79CB68FD3615B8BA6AFA10B);
		s_Il2CppMethodInitialized = true;
	}
	InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* V_0 = NULL;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* V_8 = NULL;
	int32_t V_9 = 0;
	PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* V_10 = NULL;
	int32_t G_B9_0 = 0;
	{
		// var animation = new InputAnimation();
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_0 = (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6*)il2cpp_codegen_object_new(InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InputAnimation__ctor_mCDBA02C5F5A48AA312EE0A1DA5E8A4D893FEA462(L_0, NULL);
		V_0 = L_0;
		// var reader = new BinaryReader(stream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_2, L_1, NULL);
		V_1 = L_2;
		// InputAnimationSerializationUtils.ReadHeader(reader, out int versionMajor, out int versionMinor);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = V_1;
		InputAnimationSerializationUtils_ReadHeader_m4B3C18A4A00014E59499424D08E99CDB9FFB1207(L_3, (&V_2), (&V_3), NULL);
		// int latestVersionMajor = InputAnimationSerializationUtils.VersionMajor;
		V_4 = 1;
		// int latestVersionMinor = InputAnimationSerializationUtils.VersionMinor;
		V_5 = 1;
		// if (versionMajor > latestVersionMajor || versionMajor == latestVersionMajor && versionMinor > latestVersionMinor)
		int32_t L_4 = V_2;
		int32_t L_5 = V_4;
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_2;
		int32_t L_7 = V_4;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_8 = V_3;
		int32_t L_9 = V_5;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_004b;
		}
	}

IL_002c:
	{
		// Debug.LogError($"Only version {latestVersionMajor}.{latestVersionMinor} and earlier of input animation file format is supported.");
		int32_t L_10 = V_4;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = V_5;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2C1AA484EA907D9AF79CB68FD3615B8BA6AFA10B, L_12, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_16, NULL);
		// return animation;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_17 = V_0;
		return L_17;
	}

IL_004b:
	{
		// bool useNewFormat = versionMajor > 1 || versionMajor == 1 && versionMinor >= 1;
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) > ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_20 = V_3;
		G_B9_0 = ((((int32_t)((((int32_t)L_20) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005c:
	{
		G_B9_0 = 0;
		goto IL_0060;
	}

IL_005f:
	{
		G_B9_0 = 1;
	}

IL_0060:
	{
		V_6 = (bool)G_B9_0;
		// if (useNewFormat)
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_008c;
		}
	}
	{
		// animation.HasCameraPose = reader.ReadBoolean();
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_22 = V_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_23 = V_1;
		NullCheck(L_23);
		bool L_24;
		L_24 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_23);
		NullCheck(L_22);
		InputAnimation_set_HasCameraPose_m63CDA9AFD9FCE60C9FD8CF5BA3D43978D42A9D92_inline(L_22, L_24, NULL);
		// animation.HasHandData = reader.ReadBoolean();
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_25 = V_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_26 = V_1;
		NullCheck(L_26);
		bool L_27;
		L_27 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_26);
		NullCheck(L_25);
		InputAnimation_set_HasHandData_m3480752B1F94F7DB9D94616A6B63FFE140C7FB81_inline(L_25, L_27, NULL);
		// animation.HasEyeGaze = reader.ReadBoolean();
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_28 = V_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_29 = V_1;
		NullCheck(L_29);
		bool L_30;
		L_30 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_29);
		NullCheck(L_28);
		InputAnimation_set_HasEyeGaze_mC7871B969CED484E92FCF27C6934C987CCD9A9A9_inline(L_28, L_30, NULL);
		goto IL_00a1;
	}

IL_008c:
	{
		// animation.HasCameraPose = true;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_31 = V_0;
		NullCheck(L_31);
		InputAnimation_set_HasCameraPose_m63CDA9AFD9FCE60C9FD8CF5BA3D43978D42A9D92_inline(L_31, (bool)1, NULL);
		// animation.HasHandData = true;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_32 = V_0;
		NullCheck(L_32);
		InputAnimation_set_HasHandData_m3480752B1F94F7DB9D94616A6B63FFE140C7FB81_inline(L_32, (bool)1, NULL);
		// animation.HasEyeGaze = false;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_33 = V_0;
		NullCheck(L_33);
		InputAnimation_set_HasEyeGaze_mC7871B969CED484E92FCF27C6934C987CCD9A9A9_inline(L_33, (bool)0, NULL);
	}

IL_00a1:
	{
		// if (animation.HasCameraPose)
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_34 = V_0;
		NullCheck(L_34);
		bool L_35;
		L_35 = InputAnimation_get_HasCameraPose_mA0B2076B76FBC9ACF8F656FB42EDC0956A6BB66F_inline(L_34, NULL);
		if (!L_35)
		{
			goto IL_00b7;
		}
	}
	{
		// PoseCurvesFromStream(reader, animation.cameraCurves, useNewFormat);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_36 = V_1;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_37 = V_0;
		NullCheck(L_37);
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_38 = L_37->___cameraCurves_7;
		bool L_39 = V_6;
		InputAnimation_PoseCurvesFromStream_mE20458691555E9925AC8AA9BC525D69D95104153(L_36, L_38, L_39, NULL);
	}

IL_00b7:
	{
		// if (animation.HasHandData)
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_40 = V_0;
		NullCheck(L_40);
		bool L_41;
		L_41 = InputAnimation_get_HasHandData_m90AD29D91BC247748D1F8A1BE29AD7BBA194E21D_inline(L_40, NULL);
		if (!L_41)
		{
			goto IL_017c;
		}
	}
	{
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, animation.handTrackedCurveLeft);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_42 = V_1;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_43 = V_0;
		NullCheck(L_43);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_44 = L_43->___handTrackedCurveLeft_1;
		InputAnimationSerializationUtils_ReadBoolCurve_m7D5F8B3DF38D73BE61275FF9A8A2EC07F90FEDCD(L_42, L_44, NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, animation.handTrackedCurveRight);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_45 = V_1;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_46 = V_0;
		NullCheck(L_46);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_47 = L_46->___handTrackedCurveRight_2;
		InputAnimationSerializationUtils_ReadBoolCurve_m7D5F8B3DF38D73BE61275FF9A8A2EC07F90FEDCD(L_45, L_47, NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, animation.handPinchCurveLeft);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_48 = V_1;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_49 = V_0;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_50 = L_49->___handPinchCurveLeft_3;
		InputAnimationSerializationUtils_ReadBoolCurve_m7D5F8B3DF38D73BE61275FF9A8A2EC07F90FEDCD(L_48, L_50, NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, animation.handPinchCurveRight);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_51 = V_1;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_52 = V_0;
		NullCheck(L_52);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53 = L_52->___handPinchCurveRight_4;
		InputAnimationSerializationUtils_ReadBoolCurve_m7D5F8B3DF38D73BE61275FF9A8A2EC07F90FEDCD(L_51, L_53, NULL);
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		V_7 = 0;
		goto IL_012e;
	}

IL_00f7:
	{
		// if (!animation.handJointCurvesLeft.TryGetValue((TrackedHandJoint)i, out var curves))
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_54 = V_0;
		NullCheck(L_54);
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_55 = L_54->___handJointCurvesLeft_5;
		int32_t L_56 = V_7;
		NullCheck(L_55);
		bool L_57;
		L_57 = Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF(L_55, L_56, (&V_8), Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF_RuntimeMethod_var);
		if (L_57)
		{
			goto IL_011e;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_58 = (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC*)il2cpp_codegen_object_new(PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		PoseCurves__ctor_m2831E8283F32745F844C57C074BC9D1760E377CB(L_58, NULL);
		V_8 = L_58;
		// animation.handJointCurvesLeft.Add((TrackedHandJoint)i, curves);
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_59 = V_0;
		NullCheck(L_59);
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_60 = L_59->___handJointCurvesLeft_5;
		int32_t L_61 = V_7;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_62 = V_8;
		NullCheck(L_60);
		Dictionary_2_Add_m0C1DF55F3888C9C027CAC996F82F6B3D88D2EE83(L_60, L_61, L_62, Dictionary_2_Add_m0C1DF55F3888C9C027CAC996F82F6B3D88D2EE83_RuntimeMethod_var);
	}

IL_011e:
	{
		// PoseCurvesFromStream(reader, curves, useNewFormat);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_63 = V_1;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_64 = V_8;
		bool L_65 = V_6;
		InputAnimation_PoseCurvesFromStream_mE20458691555E9925AC8AA9BC525D69D95104153(L_63, L_64, L_65, NULL);
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		int32_t L_66 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_012e:
	{
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		int32_t L_67 = V_7;
		il2cpp_codegen_runtime_class_init_inline(ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_il2cpp_TypeInfo_var);
		int32_t L_68;
		L_68 = ArticulatedHandPose_get_JointCount_m6513BF4BCA1BFA1872A17A94DFD19087B68BD6FD_inline(NULL);
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_00f7;
		}
	}
	{
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		V_9 = 0;
		goto IL_0173;
	}

IL_013c:
	{
		// if (!animation.handJointCurvesRight.TryGetValue(key: (TrackedHandJoint)i, out var curves))
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_69 = V_0;
		NullCheck(L_69);
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_70 = L_69->___handJointCurvesRight_6;
		int32_t L_71 = V_9;
		NullCheck(L_70);
		bool L_72;
		L_72 = Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF(L_70, L_71, (&V_10), Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF_RuntimeMethod_var);
		if (L_72)
		{
			goto IL_0163;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_73 = (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC*)il2cpp_codegen_object_new(PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		PoseCurves__ctor_m2831E8283F32745F844C57C074BC9D1760E377CB(L_73, NULL);
		V_10 = L_73;
		// animation.handJointCurvesRight.Add((TrackedHandJoint)i, curves);
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_74 = V_0;
		NullCheck(L_74);
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_75 = L_74->___handJointCurvesRight_6;
		int32_t L_76 = V_9;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_77 = V_10;
		NullCheck(L_75);
		Dictionary_2_Add_m0C1DF55F3888C9C027CAC996F82F6B3D88D2EE83(L_75, L_76, L_77, Dictionary_2_Add_m0C1DF55F3888C9C027CAC996F82F6B3D88D2EE83_RuntimeMethod_var);
	}

IL_0163:
	{
		// PoseCurvesFromStream(reader, curves, useNewFormat);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_78 = V_1;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_79 = V_10;
		bool L_80 = V_6;
		InputAnimation_PoseCurvesFromStream_mE20458691555E9925AC8AA9BC525D69D95104153(L_78, L_79, L_80, NULL);
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		int32_t L_81 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_0173:
	{
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		int32_t L_82 = V_9;
		il2cpp_codegen_runtime_class_init_inline(ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_il2cpp_TypeInfo_var);
		int32_t L_83;
		L_83 = ArticulatedHandPose_get_JointCount_m6513BF4BCA1BFA1872A17A94DFD19087B68BD6FD_inline(NULL);
		if ((((int32_t)L_82) < ((int32_t)L_83)))
		{
			goto IL_013c;
		}
	}

IL_017c:
	{
		// if (animation.HasEyeGaze)
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_84 = V_0;
		NullCheck(L_84);
		bool L_85;
		L_85 = InputAnimation_get_HasEyeGaze_m072A146AFEBE26547373981134AD6949D54A9FFB_inline(L_84, NULL);
		if (!L_85)
		{
			goto IL_0192;
		}
	}
	{
		// RayCurvesFromStream(reader, animation.gazeCurves, useNewFormat);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_86 = V_1;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_87 = V_0;
		NullCheck(L_87);
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_88 = L_87->___gazeCurves_8;
		bool L_89 = V_6;
		InputAnimation_RayCurvesFromStream_m6338C38BE38D8948FEE67ACC0B0913CA32CD0615(L_86, L_88, L_89, NULL);
	}

IL_0192:
	{
		// InputAnimationSerializationUtils.ReadMarkerList(reader, animation.markers);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_90 = V_1;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_91 = V_0;
		NullCheck(L_91);
		List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* L_92 = L_91->___markers_12;
		InputAnimationSerializationUtils_ReadMarkerList_m6595702A9EFC92A8079D528F44FD86F56DFC1331(L_90, L_92, NULL);
		// animation.ComputeDuration();
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_93 = V_0;
		NullCheck(L_93);
		InputAnimation_ComputeDuration_m61E9B7D591CBEB72D40C06D027182E44AF8171F5(L_93, NULL);
		// return animation;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_94 = V_0;
		return L_94;
	}
}
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation> Microsoft.MixedReality.Toolkit.Input.InputAnimation::FromStreamAsync(System.IO.Stream,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED* InputAnimation_FromStreamAsync_mA94F04C08B979FA0CDB212F094157ECE990B5A6A (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mC59EE90AEF8448D51221F1B1B820AA0378F54406_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_mBE0C43E80A09DF5EB146572F1D87C4D5EDD97929_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mA97A5D87B54CDC56D6A339A848B68EFE170307F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mC59EE90AEF8448D51221F1B1B820AA0378F54406(AsyncTaskMethodBuilder_1_Create_mC59EE90AEF8448D51221F1B1B820AA0378F54406_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		(&V_0)->___stream_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___stream_2), (void*)L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___1_callback;
		(&V_0)->___callback_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___callback_3), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_mBE0C43E80A09DF5EB146572F1D87C4D5EDD97929(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_mBE0C43E80A09DF5EB146572F1D87C4D5EDD97929_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mA97A5D87B54CDC56D6A339A848B68EFE170307F3(L_4, AsyncTaskMethodBuilder_1_get_Task_mA97A5D87B54CDC56D6A339A848B68EFE170307F3_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ComputeDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_ComputeDuration_m61E9B7D591CBEB72D40C06D027182E44AF8171F5 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t83AFD20A6472B3B13CD20B5F4D60FC08433DC5FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tDA4450F0D5725963BA9CE55E5C8B238F51C6773F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* V_1 = NULL;
	float V_2 = 0.0f;
	float G_B5_0 = 0.0f;
	{
		// duration = 0.0f;
		__this->___duration_0 = (0.0f);
		// foreach (var curve in GetAllAnimationCurves())
		RuntimeObject* L_0;
		L_0 = InputAnimation_GetAllAnimationCurves_m34253118BEBD8CD9FD2FD28967468C9E24FAC641(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve>::GetEnumerator() */, IEnumerable_1_t83AFD20A6472B3B13CD20B5F4D60FC08433DC5FF_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_006e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005b_1;
			}

IL_0019_1:
			{
				// foreach (var curve in GetAllAnimationCurves())
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5;
				L_5 = InterfaceFuncInvoker0< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve>::get_Current() */, IEnumerator_1_tDA4450F0D5725963BA9CE55E5C8B238F51C6773F_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// float curveDuration = (curve.length > 0 ? curve.keys[curve.length - 1].time : 0.0f);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = V_1;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_6, NULL);
				if ((((int32_t)L_7) > ((int32_t)0)))
				{
					goto IL_0030_1;
				}
			}
			{
				G_B5_0 = (0.0f);
				goto IL_0048_1;
			}

IL_0030_1:
			{
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = V_1;
				NullCheck(L_8);
				KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_9;
				L_9 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_8, NULL);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_10 = V_1;
				NullCheck(L_10);
				int32_t L_11;
				L_11 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_10, NULL);
				NullCheck(L_9);
				float L_12;
				L_12 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661(((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_11, 1))))), NULL);
				G_B5_0 = L_12;
			}

IL_0048_1:
			{
				V_2 = G_B5_0;
				// duration = Mathf.Max(duration, curveDuration);
				float L_13 = __this->___duration_0;
				float L_14 = V_2;
				float L_15;
				L_15 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_13, L_14, NULL);
				__this->___duration_0 = L_15;
			}

IL_005b_1:
			{
				// foreach (var curve in GetAllAnimationCurves())
				RuntimeObject* L_16 = V_0;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_006f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::Optimize(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_Optimize_mA539990849F6F45B703774E9A4DB78E5003851C7 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* ___0_profile, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m104F150208968785DA05ABD8360B85B3F2B308EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7FAF0C13119AF1D4B7A1900984AA66034C6C24C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m536AF6F9DEB8D81595983921E40BCDB3CFC10061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF180E2D3DB23FC27191FE883617081B134363B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m8918476BD40C4461125F63B370F5D43F151807FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (profile.RecordCameraPose)
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_0 = ___0_profile;
		NullCheck(L_0);
		bool L_1;
		L_1 = MixedRealityInputRecordingProfile_get_RecordCameraPose_mAC2C5D60A010CEA2AED6B77A6AC646DB4164BD17_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// cameraCurves.Optimize(profile.CameraPositionThreshold, profile.CameraRotationThreshold, profile.PartitionSize);
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_2 = __this->___cameraCurves_7;
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_3 = ___0_profile;
		NullCheck(L_3);
		float L_4;
		L_4 = MixedRealityInputRecordingProfile_get_CameraPositionThreshold_mB5A054788685266F2E211803C13869379A954D65_inline(L_3, NULL);
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_5 = ___0_profile;
		NullCheck(L_5);
		float L_6;
		L_6 = MixedRealityInputRecordingProfile_get_CameraRotationThreshold_m8D3CA75A3C0F7692B75AA0DF891C8F08D6FE4F08_inline(L_5, NULL);
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_7 = ___0_profile;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = MixedRealityInputRecordingProfile_get_PartitionSize_m48010D085B08463D109D9208352D07099429CC1B_inline(L_7, NULL);
		NullCheck(L_2);
		PoseCurves_Optimize_mB804C5C729CD721ADB792D2FD75A8618C023959A(L_2, L_4, L_6, L_8, NULL);
	}

IL_0025:
	{
		// if (profile.RecordEyeGaze)
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_9 = ___0_profile;
		NullCheck(L_9);
		bool L_10;
		L_10 = MixedRealityInputRecordingProfile_get_RecordEyeGaze_m7201174C8BF2C24C4C3B6073E16951013DEB1920_inline(L_9, NULL);
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		// gazeCurves.Optimize(profile.EyeGazeOriginThreshold, profile.EyeGazeDirectionThreshold, profile.PartitionSize);
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_11 = __this->___gazeCurves_8;
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_12 = ___0_profile;
		NullCheck(L_12);
		float L_13;
		L_13 = MixedRealityInputRecordingProfile_get_EyeGazeOriginThreshold_m5F7EBE45435C35AD95867A93A44EC22C2AD4F303_inline(L_12, NULL);
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_14 = ___0_profile;
		NullCheck(L_14);
		float L_15;
		L_15 = MixedRealityInputRecordingProfile_get_EyeGazeDirectionThreshold_mD1EAA76B78A11878E7FA4E4CC9DEE22058744DC0_inline(L_14, NULL);
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_16 = ___0_profile;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = MixedRealityInputRecordingProfile_get_PartitionSize_m48010D085B08463D109D9208352D07099429CC1B_inline(L_16, NULL);
		NullCheck(L_11);
		RayCurves_Optimize_m5B19DBCE7717A8A68A5855E1044E886D2A6BD8A0(L_11, L_13, L_15, L_17, NULL);
	}

IL_004a:
	{
		// if (profile.RecordHandData)
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_18 = ___0_profile;
		NullCheck(L_18);
		bool L_19;
		L_19 = MixedRealityInputRecordingProfile_get_RecordHandData_m00FB590BB5C2842EBD2A69855D25BE61393FDB8A_inline(L_18, NULL);
		if (!L_19)
		{
			goto IL_00e9;
		}
	}
	{
		// foreach (var poseCurves in handJointCurvesLeft.Values)
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_20 = __this->___handJointCurvesLeft_5;
		NullCheck(L_20);
		ValueCollection_tF6578F9E2E9D1B91B3699F496D5DC4BA72DF2591* L_21;
		L_21 = Dictionary_2_get_Values_m104F150208968785DA05ABD8360B85B3F2B308EB(L_20, Dictionary_2_get_Values_m104F150208968785DA05ABD8360B85B3F2B308EB_RuntimeMethod_var);
		NullCheck(L_21);
		Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7 L_22;
		L_22 = ValueCollection_GetEnumerator_m8918476BD40C4461125F63B370F5D43F151807FD(L_21, ValueCollection_GetEnumerator_m8918476BD40C4461125F63B370F5D43F151807FD_RuntimeMethod_var);
		V_0 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0091:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7FAF0C13119AF1D4B7A1900984AA66034C6C24C1((&V_0), Enumerator_Dispose_m7FAF0C13119AF1D4B7A1900984AA66034C6C24C1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0086_1;
			}

IL_0068_1:
			{
				// foreach (var poseCurves in handJointCurvesLeft.Values)
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_23;
				L_23 = Enumerator_get_Current_mF180E2D3DB23FC27191FE883617081B134363B6F_inline((&V_0), Enumerator_get_Current_mF180E2D3DB23FC27191FE883617081B134363B6F_RuntimeMethod_var);
				// poseCurves.Optimize(profile.JointPositionThreshold, profile.JointRotationThreshold, profile.PartitionSize);
				MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_24 = ___0_profile;
				NullCheck(L_24);
				float L_25;
				L_25 = MixedRealityInputRecordingProfile_get_JointPositionThreshold_m01382059DA5685EE54D1397196DA95F9DF119450_inline(L_24, NULL);
				MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_26 = ___0_profile;
				NullCheck(L_26);
				float L_27;
				L_27 = MixedRealityInputRecordingProfile_get_JointRotationThreshold_m4C51611757615DF053436EDCADA3CFA348647213_inline(L_26, NULL);
				MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_28 = ___0_profile;
				NullCheck(L_28);
				int32_t L_29;
				L_29 = MixedRealityInputRecordingProfile_get_PartitionSize_m48010D085B08463D109D9208352D07099429CC1B_inline(L_28, NULL);
				NullCheck(L_23);
				PoseCurves_Optimize_mB804C5C729CD721ADB792D2FD75A8618C023959A(L_23, L_25, L_27, L_29, NULL);
			}

IL_0086_1:
			{
				// foreach (var poseCurves in handJointCurvesLeft.Values)
				bool L_30;
				L_30 = Enumerator_MoveNext_m536AF6F9DEB8D81595983921E40BCDB3CFC10061((&V_0), Enumerator_MoveNext_m536AF6F9DEB8D81595983921E40BCDB3CFC10061_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0068_1;
				}
			}
			{
				goto IL_009f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009f:
	{
		// foreach (var poseCurves in handJointCurvesRight.Values)
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_31 = __this->___handJointCurvesRight_6;
		NullCheck(L_31);
		ValueCollection_tF6578F9E2E9D1B91B3699F496D5DC4BA72DF2591* L_32;
		L_32 = Dictionary_2_get_Values_m104F150208968785DA05ABD8360B85B3F2B308EB(L_31, Dictionary_2_get_Values_m104F150208968785DA05ABD8360B85B3F2B308EB_RuntimeMethod_var);
		NullCheck(L_32);
		Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7 L_33;
		L_33 = ValueCollection_GetEnumerator_m8918476BD40C4461125F63B370F5D43F151807FD(L_32, ValueCollection_GetEnumerator_m8918476BD40C4461125F63B370F5D43F151807FD_RuntimeMethod_var);
		V_0 = L_33;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00db:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7FAF0C13119AF1D4B7A1900984AA66034C6C24C1((&V_0), Enumerator_Dispose_m7FAF0C13119AF1D4B7A1900984AA66034C6C24C1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d0_1;
			}

IL_00b2_1:
			{
				// foreach (var poseCurves in handJointCurvesRight.Values)
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_34;
				L_34 = Enumerator_get_Current_mF180E2D3DB23FC27191FE883617081B134363B6F_inline((&V_0), Enumerator_get_Current_mF180E2D3DB23FC27191FE883617081B134363B6F_RuntimeMethod_var);
				// poseCurves.Optimize(profile.JointPositionThreshold, profile.JointRotationThreshold, profile.PartitionSize);
				MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_35 = ___0_profile;
				NullCheck(L_35);
				float L_36;
				L_36 = MixedRealityInputRecordingProfile_get_JointPositionThreshold_m01382059DA5685EE54D1397196DA95F9DF119450_inline(L_35, NULL);
				MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_37 = ___0_profile;
				NullCheck(L_37);
				float L_38;
				L_38 = MixedRealityInputRecordingProfile_get_JointRotationThreshold_m4C51611757615DF053436EDCADA3CFA348647213_inline(L_37, NULL);
				MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_39 = ___0_profile;
				NullCheck(L_39);
				int32_t L_40;
				L_40 = MixedRealityInputRecordingProfile_get_PartitionSize_m48010D085B08463D109D9208352D07099429CC1B_inline(L_39, NULL);
				NullCheck(L_34);
				PoseCurves_Optimize_mB804C5C729CD721ADB792D2FD75A8618C023959A(L_34, L_36, L_38, L_40, NULL);
			}

IL_00d0_1:
			{
				// foreach (var poseCurves in handJointCurvesRight.Values)
				bool L_41;
				L_41 = Enumerator_MoveNext_m536AF6F9DEB8D81595983921E40BCDB3CFC10061((&V_0), Enumerator_MoveNext_m536AF6F9DEB8D81595983921E40BCDB3CFC10061_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_00b2_1;
				}
			}
			{
				goto IL_00e9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandState(System.Single,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_EvaluateHandState_mF70CBF4801487A077CBE3456AE4246BE2409B7B4 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, float ___0_time, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_trackedCurve, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___2_pinchCurve, bool* ___3_isTracked, bool* ___4_isPinching, const RuntimeMethod* method) 
{
	{
		// isTracked = (trackedCurve.Evaluate(time) > 0.5f);
		bool* L_0 = ___3_isTracked;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___1_trackedCurve;
		float L_2 = ___0_time;
		NullCheck(L_1);
		float L_3;
		L_3 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_1, L_2, NULL);
		*((int8_t*)L_0) = (int8_t)((((float)L_3) > ((float)(0.5f)))? 1 : 0);
		// isPinching = (pinchCurve.Evaluate(time) > 0.5f);
		bool* L_4 = ___4_isPinching;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___2_pinchCurve;
		float L_6 = ___0_time;
		NullCheck(L_5);
		float L_7;
		L_7 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_5, L_6, NULL);
		*((int8_t*)L_4) = (int8_t)((((float)L_7) > ((float)(0.5f)))? 1 : 0);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandJoint(System.Single,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 InputAnimation_EvaluateHandJoint_m2D9376EBE7F4075DA2E28860AFCBDB04153E315C (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, float ___0_time, int32_t ___1_joint, Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* ___2_jointCurves, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* V_0 = NULL;
	{
		// if (jointCurves.TryGetValue(joint, out var curves))
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_0 = ___2_jointCurves;
		int32_t L_1 = ___1_joint;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return curves.Evaluate(time);
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_3 = V_0;
		float L_4 = ___0_time;
		NullCheck(L_3);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_5;
		L_5 = PoseCurves_Evaluate_m19786E8FFC1D7B69EB05A77021E734E2983651F9(L_3, L_4, NULL);
		return L_5;
	}

IL_0013:
	{
		// return MixedRealityPose.ZeroIdentity;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_6;
		L_6 = MixedRealityPose_get_ZeroIdentity_m5F6C0EE34C84272B653BEF09731AC5E219F51EDD_inline(NULL);
		return L_6;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation::GetAllAnimationCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputAnimation_GetAllAnimationCurves_m34253118BEBD8CD9FD2FD28967468C9E24FAC641 (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* L_0 = (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B*)il2cpp_codegen_object_new(U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetAllAnimationCurvesU3Ed__59__ctor_m667503E337EAF8FEC9B57FBA46A27A02CC6DEAF7(L_0, ((int32_t)-2), NULL);
		U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddBoolKey(UnityEngine.AnimationCurve,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddBoolKey_mFBE31F951D8047E9ABC451A5CB6F5F1180380F91 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_curve, float ___1_time, bool ___2_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B3_0 = 0.0f;
	{
		// float fvalue = value ? 1.0f : 0.0f;
		bool L_0 = ___2_value;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_000f;
	}

IL_000a:
	{
		G_B3_0 = (1.0f);
	}

IL_000f:
	{
		V_0 = G_B3_0;
		// var keyframe = new Keyframe(time, fvalue, 0.0f, 0.0f, 0.0f, BoolOutWeight);
		float L_1 = ___1_time;
		float L_2 = V_0;
		Keyframe__ctor_m925C3CB49CB3384D39FF28ED279A866F52665AE3((&V_1), L_1, L_2, (0.0f), (0.0f), (0.0f), (1000000.0f), NULL);
		// keyframe.weightedMode = WeightedMode.Both;
		Keyframe_set_weightedMode_m3F4D6F04144F098E62FF5D888070A9C3DC3EC0E9((&V_1), 3, NULL);
		// curve.AddKey(keyframe);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___0_curve;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddFloatKey(UnityEngine.AnimationCurve,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddFloatKey_mBC34966D90F5DED5B397284BA2D88254C0E1E795 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_curve, float ___1_time, float ___2_value, const RuntimeMethod* method) 
{
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var keyframe = new Keyframe(time, value, 0.0f, 0.0f, 0.0f, 0.0f);
		float L_0 = ___1_time;
		float L_1 = ___2_value;
		Keyframe__ctor_m925C3CB49CB3384D39FF28ED279A866F52665AE3((&V_0), L_0, L_1, (0.0f), (0.0f), (0.0f), (0.0f), NULL);
		// keyframe.weightedMode = WeightedMode.Both;
		Keyframe_set_weightedMode_m3F4D6F04144F098E62FF5D888070A9C3DC3EC0E9((&V_0), 3, NULL);
		// curve.AddKey(keyframe);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = ___0_curve;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddVectorKey(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddVectorKey_mD662F4D138CDC9D589E8DA5D8C84EF7F929F978B (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_curveX, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curveY, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___2_curveZ, float ___3_time, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_vector, const RuntimeMethod* method) 
{
	{
		// curveX.AddKey(time, vector.x);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_curveX;
		float L_1 = ___3_time;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___4_vector;
		float L_3 = L_2.___x_2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_0, L_1, L_3, NULL);
		// curveY.AddKey(time, vector.y);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___1_curveY;
		float L_6 = ___3_time;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___4_vector;
		float L_8 = L_7.___y_3;
		NullCheck(L_5);
		int32_t L_9;
		L_9 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_5, L_6, L_8, NULL);
		// curveZ.AddKey(time, vector.z);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_10 = ___2_curveZ;
		float L_11 = ___3_time;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___4_vector;
		float L_13 = L_12.___z_4;
		NullCheck(L_10);
		int32_t L_14;
		L_14 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_10, L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesToStream(System.IO.BinaryWriter,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesToStream_mE706BBC3472EF80762CEDBBA418421CB040DFC21 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* ___1_curves, float ___2_startTime, const RuntimeMethod* method) 
{
	{
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.PositionX, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_writer;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_1 = ___1_curves;
		NullCheck(L_1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = L_1->___PositionX_0;
		float L_3 = ___2_startTime;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19(L_0, L_2, L_3, NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.PositionY, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___0_writer;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_5 = ___1_curves;
		NullCheck(L_5);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = L_5->___PositionY_1;
		float L_7 = ___2_startTime;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19(L_4, L_6, L_7, NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.PositionZ, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_8 = ___0_writer;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_9 = ___1_curves;
		NullCheck(L_9);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_10 = L_9->___PositionZ_2;
		float L_11 = ___2_startTime;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19(L_8, L_10, L_11, NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.RotationX, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_12 = ___0_writer;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_13 = ___1_curves;
		NullCheck(L_13);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_14 = L_13->___RotationX_3;
		float L_15 = ___2_startTime;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19(L_12, L_14, L_15, NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.RotationY, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_16 = ___0_writer;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_17 = ___1_curves;
		NullCheck(L_17);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_18 = L_17->___RotationY_4;
		float L_19 = ___2_startTime;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19(L_16, L_18, L_19, NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.RotationZ, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_20 = ___0_writer;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_21 = ___1_curves;
		NullCheck(L_21);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_22 = L_21->___RotationZ_5;
		float L_23 = ___2_startTime;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19(L_20, L_22, L_23, NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.RotationW, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_24 = ___0_writer;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_25 = ___1_curves;
		NullCheck(L_25);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_26 = L_25->___RotationW_6;
		float L_27 = ___2_startTime;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19(L_24, L_26, L_27, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesFromStream(System.IO.BinaryReader,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesFromStream_mE20458691555E9925AC8AA9BC525D69D95104153 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* ___1_curves, bool ___2_readSimple, const RuntimeMethod* method) 
{
	{
		// if (readSimple)
		bool L_0 = ___2_readSimple;
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.PositionX);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_2 = ___1_curves;
		NullCheck(L_2);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = L_2->___PositionX_0;
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316(L_1, L_3, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.PositionY);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_5 = ___1_curves;
		NullCheck(L_5);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = L_5->___PositionY_1;
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316(L_4, L_6, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.PositionZ);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_8 = ___1_curves;
		NullCheck(L_8);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = L_8->___PositionZ_2;
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316(L_7, L_9, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.RotationX);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_11 = ___1_curves;
		NullCheck(L_11);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = L_11->___RotationX_3;
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316(L_10, L_12, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.RotationY);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_14 = ___1_curves;
		NullCheck(L_14);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_15 = L_14->___RotationY_4;
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316(L_13, L_15, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.RotationZ);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_17 = ___1_curves;
		NullCheck(L_17);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_18 = L_17->___RotationZ_5;
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316(L_16, L_18, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.RotationW);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_19 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_20 = ___1_curves;
		NullCheck(L_20);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_21 = L_20->___RotationW_6;
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316(L_19, L_21, NULL);
		return;
	}

IL_0058:
	{
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.PositionX);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_22 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_23 = ___1_curves;
		NullCheck(L_23);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_24 = L_23->___PositionX_0;
		InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B(L_22, L_24, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.PositionY);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_25 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_26 = ___1_curves;
		NullCheck(L_26);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_27 = L_26->___PositionY_1;
		InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B(L_25, L_27, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.PositionZ);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_28 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_29 = ___1_curves;
		NullCheck(L_29);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_30 = L_29->___PositionZ_2;
		InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B(L_28, L_30, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationX);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_31 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_32 = ___1_curves;
		NullCheck(L_32);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_33 = L_32->___RotationX_3;
		InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B(L_31, L_33, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationY);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_34 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_35 = ___1_curves;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36 = L_35->___RotationY_4;
		InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B(L_34, L_36, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationZ);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_37 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_38 = ___1_curves;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39 = L_38->___RotationZ_5;
		InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B(L_37, L_39, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationW);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_40 = ___0_reader;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_41 = ___1_curves;
		NullCheck(L_41);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_42 = L_41->___RotationW_6;
		InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B(L_40, L_42, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::RayCurvesToStream(System.IO.BinaryWriter,Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_RayCurvesToStream_m8FD18A9AFC71F7652D062166F4A95CE2B97D0543 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* ___1_curves, float ___2_startTime, const RuntimeMethod* method) 
{
	{
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.OriginX, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_writer;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_1 = ___1_curves;
		NullCheck(L_1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = L_1->___OriginX_0;
		float L_3 = ___2_startTime;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19(L_0, L_2, L_3, NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.OriginY, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___0_writer;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_5 = ___1_curves;
		NullCheck(L_5);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = L_5->___OriginY_1;
		float L_7 = ___2_startTime;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19(L_4, L_6, L_7, NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.OriginZ, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_8 = ___0_writer;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_9 = ___1_curves;
		NullCheck(L_9);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_10 = L_9->___OriginZ_2;
		float L_11 = ___2_startTime;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19(L_8, L_10, L_11, NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.DirectionX, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_12 = ___0_writer;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_13 = ___1_curves;
		NullCheck(L_13);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_14 = L_13->___DirectionX_3;
		float L_15 = ___2_startTime;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19(L_12, L_14, L_15, NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.DirectionY, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_16 = ___0_writer;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_17 = ___1_curves;
		NullCheck(L_17);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_18 = L_17->___DirectionY_4;
		float L_19 = ___2_startTime;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19(L_16, L_18, L_19, NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.DirectionZ, startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_20 = ___0_writer;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_21 = ___1_curves;
		NullCheck(L_21);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_22 = L_21->___DirectionZ_5;
		float L_23 = ___2_startTime;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19(L_20, L_22, L_23, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::RayCurvesFromStream(System.IO.BinaryReader,Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_RayCurvesFromStream_m6338C38BE38D8948FEE67ACC0B0913CA32CD0615 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* ___1_curves, bool ___2_readSimple, const RuntimeMethod* method) 
{
	{
		// if (readSimple)
		bool L_0 = ___2_readSimple;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.OriginX);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_2 = ___1_curves;
		NullCheck(L_2);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = L_2->___OriginX_0;
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316(L_1, L_3, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.OriginY);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___0_reader;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_5 = ___1_curves;
		NullCheck(L_5);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = L_5->___OriginY_1;
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316(L_4, L_6, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.OriginZ);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_reader;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_8 = ___1_curves;
		NullCheck(L_8);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = L_8->___OriginZ_2;
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316(L_7, L_9, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.DirectionX);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = ___0_reader;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_11 = ___1_curves;
		NullCheck(L_11);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = L_11->___DirectionX_3;
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316(L_10, L_12, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.DirectionY);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___0_reader;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_14 = ___1_curves;
		NullCheck(L_14);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_15 = L_14->___DirectionY_4;
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316(L_13, L_15, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.DirectionZ);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = ___0_reader;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_17 = ___1_curves;
		NullCheck(L_17);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_18 = L_17->___DirectionZ_5;
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316(L_16, L_18, NULL);
		return;
	}

IL_004c:
	{
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.OriginX);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_19 = ___0_reader;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_20 = ___1_curves;
		NullCheck(L_20);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_21 = L_20->___OriginX_0;
		InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B(L_19, L_21, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.OriginY);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_22 = ___0_reader;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_23 = ___1_curves;
		NullCheck(L_23);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_24 = L_23->___OriginY_1;
		InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B(L_22, L_24, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.OriginZ);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_25 = ___0_reader;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_26 = ___1_curves;
		NullCheck(L_26);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_27 = L_26->___OriginZ_2;
		InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B(L_25, L_27, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.DirectionX);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_28 = ___0_reader;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_29 = ___1_curves;
		NullCheck(L_29);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_30 = L_29->___DirectionX_3;
		InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B(L_28, L_30, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.DirectionY);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_31 = ___0_reader;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_32 = ___1_curves;
		NullCheck(L_32);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_33 = L_32->___DirectionY_4;
		InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B(L_31, L_33, NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.DirectionZ);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_34 = ___0_reader;
		RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_35 = ___1_curves;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36 = L_35->___DirectionZ_5;
		InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B(L_34, L_36, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::OptimizePositionCurve(UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_OptimizePositionCurve_mA10CA6599D5067ABDE8589DC57B3442B915AAF22 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___0_curveX, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___1_curveY, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___2_curveZ, float ___3_threshold, int32_t ___4_partitionSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// float sqrThreshold = threshold * threshold;
		float L_0 = ___3_threshold;
		float L_1 = ___3_threshold;
		(&V_0)->___sqrThreshold_3 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// var inCurveX = curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_2 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_2);
		(&V_0)->___inCurveX_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___inCurveX_0), (void*)L_3);
		// var inCurveY = curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_4 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_4);
		(&V_0)->___inCurveY_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___inCurveY_1), (void*)L_5);
		// var inCurveZ = curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_6 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_6);
		(&V_0)->___inCurveZ_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___inCurveZ_2), (void*)L_7);
		// var outCurveX = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_8, NULL);
		(&V_0)->___outCurveX_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___outCurveX_4), (void*)L_8);
		// var outCurveY = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_9, NULL);
		(&V_0)->___outCurveY_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___outCurveY_5), (void*)L_9);
		// var outCurveZ = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_10 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_10, NULL);
		(&V_0)->___outCurveZ_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___outCurveZ_6), (void*)L_10);
		// outCurveX.AddKey(curveX[0]);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 L_11 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = L_11.___outCurveX_4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_13 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_14 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_13);
		NullCheck(L_14);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_15;
		L_15 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_14, 0, NULL);
		NullCheck(L_12);
		int32_t L_16;
		L_16 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_12, L_15, NULL);
		// outCurveY.AddKey(curveY[0]);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 L_17 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_18 = L_17.___outCurveY_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_19 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_20 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_19);
		NullCheck(L_20);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_21;
		L_21 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_20, 0, NULL);
		NullCheck(L_18);
		int32_t L_22;
		L_22 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_18, L_21, NULL);
		// outCurveZ.AddKey(curveZ[0]);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 L_23 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_24 = L_23.___outCurveZ_6;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_25 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_26 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_25);
		NullCheck(L_26);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_27;
		L_27 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_26, 0, NULL);
		NullCheck(L_24);
		int32_t L_28;
		L_28 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_24, L_27, NULL);
		// if (partitionSize == 0)
		int32_t L_29 = ___4_partitionSize;
		if (L_29)
		{
			goto IL_00f0;
		}
	}
	{
		// Recurse(0, curveX.length - 1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_30 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_31 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_30);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_31, NULL);
		InputAnimation_U3COptimizePositionCurveU3Eg__RecurseU7C70_0_m1F8F94AF192E54E3F05BC8E27E7EEF08F0AFD1FC(0, ((int32_t)il2cpp_codegen_subtract(L_32, 1)), (&V_0), NULL);
		// outCurveX.AddKey(curveX[curveX.length - 1]);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 L_33 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_34 = L_33.___outCurveX_4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_35 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_37 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_37);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_38, NULL);
		NullCheck(L_36);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_40;
		L_40 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_36, ((int32_t)il2cpp_codegen_subtract(L_39, 1)), NULL);
		NullCheck(L_34);
		int32_t L_41;
		L_41 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_34, L_40, NULL);
		// outCurveY.AddKey(curveY[curveY.length - 1]);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 L_42 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_43 = L_42.___outCurveY_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_44 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_45 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_44);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_46 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_47 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_46);
		NullCheck(L_47);
		int32_t L_48;
		L_48 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_47, NULL);
		NullCheck(L_45);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_49;
		L_49 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_45, ((int32_t)il2cpp_codegen_subtract(L_48, 1)), NULL);
		NullCheck(L_43);
		int32_t L_50;
		L_50 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_43, L_49, NULL);
		// outCurveZ.AddKey(curveZ[curveZ.length - 1]);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 L_51 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52 = L_51.___outCurveZ_6;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_53 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_53);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_55 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_56 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_55);
		NullCheck(L_56);
		int32_t L_57;
		L_57 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_56, NULL);
		NullCheck(L_54);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_58;
		L_58 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_54, ((int32_t)il2cpp_codegen_subtract(L_57, 1)), NULL);
		NullCheck(L_52);
		int32_t L_59;
		L_59 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_52, L_58, NULL);
		goto IL_0161;
	}

IL_00f0:
	{
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		V_1 = 0;
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_60 = ___4_partitionSize;
		V_2 = L_60;
		goto IL_0154;
	}

IL_00f7:
	{
		// Recurse(i, j);
		int32_t L_61 = V_1;
		int32_t L_62 = V_2;
		InputAnimation_U3COptimizePositionCurveU3Eg__RecurseU7C70_0_m1F8F94AF192E54E3F05BC8E27E7EEF08F0AFD1FC(L_61, L_62, (&V_0), NULL);
		// outCurveX.AddKey(curveX[j]);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 L_63 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_64 = L_63.___outCurveX_4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_65 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_66 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_65);
		int32_t L_67 = V_2;
		NullCheck(L_66);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_68;
		L_68 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_66, L_67, NULL);
		NullCheck(L_64);
		int32_t L_69;
		L_69 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_64, L_68, NULL);
		// outCurveY.AddKey(curveY[j]);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 L_70 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_71 = L_70.___outCurveY_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_72 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_73 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_72);
		int32_t L_74 = V_2;
		NullCheck(L_73);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_75;
		L_75 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_73, L_74, NULL);
		NullCheck(L_71);
		int32_t L_76;
		L_76 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_71, L_75, NULL);
		// outCurveZ.AddKey(curveZ[j]);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 L_77 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_78 = L_77.___outCurveZ_6;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_79 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_80 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_79);
		int32_t L_81 = V_2;
		NullCheck(L_80);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_82;
		L_82 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_80, L_81, NULL);
		NullCheck(L_78);
		int32_t L_83;
		L_83 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_78, L_82, NULL);
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_84 = V_1;
		int32_t L_85 = ___4_partitionSize;
		V_1 = ((int32_t)il2cpp_codegen_add(L_84, L_85));
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_86 = V_2;
		int32_t L_87 = ___4_partitionSize;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_88 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_89 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_88);
		NullCheck(L_89);
		int32_t L_90;
		L_90 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_89, NULL);
		int32_t L_91;
		L_91 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_add(L_86, L_87)), ((int32_t)il2cpp_codegen_subtract(L_90, 1)), NULL);
		V_2 = L_91;
	}

IL_0154:
	{
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_92 = V_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_93 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_94 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_93);
		NullCheck(L_94);
		int32_t L_95;
		L_95 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_94, NULL);
		int32_t L_96 = ___4_partitionSize;
		if ((((int32_t)L_92) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_95, L_96)))))
		{
			goto IL_00f7;
		}
	}

IL_0161:
	{
		// curveX = outCurveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_97 = ___0_curveX;
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 L_98 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_99 = L_98.___outCurveX_4;
		*((RuntimeObject**)L_97) = (RuntimeObject*)L_99;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_97, (void*)(RuntimeObject*)L_99);
		// curveY = outCurveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_100 = ___1_curveY;
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 L_101 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_102 = L_101.___outCurveY_5;
		*((RuntimeObject**)L_100) = (RuntimeObject*)L_102;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_100, (void*)(RuntimeObject*)L_102);
		// curveZ = outCurveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_103 = ___2_curveZ;
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2 L_104 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_105 = L_104.___outCurveZ_6;
		*((RuntimeObject**)L_103) = (RuntimeObject*)L_105;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_103, (void*)(RuntimeObject*)L_105);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::OptimizeDirectionCurve(UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_OptimizeDirectionCurve_m181284E0C9CFDB1FFDF8F275AF2CB2013FA53279 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___0_curveX, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___1_curveY, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___2_curveZ, float ___3_threshold, int32_t ___4_partitionSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// float cosThreshold = Mathf.Cos(threshold * Mathf.PI / 180f);
		float L_0 = ___3_threshold;
		float L_1;
		L_1 = cosf(((float)(((float)il2cpp_codegen_multiply(L_0, (3.14159274f)))/(180.0f))));
		(&V_0)->___cosThreshold_3 = L_1;
		// var inCurveX = curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_2 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_2);
		(&V_0)->___inCurveX_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___inCurveX_0), (void*)L_3);
		// var inCurveY = curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_4 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_4);
		(&V_0)->___inCurveY_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___inCurveY_1), (void*)L_5);
		// var inCurveZ = curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_6 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_6);
		(&V_0)->___inCurveZ_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___inCurveZ_2), (void*)L_7);
		// var outCurveX = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_8, NULL);
		(&V_0)->___outCurveX_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___outCurveX_4), (void*)L_8);
		// var outCurveY = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_9, NULL);
		(&V_0)->___outCurveY_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___outCurveY_5), (void*)L_9);
		// var outCurveZ = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_10 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_10, NULL);
		(&V_0)->___outCurveZ_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___outCurveZ_6), (void*)L_10);
		// outCurveX.AddKey(curveX[0]);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 L_11 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = L_11.___outCurveX_4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_13 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_14 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_13);
		NullCheck(L_14);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_15;
		L_15 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_14, 0, NULL);
		NullCheck(L_12);
		int32_t L_16;
		L_16 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_12, L_15, NULL);
		// outCurveY.AddKey(curveY[0]);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 L_17 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_18 = L_17.___outCurveY_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_19 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_20 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_19);
		NullCheck(L_20);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_21;
		L_21 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_20, 0, NULL);
		NullCheck(L_18);
		int32_t L_22;
		L_22 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_18, L_21, NULL);
		// outCurveZ.AddKey(curveZ[0]);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 L_23 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_24 = L_23.___outCurveZ_6;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_25 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_26 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_25);
		NullCheck(L_26);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_27;
		L_27 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_26, 0, NULL);
		NullCheck(L_24);
		int32_t L_28;
		L_28 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_24, L_27, NULL);
		// if (partitionSize == 0)
		int32_t L_29 = ___4_partitionSize;
		if (L_29)
		{
			goto IL_00ff;
		}
	}
	{
		// Recurse(0, curveX.length - 1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_30 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_31 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_30);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_31, NULL);
		InputAnimation_U3COptimizeDirectionCurveU3Eg__RecurseU7C71_0_mF662FE3A803F0664E9831B96E6456FDDF7CBBC41(0, ((int32_t)il2cpp_codegen_subtract(L_32, 1)), (&V_0), NULL);
		// outCurveX.AddKey(curveX[curveX.length - 1]);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 L_33 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_34 = L_33.___outCurveX_4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_35 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_37 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_37);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_38, NULL);
		NullCheck(L_36);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_40;
		L_40 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_36, ((int32_t)il2cpp_codegen_subtract(L_39, 1)), NULL);
		NullCheck(L_34);
		int32_t L_41;
		L_41 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_34, L_40, NULL);
		// outCurveY.AddKey(curveY[curveY.length - 1]);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 L_42 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_43 = L_42.___outCurveY_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_44 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_45 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_44);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_46 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_47 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_46);
		NullCheck(L_47);
		int32_t L_48;
		L_48 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_47, NULL);
		NullCheck(L_45);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_49;
		L_49 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_45, ((int32_t)il2cpp_codegen_subtract(L_48, 1)), NULL);
		NullCheck(L_43);
		int32_t L_50;
		L_50 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_43, L_49, NULL);
		// outCurveZ.AddKey(curveZ[curveZ.length - 1]);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 L_51 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52 = L_51.___outCurveZ_6;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_53 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_53);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_55 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_56 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_55);
		NullCheck(L_56);
		int32_t L_57;
		L_57 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_56, NULL);
		NullCheck(L_54);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_58;
		L_58 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_54, ((int32_t)il2cpp_codegen_subtract(L_57, 1)), NULL);
		NullCheck(L_52);
		int32_t L_59;
		L_59 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_52, L_58, NULL);
		goto IL_0170;
	}

IL_00ff:
	{
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		V_1 = 0;
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_60 = ___4_partitionSize;
		V_2 = L_60;
		goto IL_0163;
	}

IL_0106:
	{
		// Recurse(i, j);
		int32_t L_61 = V_1;
		int32_t L_62 = V_2;
		InputAnimation_U3COptimizeDirectionCurveU3Eg__RecurseU7C71_0_mF662FE3A803F0664E9831B96E6456FDDF7CBBC41(L_61, L_62, (&V_0), NULL);
		// outCurveX.AddKey(curveX[j]);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 L_63 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_64 = L_63.___outCurveX_4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_65 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_66 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_65);
		int32_t L_67 = V_2;
		NullCheck(L_66);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_68;
		L_68 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_66, L_67, NULL);
		NullCheck(L_64);
		int32_t L_69;
		L_69 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_64, L_68, NULL);
		// outCurveY.AddKey(curveY[j]);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 L_70 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_71 = L_70.___outCurveY_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_72 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_73 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_72);
		int32_t L_74 = V_2;
		NullCheck(L_73);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_75;
		L_75 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_73, L_74, NULL);
		NullCheck(L_71);
		int32_t L_76;
		L_76 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_71, L_75, NULL);
		// outCurveZ.AddKey(curveZ[j]);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 L_77 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_78 = L_77.___outCurveZ_6;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_79 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_80 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_79);
		int32_t L_81 = V_2;
		NullCheck(L_80);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_82;
		L_82 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_80, L_81, NULL);
		NullCheck(L_78);
		int32_t L_83;
		L_83 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_78, L_82, NULL);
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_84 = V_1;
		int32_t L_85 = ___4_partitionSize;
		V_1 = ((int32_t)il2cpp_codegen_add(L_84, L_85));
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_86 = V_2;
		int32_t L_87 = ___4_partitionSize;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_88 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_89 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_88);
		NullCheck(L_89);
		int32_t L_90;
		L_90 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_89, NULL);
		int32_t L_91;
		L_91 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_add(L_86, L_87)), ((int32_t)il2cpp_codegen_subtract(L_90, 1)), NULL);
		V_2 = L_91;
	}

IL_0163:
	{
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_92 = V_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_93 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_94 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_93);
		NullCheck(L_94);
		int32_t L_95;
		L_95 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_94, NULL);
		int32_t L_96 = ___4_partitionSize;
		if ((((int32_t)L_92) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_95, L_96)))))
		{
			goto IL_0106;
		}
	}

IL_0170:
	{
		// curveX = outCurveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_97 = ___0_curveX;
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 L_98 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_99 = L_98.___outCurveX_4;
		*((RuntimeObject**)L_97) = (RuntimeObject*)L_99;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_97, (void*)(RuntimeObject*)L_99);
		// curveY = outCurveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_100 = ___1_curveY;
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 L_101 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_102 = L_101.___outCurveY_5;
		*((RuntimeObject**)L_100) = (RuntimeObject*)L_102;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_100, (void*)(RuntimeObject*)L_102);
		// curveZ = outCurveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_103 = ___2_curveZ;
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4 L_104 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_105 = L_104.___outCurveZ_6;
		*((RuntimeObject**)L_103) = (RuntimeObject*)L_105;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_103, (void*)(RuntimeObject*)L_105);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::OptimizeRotationCurve(UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_OptimizeRotationCurve_m9C4B502A24F47A02DEFC7829BCF58E2B87F67F87 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___0_curveX, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___1_curveY, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___2_curveZ, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** ___3_curveW, float ___4_threshold, int32_t ___5_partitionSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// float compThreshold = Mathf.Sqrt((Mathf.Cos(threshold * Mathf.PI / 180f) + 1f) / 2f);
		float L_0 = ___4_threshold;
		float L_1;
		L_1 = cosf(((float)(((float)il2cpp_codegen_multiply(L_0, (3.14159274f)))/(180.0f))));
		float L_2;
		L_2 = sqrtf(((float)(((float)il2cpp_codegen_add(L_1, (1.0f)))/(2.0f))));
		(&V_0)->___compThreshold_4 = L_2;
		// var inCurveX = curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_3 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_3);
		(&V_0)->___inCurveX_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___inCurveX_0), (void*)L_4);
		// var inCurveY = curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_5 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_5);
		(&V_0)->___inCurveY_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___inCurveY_1), (void*)L_6);
		// var inCurveZ = curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_7 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_7);
		(&V_0)->___inCurveZ_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___inCurveZ_2), (void*)L_8);
		// var inCurveW = curveW;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_9 = ___3_curveW;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_10 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_9);
		(&V_0)->___inCurveW_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___inCurveW_3), (void*)L_10);
		// var outCurveX = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_11, NULL);
		(&V_0)->___outCurveX_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___outCurveX_5), (void*)L_11);
		// var outCurveY = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_12, NULL);
		(&V_0)->___outCurveY_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___outCurveY_6), (void*)L_12);
		// var outCurveZ = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_13 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_13, NULL);
		(&V_0)->___outCurveZ_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___outCurveZ_7), (void*)L_13);
		// var outCurveW = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_14 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_14, NULL);
		(&V_0)->___outCurveW_8 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___outCurveW_8), (void*)L_14);
		// outCurveX.AddKey(curveX[0]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_15 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_16 = L_15.___outCurveX_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_17 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_18 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_17);
		NullCheck(L_18);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_19;
		L_19 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_18, 0, NULL);
		NullCheck(L_16);
		int32_t L_20;
		L_20 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_16, L_19, NULL);
		// outCurveY.AddKey(curveY[0]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_21 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_22 = L_21.___outCurveY_6;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_23 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_24 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_23);
		NullCheck(L_24);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_25;
		L_25 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_24, 0, NULL);
		NullCheck(L_22);
		int32_t L_26;
		L_26 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_22, L_25, NULL);
		// outCurveZ.AddKey(curveZ[0]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_27 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_28 = L_27.___outCurveZ_7;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_29 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_30 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_29);
		NullCheck(L_30);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_31;
		L_31 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_30, 0, NULL);
		NullCheck(L_28);
		int32_t L_32;
		L_32 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_28, L_31, NULL);
		// outCurveW.AddKey(curveW[0]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_33 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_34 = L_33.___outCurveW_8;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_35 = ___3_curveW;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_35);
		NullCheck(L_36);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_37;
		L_37 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_36, 0, NULL);
		NullCheck(L_34);
		int32_t L_38;
		L_38 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_34, L_37, NULL);
		// if (partitionSize == 0)
		int32_t L_39 = ___5_partitionSize;
		if (L_39)
		{
			goto IL_015c;
		}
	}
	{
		// Recurse(0, curveX.length - 1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_40 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_40);
		NullCheck(L_41);
		int32_t L_42;
		L_42 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_41, NULL);
		InputAnimation_U3COptimizeRotationCurveU3Eg__RecurseU7C72_0_m6C36F3947C8D11C736E019E9896E55CFA8A1DC68(0, ((int32_t)il2cpp_codegen_subtract(L_42, 1)), (&V_0), NULL);
		// outCurveX.AddKey(curveX[curveX.length - 1]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_43 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_44 = L_43.___outCurveX_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_45 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_46 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_45);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_47 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_48 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_47);
		NullCheck(L_48);
		int32_t L_49;
		L_49 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_48, NULL);
		NullCheck(L_46);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_50;
		L_50 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_46, ((int32_t)il2cpp_codegen_subtract(L_49, 1)), NULL);
		NullCheck(L_44);
		int32_t L_51;
		L_51 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_44, L_50, NULL);
		// outCurveY.AddKey(curveY[curveY.length - 1]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_52 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53 = L_52.___outCurveY_6;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_54 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_55 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_54);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_56 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_57 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_56);
		NullCheck(L_57);
		int32_t L_58;
		L_58 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_57, NULL);
		NullCheck(L_55);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_59;
		L_59 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_55, ((int32_t)il2cpp_codegen_subtract(L_58, 1)), NULL);
		NullCheck(L_53);
		int32_t L_60;
		L_60 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_53, L_59, NULL);
		// outCurveZ.AddKey(curveZ[curveZ.length - 1]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_61 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_62 = L_61.___outCurveZ_7;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_63 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_64 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_63);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_65 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_66 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_65);
		NullCheck(L_66);
		int32_t L_67;
		L_67 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_66, NULL);
		NullCheck(L_64);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_68;
		L_68 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_64, ((int32_t)il2cpp_codegen_subtract(L_67, 1)), NULL);
		NullCheck(L_62);
		int32_t L_69;
		L_69 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_62, L_68, NULL);
		// outCurveW.AddKey(curveW[curveW.length - 1]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_70 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_71 = L_70.___outCurveW_8;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_72 = ___3_curveW;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_73 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_72);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_74 = ___3_curveW;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_75 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_74);
		NullCheck(L_75);
		int32_t L_76;
		L_76 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_75, NULL);
		NullCheck(L_73);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_77;
		L_77 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_73, ((int32_t)il2cpp_codegen_subtract(L_76, 1)), NULL);
		NullCheck(L_71);
		int32_t L_78;
		L_78 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_71, L_77, NULL);
		goto IL_01e1;
	}

IL_015c:
	{
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		V_1 = 0;
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_79 = ___5_partitionSize;
		V_2 = L_79;
		goto IL_01d4;
	}

IL_0163:
	{
		// Recurse(i, j);
		int32_t L_80 = V_1;
		int32_t L_81 = V_2;
		InputAnimation_U3COptimizeRotationCurveU3Eg__RecurseU7C72_0_m6C36F3947C8D11C736E019E9896E55CFA8A1DC68(L_80, L_81, (&V_0), NULL);
		// outCurveX.AddKey(curveX[j]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_82 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_83 = L_82.___outCurveX_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_84 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_85 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_84);
		int32_t L_86 = V_2;
		NullCheck(L_85);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_87;
		L_87 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_85, L_86, NULL);
		NullCheck(L_83);
		int32_t L_88;
		L_88 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_83, L_87, NULL);
		// outCurveY.AddKey(curveY[j]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_89 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_90 = L_89.___outCurveY_6;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_91 = ___1_curveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_92 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_91);
		int32_t L_93 = V_2;
		NullCheck(L_92);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_94;
		L_94 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_92, L_93, NULL);
		NullCheck(L_90);
		int32_t L_95;
		L_95 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_90, L_94, NULL);
		// outCurveZ.AddKey(curveZ[j]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_96 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_97 = L_96.___outCurveZ_7;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_98 = ___2_curveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_99 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_98);
		int32_t L_100 = V_2;
		NullCheck(L_99);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_101;
		L_101 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_99, L_100, NULL);
		NullCheck(L_97);
		int32_t L_102;
		L_102 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_97, L_101, NULL);
		// outCurveW.AddKey(curveW[j]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_103 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_104 = L_103.___outCurveW_8;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_105 = ___3_curveW;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_106 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_105);
		int32_t L_107 = V_2;
		NullCheck(L_106);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_108;
		L_108 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_106, L_107, NULL);
		NullCheck(L_104);
		int32_t L_109;
		L_109 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_104, L_108, NULL);
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_110 = V_1;
		int32_t L_111 = ___5_partitionSize;
		V_1 = ((int32_t)il2cpp_codegen_add(L_110, L_111));
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_112 = V_2;
		int32_t L_113 = ___5_partitionSize;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_114 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_115 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_114);
		NullCheck(L_115);
		int32_t L_116;
		L_116 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_115, NULL);
		int32_t L_117;
		L_117 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_add(L_112, L_113)), ((int32_t)il2cpp_codegen_subtract(L_116, 1)), NULL);
		V_2 = L_117;
	}

IL_01d4:
	{
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_118 = V_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_119 = ___0_curveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_120 = *((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)L_119);
		NullCheck(L_120);
		int32_t L_121;
		L_121 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_120, NULL);
		int32_t L_122 = ___5_partitionSize;
		if ((((int32_t)L_118) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_121, L_122)))))
		{
			goto IL_0163;
		}
	}

IL_01e1:
	{
		// curveX = outCurveX;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_123 = ___0_curveX;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_124 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_125 = L_124.___outCurveX_5;
		*((RuntimeObject**)L_123) = (RuntimeObject*)L_125;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_123, (void*)(RuntimeObject*)L_125);
		// curveY = outCurveY;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_126 = ___1_curveY;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_127 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_128 = L_127.___outCurveY_6;
		*((RuntimeObject**)L_126) = (RuntimeObject*)L_128;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_126, (void*)(RuntimeObject*)L_128);
		// curveZ = outCurveZ;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_129 = ___2_curveZ;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_130 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_131 = L_130.___outCurveZ_7;
		*((RuntimeObject**)L_129) = (RuntimeObject*)L_131;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_129, (void*)(RuntimeObject*)L_131);
		// curveW = outCurveW;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_132 = ___3_curveW;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5 L_133 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_134 = L_133.___outCurveW_8;
		*((RuntimeObject**)L_132) = (RuntimeObject*)L_134;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_132, (void*)(RuntimeObject*)L_134);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<FromRecordingBuffer>g__AddBoolKeyIfChanged|47_0(UnityEngine.AnimationCurve,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3CFromRecordingBufferU3Eg__AddBoolKeyIfChangedU7C47_0_m593D76A92A44D98C1DA06A578FBAB04AE87ECB4F (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_curve, float ___1_time, bool ___2_value, const RuntimeMethod* method) 
{
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (curve.length > 0 && (curve[curve.length - 1].value > 0.5f) == value)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_curve;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = ___0_curve;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___0_curve;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_3, NULL);
		NullCheck(L_2);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_5;
		L_5 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		V_0 = L_5;
		float L_6;
		L_6 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_0), NULL);
		bool L_7 = ___2_value;
		if ((!(((uint32_t)((((float)L_6) > ((float)(0.5f)))? 1 : 0)) == ((uint32_t)L_7))))
		{
			goto IL_002a;
		}
	}
	{
		// return;
		return;
	}

IL_002a:
	{
		// AddBoolKey(curve, time, value);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = ___0_curve;
		float L_9 = ___1_time;
		bool L_10 = ___2_value;
		InputAnimation_AddBoolKey_mFBE31F951D8047E9ABC451A5CB6F5F1180380F91(L_8, L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<FromRecordingBuffer>g__AddJointPoseKeys|47_1(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3CFromRecordingBufferU3Eg__AddJointPoseKeysU7C47_1_m2E87393309B7F8EB3CCB29D90B1DDD577E3AD747 (Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* ___0_jointCurves, Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* ___1_poses, int32_t ___2_joint, float ___3_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0C1DF55F3888C9C027CAC996F82F6B3D88D2EE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5BA3B1495D7A52D723E805C6272917A762BFF71B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* V_1 = NULL;
	{
		// if (!poses.TryGetValue(joint, out var pose))
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_0 = ___1_poses;
		int32_t L_1 = ___2_joint;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m5BA3B1495D7A52D723E805C6272917A762BFF71B(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m5BA3B1495D7A52D723E805C6272917A762BFF71B_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// if (!jointCurves.TryGetValue(joint, out var curves))
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_3 = ___0_jointCurves;
		int32_t L_4 = ___2_joint;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF(L_3, L_4, (&V_1), Dictionary_2_TryGetValue_mDDB3139DFF31956F023EF640A823634051E50ACF_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_6 = (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC*)il2cpp_codegen_object_new(PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		PoseCurves__ctor_m2831E8283F32745F844C57C074BC9D1760E377CB(L_6, NULL);
		V_1 = L_6;
		// jointCurves.Add(joint, curves);
		Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_7 = ___0_jointCurves;
		int32_t L_8 = ___2_joint;
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_9 = V_1;
		NullCheck(L_7);
		Dictionary_2_Add_m0C1DF55F3888C9C027CAC996F82F6B3D88D2EE83(L_7, L_8, L_9, Dictionary_2_Add_m0C1DF55F3888C9C027CAC996F82F6B3D88D2EE83_RuntimeMethod_var);
	}

IL_0025:
	{
		// curves.AddKey(time, pose);
		PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_10 = V_1;
		float L_11 = ___3_time;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_12 = V_0;
		NullCheck(L_10);
		PoseCurves_AddKey_mE9EEF598B4AAC81AD36755080BB78DAD8CCE534A(L_10, L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<OptimizePositionCurve>g__Recurse|70_0(System.Int32,System.Int32,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass70_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3COptimizePositionCurveU3Eg__RecurseU7C70_0_m1F8F94AF192E54E3F05BC8E27E7EEF08F0AFD1FC (int32_t ___0_start, int32_t ___1_end, U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* ___2_p, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// if (start + 1 >= end - 1)
		int32_t L_0 = ___0_start;
		int32_t L_1 = ___1_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, 1)))))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// int bestIndex = -1;
		V_0 = (-1);
		// float bestDistance = 0f;
		V_1 = (0.0f);
		// float startTime = inCurveX[start].time;
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_2 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = L_2->___inCurveX_0;
		int32_t L_4 = ___0_start;
		NullCheck(L_3);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_5;
		L_5 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_3, L_4, NULL);
		V_6 = L_5;
		float L_6;
		L_6 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_6), NULL);
		V_2 = L_6;
		// float endTime = inCurveX[end].time;
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_7 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = L_7->___inCurveX_0;
		int32_t L_9 = ___1_end;
		NullCheck(L_8);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_10;
		L_10 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_8, L_9, NULL);
		V_6 = L_10;
		float L_11;
		L_11 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_6), NULL);
		V_3 = L_11;
		// var startPosition = new Vector3(inCurveX[start].value, inCurveY[start].value, inCurveZ[start].value);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_12 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_13 = L_12->___inCurveX_0;
		int32_t L_14 = ___0_start;
		NullCheck(L_13);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_15;
		L_15 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_13, L_14, NULL);
		V_6 = L_15;
		float L_16;
		L_16 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_17 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_18 = L_17->___inCurveY_1;
		int32_t L_19 = ___0_start;
		NullCheck(L_18);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_20;
		L_20 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_18, L_19, NULL);
		V_6 = L_20;
		float L_21;
		L_21 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_22 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_23 = L_22->___inCurveZ_2;
		int32_t L_24 = ___0_start;
		NullCheck(L_23);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_25;
		L_25 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_23, L_24, NULL);
		V_6 = L_25;
		float L_26;
		L_26 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_4), L_16, L_21, L_26, NULL);
		// var endPosition = new Vector3(inCurveX[end].value, inCurveY[end].value, inCurveZ[end].value);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_27 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_28 = L_27->___inCurveX_0;
		int32_t L_29 = ___1_end;
		NullCheck(L_28);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_30;
		L_30 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_28, L_29, NULL);
		V_6 = L_30;
		float L_31;
		L_31 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_32 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_33 = L_32->___inCurveY_1;
		int32_t L_34 = ___1_end;
		NullCheck(L_33);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_35;
		L_35 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_33, L_34, NULL);
		V_6 = L_35;
		float L_36;
		L_36 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_37 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38 = L_37->___inCurveZ_2;
		int32_t L_39 = ___1_end;
		NullCheck(L_38);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_40;
		L_40 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_38, L_39, NULL);
		V_6 = L_40;
		float L_41;
		L_41 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), L_31, L_36, L_41, NULL);
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_42 = ___0_start;
		V_7 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		goto IL_0165;
	}

IL_00d3:
	{
		// var position = new Vector3(inCurveX[i].value, inCurveY[i].value, inCurveZ[i].value);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_43 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_44 = L_43->___inCurveX_0;
		int32_t L_45 = V_7;
		NullCheck(L_44);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_46;
		L_46 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_44, L_45, NULL);
		V_6 = L_46;
		float L_47;
		L_47 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_48 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_49 = L_48->___inCurveY_1;
		int32_t L_50 = V_7;
		NullCheck(L_49);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_51;
		L_51 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_49, L_50, NULL);
		V_6 = L_51;
		float L_52;
		L_52 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_53 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54 = L_53->___inCurveZ_2;
		int32_t L_55 = V_7;
		NullCheck(L_54);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_56;
		L_56 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_54, L_55, NULL);
		V_6 = L_56;
		float L_57;
		L_57 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), L_47, L_52, L_57, /*hidden argument*/NULL);
		// var interp = Vector3.Lerp(startPosition, endPosition, Mathf.InverseLerp(startTime, endTime, inCurveX[i].time));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_5;
		float L_61 = V_2;
		float L_62 = V_3;
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_63 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_64 = L_63->___inCurveX_0;
		int32_t L_65 = V_7;
		NullCheck(L_64);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_66;
		L_66 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_64, L_65, NULL);
		V_6 = L_66;
		float L_67;
		L_67 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_6), NULL);
		float L_68;
		L_68 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(L_61, L_62, L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_59, L_60, L_68, NULL);
		V_8 = L_69;
		// float distance = (position - interp).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_58, L_70, NULL);
		V_10 = L_71;
		float L_72;
		L_72 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_10), NULL);
		V_9 = L_72;
		// if (distance > bestDistance)
		float L_73 = V_9;
		float L_74 = V_1;
		if ((!(((float)L_73) > ((float)L_74))))
		{
			goto IL_015f;
		}
	}
	{
		// bestIndex = i;
		int32_t L_75 = V_7;
		V_0 = L_75;
		// bestDistance = distance;
		float L_76 = V_9;
		V_1 = L_76;
	}

IL_015f:
	{
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_77 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0165:
	{
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_78 = V_7;
		int32_t L_79 = ___1_end;
		if ((((int32_t)L_78) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_79, 1)))))
		{
			goto IL_00d3;
		}
	}
	{
		// if (bestDistance < sqrThreshold || bestIndex < 0)
		float L_80 = V_1;
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_81 = ___2_p;
		float L_82 = L_81->___sqrThreshold_3;
		if ((((float)L_80) < ((float)L_82)))
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_83 = V_0;
		if ((((int32_t)L_83) >= ((int32_t)0)))
		{
			goto IL_017d;
		}
	}

IL_017c:
	{
		// return;
		return;
	}

IL_017d:
	{
		// outCurveX.AddKey(inCurveX[bestIndex]);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_84 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_85 = L_84->___outCurveX_4;
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_86 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_87 = L_86->___inCurveX_0;
		int32_t L_88 = V_0;
		NullCheck(L_87);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_89;
		L_89 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_87, L_88, NULL);
		NullCheck(L_85);
		int32_t L_90;
		L_90 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_85, L_89, NULL);
		// outCurveY.AddKey(inCurveY[bestIndex]);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_91 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_92 = L_91->___outCurveY_5;
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_93 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_94 = L_93->___inCurveY_1;
		int32_t L_95 = V_0;
		NullCheck(L_94);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_96;
		L_96 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_94, L_95, NULL);
		NullCheck(L_92);
		int32_t L_97;
		L_97 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_92, L_96, NULL);
		// outCurveZ.AddKey(inCurveZ[bestIndex]);
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_98 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_99 = L_98->___outCurveZ_6;
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_100 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_101 = L_100->___inCurveZ_2;
		int32_t L_102 = V_0;
		NullCheck(L_101);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_103;
		L_103 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_101, L_102, NULL);
		NullCheck(L_99);
		int32_t L_104;
		L_104 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_99, L_103, NULL);
		// Recurse(start, bestIndex);
		int32_t L_105 = ___0_start;
		int32_t L_106 = V_0;
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_107 = ___2_p;
		InputAnimation_U3COptimizePositionCurveU3Eg__RecurseU7C70_0_m1F8F94AF192E54E3F05BC8E27E7EEF08F0AFD1FC(L_105, L_106, L_107, NULL);
		// Recurse(bestIndex, end);
		int32_t L_108 = V_0;
		int32_t L_109 = ___1_end;
		U3CU3Ec__DisplayClass70_0_t6DDBB8667082DF5581302F9785DA190E77FD7CD2* L_110 = ___2_p;
		InputAnimation_U3COptimizePositionCurveU3Eg__RecurseU7C70_0_m1F8F94AF192E54E3F05BC8E27E7EEF08F0AFD1FC(L_108, L_109, L_110, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<OptimizeDirectionCurve>g__Recurse|71_0(System.Int32,System.Int32,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3COptimizeDirectionCurveU3Eg__RecurseU7C71_0_mF662FE3A803F0664E9831B96E6456FDDF7CBBC41 (int32_t ___0_start, int32_t ___1_end, U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* ___2_p, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// if (start + 1 >= end - 1)
		int32_t L_0 = ___0_start;
		int32_t L_1 = ___1_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, 1)))))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// int bestIndex = -1;
		V_0 = (-1);
		// float bestDot = 1f;
		V_1 = (1.0f);
		// float startTime = inCurveX[start].time;
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_2 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = L_2->___inCurveX_0;
		int32_t L_4 = ___0_start;
		NullCheck(L_3);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_5;
		L_5 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_3, L_4, NULL);
		V_6 = L_5;
		float L_6;
		L_6 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_6), NULL);
		V_2 = L_6;
		// float endTime = inCurveX[end].time;
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_7 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = L_7->___inCurveX_0;
		int32_t L_9 = ___1_end;
		NullCheck(L_8);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_10;
		L_10 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_8, L_9, NULL);
		V_6 = L_10;
		float L_11;
		L_11 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_6), NULL);
		V_3 = L_11;
		// var startPosition = new Vector3(inCurveX[start].value, inCurveY[start].value, inCurveZ[start].value);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_12 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_13 = L_12->___inCurveX_0;
		int32_t L_14 = ___0_start;
		NullCheck(L_13);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_15;
		L_15 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_13, L_14, NULL);
		V_6 = L_15;
		float L_16;
		L_16 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_17 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_18 = L_17->___inCurveY_1;
		int32_t L_19 = ___0_start;
		NullCheck(L_18);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_20;
		L_20 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_18, L_19, NULL);
		V_6 = L_20;
		float L_21;
		L_21 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_22 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_23 = L_22->___inCurveZ_2;
		int32_t L_24 = ___0_start;
		NullCheck(L_23);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_25;
		L_25 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_23, L_24, NULL);
		V_6 = L_25;
		float L_26;
		L_26 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_4), L_16, L_21, L_26, NULL);
		// var endPosition = new Vector3(inCurveX[end].value, inCurveY[end].value, inCurveZ[end].value);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_27 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_28 = L_27->___inCurveX_0;
		int32_t L_29 = ___1_end;
		NullCheck(L_28);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_30;
		L_30 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_28, L_29, NULL);
		V_6 = L_30;
		float L_31;
		L_31 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_32 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_33 = L_32->___inCurveY_1;
		int32_t L_34 = ___1_end;
		NullCheck(L_33);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_35;
		L_35 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_33, L_34, NULL);
		V_6 = L_35;
		float L_36;
		L_36 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_37 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_38 = L_37->___inCurveZ_2;
		int32_t L_39 = ___1_end;
		NullCheck(L_38);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_40;
		L_40 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_38, L_39, NULL);
		V_6 = L_40;
		float L_41;
		L_41 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), L_31, L_36, L_41, NULL);
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_42 = ___0_start;
		V_7 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		goto IL_0165;
	}

IL_00d3:
	{
		// var position = new Vector3(inCurveX[i].value, inCurveY[i].value, inCurveZ[i].value);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_43 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_44 = L_43->___inCurveX_0;
		int32_t L_45 = V_7;
		NullCheck(L_44);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_46;
		L_46 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_44, L_45, NULL);
		V_6 = L_46;
		float L_47;
		L_47 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_48 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_49 = L_48->___inCurveY_1;
		int32_t L_50 = V_7;
		NullCheck(L_49);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_51;
		L_51 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_49, L_50, NULL);
		V_6 = L_51;
		float L_52;
		L_52 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_53 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_54 = L_53->___inCurveZ_2;
		int32_t L_55 = V_7;
		NullCheck(L_54);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_56;
		L_56 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_54, L_55, NULL);
		V_6 = L_56;
		float L_57;
		L_57 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), L_47, L_52, L_57, /*hidden argument*/NULL);
		// var interp = Vector3.Lerp(startPosition, endPosition, Mathf.InverseLerp(startTime, endTime, inCurveX[i].time)).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_5;
		float L_61 = V_2;
		float L_62 = V_3;
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_63 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_64 = L_63->___inCurveX_0;
		int32_t L_65 = V_7;
		NullCheck(L_64);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_66;
		L_66 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_64, L_65, NULL);
		V_6 = L_66;
		float L_67;
		L_67 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_6), NULL);
		float L_68;
		L_68 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(L_61, L_62, L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_59, L_60, L_68, NULL);
		V_10 = L_69;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_10), NULL);
		V_8 = L_70;
		// float dot = Vector3.Dot(position, interp);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_8;
		float L_72;
		L_72 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_58, L_71, NULL);
		V_9 = L_72;
		// if (dot < bestDot)
		float L_73 = V_9;
		float L_74 = V_1;
		if ((!(((float)L_73) < ((float)L_74))))
		{
			goto IL_015f;
		}
	}
	{
		// bestIndex = i;
		int32_t L_75 = V_7;
		V_0 = L_75;
		// bestDot = dot;
		float L_76 = V_9;
		V_1 = L_76;
	}

IL_015f:
	{
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_77 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0165:
	{
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_78 = V_7;
		int32_t L_79 = ___1_end;
		if ((((int32_t)L_78) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_79, 1)))))
		{
			goto IL_00d3;
		}
	}
	{
		// if (bestDot > cosThreshold || bestIndex < 0)
		float L_80 = V_1;
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_81 = ___2_p;
		float L_82 = L_81->___cosThreshold_3;
		if ((((float)L_80) > ((float)L_82)))
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_83 = V_0;
		if ((((int32_t)L_83) >= ((int32_t)0)))
		{
			goto IL_017d;
		}
	}

IL_017c:
	{
		// return;
		return;
	}

IL_017d:
	{
		// outCurveX.AddKey(inCurveX[bestIndex]);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_84 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_85 = L_84->___outCurveX_4;
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_86 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_87 = L_86->___inCurveX_0;
		int32_t L_88 = V_0;
		NullCheck(L_87);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_89;
		L_89 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_87, L_88, NULL);
		NullCheck(L_85);
		int32_t L_90;
		L_90 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_85, L_89, NULL);
		// outCurveY.AddKey(inCurveY[bestIndex]);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_91 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_92 = L_91->___outCurveY_5;
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_93 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_94 = L_93->___inCurveY_1;
		int32_t L_95 = V_0;
		NullCheck(L_94);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_96;
		L_96 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_94, L_95, NULL);
		NullCheck(L_92);
		int32_t L_97;
		L_97 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_92, L_96, NULL);
		// outCurveZ.AddKey(inCurveZ[bestIndex]);
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_98 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_99 = L_98->___outCurveZ_6;
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_100 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_101 = L_100->___inCurveZ_2;
		int32_t L_102 = V_0;
		NullCheck(L_101);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_103;
		L_103 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_101, L_102, NULL);
		NullCheck(L_99);
		int32_t L_104;
		L_104 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_99, L_103, NULL);
		// Recurse(start, bestIndex);
		int32_t L_105 = ___0_start;
		int32_t L_106 = V_0;
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_107 = ___2_p;
		InputAnimation_U3COptimizeDirectionCurveU3Eg__RecurseU7C71_0_mF662FE3A803F0664E9831B96E6456FDDF7CBBC41(L_105, L_106, L_107, NULL);
		// Recurse(bestIndex, end);
		int32_t L_108 = V_0;
		int32_t L_109 = ___1_end;
		U3CU3Ec__DisplayClass71_0_t06351C86162FA1B4497117675F31599A32E64DE4* L_110 = ___2_p;
		InputAnimation_U3COptimizeDirectionCurveU3Eg__RecurseU7C71_0_mF662FE3A803F0664E9831B96E6456FDDF7CBBC41(L_108, L_109, L_110, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<OptimizeRotationCurve>g__Recurse|72_0(System.Int32,System.Int32,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3COptimizeRotationCurveU3Eg__RecurseU7C72_0_m6C36F3947C8D11C736E019E9896E55CFA8A1DC68 (int32_t ___0_start, int32_t ___1_end, U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* ___2_p, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	{
		// if (start + 1 >= end - 1)
		int32_t L_0 = ___0_start;
		int32_t L_1 = ___1_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, 1)))))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// int bestIndex = -1;
		V_0 = (-1);
		// float bestDot = 1f;
		V_1 = (1.0f);
		// float startTime = inCurveX[start].time;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_2 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = L_2->___inCurveX_0;
		int32_t L_4 = ___0_start;
		NullCheck(L_3);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_5;
		L_5 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_3, L_4, NULL);
		V_6 = L_5;
		float L_6;
		L_6 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_6), NULL);
		V_2 = L_6;
		// float endTime = inCurveX[end].time;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_7 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = L_7->___inCurveX_0;
		int32_t L_9 = ___1_end;
		NullCheck(L_8);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_10;
		L_10 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_8, L_9, NULL);
		V_6 = L_10;
		float L_11;
		L_11 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_6), NULL);
		V_3 = L_11;
		// var startRotation = new Quaternion(inCurveX[start].value, inCurveY[start].value, inCurveZ[start].value, inCurveW[start].value).normalized;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_12 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_13 = L_12->___inCurveX_0;
		int32_t L_14 = ___0_start;
		NullCheck(L_13);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_15;
		L_15 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_13, L_14, NULL);
		V_6 = L_15;
		float L_16;
		L_16 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_17 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_18 = L_17->___inCurveY_1;
		int32_t L_19 = ___0_start;
		NullCheck(L_18);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_20;
		L_20 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_18, L_19, NULL);
		V_6 = L_20;
		float L_21;
		L_21 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_22 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_23 = L_22->___inCurveZ_2;
		int32_t L_24 = ___0_start;
		NullCheck(L_23);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_25;
		L_25 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_23, L_24, NULL);
		V_6 = L_25;
		float L_26;
		L_26 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_27 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_28 = L_27->___inCurveW_3;
		int32_t L_29 = ___0_start;
		NullCheck(L_28);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_30;
		L_30 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_28, L_29, NULL);
		V_6 = L_30;
		float L_31;
		L_31 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_32), L_16, L_21, L_26, L_31, /*hidden argument*/NULL);
		V_7 = L_32;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_get_normalized_m08AB963B13A0EC6F540A29886C5ACFCCCC0A6D16_inline((&V_7), NULL);
		V_4 = L_33;
		// var endRotation = new Quaternion(inCurveX[end].value, inCurveY[end].value, inCurveZ[end].value, inCurveW[end].value).normalized;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_34 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_35 = L_34->___inCurveX_0;
		int32_t L_36 = ___1_end;
		NullCheck(L_35);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_37;
		L_37 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_35, L_36, NULL);
		V_6 = L_37;
		float L_38;
		L_38 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_39 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40 = L_39->___inCurveY_1;
		int32_t L_41 = ___1_end;
		NullCheck(L_40);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_42;
		L_42 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_40, L_41, NULL);
		V_6 = L_42;
		float L_43;
		L_43 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_44 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_45 = L_44->___inCurveZ_2;
		int32_t L_46 = ___1_end;
		NullCheck(L_45);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_47;
		L_47 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_45, L_46, NULL);
		V_6 = L_47;
		float L_48;
		L_48 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_49 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_50 = L_49->___inCurveW_3;
		int32_t L_51 = ___1_end;
		NullCheck(L_50);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_52;
		L_52 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_50, L_51, NULL);
		V_6 = L_52;
		float L_53;
		L_53 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_54), L_38, L_43, L_48, L_53, /*hidden argument*/NULL);
		V_7 = L_54;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Quaternion_get_normalized_m08AB963B13A0EC6F540A29886C5ACFCCCC0A6D16_inline((&V_7), NULL);
		V_5 = L_55;
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_56 = ___0_start;
		V_8 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_01b7;
	}

IL_010f:
	{
		// var rotation = new Quaternion(inCurveX[i].value, inCurveY[i].value, inCurveZ[i].value, inCurveW[i].value).normalized;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_57 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_58 = L_57->___inCurveX_0;
		int32_t L_59 = V_8;
		NullCheck(L_58);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_60;
		L_60 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_58, L_59, NULL);
		V_6 = L_60;
		float L_61;
		L_61 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_62 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_63 = L_62->___inCurveY_1;
		int32_t L_64 = V_8;
		NullCheck(L_63);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_65;
		L_65 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_63, L_64, NULL);
		V_6 = L_65;
		float L_66;
		L_66 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_67 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_68 = L_67->___inCurveZ_2;
		int32_t L_69 = V_8;
		NullCheck(L_68);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_70;
		L_70 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_68, L_69, NULL);
		V_6 = L_70;
		float L_71;
		L_71 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_72 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_73 = L_72->___inCurveW_3;
		int32_t L_74 = V_8;
		NullCheck(L_73);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_75;
		L_75 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_73, L_74, NULL);
		V_6 = L_75;
		float L_76;
		L_76 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_6), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_77), L_61, L_66, L_71, L_76, /*hidden argument*/NULL);
		V_7 = L_77;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_78;
		L_78 = Quaternion_get_normalized_m08AB963B13A0EC6F540A29886C5ACFCCCC0A6D16_inline((&V_7), NULL);
		// var interp = Quaternion.Lerp(startRotation, endRotation, Mathf.InverseLerp(startTime, endTime, inCurveX[i].time));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_79 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_80 = V_5;
		float L_81 = V_2;
		float L_82 = V_3;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_83 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_84 = L_83->___inCurveX_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_86;
		L_86 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_84, L_85, NULL);
		V_6 = L_86;
		float L_87;
		L_87 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_6), NULL);
		float L_88;
		L_88 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(L_81, L_82, L_87, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_89;
		L_89 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_79, L_80, L_88, NULL);
		V_9 = L_89;
		// float dot = Quaternion.Dot(rotation, interp);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_90 = V_9;
		float L_91;
		L_91 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_78, L_90, NULL);
		V_10 = L_91;
		// if (dot < bestDot)
		float L_92 = V_10;
		float L_93 = V_1;
		if ((!(((float)L_92) < ((float)L_93))))
		{
			goto IL_01b1;
		}
	}
	{
		// bestIndex = i;
		int32_t L_94 = V_8;
		V_0 = L_94;
		// bestDot = dot;
		float L_95 = V_10;
		V_1 = L_95;
	}

IL_01b1:
	{
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_96 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_01b7:
	{
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_97 = V_8;
		int32_t L_98 = ___1_end;
		if ((((int32_t)L_97) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_98, 1)))))
		{
			goto IL_010f;
		}
	}
	{
		// if (bestDot > compThreshold || bestIndex < 0)
		float L_99 = V_1;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_100 = ___2_p;
		float L_101 = L_100->___compThreshold_4;
		if ((((float)L_99) > ((float)L_101)))
		{
			goto IL_01ce;
		}
	}
	{
		int32_t L_102 = V_0;
		if ((((int32_t)L_102) >= ((int32_t)0)))
		{
			goto IL_01cf;
		}
	}

IL_01ce:
	{
		// return;
		return;
	}

IL_01cf:
	{
		// outCurveX.AddKey(inCurveX[bestIndex]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_103 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_104 = L_103->___outCurveX_5;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_105 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_106 = L_105->___inCurveX_0;
		int32_t L_107 = V_0;
		NullCheck(L_106);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_108;
		L_108 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_106, L_107, NULL);
		NullCheck(L_104);
		int32_t L_109;
		L_109 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_104, L_108, NULL);
		// outCurveY.AddKey(inCurveY[bestIndex]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_110 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_111 = L_110->___outCurveY_6;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_112 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_113 = L_112->___inCurveY_1;
		int32_t L_114 = V_0;
		NullCheck(L_113);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_115;
		L_115 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_113, L_114, NULL);
		NullCheck(L_111);
		int32_t L_116;
		L_116 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_111, L_115, NULL);
		// outCurveZ.AddKey(inCurveZ[bestIndex]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_117 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_118 = L_117->___outCurveZ_7;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_119 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_120 = L_119->___inCurveZ_2;
		int32_t L_121 = V_0;
		NullCheck(L_120);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_122;
		L_122 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_120, L_121, NULL);
		NullCheck(L_118);
		int32_t L_123;
		L_123 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_118, L_122, NULL);
		// outCurveW.AddKey(inCurveW[bestIndex]);
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_124 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_125 = L_124->___outCurveW_8;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_126 = ___2_p;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_127 = L_126->___inCurveW_3;
		int32_t L_128 = V_0;
		NullCheck(L_127);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_129;
		L_129 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_127, L_128, NULL);
		NullCheck(L_125);
		int32_t L_130;
		L_130 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_125, L_129, NULL);
		// Recurse(start, bestIndex);
		int32_t L_131 = ___0_start;
		int32_t L_132 = V_0;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_133 = ___2_p;
		InputAnimation_U3COptimizeRotationCurveU3Eg__RecurseU7C72_0_m6C36F3947C8D11C736E019E9896E55CFA8A1DC68(L_131, L_132, L_133, NULL);
		// Recurse(bestIndex, end);
		int32_t L_134 = V_0;
		int32_t L_135 = ___1_end;
		U3CU3Ec__DisplayClass72_0_t8D17E932D55E3F1DC3F327F447853B160BD346F5* L_136 = ___2_p;
		InputAnimation_U3COptimizeRotationCurveU3Eg__RecurseU7C72_0_m6C36F3947C8D11C736E019E9896E55CFA8A1DC68(L_134, L_135, L_136, NULL);
		// }
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::AddKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves_AddKey_mE9EEF598B4AAC81AD36755080BB78DAD8CCE534A (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* __this, float ___0_time, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___1_pose, const RuntimeMethod* method) 
{
	{
		// AddFloatKey(PositionX, time, pose.Position.x);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___PositionX_0;
		float L_1 = ___0_time;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = MixedRealityPose_get_Position_mDF63DBEBBB8B0979C9CA6F06902F9281C26ACA81_inline((&___1_pose), NULL);
		float L_3 = L_2.___x_2;
		InputAnimation_AddFloatKey_mBC34966D90F5DED5B397284BA2D88254C0E1E795(L_0, L_1, L_3, NULL);
		// AddFloatKey(PositionY, time, pose.Position.y);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = __this->___PositionY_1;
		float L_5 = ___0_time;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = MixedRealityPose_get_Position_mDF63DBEBBB8B0979C9CA6F06902F9281C26ACA81_inline((&___1_pose), NULL);
		float L_7 = L_6.___y_3;
		InputAnimation_AddFloatKey_mBC34966D90F5DED5B397284BA2D88254C0E1E795(L_4, L_5, L_7, NULL);
		// AddFloatKey(PositionZ, time, pose.Position.z);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = __this->___PositionZ_2;
		float L_9 = ___0_time;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = MixedRealityPose_get_Position_mDF63DBEBBB8B0979C9CA6F06902F9281C26ACA81_inline((&___1_pose), NULL);
		float L_11 = L_10.___z_4;
		InputAnimation_AddFloatKey_mBC34966D90F5DED5B397284BA2D88254C0E1E795(L_8, L_9, L_11, NULL);
		// AddFloatKey(RotationX, time, pose.Rotation.x);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = __this->___RotationX_3;
		float L_13 = ___0_time;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = MixedRealityPose_get_Rotation_m1DBCD393A804A4C08ABAF7A867B98CDB3F277D79_inline((&___1_pose), NULL);
		float L_15 = L_14.___x_0;
		InputAnimation_AddFloatKey_mBC34966D90F5DED5B397284BA2D88254C0E1E795(L_12, L_13, L_15, NULL);
		// AddFloatKey(RotationY, time, pose.Rotation.y);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_16 = __this->___RotationY_4;
		float L_17 = ___0_time;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = MixedRealityPose_get_Rotation_m1DBCD393A804A4C08ABAF7A867B98CDB3F277D79_inline((&___1_pose), NULL);
		float L_19 = L_18.___y_1;
		InputAnimation_AddFloatKey_mBC34966D90F5DED5B397284BA2D88254C0E1E795(L_16, L_17, L_19, NULL);
		// AddFloatKey(RotationZ, time, pose.Rotation.z);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_20 = __this->___RotationZ_5;
		float L_21 = ___0_time;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = MixedRealityPose_get_Rotation_m1DBCD393A804A4C08ABAF7A867B98CDB3F277D79_inline((&___1_pose), NULL);
		float L_23 = L_22.___z_2;
		InputAnimation_AddFloatKey_mBC34966D90F5DED5B397284BA2D88254C0E1E795(L_20, L_21, L_23, NULL);
		// AddFloatKey(RotationW, time, pose.Rotation.w);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_24 = __this->___RotationW_6;
		float L_25 = ___0_time;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = MixedRealityPose_get_Rotation_m1DBCD393A804A4C08ABAF7A867B98CDB3F277D79_inline((&___1_pose), NULL);
		float L_27 = L_26.___w_3;
		InputAnimation_AddFloatKey_mBC34966D90F5DED5B397284BA2D88254C0E1E795(L_24, L_25, L_27, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::Optimize(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves_Optimize_mB804C5C729CD721ADB792D2FD75A8618C023959A (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* __this, float ___0_positionThreshold, float ___1_rotationThreshold, int32_t ___2_partitionSize, const RuntimeMethod* method) 
{
	{
		// OptimizePositionCurve(ref PositionX, ref PositionY, ref PositionZ, positionThreshold, partitionSize);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_0 = (&__this->___PositionX_0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_1 = (&__this->___PositionY_1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_2 = (&__this->___PositionZ_2);
		float L_3 = ___0_positionThreshold;
		int32_t L_4 = ___2_partitionSize;
		InputAnimation_OptimizePositionCurve_mA10CA6599D5067ABDE8589DC57B3442B915AAF22(L_0, L_1, L_2, L_3, L_4, NULL);
		// OptimizeRotationCurve(ref RotationX, ref RotationY, ref RotationZ, ref RotationW, rotationThreshold, partitionSize);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_5 = (&__this->___RotationX_3);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_6 = (&__this->___RotationY_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_7 = (&__this->___RotationZ_5);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_8 = (&__this->___RotationW_6);
		float L_9 = ___1_rotationThreshold;
		int32_t L_10 = ___2_partitionSize;
		InputAnimation_OptimizeRotationCurve_m9C4B502A24F47A02DEFC7829BCF58E2B87F67F87(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 PoseCurves_Evaluate_m19786E8FFC1D7B69EB05A77021E734E2983651F9 (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* __this, float ___0_time, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// float px = PositionX.Evaluate(time);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___PositionX_0;
		float L_1 = ___0_time;
		NullCheck(L_0);
		float L_2;
		L_2 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_0, L_1, NULL);
		V_0 = L_2;
		// float py = PositionY.Evaluate(time);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = __this->___PositionY_1;
		float L_4 = ___0_time;
		NullCheck(L_3);
		float L_5;
		L_5 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_3, L_4, NULL);
		V_1 = L_5;
		// float pz = PositionZ.Evaluate(time);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = __this->___PositionZ_2;
		float L_7 = ___0_time;
		NullCheck(L_6);
		float L_8;
		L_8 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_6, L_7, NULL);
		V_2 = L_8;
		// float rx = RotationX.Evaluate(time);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = __this->___RotationX_3;
		float L_10 = ___0_time;
		NullCheck(L_9);
		float L_11;
		L_11 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_9, L_10, NULL);
		V_3 = L_11;
		// float ry = RotationY.Evaluate(time);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = __this->___RotationY_4;
		float L_13 = ___0_time;
		NullCheck(L_12);
		float L_14;
		L_14 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_12, L_13, NULL);
		V_4 = L_14;
		// float rz = RotationZ.Evaluate(time);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_15 = __this->___RotationZ_5;
		float L_16 = ___0_time;
		NullCheck(L_15);
		float L_17;
		L_17 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_15, L_16, NULL);
		V_5 = L_17;
		// float rw = RotationW.Evaluate(time);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_18 = __this->___RotationW_6;
		float L_19 = ___0_time;
		NullCheck(L_18);
		float L_20;
		L_20 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_18, L_19, NULL);
		V_6 = L_20;
		// var pose = new MixedRealityPose();
		il2cpp_codegen_initobj((&V_7), sizeof(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5));
		// pose.Position = new Vector3(px, py, pz);
		float L_21 = V_0;
		float L_22 = V_1;
		float L_23 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_21, L_22, L_23, /*hidden argument*/NULL);
		MixedRealityPose_set_Position_m9806379126B288614A363F39705935CA0D86888C_inline((&V_7), L_24, NULL);
		// pose.Rotation = new Quaternion(rx, ry, rz, rw);
		float L_25 = V_3;
		float L_26 = V_4;
		float L_27 = V_5;
		float L_28 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_29), L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
		MixedRealityPose_set_Rotation_m090951B4A308155032C377FF0AE6BED025C39868_inline((&V_7), L_29, NULL);
		// pose.Rotation.Normalize();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = MixedRealityPose_get_Rotation_m1DBCD393A804A4C08ABAF7A867B98CDB3F277D79_inline((&V_7), NULL);
		V_8 = L_30;
		Quaternion_Normalize_m0CB5FAED5332234E3F6267F5A4C99B6A6A79CBE1_inline((&V_8), NULL);
		// return pose;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_31 = V_7;
		return L_31;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves__ctor_m2831E8283F32745F844C57C074BC9D1760E377CB (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve PositionX = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_0, NULL);
		__this->___PositionX_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PositionX_0), (void*)L_0);
		// public AnimationCurve PositionY = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_1, NULL);
		__this->___PositionY_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PositionY_1), (void*)L_1);
		// public AnimationCurve PositionZ = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_2, NULL);
		__this->___PositionZ_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PositionZ_2), (void*)L_2);
		// public AnimationCurve RotationX = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_3, NULL);
		__this->___RotationX_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RotationX_3), (void*)L_3);
		// public AnimationCurve RotationY = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_4, NULL);
		__this->___RotationY_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RotationY_4), (void*)L_4);
		// public AnimationCurve RotationZ = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_5, NULL);
		__this->___RotationZ_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RotationZ_5), (void*)L_5);
		// public AnimationCurve RotationW = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_6, NULL);
		__this->___RotationW_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RotationW_6), (void*)L_6);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::AddKey(System.Single,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCurves_AddKey_mCA99E12C871ABB0C2A38A52A72C69969C9F43E09 (RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* __this, float ___0_time, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___1_ray, const RuntimeMethod* method) 
{
	{
		// AddVectorKey(OriginX, OriginY, OriginZ, time, ray.origin);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___OriginX_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = __this->___OriginY_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = __this->___OriginZ_2;
		float L_3 = ___0_time;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___1_ray), NULL);
		InputAnimation_AddVectorKey_mD662F4D138CDC9D589E8DA5D8C84EF7F929F978B(L_0, L_1, L_2, L_3, L_4, NULL);
		// AddVectorKey(DirectionX, DirectionY, DirectionZ, time, ray.direction);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = __this->___DirectionX_3;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = __this->___DirectionY_4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = __this->___DirectionZ_5;
		float L_8 = ___0_time;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___1_ray), NULL);
		InputAnimation_AddVectorKey_mD662F4D138CDC9D589E8DA5D8C84EF7F929F978B(L_5, L_6, L_7, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::Optimize(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCurves_Optimize_m5B19DBCE7717A8A68A5855E1044E886D2A6BD8A0 (RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* __this, float ___0_originThreshold, float ___1_directionThreshold, int32_t ___2_partitionSize, const RuntimeMethod* method) 
{
	{
		// OptimizePositionCurve(ref OriginX, ref OriginY, ref OriginZ, originThreshold, partitionSize);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_0 = (&__this->___OriginX_0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_1 = (&__this->___OriginY_1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_2 = (&__this->___OriginZ_2);
		float L_3 = ___0_originThreshold;
		int32_t L_4 = ___2_partitionSize;
		InputAnimation_OptimizePositionCurve_mA10CA6599D5067ABDE8589DC57B3442B915AAF22(L_0, L_1, L_2, L_3, L_4, NULL);
		// OptimizeDirectionCurve(ref DirectionX, ref DirectionY, ref DirectionZ, directionThreshold, partitionSize);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_5 = (&__this->___DirectionX_3);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_6 = (&__this->___DirectionY_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354** L_7 = (&__this->___DirectionZ_5);
		float L_8 = ___1_directionThreshold;
		int32_t L_9 = ___2_partitionSize;
		InputAnimation_OptimizeDirectionCurve_m181284E0C9CFDB1FFDF8F275AF2CB2013FA53279(L_5, L_6, L_7, L_8, L_9, NULL);
		// }
		return;
	}
}
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 RayCurves_Evaluate_mE071DC483FE318E315DCA26815FA81E333A910F5 (RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* __this, float ___0_time, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// float ox = OriginX.Evaluate(time);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___OriginX_0;
		float L_1 = ___0_time;
		NullCheck(L_0);
		float L_2;
		L_2 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_0, L_1, NULL);
		V_0 = L_2;
		// float oy = OriginY.Evaluate(time);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = __this->___OriginY_1;
		float L_4 = ___0_time;
		NullCheck(L_3);
		float L_5;
		L_5 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_3, L_4, NULL);
		V_1 = L_5;
		// float oz = OriginZ.Evaluate(time);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = __this->___OriginZ_2;
		float L_7 = ___0_time;
		NullCheck(L_6);
		float L_8;
		L_8 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_6, L_7, NULL);
		V_2 = L_8;
		// float dx = DirectionX.Evaluate(time);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = __this->___DirectionX_3;
		float L_10 = ___0_time;
		NullCheck(L_9);
		float L_11;
		L_11 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_9, L_10, NULL);
		V_3 = L_11;
		// float dy = DirectionY.Evaluate(time);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = __this->___DirectionY_4;
		float L_13 = ___0_time;
		NullCheck(L_12);
		float L_14;
		L_14 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_12, L_13, NULL);
		V_4 = L_14;
		// float dz = DirectionZ.Evaluate(time);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_15 = __this->___DirectionZ_5;
		float L_16 = ___0_time;
		NullCheck(L_15);
		float L_17;
		L_17 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_15, L_16, NULL);
		V_5 = L_17;
		// var ray = new Ray();
		il2cpp_codegen_initobj((&V_6), sizeof(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00));
		// ray.origin = new Vector3(ox, oy, oz);
		float L_18 = V_0;
		float L_19 = V_1;
		float L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), L_18, L_19, L_20, /*hidden argument*/NULL);
		Ray_set_origin_m9B19A7BE86636111E3B16BCE08EAE030F37FE64D((&V_6), L_21, NULL);
		// ray.direction = new Vector3(dx, dy, dz);
		float L_22 = V_3;
		float L_23 = V_4;
		float L_24 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), L_22, L_23, L_24, /*hidden argument*/NULL);
		Ray_set_direction_m8A8FF8101045BAE51BE5D5C1B6C21D0D5592DA98((&V_6), L_25, NULL);
		// ray.direction.Normalize();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_6), NULL);
		V_7 = L_26;
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_7), NULL);
		// return ray;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_27 = V_6;
		return L_27;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCurves__ctor_m6F6D1FAAB918D4F08776DB22754FB90FEFD20C2C (RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve OriginX = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_0, NULL);
		__this->___OriginX_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OriginX_0), (void*)L_0);
		// public AnimationCurve OriginY = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_1, NULL);
		__this->___OriginY_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OriginY_1), (void*)L_1);
		// public AnimationCurve OriginZ = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_2, NULL);
		__this->___OriginZ_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OriginZ_2), (void*)L_2);
		// public AnimationCurve DirectionX = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_3, NULL);
		__this->___DirectionX_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DirectionX_3), (void*)L_3);
		// public AnimationCurve DirectionY = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_4, NULL);
		__this->___DirectionY_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DirectionY_4), (void*)L_4);
		// public AnimationCurve DirectionZ = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_5, NULL);
		__this->___DirectionZ_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DirectionZ_5), (void*)L_5);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass49_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0__ctor_mD4B0AB42CF7655DA85C00FADCF3CC7C8D0F45134 (U3CU3Ec__DisplayClass49_0_t8715CEF9543AA781186ED864C4E08FE0748993A3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass49_0::<FromStreamAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* U3CU3Ec__DisplayClass49_0_U3CFromStreamAsyncU3Eb__0_m68F7BE5B9579F189E0815BD5E228A6A6C5179E0B (U3CU3Ec__DisplayClass49_0_t8715CEF9543AA781186ED864C4E08FE0748993A3* __this, const RuntimeMethod* method) 
{
	{
		// var result = await Task.Run(() => FromStream(stream));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_0;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_1;
		L_1 = InputAnimation_FromStream_mFBA07F73C3E576CA6CFE674F45763EF31B4BC358(L_0, NULL);
		return L_1;
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFromStreamAsyncU3Ed__49_MoveNext_mFD4E2B858F47C35C960C5D974F055BFB208A19AC (U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_m73C986AFCEC7FA39BF0D844BDCD3D9D32536363F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mFE4EBD15399DB4CB1C2038415B6AB26EADCBBD5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tB640F0B83B467B088B58D7A8AA0829DC23C219B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m6A0BA8EDF97024AFCD173C690286A748F9BE1811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m0DB8218E2DCED3997828E6A7A23B15C08F920761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m0482C4BD712078BD3DE8837701EC4C53C83EA09E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisInputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6_mC98296D20E6414D83F70ACB01BDD383BD09BFFF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass49_0_U3CFromStreamAsyncU3Eb__0_m68F7BE5B9579F189E0815BD5E228A6A6C5179E0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass49_0_t8715CEF9543AA781186ED864C4E08FE0748993A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* V_1 = NULL;
	TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B7_0 = NULL;
	InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* G_B7_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B6_0 = NULL;
	InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* G_B6_1 = NULL;
	InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* G_B8_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_005a_1;
			}
		}
		{
			U3CU3Ec__DisplayClass49_0_t8715CEF9543AA781186ED864C4E08FE0748993A3* L_2 = (U3CU3Ec__DisplayClass49_0_t8715CEF9543AA781186ED864C4E08FE0748993A3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass49_0_t8715CEF9543AA781186ED864C4E08FE0748993A3_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass49_0__ctor_mD4B0AB42CF7655DA85C00FADCF3CC7C8D0F45134(L_2, NULL);
			U3CU3Ec__DisplayClass49_0_t8715CEF9543AA781186ED864C4E08FE0748993A3* L_3 = L_2;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___stream_2;
			NullCheck(L_3);
			L_3->___stream_0 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->___stream_0), (void*)L_4);
			// var result = await Task.Run(() => FromStream(stream));
			Func_1_tB640F0B83B467B088B58D7A8AA0829DC23C219B1* L_5 = (Func_1_tB640F0B83B467B088B58D7A8AA0829DC23C219B1*)il2cpp_codegen_object_new(Func_1_tB640F0B83B467B088B58D7A8AA0829DC23C219B1_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			Func_1__ctor_m90906972CEE4ABC8D035903F551CFF9B4C2C7E1D(L_5, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass49_0_U3CFromStreamAsyncU3Eb__0_m68F7BE5B9579F189E0815BD5E228A6A6C5179E0B_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_1_tBFB85AA3E096493FA8063FC3615992478C33F0ED* L_6;
			L_6 = Task_Run_TisInputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6_mC98296D20E6414D83F70ACB01BDD383BD09BFFF2(L_5, Task_Run_TisInputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6_mC98296D20E6414D83F70ACB01BDD383BD09BFFF2_RuntimeMethod_var);
			NullCheck(L_6);
			TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9 L_7;
			L_7 = Task_1_GetAwaiter_m0482C4BD712078BD3DE8837701EC4C53C83EA09E(L_6, Task_1_GetAwaiter_m0482C4BD712078BD3DE8837701EC4C53C83EA09E_RuntimeMethod_var);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_1_get_IsCompleted_m0DB8218E2DCED3997828E6A7A23B15C08F920761((&V_2), TaskAwaiter_1_get_IsCompleted_m0DB8218E2DCED3997828E6A7A23B15C08F920761_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0076_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9 L_10 = V_2;
			__this->___U3CU3Eu__1_4 = L_10;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_m73C986AFCEC7FA39BF0D844BDCD3D9D32536363F(L_11, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9_TisU3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D_m73C986AFCEC7FA39BF0D844BDCD3D9D32536363F_RuntimeMethod_var);
			goto IL_00bc;
		}

IL_005a_1:
		{
			TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9 L_12 = __this->___U3CU3Eu__1_4;
			V_2 = L_12;
			TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9* L_13 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_tC5879779DA5008FE29633E3BFEC198D810A6BFD9));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0076_1:
		{
			InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_15;
			L_15 = TaskAwaiter_1_GetResult_m6A0BA8EDF97024AFCD173C690286A748F9BE1811((&V_2), TaskAwaiter_1_GetResult_m6A0BA8EDF97024AFCD173C690286A748F9BE1811_RuntimeMethod_var);
			// callback?.Invoke();
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = __this->___callback_3;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = L_16;
			G_B6_0 = L_17;
			G_B6_1 = L_15;
			if (L_17)
			{
				G_B7_0 = L_17;
				G_B7_1 = L_15;
				goto IL_0089_1;
			}
		}
		{
			G_B8_0 = G_B6_1;
			goto IL_008e_1;
		}

IL_0089_1:
		{
			NullCheck(G_B7_0);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B7_0, NULL);
			G_B8_0 = G_B7_1;
		}

IL_008e_1:
		{
			// return result;
			V_1 = G_B8_0;
			goto IL_00a8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0091;
		}
		throw e;
	}

CATCH_0091:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171* L_18 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m1B45B136F9688FBA61D2C36A6C4F1951A8AA1FFC(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m1B45B136F9688FBA61D2C36A6C4F1951A8AA1FFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bc;
	}// end catch (depth: 1)

IL_00a8:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171* L_20 = (&__this->___U3CU3Et__builder_1);
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_21 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mFE4EBD15399DB4CB1C2038415B6AB26EADCBBD5D(L_20, L_21, AsyncTaskMethodBuilder_1_SetResult_mFE4EBD15399DB4CB1C2038415B6AB26EADCBBD5D_RuntimeMethod_var);
	}

IL_00bc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFromStreamAsyncU3Ed__49_MoveNext_mFD4E2B858F47C35C960C5D974F055BFB208A19AC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D*>(__this + _offset);
	U3CFromStreamAsyncU3Ed__49_MoveNext_mFD4E2B858F47C35C960C5D974F055BFB208A19AC(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFromStreamAsyncU3Ed__49_SetStateMachine_m4D17F16597506BBC323D88E783251C7ACCE91224 (U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0095EF5E40791A8D9A18D6ED54BD2AD6C4F36943_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t66555B96446D812A80C6445BF61704D3E12AF171* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0095EF5E40791A8D9A18D6ED54BD2AD6C4F36943(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m0095EF5E40791A8D9A18D6ED54BD2AD6C4F36943_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFromStreamAsyncU3Ed__49_SetStateMachine_m4D17F16597506BBC323D88E783251C7ACCE91224_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFromStreamAsyncU3Ed__49_t3FF0780535DC0D854BF7EC3FB73337399359829D*>(__this + _offset);
	U3CFromStreamAsyncU3Ed__49_SetStateMachine_m4D17F16597506BBC323D88E783251C7ACCE91224(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__59__ctor_m667503E337EAF8FEC9B57FBA46A27A02CC6DEAF7 (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__59_System_IDisposable_Dispose_mCBE14FA35DB4D38F6B49A58CAE7614EEC087FD2D (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)-4))))
		{
			case 0:
			{
				goto IL_0077;
			}
			case 1:
			{
				goto IL_006d;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_0081;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0081;
			}
			case 6:
			{
				goto IL_0081;
			}
			case 7:
			{
				goto IL_0081;
			}
			case 8:
			{
				goto IL_0081;
			}
			case 9:
			{
				goto IL_006d;
			}
			case 10:
			{
				goto IL_006d;
			}
			case 11:
			{
				goto IL_006d;
			}
			case 12:
			{
				goto IL_006d;
			}
			case 13:
			{
				goto IL_006d;
			}
			case 14:
			{
				goto IL_006d;
			}
			case 15:
			{
				goto IL_006d;
			}
			case 16:
			{
				goto IL_0077;
			}
			case 17:
			{
				goto IL_0077;
			}
			case 18:
			{
				goto IL_0077;
			}
			case 19:
			{
				goto IL_0077;
			}
			case 20:
			{
				goto IL_0077;
			}
			case 21:
			{
				goto IL_0077;
			}
			case 22:
			{
				goto IL_0077;
			}
		}
	}
	{
		return;
	}

IL_006d:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				U3CGetAllAnimationCurvesU3Ed__59_U3CU3Em__Finally1_mCF932E12CCC71CB7C7AB047F717F21741D2664C6(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_0081;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				U3CGetAllAnimationCurvesU3Ed__59_U3CU3Em__Finally2_mD238642E4ED25D5979C6D969D86C79D9D79F6FF3(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_0081;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllAnimationCurvesU3Ed__59_MoveNext_m96F57038FEE61D0066D486B0B85B60BD10F319FA (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m104F150208968785DA05ABD8360B85B3F2B308EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m536AF6F9DEB8D81595983921E40BCDB3CFC10061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF180E2D3DB23FC27191FE883617081B134363B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m8918476BD40C4461125F63B370F5D43F151807FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_05ff:
			{// begin fault (depth: 1)
				U3CGetAllAnimationCurvesU3Ed__59_System_IDisposable_Dispose_mCBE14FA35DB4D38F6B49A58CAE7614EEC087FD2D(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				switch (L_2)
				{
					case 0:
					{
						goto IL_009b_1;
					}
					case 1:
					{
						goto IL_00bc_1;
					}
					case 2:
					{
						goto IL_00dd_1;
					}
					case 3:
					{
						goto IL_00fe_1;
					}
					case 4:
					{
						goto IL_011f_1;
					}
					case 5:
					{
						goto IL_0179_1;
					}
					case 6:
					{
						goto IL_01a0_1;
					}
					case 7:
					{
						goto IL_01c7_1;
					}
					case 8:
					{
						goto IL_01ee_1;
					}
					case 9:
					{
						goto IL_0216_1;
					}
					case 10:
					{
						goto IL_023e_1;
					}
					case 11:
					{
						goto IL_0266_1;
					}
					case 12:
					{
						goto IL_02eb_1;
					}
					case 13:
					{
						goto IL_0313_1;
					}
					case 14:
					{
						goto IL_033b_1;
					}
					case 15:
					{
						goto IL_0363_1;
					}
					case 16:
					{
						goto IL_038b_1;
					}
					case 17:
					{
						goto IL_03b3_1;
					}
					case 18:
					{
						goto IL_03db_1;
					}
					case 19:
					{
						goto IL_042c_1;
					}
					case 20:
					{
						goto IL_0453_1;
					}
					case 21:
					{
						goto IL_047a_1;
					}
					case 22:
					{
						goto IL_04a1_1;
					}
					case 23:
					{
						goto IL_04c8_1;
					}
					case 24:
					{
						goto IL_04ef_1;
					}
					case 25:
					{
						goto IL_0516_1;
					}
					case 26:
					{
						goto IL_053d_1;
					}
					case 27:
					{
						goto IL_0564_1;
					}
					case 28:
					{
						goto IL_0588_1;
					}
					case 29:
					{
						goto IL_05ac_1;
					}
					case 30:
					{
						goto IL_05d0_1;
					}
					case 31:
					{
						goto IL_05f4_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0606;
			}

IL_009b_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return handTrackedCurveLeft;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_3 = V_2;
				NullCheck(L_3);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = L_3->___handTrackedCurveLeft_1;
				__this->___U3CU3E2__current_1 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_00bc_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return handTrackedCurveRight;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_5 = V_2;
				NullCheck(L_5);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = L_5->___handTrackedCurveRight_2;
				__this->___U3CU3E2__current_1 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_00dd_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return handPinchCurveLeft;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_7 = V_2;
				NullCheck(L_7);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = L_7->___handPinchCurveLeft_3;
				__this->___U3CU3E2__current_1 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
				__this->___U3CU3E1__state_0 = 3;
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_00fe_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return handPinchCurveRight;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_9 = V_2;
				NullCheck(L_9);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_10 = L_9->___handPinchCurveRight_4;
				__this->___U3CU3E2__current_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
				__this->___U3CU3E1__state_0 = 4;
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_011f_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (var curves in handJointCurvesLeft.Values)
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_11 = V_2;
				NullCheck(L_11);
				Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_12 = L_11->___handJointCurvesLeft_5;
				NullCheck(L_12);
				ValueCollection_tF6578F9E2E9D1B91B3699F496D5DC4BA72DF2591* L_13;
				L_13 = Dictionary_2_get_Values_m104F150208968785DA05ABD8360B85B3F2B308EB(L_12, Dictionary_2_get_Values_m104F150208968785DA05ABD8360B85B3F2B308EB_RuntimeMethod_var);
				NullCheck(L_13);
				Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7 L_14;
				L_14 = ValueCollection_GetEnumerator_m8918476BD40C4461125F63B370F5D43F151807FD(L_13, ValueCollection_GetEnumerator_m8918476BD40C4461125F63B370F5D43F151807FD_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_4 = L_14;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____dictionary_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____currentValue_3), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0275_1;
			}

IL_0149_1:
			{
				// foreach (var curves in handJointCurvesLeft.Values)
				Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7* L_15 = (&__this->___U3CU3E7__wrap1_4);
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_16;
				L_16 = Enumerator_get_Current_mF180E2D3DB23FC27191FE883617081B134363B6F_inline(L_15, Enumerator_get_Current_mF180E2D3DB23FC27191FE883617081B134363B6F_RuntimeMethod_var);
				__this->___U3CcurvesU3E5__3_5 = L_16;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurvesU3E5__3_5), (void*)L_16);
				// yield return curves.PositionX;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_17 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_17);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_18 = L_17->___PositionX_0;
				__this->___U3CU3E2__current_1 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
				__this->___U3CU3E1__state_0 = 5;
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_0179_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return curves.PositionY;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_19 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_19);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_20 = L_19->___PositionY_1;
				__this->___U3CU3E2__current_1 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
				__this->___U3CU3E1__state_0 = 6;
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_01a0_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return curves.PositionZ;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_21 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_21);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_22 = L_21->___PositionZ_2;
				__this->___U3CU3E2__current_1 = L_22;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
				__this->___U3CU3E1__state_0 = 7;
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_01c7_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return curves.RotationX;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_23 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_23);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_24 = L_23->___RotationX_3;
				__this->___U3CU3E2__current_1 = L_24;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_24);
				__this->___U3CU3E1__state_0 = 8;
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_01ee_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return curves.RotationY;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_25 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_25);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_26 = L_25->___RotationY_4;
				__this->___U3CU3E2__current_1 = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
				__this->___U3CU3E1__state_0 = ((int32_t)9);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_0216_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return curves.RotationZ;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_27 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_27);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_28 = L_27->___RotationZ_5;
				__this->___U3CU3E2__current_1 = L_28;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
				__this->___U3CU3E1__state_0 = ((int32_t)10);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_023e_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return curves.RotationW;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_29 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_29);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_30 = L_29->___RotationW_6;
				__this->___U3CU3E2__current_1 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_30);
				__this->___U3CU3E1__state_0 = ((int32_t)11);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_0266_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// }
				__this->___U3CcurvesU3E5__3_5 = (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurvesU3E5__3_5), (void*)(PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC*)NULL);
			}

IL_0275_1:
			{
				// foreach (var curves in handJointCurvesLeft.Values)
				Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7* L_31 = (&__this->___U3CU3E7__wrap1_4);
				bool L_32;
				L_32 = Enumerator_MoveNext_m536AF6F9DEB8D81595983921E40BCDB3CFC10061(L_31, Enumerator_MoveNext_m536AF6F9DEB8D81595983921E40BCDB3CFC10061_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_0149_1;
				}
			}
			{
				U3CGetAllAnimationCurvesU3Ed__59_U3CU3Em__Finally1_mCF932E12CCC71CB7C7AB047F717F21741D2664C6(__this, NULL);
				Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7* L_33 = (&__this->___U3CU3E7__wrap1_4);
				il2cpp_codegen_initobj(L_33, sizeof(Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7));
				// foreach (var curves in handJointCurvesRight.Values)
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_34 = V_2;
				NullCheck(L_34);
				Dictionary_2_t0D98EFDCBDFD518AFD9BDAE861BF4D31AD181861* L_35 = L_34->___handJointCurvesRight_6;
				NullCheck(L_35);
				ValueCollection_tF6578F9E2E9D1B91B3699F496D5DC4BA72DF2591* L_36;
				L_36 = Dictionary_2_get_Values_m104F150208968785DA05ABD8360B85B3F2B308EB(L_35, Dictionary_2_get_Values_m104F150208968785DA05ABD8360B85B3F2B308EB_RuntimeMethod_var);
				NullCheck(L_36);
				Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7 L_37;
				L_37 = ValueCollection_GetEnumerator_m8918476BD40C4461125F63B370F5D43F151807FD(L_36, ValueCollection_GetEnumerator_m8918476BD40C4461125F63B370F5D43F151807FD_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_4 = L_37;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____dictionary_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____currentValue_3), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				goto IL_03ea_1;
			}

IL_02ba_1:
			{
				// foreach (var curves in handJointCurvesRight.Values)
				Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7* L_38 = (&__this->___U3CU3E7__wrap1_4);
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_39;
				L_39 = Enumerator_get_Current_mF180E2D3DB23FC27191FE883617081B134363B6F_inline(L_38, Enumerator_get_Current_mF180E2D3DB23FC27191FE883617081B134363B6F_RuntimeMethod_var);
				__this->___U3CcurvesU3E5__3_5 = L_39;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurvesU3E5__3_5), (void*)L_39);
				// yield return curves.PositionX;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_40 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_40);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41 = L_40->___PositionX_0;
				__this->___U3CU3E2__current_1 = L_41;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_41);
				__this->___U3CU3E1__state_0 = ((int32_t)12);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_02eb_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				// yield return curves.PositionY;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_42 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_42);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_43 = L_42->___PositionY_1;
				__this->___U3CU3E2__current_1 = L_43;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_43);
				__this->___U3CU3E1__state_0 = ((int32_t)13);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_0313_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				// yield return curves.PositionZ;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_44 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_44);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_45 = L_44->___PositionZ_2;
				__this->___U3CU3E2__current_1 = L_45;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_45);
				__this->___U3CU3E1__state_0 = ((int32_t)14);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_033b_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				// yield return curves.RotationX;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_46 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_46);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_47 = L_46->___RotationX_3;
				__this->___U3CU3E2__current_1 = L_47;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_47);
				__this->___U3CU3E1__state_0 = ((int32_t)15);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_0363_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				// yield return curves.RotationY;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_48 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_48);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_49 = L_48->___RotationY_4;
				__this->___U3CU3E2__current_1 = L_49;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_49);
				__this->___U3CU3E1__state_0 = ((int32_t)16);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_038b_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				// yield return curves.RotationZ;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_50 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_50);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51 = L_50->___RotationZ_5;
				__this->___U3CU3E2__current_1 = L_51;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_51);
				__this->___U3CU3E1__state_0 = ((int32_t)17);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_03b3_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				// yield return curves.RotationW;
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_52 = __this->___U3CcurvesU3E5__3_5;
				NullCheck(L_52);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53 = L_52->___RotationW_6;
				__this->___U3CU3E2__current_1 = L_53;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_53);
				__this->___U3CU3E1__state_0 = ((int32_t)18);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_03db_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				// }
				__this->___U3CcurvesU3E5__3_5 = (PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurvesU3E5__3_5), (void*)(PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC*)NULL);
			}

IL_03ea_1:
			{
				// foreach (var curves in handJointCurvesRight.Values)
				Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7* L_54 = (&__this->___U3CU3E7__wrap1_4);
				bool L_55;
				L_55 = Enumerator_MoveNext_m536AF6F9DEB8D81595983921E40BCDB3CFC10061(L_54, Enumerator_MoveNext_m536AF6F9DEB8D81595983921E40BCDB3CFC10061_RuntimeMethod_var);
				if (L_55)
				{
					goto IL_02ba_1;
				}
			}
			{
				U3CGetAllAnimationCurvesU3Ed__59_U3CU3Em__Finally2_mD238642E4ED25D5979C6D969D86C79D9D79F6FF3(__this, NULL);
				Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7* L_56 = (&__this->___U3CU3E7__wrap1_4);
				il2cpp_codegen_initobj(L_56, sizeof(Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7));
				// yield return cameraCurves.PositionX;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_57 = V_2;
				NullCheck(L_57);
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_58 = L_57->___cameraCurves_7;
				NullCheck(L_58);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_59 = L_58->___PositionX_0;
				__this->___U3CU3E2__current_1 = L_59;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_59);
				__this->___U3CU3E1__state_0 = ((int32_t)19);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_042c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return cameraCurves.PositionY;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_60 = V_2;
				NullCheck(L_60);
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_61 = L_60->___cameraCurves_7;
				NullCheck(L_61);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_62 = L_61->___PositionY_1;
				__this->___U3CU3E2__current_1 = L_62;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_62);
				__this->___U3CU3E1__state_0 = ((int32_t)20);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_0453_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return cameraCurves.PositionZ;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_63 = V_2;
				NullCheck(L_63);
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_64 = L_63->___cameraCurves_7;
				NullCheck(L_64);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_65 = L_64->___PositionZ_2;
				__this->___U3CU3E2__current_1 = L_65;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_65);
				__this->___U3CU3E1__state_0 = ((int32_t)21);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_047a_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return cameraCurves.RotationX;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_66 = V_2;
				NullCheck(L_66);
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_67 = L_66->___cameraCurves_7;
				NullCheck(L_67);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_68 = L_67->___RotationX_3;
				__this->___U3CU3E2__current_1 = L_68;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_68);
				__this->___U3CU3E1__state_0 = ((int32_t)22);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_04a1_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return cameraCurves.RotationY;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_69 = V_2;
				NullCheck(L_69);
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_70 = L_69->___cameraCurves_7;
				NullCheck(L_70);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_71 = L_70->___RotationY_4;
				__this->___U3CU3E2__current_1 = L_71;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_71);
				__this->___U3CU3E1__state_0 = ((int32_t)23);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_04c8_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return cameraCurves.RotationZ;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_72 = V_2;
				NullCheck(L_72);
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_73 = L_72->___cameraCurves_7;
				NullCheck(L_73);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_74 = L_73->___RotationZ_5;
				__this->___U3CU3E2__current_1 = L_74;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_74);
				__this->___U3CU3E1__state_0 = ((int32_t)24);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_04ef_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return cameraCurves.RotationW;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_75 = V_2;
				NullCheck(L_75);
				PoseCurves_t6550558C84A4779609F9505C9007C465D9B12BFC* L_76 = L_75->___cameraCurves_7;
				NullCheck(L_76);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_77 = L_76->___RotationW_6;
				__this->___U3CU3E2__current_1 = L_77;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_77);
				__this->___U3CU3E1__state_0 = ((int32_t)25);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_0516_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return gazeCurves.OriginX;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_78 = V_2;
				NullCheck(L_78);
				RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_79 = L_78->___gazeCurves_8;
				NullCheck(L_79);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_80 = L_79->___OriginX_0;
				__this->___U3CU3E2__current_1 = L_80;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_80);
				__this->___U3CU3E1__state_0 = ((int32_t)26);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_053d_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return gazeCurves.OriginY;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_81 = V_2;
				NullCheck(L_81);
				RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_82 = L_81->___gazeCurves_8;
				NullCheck(L_82);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_83 = L_82->___OriginY_1;
				__this->___U3CU3E2__current_1 = L_83;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_83);
				__this->___U3CU3E1__state_0 = ((int32_t)27);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_0564_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return gazeCurves.OriginZ;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_84 = V_2;
				NullCheck(L_84);
				RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_85 = L_84->___gazeCurves_8;
				NullCheck(L_85);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_86 = L_85->___OriginZ_2;
				__this->___U3CU3E2__current_1 = L_86;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_86);
				__this->___U3CU3E1__state_0 = ((int32_t)28);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_0588_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return gazeCurves.DirectionX;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_87 = V_2;
				NullCheck(L_87);
				RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_88 = L_87->___gazeCurves_8;
				NullCheck(L_88);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_89 = L_88->___DirectionX_3;
				__this->___U3CU3E2__current_1 = L_89;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_89);
				__this->___U3CU3E1__state_0 = ((int32_t)29);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_05ac_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return gazeCurves.DirectionY;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_90 = V_2;
				NullCheck(L_90);
				RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_91 = L_90->___gazeCurves_8;
				NullCheck(L_91);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_92 = L_91->___DirectionY_4;
				__this->___U3CU3E2__current_1 = L_92;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_92);
				__this->___U3CU3E1__state_0 = ((int32_t)30);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_05d0_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return gazeCurves.DirectionZ;
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_93 = V_2;
				NullCheck(L_93);
				RayCurves_t8628E54579627A2463CD0D3A85FF4C336F475C7A* L_94 = L_93->___gazeCurves_8;
				NullCheck(L_94);
				AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_95 = L_94->___DirectionZ_5;
				__this->___U3CU3E2__current_1 = L_95;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_95);
				__this->___U3CU3E1__state_0 = ((int32_t)31);
				V_0 = (bool)1;
				goto IL_0606;
			}

IL_05f4_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// }
				V_0 = (bool)0;
				goto IL_0606;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0606:
	{
		bool L_96 = V_0;
		return L_96;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__59_U3CU3Em__Finally1_mCF932E12CCC71CB7C7AB047F717F21741D2664C6 (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7FAF0C13119AF1D4B7A1900984AA66034C6C24C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7* L_0 = (&__this->___U3CU3E7__wrap1_4);
		Enumerator_Dispose_m7FAF0C13119AF1D4B7A1900984AA66034C6C24C1(L_0, Enumerator_Dispose_m7FAF0C13119AF1D4B7A1900984AA66034C6C24C1_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__59_U3CU3Em__Finally2_mD238642E4ED25D5979C6D969D86C79D9D79F6FF3 (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7FAF0C13119AF1D4B7A1900984AA66034C6C24C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_tBB2A349F4BEB1E9B50A6C1B0240714BF651780D7* L_0 = (&__this->___U3CU3E7__wrap1_4);
		Enumerator_Dispose_m7FAF0C13119AF1D4B7A1900984AA66034C6C24C1(L_0, Enumerator_Dispose_m7FAF0C13119AF1D4B7A1900984AA66034C6C24C1_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::System.Collections.Generic.IEnumerator<UnityEngine.AnimationCurve>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* U3CGetAllAnimationCurvesU3Ed__59_System_Collections_Generic_IEnumeratorU3CUnityEngine_AnimationCurveU3E_get_Current_m9C95994B84330A4FEB2CDBE13DE36635DD00C9F2 (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, const RuntimeMethod* method) 
{
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__59_System_Collections_IEnumerator_Reset_m3DF7747B6D79A5E31C1DC97DC179A73C90F20F28 (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllAnimationCurvesU3Ed__59_System_Collections_IEnumerator_Reset_m3DF7747B6D79A5E31C1DC97DC179A73C90F20F28_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllAnimationCurvesU3Ed__59_System_Collections_IEnumerator_get_Current_mDA91667D2552F47697FC495EB576A4B29FFC9946 (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, const RuntimeMethod* method) 
{
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::System.Collections.Generic.IEnumerable<UnityEngine.AnimationCurve>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllAnimationCurvesU3Ed__59_System_Collections_Generic_IEnumerableU3CUnityEngine_AnimationCurveU3E_GetEnumerator_m318F17FAC78DC6EF54B3DED653F3AB343CB0B53B (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* L_3 = (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B*)il2cpp_codegen_object_new(U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetAllAnimationCurvesU3Ed__59__ctor_m667503E337EAF8FEC9B57FBA46A27A02CC6DEAF7(L_3, 0, NULL);
		V_0 = L_3;
		U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* L_4 = V_0;
		InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllAnimationCurvesU3Ed__59_System_Collections_IEnumerable_GetEnumerator_m7B83C69E1E5B0CEEE40F7BFAC85E5DD7F3A39F20 (U3CGetAllAnimationCurvesU3Ed__59_t70830AFF6DBCC12E3A04F3584B9473C3A9BE580B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllAnimationCurvesU3Ed__59_System_Collections_Generic_IEnumerableU3CUnityEngine_AnimationCurveU3E_GetEnumerator_m318F17FAC78DC6EF54B3DED653F3AB343CB0B53B(__this, NULL);
		return L_0;
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
// System.String Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::GetOutputFilename(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputAnimationSerializationUtils_GetOutputFilename_m1AB5C4821F099AE6375F79215C4FA3FBF8984879 (String_t* ___0_baseName, bool ___1_appendTimestamp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845601714FB132030B7585887918D078E9CE2267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1B4A550FE7439DE4FDA569B91A4624B59B45E5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD98EEFA57F0D44C301E0D9E2C28732491D85C1C5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (appendTimestamp)
		bool L_0 = ___1_appendTimestamp;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// filename = string.Format("{0}-{1}.{2}", baseName, DateTime.UtcNow.ToString("yyyyMMdd-HHmmss"), Extension);
		String_t* L_1 = ___0_baseName;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_1), _stringLiteral845601714FB132030B7585887918D078E9CE2267, NULL);
		String_t* L_4;
		L_4 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralD98EEFA57F0D44C301E0D9E2C28732491D85C1C5, L_1, L_3, _stringLiteralD1B4A550FE7439DE4FDA569B91A4624B59B45E5B, NULL);
		V_0 = L_4;
		goto IL_002a;
	}

IL_0028:
	{
		// filename = baseName;
		String_t* L_5 = ___0_baseName;
		V_0 = L_5;
	}

IL_002a:
	{
		// return filename;
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteHeader(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteHeader_m0EB6C4CCE43D8839E72DE92E698F98983EADED26 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, const RuntimeMethod* method) 
{
	{
		// writer.Write(Magic);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_writer;
		NullCheck(L_0);
		VirtualActionInvoker1< int64_t >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_0, ((int64_t)7678548776933278406LL));
		// writer.Write(VersionMajor);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___0_writer;
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, 1);
		// writer.Write(VersionMinor);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___0_writer;
		NullCheck(L_2);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_2, 1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadHeader(System.IO.BinaryReader,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadHeader_m4B3C18A4A00014E59499424D08E99CDB9FFB1207 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, int32_t* ___1_fileVersionMajor, int32_t* ___2_fileVersionMinor, const RuntimeMethod* method) 
{
	{
		// long fileMagic = reader.ReadInt64();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_0);
		// if (fileMagic != Magic)
		if ((((int64_t)L_1) == ((int64_t)((int64_t)7678548776933278406LL))))
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception("File is not an input animation file");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07F96E76E35E18FF6CE65A73E42CD0652022C014)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputAnimationSerializationUtils_ReadHeader_m4B3C18A4A00014E59499424D08E99CDB9FFB1207_RuntimeMethod_var)));
	}

IL_001c:
	{
		// fileVersionMajor = reader.ReadInt32();
		int32_t* L_3 = ___1_fileVersionMajor;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___0_reader;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		*((int32_t*)L_3) = (int32_t)L_5;
		// fileVersionMinor = reader.ReadInt32();
		int32_t* L_6 = ___2_fileVersionMinor;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_reader;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_7);
		*((int32_t*)L_6) = (int32_t)L_8;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurve_mD7A2CC3DCC9BB15718D98D047DB51E45C974DF0B (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// curve.preWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___1_curve;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		NullCheck(L_0);
		AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D(L_0, L_2, NULL);
		// curve.postWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___1_curve;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___0_reader;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		NullCheck(L_3);
		AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9(L_3, L_5, NULL);
		// int keyframeCount = reader.ReadInt32();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = ___0_reader;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		V_0 = L_7;
		// Keyframe[] keys = new Keyframe[keyframeCount];
		int32_t L_8 = V_0;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_9 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		// for (int i = 0; i < keyframeCount; ++i)
		V_2 = 0;
		goto IL_00af;
	}

IL_002d:
	{
		// keys[i].time = reader.ReadSingle();
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = ___0_reader;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_12);
		Keyframe_set_time_m98F165193486C0DF1611B562016595B18052A2D6(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_13, NULL);
		// keys[i].value = reader.ReadSingle();
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = ___0_reader;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtualFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_16);
		Keyframe_set_value_m396D6040A4AB72ED5B9797E8C92DD806FA6F5431(((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), L_17, NULL);
		// keys[i].inTangent = reader.ReadSingle();
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_20 = ___0_reader;
		NullCheck(L_20);
		float L_21;
		L_21 = VirtualFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_20);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), L_21, NULL);
		// keys[i].outTangent = reader.ReadSingle();
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_22 = V_1;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_24 = ___0_reader;
		NullCheck(L_24);
		float L_25;
		L_25 = VirtualFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_24);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), L_25, NULL);
		// keys[i].inWeight = reader.ReadSingle();
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_26 = V_1;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_28 = ___0_reader;
		NullCheck(L_28);
		float L_29;
		L_29 = VirtualFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_28);
		Keyframe_set_inWeight_m19BFF0BCDC3007F70BCFE130F68FBCE3B7987A63(((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), L_29, NULL);
		// keys[i].outWeight = reader.ReadSingle();
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_32 = ___0_reader;
		NullCheck(L_32);
		float L_33;
		L_33 = VirtualFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_32);
		Keyframe_set_outWeight_mFE79885FDA391DDAB1D73EF1B1A032E3EB652602(((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31))), L_33, NULL);
		// keys[i].weightedMode = (WeightedMode)reader.ReadInt32();
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_34 = V_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_36 = ___0_reader;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_36);
		Keyframe_set_weightedMode_m3F4D6F04144F098E62FF5D888070A9C3DC3EC0E9(((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), L_37, NULL);
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00af:
	{
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_39 = V_2;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_002d;
		}
	}
	{
		// curve.keys = keys;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41 = ___1_curve;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_42 = V_1;
		NullCheck(L_41);
		AnimationCurve_set_keys_mBE1284B44CDBB1D8381177A3D581A6E71467F95C(L_41, L_42, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteBoolCurve(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteBoolCurve_mEE4F0E5FB945F68D8C17E490B7B040E4FFFCE30E (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, float ___2_startTime, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// writer.Write((int)curve.preWrapMode);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_writer;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___1_curve;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AnimationCurve_get_preWrapMode_m6F386731866F888BC8BD98B2C1A5B03D2ACCAF14(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_2);
		// writer.Write((int)curve.postWrapMode);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_3 = ___0_writer;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = ___1_curve;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AnimationCurve_get_postWrapMode_m5A56504372DD5597CF7844ED9E58BDD2D3C805E7(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, L_5);
		// writer.Write(curve.length);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = ___0_writer;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = ___1_curve;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_6, L_8);
		// for (int i = 0; i < curve.length; ++i)
		V_0 = 0;
		goto IL_0055;
	}

IL_0028:
	{
		// var keyframe = curve.keys[i];
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = ___1_curve;
		NullCheck(L_9);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_10;
		L_10 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_9, NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		// writer.Write(keyframe.time - startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_14 = ___0_writer;
		float L_15;
		L_15 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_1), NULL);
		float L_16 = ___2_startTime;
		NullCheck(L_14);
		VirtualActionInvoker1< float >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_14, ((float)il2cpp_codegen_subtract(L_15, L_16)));
		// writer.Write(keyframe.value);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_17 = ___0_writer;
		float L_18;
		L_18 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_1), NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< float >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_17, L_18);
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_20 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_21 = ___1_curve;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_21, NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0028;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadBoolCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadBoolCurve_m7D5F8B3DF38D73BE61275FF9A8A2EC07F90FEDCD (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// curve.preWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___1_curve;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		NullCheck(L_0);
		AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D(L_0, L_2, NULL);
		// curve.postWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___1_curve;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___0_reader;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		NullCheck(L_3);
		AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9(L_3, L_5, NULL);
		// int keyframeCount = reader.ReadInt32();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = ___0_reader;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		V_0 = L_7;
		// Keyframe[] keys = new Keyframe[keyframeCount];
		int32_t L_8 = V_0;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_9 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		// for (int i = 0; i < keyframeCount; ++i)
		V_2 = 0;
		goto IL_0070;
	}

IL_002a:
	{
		// keys[i].time = reader.ReadSingle();
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = ___0_reader;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_12);
		Keyframe_set_time_m98F165193486C0DF1611B562016595B18052A2D6(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_13, NULL);
		// keys[i].value = reader.ReadSingle();
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = ___0_reader;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtualFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_16);
		Keyframe_set_value_m396D6040A4AB72ED5B9797E8C92DD806FA6F5431(((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), L_17, NULL);
		// keys[i].outWeight = 1.0e6f;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Keyframe_set_outWeight_mFE79885FDA391DDAB1D73EF1B1A032E3EB652602(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), (1000000.0f), NULL);
		// keys[i].weightedMode = WeightedMode.Both;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Keyframe_set_weightedMode_m3F4D6F04144F098E62FF5D888070A9C3DC3EC0E9(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), 3, NULL);
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0070:
	{
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_23 = V_2;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_002a;
		}
	}
	{
		// curve.keys = keys;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_25 = ___1_curve;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_26 = V_1;
		NullCheck(L_25);
		AnimationCurve_set_keys_mBE1284B44CDBB1D8381177A3D581A6E71467F95C(L_25, L_26, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteFloatCurveSimple(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteFloatCurveSimple_m33EE489BFEF6827E1CF14B6E7F1D1DD4C98DDE19 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, float ___2_startTime, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// writer.Write((int)curve.preWrapMode);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_writer;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___1_curve;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AnimationCurve_get_preWrapMode_m6F386731866F888BC8BD98B2C1A5B03D2ACCAF14(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_2);
		// writer.Write((int)curve.postWrapMode);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_3 = ___0_writer;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = ___1_curve;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AnimationCurve_get_postWrapMode_m5A56504372DD5597CF7844ED9E58BDD2D3C805E7(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, L_5);
		// writer.Write(curve.length);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = ___0_writer;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = ___1_curve;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_6, L_8);
		// for (int i = 0; i < curve.length; ++i)
		V_0 = 0;
		goto IL_0055;
	}

IL_0028:
	{
		// var keyframe = curve.keys[i];
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = ___1_curve;
		NullCheck(L_9);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_10;
		L_10 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_9, NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		// writer.Write(keyframe.time - startTime);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_14 = ___0_writer;
		float L_15;
		L_15 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_1), NULL);
		float L_16 = ___2_startTime;
		NullCheck(L_14);
		VirtualActionInvoker1< float >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_14, ((float)il2cpp_codegen_subtract(L_15, L_16)));
		// writer.Write(keyframe.value);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_17 = ___0_writer;
		float L_18;
		L_18 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&V_1), NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< float >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_17, L_18);
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_20 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_21 = ___1_curve;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_21, NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0028;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurveSimple(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurveSimple_m928B2E93A97AE0E1D198720B5BF08DBAE6E50316 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// curve.preWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___1_curve;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		NullCheck(L_0);
		AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D(L_0, L_2, NULL);
		// curve.postWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___1_curve;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___0_reader;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		NullCheck(L_3);
		AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9(L_3, L_5, NULL);
		// int keyframeCount = reader.ReadInt32();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = ___0_reader;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		V_0 = L_7;
		// Keyframe[] keys = new Keyframe[keyframeCount];
		int32_t L_8 = V_0;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_9 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		// for (int i = 0; i < keyframeCount; ++i)
		V_2 = 0;
		goto IL_005f;
	}

IL_002a:
	{
		// keys[i].time = reader.ReadSingle();
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = ___0_reader;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_12);
		Keyframe_set_time_m98F165193486C0DF1611B562016595B18052A2D6(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_13, NULL);
		// keys[i].value = reader.ReadSingle();
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = ___0_reader;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtualFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_16);
		Keyframe_set_value_m396D6040A4AB72ED5B9797E8C92DD806FA6F5431(((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), L_17, NULL);
		// keys[i].weightedMode = WeightedMode.Both;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Keyframe_set_weightedMode_m3F4D6F04144F098E62FF5D888070A9C3DC3EC0E9(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), 3, NULL);
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005f:
	{
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_002a;
		}
	}
	{
		// curve.keys = keys;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_23 = ___1_curve;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_24 = V_1;
		NullCheck(L_23);
		AnimationCurve_set_keys_mBE1284B44CDBB1D8381177A3D581A6E71467F95C(L_23, L_24, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteMarkerList(System.IO.BinaryWriter,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteMarkerList_mB85C2E078065DB18635B827699D52266B53307D9 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* ___1_markers, float ___2_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0B7CFFD074D9E966CCA86758706D1C448EFB7B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7367F5F3A30A2BAFD3CB713209D9C25B71751012_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2ECEDC40E034141FA4F7A2B1E8CD4A8176852482_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0D16C396D05854E01D63F42CB3B6D1DD1A11C650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB9B7E51F654BF50957358D771B0F18354D00E1EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA3B9CE36F90BB994A2D251E4BB3DF436B6740266 V_0;
	memset((&V_0), 0, sizeof(V_0));
	InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* V_1 = NULL;
	{
		// writer.Write(markers.Count);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_writer;
		List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* L_1 = ___1_markers;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB9B7E51F654BF50957358D771B0F18354D00E1EB_inline(L_1, List_1_get_Count_mB9B7E51F654BF50957358D771B0F18354D00E1EB_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_2);
		// foreach (var marker in markers)
		List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* L_3 = ___1_markers;
		NullCheck(L_3);
		Enumerator_tA3B9CE36F90BB994A2D251E4BB3DF436B6740266 L_4;
		L_4 = List_1_GetEnumerator_m0D16C396D05854E01D63F42CB3B6D1DD1A11C650(L_3, List_1_GetEnumerator_m0D16C396D05854E01D63F42CB3B6D1DD1A11C650_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0B7CFFD074D9E966CCA86758706D1C448EFB7B70((&V_0), Enumerator_Dispose_m0B7CFFD074D9E966CCA86758706D1C448EFB7B70_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_0015_1:
			{
				// foreach (var marker in markers)
				InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* L_5;
				L_5 = Enumerator_get_Current_m2ECEDC40E034141FA4F7A2B1E8CD4A8176852482_inline((&V_0), Enumerator_get_Current_m2ECEDC40E034141FA4F7A2B1E8CD4A8176852482_RuntimeMethod_var);
				V_1 = L_5;
				// writer.Write(marker.time - startTime);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = ___0_writer;
				InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* L_7 = V_1;
				NullCheck(L_7);
				float L_8 = L_7->___time_0;
				float L_9 = ___2_startTime;
				NullCheck(L_6);
				VirtualActionInvoker1< float >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_6, ((float)il2cpp_codegen_subtract(L_8, L_9)));
				// writer.Write(marker.name);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_10 = ___0_writer;
				InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* L_11 = V_1;
				NullCheck(L_11);
				String_t* L_12 = L_11->___name_1;
				NullCheck(L_10);
				VirtualActionInvoker1< String_t* >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_10, L_12);
			}

IL_0037_1:
			{
				// foreach (var marker in markers)
				bool L_13;
				L_13 = Enumerator_MoveNext_m7367F5F3A30A2BAFD3CB713209D9C25B71751012((&V_0), Enumerator_MoveNext_m7367F5F3A30A2BAFD3CB713209D9C25B71751012_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadMarkerList(System.IO.BinaryReader,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadMarkerList_m6595702A9EFC92A8079D528F44FD86F56DFC1331 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* ___1_markers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m54B7516377CD87A702EB52ADCF4B0105717EC602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m95B13A6D907606F0F35D36B6BEA0F1F31F91B6E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m67D865992ADEFE238DD908DD4DCD62202EFEBAE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* V_2 = NULL;
	{
		// markers.Clear();
		List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* L_0 = ___1_markers;
		NullCheck(L_0);
		List_1_Clear_m95B13A6D907606F0F35D36B6BEA0F1F31F91B6E9_inline(L_0, List_1_Clear_m95B13A6D907606F0F35D36B6BEA0F1F31F91B6E9_RuntimeMethod_var);
		// int count = reader.ReadInt32();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		V_0 = L_2;
		// markers.Capacity = count;
		List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* L_3 = ___1_markers;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		List_1_set_Capacity_m67D865992ADEFE238DD908DD4DCD62202EFEBAE7(L_3, L_4, List_1_set_Capacity_m67D865992ADEFE238DD908DD4DCD62202EFEBAE7_RuntimeMethod_var);
		// for (int i = 0; i < count; ++i)
		V_1 = 0;
		goto IL_0041;
	}

IL_0018:
	{
		// var marker = new InputAnimationMarker();
		InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* L_5 = (InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE*)il2cpp_codegen_object_new(InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		InputAnimationMarker__ctor_m62786537986D6AE4FF5157FD3F47AF5E9E42C7D6(L_5, NULL);
		V_2 = L_5;
		// marker.time = reader.ReadSingle();
		InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* L_6 = V_2;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_reader;
		NullCheck(L_7);
		float L_8;
		L_8 = VirtualFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_7);
		NullCheck(L_6);
		L_6->___time_0 = L_8;
		// marker.name = reader.ReadString();
		InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* L_9 = V_2;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = ___0_reader;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_10);
		NullCheck(L_9);
		L_9->___name_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___name_1), (void*)L_11);
		// markers.Add(marker);
		List_1_t9BCB7DA9BD0B9E50505ED1444E9AEA71490796AE* L_12 = ___1_markers;
		InputAnimationMarker_t8D5CAF0C373358D87BEA0F4EF7413DE6C238C8FE* L_13 = V_2;
		NullCheck(L_12);
		List_1_Add_m54B7516377CD87A702EB52ADCF4B0105717EC602_inline(L_12, L_13, List_1_Add_m54B7516377CD87A702EB52ADCF4B0105717EC602_RuntimeMethod_var);
		// for (int i = 0; i < count; ++i)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0041:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0018;
		}
	}
	{
		// }
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
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::get_StartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRecordingBuffer_get_StartTime_m33F70CDEC9D3F8AF591233B053BA5B0C519C05B0 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m3181CC3072E651C6CB3C095C8BB9DA14D2A70348_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float StartTime => keyframes.Peek().Time;
		Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* L_0 = __this->___keyframes_1;
		NullCheck(L_0);
		Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_1;
		L_1 = Queue_1_Peek_m3181CC3072E651C6CB3C095C8BB9DA14D2A70348(L_0, Queue_1_Peek_m3181CC3072E651C6CB3C095C8BB9DA14D2A70348_RuntimeMethod_var);
		NullCheck(L_1);
		float L_2;
		L_2 = Keyframe_get_Time_m4FFDA94203B0BFE0E4D292D0A7D22C3E6070DACA_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer__ctor_m3A4AB3D9721FDF5A46D6BA3B5308C67824C40EE7 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m22A50CD614158B602874F1FE6C418026CC5F67F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InputRecordingBuffer() => keyframes = new Queue<Keyframe>();
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public InputRecordingBuffer() => keyframes = new Queue<Keyframe>();
		Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* L_0 = (Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA*)il2cpp_codegen_object_new(Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m22A50CD614158B602874F1FE6C418026CC5F67F4(L_0, Queue_1__ctor_m22A50CD614158B602874F1FE6C418026CC5F67F4_RuntimeMethod_var);
		__this->___keyframes_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyframes_1), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_Clear_m6267C40ECAA1E8665339AC9DABBB92F6DBD7692D (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m6739E35A6637FBF1AC2260748B5FEBB368C8A714_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// keyframes.Clear();
		Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* L_0 = __this->___keyframes_1;
		NullCheck(L_0);
		Queue_1_Clear_m6739E35A6637FBF1AC2260748B5FEBB368C8A714(L_0, Queue_1_Clear_m6739E35A6637FBF1AC2260748B5FEBB368C8A714_RuntimeMethod_var);
		// currentKeyframe = null;
		__this->___currentKeyframe_0 = (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentKeyframe_0), (void*)(Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A*)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::RemoveBeforeTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_RemoveBeforeTime_mD289D64436AABD38F7F04DC986451EFBD084D6FB (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, float ___0_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mC64635960AD33E382E6998F6C60BFAF44A729BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m3181CC3072E651C6CB3C095C8BB9DA14D2A70348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mE1C43309B4F9DC4D685D8A82B9BFC40DD77CA79F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_000e;
	}

IL_0002:
	{
		// keyframes.Dequeue();
		Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* L_0 = __this->___keyframes_1;
		NullCheck(L_0);
		Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_1;
		L_1 = Queue_1_Dequeue_mC64635960AD33E382E6998F6C60BFAF44A729BD3(L_0, Queue_1_Dequeue_mC64635960AD33E382E6998F6C60BFAF44A729BD3_RuntimeMethod_var);
	}

IL_000e:
	{
		// while (keyframes.Count > 0 && keyframes.Peek().Time < time)
		Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* L_2 = __this->___keyframes_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Queue_1_get_Count_mE1C43309B4F9DC4D685D8A82B9BFC40DD77CA79F_inline(L_2, Queue_1_get_Count_mE1C43309B4F9DC4D685D8A82B9BFC40DD77CA79F_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* L_4 = __this->___keyframes_1;
		NullCheck(L_4);
		Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_5;
		L_5 = Queue_1_Peek_m3181CC3072E651C6CB3C095C8BB9DA14D2A70348(L_4, Queue_1_Peek_m3181CC3072E651C6CB3C095C8BB9DA14D2A70348_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6;
		L_6 = Keyframe_get_Time_m4FFDA94203B0BFE0E4D292D0A7D22C3E6070DACA_inline(L_5, NULL);
		float L_7 = ___0_time;
		if ((((float)L_6) < ((float)L_7)))
		{
			goto IL_0002;
		}
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetCameraPose(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetCameraPose_m311FA26F2C37070A8D144D6193A316A4B5DD33BF (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___0_pose, const RuntimeMethod* method) 
{
	{
		// public void SetCameraPose(MixedRealityPose pose) => currentKeyframe.CameraPose = pose;
		Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_0 = __this->___currentKeyframe_0;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_1 = ___0_pose;
		NullCheck(L_0);
		Keyframe_set_CameraPose_mC35D102F18876CB08D9B69AF3029A9B2A7749ABD_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetGazeRay(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetGazeRay_m51FB84CBE2E83192AF3EF1B934CF1519366922E3 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, const RuntimeMethod* method) 
{
	{
		// public void SetGazeRay(Ray ray) => currentKeyframe.GazeRay = ray;
		Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_0 = __this->___currentKeyframe_0;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_1 = ___0_ray;
		NullCheck(L_0);
		Keyframe_set_GazeRay_m646AF29572384DD341B6C1932BF4077333512612_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetHandState(Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetHandState_m5F55FEDCB175A860CF7B062D78FF2FE0C3A8D9B6 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, uint8_t ___0_handedness, bool ___1_tracked, bool ___2_pinching, const RuntimeMethod* method) 
{
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___0_handedness;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		// currentKeyframe.LeftTracked = tracked;
		Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_1 = __this->___currentKeyframe_0;
		bool L_2 = ___1_tracked;
		NullCheck(L_1);
		Keyframe_set_LeftTracked_m04987AB33CC5584DB5EFFE9B348818463EDCF13C_inline(L_1, L_2, NULL);
		// currentKeyframe.LeftPinch = pinching;
		Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_3 = __this->___currentKeyframe_0;
		bool L_4 = ___2_pinching;
		NullCheck(L_3);
		Keyframe_set_LeftPinch_m6722585825204D1BE8D4141CABAF477A80B6F3A9_inline(L_3, L_4, NULL);
		return;
	}

IL_001d:
	{
		// currentKeyframe.RightTracked = tracked;
		Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_5 = __this->___currentKeyframe_0;
		bool L_6 = ___1_tracked;
		NullCheck(L_5);
		Keyframe_set_RightTracked_m500C841E76DEB3011671FB06CB11DEB0C3B94990_inline(L_5, L_6, NULL);
		// currentKeyframe.RightPinch = pinching;
		Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_7 = __this->___currentKeyframe_0;
		bool L_8 = ___2_pinching;
		NullCheck(L_7);
		Keyframe_set_RightPinch_m008AB8FCB6255E7E6AA7FDF22D5F21807913D0DF_inline(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetJointPose(Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetJointPose_m031DF987BD131C6552CB2A983D6941704D2DE7B2 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, uint8_t ___0_handedness, int32_t ___1_joint, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___2_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m02760479713C54BA45D7C946C962C44D9C0021A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___0_handedness;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		// currentKeyframe.LeftJoints.Add(joint, pose);
		Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_1 = __this->___currentKeyframe_0;
		NullCheck(L_1);
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_2;
		L_2 = Keyframe_get_LeftJoints_m22F03CB8DC507FDF1DA749672119B2FEDDE4B5B7_inline(L_1, NULL);
		int32_t L_3 = ___1_joint;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_4 = ___2_pose;
		NullCheck(L_2);
		Dictionary_2_Add_m02760479713C54BA45D7C946C962C44D9C0021A2(L_2, L_3, L_4, Dictionary_2_Add_m02760479713C54BA45D7C946C962C44D9C0021A2_RuntimeMethod_var);
		return;
	}

IL_0017:
	{
		// currentKeyframe.RightJoints.Add(joint, pose);
		Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_5 = __this->___currentKeyframe_0;
		NullCheck(L_5);
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_6;
		L_6 = Keyframe_get_RightJoints_mA445665FE282A5ED5C81192B57752C2574D6538F_inline(L_5, NULL);
		int32_t L_7 = ___1_joint;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_8 = ___2_pose;
		NullCheck(L_6);
		Dictionary_2_Add_m02760479713C54BA45D7C946C962C44D9C0021A2(L_6, L_7, L_8, Dictionary_2_Add_m02760479713C54BA45D7C946C962C44D9C0021A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::NewKeyframe(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputRecordingBuffer_NewKeyframe_m3ABB3E8C31EC3B91A7138DB452660363E21F0228 (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, float ___0_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mAD480491CB18D18F4D622D7092BE5205C3516368_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mE1C43309B4F9DC4D685D8A82B9BFC40DD77CA79F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentKeyframe = new Keyframe(time);
		float L_0 = ___0_time;
		Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_1 = (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A*)il2cpp_codegen_object_new(Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Keyframe__ctor_mACD720BDFEB7F3E779273AB8C797D848577400CD(L_1, L_0, NULL);
		__this->___currentKeyframe_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentKeyframe_0), (void*)L_1);
		// keyframes.Enqueue(currentKeyframe);
		Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* L_2 = __this->___keyframes_1;
		Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* L_3 = __this->___currentKeyframe_0;
		NullCheck(L_2);
		Queue_1_Enqueue_mAD480491CB18D18F4D622D7092BE5205C3516368(L_2, L_3, Queue_1_Enqueue_mAD480491CB18D18F4D622D7092BE5205C3516368_RuntimeMethod_var);
		// return keyframes.Count - 1;
		Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* L_4 = __this->___keyframes_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Queue_1_get_Count_mE1C43309B4F9DC4D685D8A82B9BFC40DD77CA79F_inline(L_4, Queue_1_get_Count_mE1C43309B4F9DC4D685D8A82B9BFC40DD77CA79F_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}
}
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputRecordingBuffer_GetEnumerator_m6594C7E6D0D85F8238D591D5CCF8E4A381C5E59D (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tC1CB8DBFCB8CFB457B71BAAABB458F35DEA2B6EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_GetEnumerator_m5952DCCC535AE1086200E210DF339668E915C525_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerator<Keyframe> GetEnumerator() => keyframes.GetEnumerator();
		Queue_1_t0ECE6A8546304B35DB8EA2A9FED53F0E348607FA* L_0 = __this->___keyframes_1;
		NullCheck(L_0);
		Enumerator_tC1CB8DBFCB8CFB457B71BAAABB458F35DEA2B6EC L_1;
		L_1 = Queue_1_GetEnumerator_m5952DCCC535AE1086200E210DF339668E915C525(L_0, Queue_1_GetEnumerator_m5952DCCC535AE1086200E210DF339668E915C525_RuntimeMethod_var);
		Enumerator_tC1CB8DBFCB8CFB457B71BAAABB458F35DEA2B6EC L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_tC1CB8DBFCB8CFB457B71BAAABB458F35DEA2B6EC_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputRecordingBuffer_System_Collections_IEnumerable_GetEnumerator_m98E174E446E0E4984C64932B434FE107BBA08D1C (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* __this, const RuntimeMethod* method) 
{
	{
		// IEnumerator IEnumerable.GetEnumerator() => GetEnumerator();
		RuntimeObject* L_0;
		L_0 = InputRecordingBuffer_GetEnumerator_m6594C7E6D0D85F8238D591D5CCF8E4A381C5E59D(__this, NULL);
		return L_0;
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
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_Time_m4FFDA94203B0BFE0E4D292D0A7D22C3E6070DACA (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public float Time { get; set; }
		float L_0 = __this->___U3CTimeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_Time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_Time_m2DCE7E98D3923E2955D27FCBB28AF08F8E047E00 (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Time { get; set; }
		float L_0 = ___0_value;
		__this->___U3CTimeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_LeftTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Keyframe_get_LeftTracked_mF2797B136459D689C9F7576909167B76DC409E73 (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public bool LeftTracked { get; set; }
		bool L_0 = __this->___U3CLeftTrackedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_LeftTracked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_LeftTracked_m04987AB33CC5584DB5EFFE9B348818463EDCF13C (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool LeftTracked { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CLeftTrackedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_RightTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Keyframe_get_RightTracked_m1FCF75796B487D26FAD3B73F29EF0617369B7C08 (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public bool RightTracked { get; set; }
		bool L_0 = __this->___U3CRightTrackedU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_RightTracked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_RightTracked_m500C841E76DEB3011671FB06CB11DEB0C3B94990 (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool RightTracked { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CRightTrackedU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_LeftPinch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Keyframe_get_LeftPinch_m68D4427463BEE61BC4307893CC797B3F05CE7F07 (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public bool LeftPinch { get; set; }
		bool L_0 = __this->___U3CLeftPinchU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_LeftPinch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_LeftPinch_m6722585825204D1BE8D4141CABAF477A80B6F3A9 (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool LeftPinch { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CLeftPinchU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_RightPinch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Keyframe_get_RightPinch_m4DF67192F78BEDC78BF61536EBC176BB8275EBB8 (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public bool RightPinch { get; set; }
		bool L_0 = __this->___U3CRightPinchU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_RightPinch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_RightPinch_m008AB8FCB6255E7E6AA7FDF22D5F21807913D0DF (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool RightPinch { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CRightPinchU3Ek__BackingField_4 = L_0;
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_CameraPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 Keyframe_get_CameraPose_mF325808078E828CB4C42612A6EA839420AC0F7E1 (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public MixedRealityPose CameraPose { get; set; }
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_0 = __this->___U3CCameraPoseU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_CameraPose(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_CameraPose_mC35D102F18876CB08D9B69AF3029A9B2A7749ABD (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___0_value, const RuntimeMethod* method) 
{
	{
		// public MixedRealityPose CameraPose { get; set; }
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_0 = ___0_value;
		__this->___U3CCameraPoseU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_GazeRay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Keyframe_get_GazeRay_m7E3BB33B51B23BB60F6306C7AB37FCD28656B256 (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public Ray GazeRay { get; set; }
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = __this->___U3CGazeRayU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_GazeRay(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_GazeRay_m646AF29572384DD341B6C1932BF4077333512612 (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Ray GazeRay { get; set; }
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = ___0_value;
		__this->___U3CGazeRayU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_LeftJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* Keyframe_get_LeftJoints_m22F03CB8DC507FDF1DA749672119B2FEDDE4B5B7 (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> LeftJoints { get; set; }
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_0 = __this->___U3CLeftJointsU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_LeftJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_LeftJoints_m7B17D04999FBC87AD6109479BFE9403BB2F825EB (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> LeftJoints { get; set; }
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_0 = ___0_value;
		__this->___U3CLeftJointsU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLeftJointsU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_RightJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* Keyframe_get_RightJoints_mA445665FE282A5ED5C81192B57752C2574D6538F (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> RightJoints { get; set; }
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_0 = __this->___U3CRightJointsU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_RightJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_RightJoints_mA41AF55774CADF48F661D93A487851AF31A180EE (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> RightJoints { get; set; }
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_0 = ___0_value;
		__this->___U3CRightJointsU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRightJointsU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mACD720BDFEB7F3E779273AB8C797D848577400CD (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, float ___0_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB503ABA3C13679286D2C404B06C0F4C781873E4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Keyframe(float time)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Time = time;
		float L_0 = ___0_time;
		Keyframe_set_Time_m2DCE7E98D3923E2955D27FCBB28AF08F8E047E00_inline(__this, L_0, NULL);
		// LeftJoints = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_1 = (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7*)il2cpp_codegen_object_new(Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mB503ABA3C13679286D2C404B06C0F4C781873E4C(L_1, Dictionary_2__ctor_mB503ABA3C13679286D2C404B06C0F4C781873E4C_RuntimeMethod_var);
		Keyframe_set_LeftJoints_m7B17D04999FBC87AD6109479BFE9403BB2F825EB_inline(__this, L_1, NULL);
		// RightJoints = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_2 = (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7*)il2cpp_codegen_object_new(Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mB503ABA3C13679286D2C404B06C0F4C781873E4C(L_2, Dictionary_2__ctor_mB503ABA3C13679286D2C404B06C0F4C781873E4C_RuntimeMethod_var);
		Keyframe_set_RightJoints_mA41AF55774CADF48F661D93A487851AF31A180EE_inline(__this, L_2, NULL);
		// }
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::add_OnRecordingStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_add_OnRecordingStarted_m1D6C436E8587CE7F2B93E734BB654D5C0C04033E (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnRecordingStarted_21;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnRecordingStarted_21);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::remove_OnRecordingStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_remove_OnRecordingStarted_m0366F581E7D2B72FEA7013EA2EA216A66B01C443 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnRecordingStarted_21;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnRecordingStarted_21);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::add_OnRecordingStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_add_OnRecordingStopped_m1AE5B61B53F9B087437D62BCAEDBB2C3209100C2 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnRecordingStopped_22;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnRecordingStopped_22);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::remove_OnRecordingStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_remove_OnRecordingStopped_m0083F315AE0E8A5150B101526D47DFB2D10339A8 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnRecordingStopped_22;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnRecordingStopped_22);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsRecording_mA55D42F3E0289948A2743B3417B2BFAB3D686731 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = __this->___U3CIsRecordingU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_IsRecording(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_set_IsRecording_mF57E9C9C9B8C4FF5D91B8736F57C89136C7535A2 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CIsRecordingU3Ek__BackingField_23 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_UseBufferTimeLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRecordingService_get_UseBufferTimeLimit_m4FE5D027784EC5A4B3E376364063EC81FB70BCCC (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	{
		// get { return useBufferTimeLimit; }
		bool L_0 = __this->___useBufferTimeLimit_24;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_UseBufferTimeLimit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_set_UseBufferTimeLimit_m24C922910F9F683FF818A0875B2458C407730169 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (useBufferTimeLimit && !value)
		bool L_0 = __this->___useBufferTimeLimit_24;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// unlimitedRecordingStartTime = StartTime;
		float L_2;
		L_2 = InputRecordingService_get_StartTime_m6F449423C0F0F5698C896F4AFE018AC98F930D56(__this, NULL);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		__this->___unlimitedRecordingStartTime_26 = L_3;
	}

IL_001c:
	{
		// useBufferTimeLimit = value;
		bool L_4 = ___0_value;
		__this->___useBufferTimeLimit_24 = L_4;
		// if (useBufferTimeLimit)
		bool L_5 = __this->___useBufferTimeLimit_24;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_mC53E32BDA315ACCC170D11CD0400FEC7A44238F1(__this, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_StartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRecordingService_get_StartTime_m6F449423C0F0F5698C896F4AFE018AC98F930D56 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (unlimitedRecordingStartTime.HasValue)
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_0 = (&__this->___unlimitedRecordingStartTime_26);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_0, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// if (useBufferTimeLimit)
		bool L_2 = __this->___useBufferTimeLimit_24;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// return Mathf.Max(unlimitedRecordingStartTime.Value, EndTime - recordingBufferTimeLimit);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_3 = (&__this->___unlimitedRecordingStartTime_26);
		float L_4;
		L_4 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_3, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_5;
		L_5 = InputRecordingService_get_EndTime_m1D3BB614498597D6D8C8DB2588AF58F460F2249C_inline(__this, NULL);
		float L_6 = __this->___recordingBufferTimeLimit_25;
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, ((float)il2cpp_codegen_subtract(L_5, L_6)), NULL);
		return L_7;
	}

IL_0033:
	{
		// return unlimitedRecordingStartTime.Value;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_8 = (&__this->___unlimitedRecordingStartTime_26);
		float L_9;
		L_9 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_8, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		return L_9;
	}

IL_003f:
	{
		// return EndTime;
		float L_10;
		L_10 = InputRecordingService_get_EndTime_m1D3BB614498597D6D8C8DB2588AF58F460F2249C_inline(__this, NULL);
		return L_10;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_EndTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRecordingService_get_EndTime_m1D3BB614498597D6D8C8DB2588AF58F460F2249C (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	{
		// public float EndTime { get; private set; }
		float L_0 = __this->___U3CEndTimeU3Ek__BackingField_27;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_EndTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_set_EndTime_mDFD0B484544CAD9E98556ED578F70F0CA7FF295D (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float EndTime { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CEndTimeU3Ek__BackingField_27 = L_0;
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_InputRecordingProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* InputRecordingService_get_InputRecordingProfile_mEB8BF479C9088C88BB6E697B430982D77CD59ECC (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F30A225B0E18CECF032D8CBEBC2F77FFC6A9B2B);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* G_B2_0 = NULL;
	MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* G_B1_0 = NULL;
	{
		// var profile = ConfigurationProfile as MixedRealityInputRecordingProfile;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_0;
		L_0 = VirtualFuncInvoker0< BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		// if (!profile)
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_1 = ((MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715*)IsInstClass((RuntimeObject*)L_0, MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_001d;
		}
	}
	{
		// Debug.LogError("Profile for Input Recording Service must be a MixedRealityInputRecordingProfile");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2F30A225B0E18CECF032D8CBEBC2F77FFC6A9B2B, NULL);
		G_B2_0 = G_B1_0;
	}

IL_001d:
	{
		// return profile;
		return G_B2_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_Enable_m3CC51DDA70BF7F401E79B9E27FCD6DDAC19E8AA9 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Enable();
		BaseService_Enable_mF054160CA265761A1223A3F8CFE50A976C7297E8(__this, NULL);
		// recordingBuffer = new InputRecordingBuffer();
		InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* L_0 = (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5*)il2cpp_codegen_object_new(InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InputRecordingBuffer__ctor_m3A4AB3D9721FDF5A46D6BA3B5308C67824C40EE7(L_0, NULL);
		__this->___recordingBuffer_31 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recordingBuffer_31), (void*)L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_Disable_m4F6B21FF65C039BA474BF39E7564D49D4FE7853A (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	{
		// base.Disable();
		BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4(__this, NULL);
		// recordingBuffer = null;
		__this->___recordingBuffer_31 = (InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recordingBuffer_31), (void*)(InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5*)NULL);
		// ResetStartTime();
		InputRecordingService_ResetStartTime_m48A8D54990BE245F9217DC7F47F7F3E278305124(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::StartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_StartRecording_mEEF3D75B768EF55F9455394521C16E9FF9F9FFE9 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B6_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B5_0 = NULL;
	{
		// eyeGazeProvider = CoreServices.InputSystem.EyeGazeProvider;
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_EyeGazeProvider() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_0);
		__this->___eyeGazeProvider_32 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eyeGazeProvider_32), (void*)L_1);
		// IsRecording = true;
		InputRecordingService_set_IsRecording_mF57E9C9C9B8C4FF5D91B8736F57C89136C7535A2_inline(__this, (bool)1, NULL);
		// frameRate = InputRecordingProfile.FrameRate;
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_2;
		L_2 = InputRecordingService_get_InputRecordingProfile_mEB8BF479C9088C88BB6E697B430982D77CD59ECC(__this, NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = MixedRealityInputRecordingProfile_get_FrameRate_m839FB3C3EF99E9376315AB9B20919854C732AFA0_inline(L_2, NULL);
		__this->___frameRate_28 = L_3;
		// frameInterval = 1f / frameRate;
		float L_4 = __this->___frameRate_28;
		__this->___frameInterval_29 = ((float)((1.0f)/L_4));
		// nextFrame = Time.time + frameInterval;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_6 = __this->___frameInterval_29;
		__this->___nextFrame_30 = ((float)il2cpp_codegen_add(L_5, L_6));
		// if (UseBufferTimeLimit)
		bool L_7;
		L_7 = InputRecordingService_get_UseBufferTimeLimit_m4FE5D027784EC5A4B3E376364063EC81FB70BCCC_inline(__this, NULL);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_mC53E32BDA315ACCC170D11CD0400FEC7A44238F1(__this, NULL);
	}

IL_005a:
	{
		// if (!unlimitedRecordingStartTime.HasValue)
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_8 = (&__this->___unlimitedRecordingStartTime_26);
		bool L_9;
		L_9 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_8, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0077;
		}
	}
	{
		// unlimitedRecordingStartTime = Time.time;
		float L_10;
		L_10 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		__this->___unlimitedRecordingStartTime_26 = L_11;
	}

IL_0077:
	{
		// OnRecordingStarted?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = __this->___OnRecordingStarted_21;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = L_12;
		G_B5_0 = L_13;
		if (L_13)
		{
			G_B6_0 = L_13;
			goto IL_0082;
		}
	}
	{
		return;
	}

IL_0082:
	{
		NullCheck(G_B6_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B6_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_StopRecording_m389BEEC8D10F69CB7833052384CADA0BFDA85E64 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// IsRecording = false;
		InputRecordingService_set_IsRecording_mF57E9C9C9B8C4FF5D91B8736F57C89136C7535A2_inline(__this, (bool)0, NULL);
		// OnRecordingStopped?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnRecordingStopped_22;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_LateUpdate_m824AAB72418FCEEF8B1C3511B6AA108D5D0873B3 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	{
		// if (IsEnabled && IsRecording && Time.time > nextFrame)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		bool L_1;
		L_1 = InputRecordingService_get_IsRecording_mA55D42F3E0289948A2743B3417B2BFAB3D686731_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___nextFrame_30;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_006e;
		}
	}
	{
		// EndTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		InputRecordingService_set_EndTime_mDFD0B484544CAD9E98556ED578F70F0CA7FF295D_inline(__this, L_4, NULL);
		// nextFrame += frameInterval * (Mathf.Floor((Time.time - nextFrame) * frameRate) + 1f);
		float L_5 = __this->___nextFrame_30;
		float L_6 = __this->___frameInterval_29;
		float L_7;
		L_7 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_8 = __this->___nextFrame_30;
		float L_9 = __this->___frameRate_28;
		float L_10;
		L_10 = floorf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_7, L_8)), L_9)));
		__this->___nextFrame_30 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_6, ((float)il2cpp_codegen_add(L_10, (1.0f)))))));
		// if (UseBufferTimeLimit)
		bool L_11;
		L_11 = InputRecordingService_get_UseBufferTimeLimit_m4FE5D027784EC5A4B3E376364063EC81FB70BCCC_inline(__this, NULL);
		if (!L_11)
		{
			goto IL_0068;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_mC53E32BDA315ACCC170D11CD0400FEC7A44238F1(__this, NULL);
	}

IL_0068:
	{
		// RecordKeyframe();
		InputRecordingService_RecordKeyframe_m026026C9AE742DFDE9210A2DB4CFE7D3ACFF428C(__this, NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::DiscardRecordedInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_DiscardRecordedInput_m46B160ECBCB6BE6A652421C8038F31436A0651ED (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	{
		// if (IsEnabled)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// recordingBuffer.Clear();
		InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* L_1 = __this->___recordingBuffer_31;
		NullCheck(L_1);
		InputRecordingBuffer_Clear_m6267C40ECAA1E8665339AC9DABBB92F6DBD7692D(L_1, NULL);
		// ResetStartTime();
		InputRecordingService_ResetStartTime_m48A8D54990BE245F9217DC7F47F7F3E278305124(__this, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.InputRecordingService::SaveInputAnimation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputRecordingService_SaveInputAnimation_mC00A4B67FC3A7E7A77117E5AF9D340C96B6B6015 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, String_t* ___0_directory, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06265567ED5B353F62334C6ED834095E8F3DA213);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string SaveInputAnimation(string directory = null) => SaveInputAnimation(InputAnimationSerializationUtils.GetOutputFilename(), directory);
		String_t* L_0;
		L_0 = InputAnimationSerializationUtils_GetOutputFilename_m1AB5C4821F099AE6375F79215C4FA3FBF8984879(_stringLiteral06265567ED5B353F62334C6ED834095E8F3DA213, (bool)1, NULL);
		String_t* L_1 = ___0_directory;
		String_t* L_2;
		L_2 = InputRecordingService_SaveInputAnimation_m43C139CA2FE924BD1448DE8E2613D45478315F0E(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.InputRecordingService::SaveInputAnimation(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputRecordingService_SaveInputAnimation_m43C139CA2FE924BD1448DE8E2613D45478315F0E (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, String_t* ___0_filename, String_t* ___1_directory, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D826E55CA66B177C3CA8E6D951B2AAC0D06ADC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C71071781ACA763255B49C62BBF32A19A63C633);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	String_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		// if (IsEnabled)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
		if (!L_0)
		{
			goto IL_0079;
		}
	}
	{
		// string path = Path.Combine(directory ?? Application.persistentDataPath, filename);
		String_t* L_1 = ___1_directory;
		String_t* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0012;
		}
	}
	{
		String_t* L_3;
		L_3 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		String_t* L_4 = ___0_filename;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(G_B3_0, L_4, NULL);
		V_0 = L_5;
	}
	try
	{// begin try (depth: 1)
		{
			// using (Stream fileStream = File.Open(path, FileMode.Create))
			String_t* L_6 = V_0;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7;
			L_7 = File_Open_m3C4C3B31523AC0687F60FFD1B0FD51F49161EB64(L_6, 2, NULL);
			V_1 = L_7;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_005f_1:
				{// begin finally (depth: 2)
					{
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = V_1;
						if (!L_8)
						{
							goto IL_0068_1;
						}
					}
					{
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = V_1;
						NullCheck(L_9);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
					}

IL_0068_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// PruneBuffer();
				InputRecordingService_PruneBuffer_mC53E32BDA315ACCC170D11CD0400FEC7A44238F1(__this, NULL);
				// var animation = InputAnimation.FromRecordingBuffer(recordingBuffer, InputRecordingProfile);
				InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* L_10 = __this->___recordingBuffer_31;
				MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_11;
				L_11 = InputRecordingService_get_InputRecordingProfile_mEB8BF479C9088C88BB6E697B430982D77CD59ECC(__this, NULL);
				InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* L_12;
				L_12 = InputAnimation_FromRecordingBuffer_m9A5287F72510B5CF84C250DD473F3912DE13A2C5(L_10, L_11, NULL);
				// Debug.Log($"Recording buffer saved to animation");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral10D826E55CA66B177C3CA8E6D951B2AAC0D06ADC, NULL);
				// animation.ToStream(fileStream, 0f);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = V_1;
				NullCheck(L_12);
				InputAnimation_ToStream_m5D5561EFAD679FA47D4384D46F44191E1F9BD13A(L_12, L_13, (0.0f), NULL);
				// Debug.Log($"Recorded input animation exported to {path}");
				String_t* L_14 = V_0;
				String_t* L_15;
				L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2C71071781ACA763255B49C62BBF32A19A63C633, L_14, NULL);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
				// }
				goto IL_0069_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0069_1:
		{
			// return path;
			String_t* L_16 = V_0;
			V_2 = L_16;
			goto IL_007f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006d;
		}
		throw e;
	}

CATCH_006d:
	{// begin catch(System.IO.IOException)
		// Debug.LogWarning(ex.Message);
		NullCheck(((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)));
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_17, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0079;
	}// end catch (depth: 1)

IL_0079:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_007f:
	{
		// }
		String_t* L_18 = V_2;
		return L_18;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::ResetStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_ResetStartTime_m48A8D54990BE245F9217DC7F47F7F3E278305124 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsRecording)
		bool L_0;
		L_0 = InputRecordingService_get_IsRecording_mA55D42F3E0289948A2743B3417B2BFAB3D686731_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// unlimitedRecordingStartTime = Time.time;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		__this->___unlimitedRecordingStartTime_26 = L_2;
		return;
	}

IL_0019:
	{
		// unlimitedRecordingStartTime = null;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_3 = (&__this->___unlimitedRecordingStartTime_26);
		il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordKeyframe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_RecordKeyframe_m026026C9AE742DFDE9210A2DB4CFE7D3ACFF428C (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEyeGazeProvider_tC69CFCA4497CFED3639A93E88CA9A6D175004416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* G_B2_0 = NULL;
	MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* G_B1_0 = NULL;
	MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* G_B5_0 = NULL;
	MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* G_B3_0 = NULL;
	MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* G_B4_0 = NULL;
	MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* G_B6_0 = NULL;
	{
		// float time = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_0 = L_0;
		// var profile = InputRecordingProfile;
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_1;
		L_1 = InputRecordingService_get_InputRecordingProfile_mEB8BF479C9088C88BB6E697B430982D77CD59ECC(__this, NULL);
		// recordingBuffer.NewKeyframe(time);
		InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* L_2 = __this->___recordingBuffer_31;
		float L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InputRecordingBuffer_NewKeyframe_m3ABB3E8C31EC3B91A7138DB452660363E21F0228(L_2, L_3, NULL);
		// if (profile.RecordHandData)
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_5 = L_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = MixedRealityInputRecordingProfile_get_RecordHandData_m00FB590BB5C2842EBD2A69855D25BE61393FDB8A_inline(L_5, NULL);
		G_B1_0 = L_5;
		if (!L_6)
		{
			G_B2_0 = L_5;
			goto IL_002f;
		}
	}
	{
		// RecordInputHandData(Handedness.Left);
		InputRecordingService_RecordInputHandData_mFE161CF4B4885C83B0FD8E22DD5DC51ED78FF442(__this, 1, NULL);
		// RecordInputHandData(Handedness.Right);
		InputRecordingService_RecordInputHandData_mFE161CF4B4885C83B0FD8E22DD5DC51ED78FF442(__this, 2, NULL);
		G_B2_0 = G_B1_0;
	}

IL_002f:
	{
		// if (profile.RecordCameraPose && CameraCache.Main)
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_7 = G_B2_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = MixedRealityInputRecordingProfile_get_RecordCameraPose_mAC2C5D60A010CEA2AED6B77A6AC646DB4164BD17_inline(L_7, NULL);
		G_B3_0 = L_7;
		if (!L_8)
		{
			G_B5_0 = L_7;
			goto IL_0076;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		G_B4_0 = G_B3_0;
		if (!L_10)
		{
			G_B5_0 = G_B3_0;
			goto IL_0076;
		}
	}
	{
		// cameraPose = new MixedRealityPose(CameraCache.Main.transform.position, CameraCache.Main.transform.rotation);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A(NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A(NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		MixedRealityPose__ctor_mA9F8CDFA80771B30CB085958B1AE0526919755F0((&V_1), L_13, L_16, NULL);
		// recordingBuffer.SetCameraPose(cameraPose);
		InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* L_17 = __this->___recordingBuffer_31;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_18 = V_1;
		NullCheck(L_17);
		InputRecordingBuffer_SetCameraPose_m311FA26F2C37070A8D144D6193A316A4B5DD33BF(L_17, L_18, NULL);
		G_B6_0 = G_B4_0;
		goto IL_0087;
	}

IL_0076:
	{
		// cameraPose = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		MixedRealityPose__ctor_mA9F8CDFA80771B30CB085958B1AE0526919755F0((&V_1), L_19, L_20, NULL);
		G_B6_0 = G_B5_0;
	}

IL_0087:
	{
		// if (profile.RecordEyeGaze)
		NullCheck(G_B6_0);
		bool L_21;
		L_21 = MixedRealityInputRecordingProfile_get_RecordEyeGaze_m7201174C8BF2C24C4C3B6073E16951013DEB1920_inline(G_B6_0, NULL);
		if (!L_21)
		{
			goto IL_00cb;
		}
	}
	{
		// if (eyeGazeProvider != null)
		RuntimeObject* L_22 = __this->___eyeGazeProvider_32;
		if (!L_22)
		{
			goto IL_00ad;
		}
	}
	{
		// recordingBuffer.SetGazeRay(eyeGazeProvider.LatestEyeGaze);
		InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* L_23 = __this->___recordingBuffer_31;
		RuntimeObject* L_24 = __this->___eyeGazeProvider_32;
		NullCheck(L_24);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_25;
		L_25 = InterfaceFuncInvoker0< Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 >::Invoke(3 /* UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::get_LatestEyeGaze() */, IMixedRealityEyeGazeProvider_tC69CFCA4497CFED3639A93E88CA9A6D175004416_il2cpp_TypeInfo_var, L_24);
		NullCheck(L_23);
		InputRecordingBuffer_SetGazeRay_m51FB84CBE2E83192AF3EF1B934CF1519366922E3(L_23, L_25, NULL);
		return;
	}

IL_00ad:
	{
		// recordingBuffer.SetGazeRay(new Ray(cameraPose.Position, cameraPose.Forward));
		InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* L_26 = __this->___recordingBuffer_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = MixedRealityPose_get_Position_mDF63DBEBBB8B0979C9CA6F06902F9281C26ACA81_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = MixedRealityPose_get_Forward_m4A8B12C79D6C1F1CEC394746E026D08E64BE6A57((&V_1), NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_29), L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		InputRecordingBuffer_SetGazeRay_m51FB84CBE2E83192AF3EF1B934CF1519366922E3(L_26, L_29, NULL);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordInputHandData(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_RecordInputHandData_mFE161CF4B4885C83B0FD8E22DD5DC51ED78FF442 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, uint8_t ___0_handedness, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHand_tCAF3397A5008BD48D37A9F04A6C7066756C33744_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* V_4 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 V_8;
	memset((&V_8), 0, sizeof(V_8));
	MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	int32_t G_B9_1 = 0;
	{
		// float time = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		// var profile = InputRecordingProfile;
		MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* L_1;
		L_1 = InputRecordingService_get_InputRecordingProfile_mEB8BF479C9088C88BB6E697B430982D77CD59ECC(__this, NULL);
		// var hand = HandJointUtils.FindHand(handedness);
		uint8_t L_2 = ___0_handedness;
		RuntimeObject* L_3;
		L_3 = HandJointUtils_FindHand_m2E00C4D4591DBAC2B0241E89215EDB8A063AAD6B(L_2, NULL);
		V_0 = L_3;
		// if (hand == null)
		RuntimeObject* L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		// recordingBuffer.SetHandState(handedness, false, false);
		InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* L_5 = __this->___recordingBuffer_31;
		uint8_t L_6 = ___0_handedness;
		NullCheck(L_5);
		InputRecordingBuffer_SetHandState_m5F55FEDCB175A860CF7B062D78FF2FE0C3A8D9B6(L_5, L_6, (bool)0, (bool)0, NULL);
		// return;
		return;
	}

IL_0026:
	{
		// bool isTracked = (hand.TrackingState == TrackingState.Tracked);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_TrackingState() */, IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var, L_7);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
		// bool isPinching = false;
		V_2 = (bool)0;
		// for (int i = 0; i < hand.Interactions?.Length; i++)
		V_3 = 0;
		goto IL_0057;
	}

IL_0036:
	{
		// var interaction = hand.Interactions[i];
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_10;
		L_10 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var, L_9);
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		// switch (interaction.InputType)
		MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_14 = V_4;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline(L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_0053;
		}
	}
	{
		// isPinching = interaction.BoolData;
		MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_16 = V_4;
		NullCheck(L_16);
		bool L_17;
		L_17 = MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline(L_16, NULL);
		V_2 = L_17;
	}

IL_0053:
	{
		// for (int i = 0; i < hand.Interactions?.Length; i++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < hand.Interactions?.Length; i++)
		int32_t L_19 = V_3;
		RuntimeObject* L_20 = V_0;
		NullCheck(L_20);
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_21;
		L_21 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var, L_20);
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_22 = L_21;
		G_B7_0 = L_22;
		G_B7_1 = L_19;
		if (L_22)
		{
			G_B8_0 = L_22;
			G_B8_1 = L_19;
			goto IL_006e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_23 = V_6;
		G_B9_0 = L_23;
		G_B9_1 = G_B7_1;
		goto IL_0075;
	}

IL_006e:
	{
		NullCheck(G_B8_0);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_24), ((int32_t)(((RuntimeArray*)G_B8_0)->max_length)), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B9_0 = L_24;
		G_B9_1 = G_B8_1;
	}

IL_0075:
	{
		V_5 = G_B9_0;
		int32_t L_25;
		L_25 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_5), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		bool L_26;
		L_26 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_5), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (((int32_t)(((((int32_t)G_B9_1) < ((int32_t)L_25))? 1 : 0)&(int32_t)L_26)))
		{
			goto IL_0036;
		}
	}
	{
		// recordingBuffer.SetHandState(handedness, isTracked, isPinching);
		InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* L_27 = __this->___recordingBuffer_31;
		uint8_t L_28 = ___0_handedness;
		bool L_29 = V_1;
		bool L_30 = V_2;
		NullCheck(L_27);
		InputRecordingBuffer_SetHandState_m5F55FEDCB175A860CF7B062D78FF2FE0C3A8D9B6(L_27, L_28, L_29, L_30, NULL);
		// if (isTracked)
		bool L_31 = V_1;
		if (!L_31)
		{
			goto IL_00cb;
		}
	}
	{
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		V_7 = 0;
		goto IL_00c2;
	}

IL_00a0:
	{
		// if (hand.TryGetJoint((TrackedHandJoint)i, out MixedRealityPose jointPose))
		RuntimeObject* L_32 = V_0;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		bool L_34;
		L_34 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_tCAF3397A5008BD48D37A9F04A6C7066756C33744_il2cpp_TypeInfo_var, L_32, L_33, (&V_8));
		if (!L_34)
		{
			goto IL_00bc;
		}
	}
	{
		// recordingBuffer.SetJointPose(handedness, (TrackedHandJoint)i, jointPose);
		InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* L_35 = __this->___recordingBuffer_31;
		uint8_t L_36 = ___0_handedness;
		int32_t L_37 = V_7;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_38 = V_8;
		NullCheck(L_35);
		InputRecordingBuffer_SetJointPose_m031DF987BD131C6552CB2A983D6941704D2DE7B2(L_35, L_36, L_37, L_38, NULL);
	}

IL_00bc:
	{
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		int32_t L_39 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c2:
	{
		// for (int i = 0; i < ArticulatedHandPose.JointCount; ++i)
		int32_t L_40 = V_7;
		il2cpp_codegen_runtime_class_init_inline(ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = ArticulatedHandPose_get_JointCount_m6513BF4BCA1BFA1872A17A94DFD19087B68BD6FD_inline(NULL);
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_00a0;
		}
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::PruneBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_PruneBuffer_mC53E32BDA315ACCC170D11CD0400FEC7A44238F1 (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	{
		// recordingBuffer.RemoveBeforeTime(StartTime);
		InputRecordingBuffer_t0E23ED17EB853AF4974039AF6C21AFBFEF27FEF5* L_0 = __this->___recordingBuffer_31;
		float L_1;
		L_1 = InputRecordingService_get_StartTime_m6F449423C0F0F5698C896F4AFE018AC98F930D56(__this, NULL);
		NullCheck(L_0);
		InputRecordingBuffer_RemoveBeforeTime_mD289D64436AABD38F7F04DC986451EFBD084D6FB(L_0, L_1, NULL);
		// }
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
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_FrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_FrameRate_m839FB3C3EF99E9376315AB9B20919854C732AFA0 (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float FrameRate => frameRate;
		float L_0 = __this->___frameRate_5;
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_RecordHandData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordHandData_m00FB590BB5C2842EBD2A69855D25BE61393FDB8A (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public bool RecordHandData => recordHandData;
		bool L_0 = __this->___recordHandData_6;
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointPositionThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointPositionThreshold_m01382059DA5685EE54D1397196DA95F9DF119450 (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float JointPositionThreshold => jointPositionThreshold;
		float L_0 = __this->___jointPositionThreshold_7;
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointRotationThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointRotationThreshold_m4C51611757615DF053436EDCADA3CFA348647213 (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float JointRotationThreshold => jointRotationThreshold;
		float L_0 = __this->___jointRotationThreshold_8;
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_RecordCameraPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordCameraPose_mAC2C5D60A010CEA2AED6B77A6AC646DB4164BD17 (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public bool RecordCameraPose => recordCameraPose;
		bool L_0 = __this->___recordCameraPose_9;
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraPositionThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraPositionThreshold_mB5A054788685266F2E211803C13869379A954D65 (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float CameraPositionThreshold => cameraPositionThreshold;
		float L_0 = __this->___cameraPositionThreshold_10;
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraRotationThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraRotationThreshold_m8D3CA75A3C0F7692B75AA0DF891C8F08D6FE4F08 (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float CameraRotationThreshold => cameraRotationThreshold;
		float L_0 = __this->___cameraRotationThreshold_11;
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_RecordEyeGaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordEyeGaze_m7201174C8BF2C24C4C3B6073E16951013DEB1920 (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public bool RecordEyeGaze => recordEyeGaze;
		bool L_0 = __this->___recordEyeGaze_12;
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_EyeGazeOriginThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_EyeGazeOriginThreshold_m5F7EBE45435C35AD95867A93A44EC22C2AD4F303 (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float EyeGazeOriginThreshold => eyeGazeOriginThreshold;
		float L_0 = __this->___eyeGazeOriginThreshold_13;
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_EyeGazeDirectionThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_EyeGazeDirectionThreshold_mD1EAA76B78A11878E7FA4E4CC9DEE22058744DC0 (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float EyeGazeDirectionThreshold => eyeGazeDirectionThreshold;
		float L_0 = __this->___eyeGazeDirectionThreshold_14;
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_PartitionSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputRecordingProfile_get_PartitionSize_m48010D085B08463D109D9208352D07099429CC1B (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public int PartitionSize => partitionSize;
		int32_t L_0 = __this->___partitionSize_15;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInputRecordingProfile__ctor_m318EA55AC38454D2B9BA80E7C0D78292C25AC321 (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// private float frameRate = 60f;
		__this->___frameRate_5 = (60.0f);
		// private bool recordHandData = true;
		__this->___recordHandData_6 = (bool)1;
		// private float jointPositionThreshold = 0.001f;
		__this->___jointPositionThreshold_7 = (0.00100000005f);
		// private float jointRotationThreshold = 0.2f;
		__this->___jointRotationThreshold_8 = (0.200000003f);
		// private bool recordCameraPose = true;
		__this->___recordCameraPose_9 = (bool)1;
		// private float cameraPositionThreshold = 0.002f;
		__this->___cameraPositionThreshold_10 = (0.00200000009f);
		// private float cameraRotationThreshold = 0.2f;
		__this->___cameraRotationThreshold_11 = (0.200000003f);
		// private bool recordEyeGaze = true;
		__this->___recordEyeGaze_12 = (bool)1;
		// private float eyeGazeOriginThreshold = 0.002f;
		__this->___eyeGazeOriginThreshold_13 = (0.00200000009f);
		// private float eyeGazeDirectionThreshold = 0.2f;
		__this->___eyeGazeDirectionThreshold_14 = (0.200000003f);
		// private int partitionSize = 32;
		__this->___partitionSize_15 = ((int32_t)32);
		BaseMixedRealityProfile__ctor_mE6D5359B74BAAEA74B1F24297F435C969CD43DFE(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputAnimation_get_HasCameraPose_mA0B2076B76FBC9ACF8F656FB42EDC0956A6BB66F_inline (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasCameraPose { get; private set; } = false;
		bool L_0 = __this->___U3CHasCameraPoseU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputAnimation_get_HasHandData_m90AD29D91BC247748D1F8A1BE29AD7BBA194E21D_inline (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasHandData { get; private set; } = false;
		bool L_0 = __this->___U3CHasHandDataU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputAnimation_get_HasEyeGaze_m072A146AFEBE26547373981134AD6949D54A9FFB_inline (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasEyeGaze { get; private set; } = false;
		bool L_0 = __this->___U3CHasEyeGazeU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArticulatedHandPose_get_JointCount_m6513BF4BCA1BFA1872A17A94DFD19087B68BD6FD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int JointCount { get; } = Joints.Length;
		il2cpp_codegen_runtime_class_init_inline(ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_StaticFields*)il2cpp_codegen_static_fields_for(ArticulatedHandPose_tCA14CBAC4F8EA72BF03A1DF502FE6147F23CD9A0_il2cpp_TypeInfo_var))->___U3CJointCountU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 MixedRealityPose_get_ZeroIdentity_m5F6C0EE34C84272B653BEF09731AC5E219F51EDD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_0 = ((MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var))->___U3CZeroIdentityU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordHandData_m00FB590BB5C2842EBD2A69855D25BE61393FDB8A_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public bool RecordHandData => recordHandData;
		bool L_0 = __this->___recordHandData_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputAnimation_set_HasHandData_m3480752B1F94F7DB9D94616A6B63FFE140C7FB81_inline (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool HasHandData { get; private set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CHasHandDataU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordCameraPose_mAC2C5D60A010CEA2AED6B77A6AC646DB4164BD17_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public bool RecordCameraPose => recordCameraPose;
		bool L_0 = __this->___recordCameraPose_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputAnimation_set_HasCameraPose_m63CDA9AFD9FCE60C9FD8CF5BA3D43978D42A9D92_inline (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool HasCameraPose { get; private set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CHasCameraPoseU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordEyeGaze_m7201174C8BF2C24C4C3B6073E16951013DEB1920_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public bool RecordEyeGaze => recordEyeGaze;
		bool L_0 = __this->___recordEyeGaze_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputAnimation_set_HasEyeGaze_mC7871B969CED484E92FCF27C6934C987CCD9A9A9_inline (InputAnimation_tFFC0C08E3CC21E779433D36D083B008C77E3EDE6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool HasEyeGaze { get; private set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CHasEyeGazeU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Keyframe_get_Time_m4FFDA94203B0BFE0E4D292D0A7D22C3E6070DACA_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public float Time { get; set; }
		float L_0 = __this->___U3CTimeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_LeftTracked_mF2797B136459D689C9F7576909167B76DC409E73_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public bool LeftTracked { get; set; }
		bool L_0 = __this->___U3CLeftTrackedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_RightTracked_m1FCF75796B487D26FAD3B73F29EF0617369B7C08_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public bool RightTracked { get; set; }
		bool L_0 = __this->___U3CRightTrackedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_LeftPinch_m68D4427463BEE61BC4307893CC797B3F05CE7F07_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public bool LeftPinch { get; set; }
		bool L_0 = __this->___U3CLeftPinchU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_RightPinch_m4DF67192F78BEDC78BF61536EBC176BB8275EBB8_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public bool RightPinch { get; set; }
		bool L_0 = __this->___U3CRightPinchU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* Keyframe_get_LeftJoints_m22F03CB8DC507FDF1DA749672119B2FEDDE4B5B7_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> LeftJoints { get; set; }
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_0 = __this->___U3CLeftJointsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* Keyframe_get_RightJoints_mA445665FE282A5ED5C81192B57752C2574D6538F_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> RightJoints { get; set; }
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_0 = __this->___U3CRightJointsU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 Keyframe_get_CameraPose_mF325808078E828CB4C42612A6EA839420AC0F7E1_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public MixedRealityPose CameraPose { get; set; }
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_0 = __this->___U3CCameraPoseU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Keyframe_get_GazeRay_m7E3BB33B51B23BB60F6306C7AB37FCD28656B256_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, const RuntimeMethod* method) 
{
	{
		// public Ray GazeRay { get; set; }
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = __this->___U3CGazeRayU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraPositionThreshold_mB5A054788685266F2E211803C13869379A954D65_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float CameraPositionThreshold => cameraPositionThreshold;
		float L_0 = __this->___cameraPositionThreshold_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraRotationThreshold_m8D3CA75A3C0F7692B75AA0DF891C8F08D6FE4F08_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float CameraRotationThreshold => cameraRotationThreshold;
		float L_0 = __this->___cameraRotationThreshold_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInputRecordingProfile_get_PartitionSize_m48010D085B08463D109D9208352D07099429CC1B_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public int PartitionSize => partitionSize;
		int32_t L_0 = __this->___partitionSize_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_EyeGazeOriginThreshold_m5F7EBE45435C35AD95867A93A44EC22C2AD4F303_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float EyeGazeOriginThreshold => eyeGazeOriginThreshold;
		float L_0 = __this->___eyeGazeOriginThreshold_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_EyeGazeDirectionThreshold_mD1EAA76B78A11878E7FA4E4CC9DEE22058744DC0_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float EyeGazeDirectionThreshold => eyeGazeDirectionThreshold;
		float L_0 = __this->___eyeGazeDirectionThreshold_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointPositionThreshold_m01382059DA5685EE54D1397196DA95F9DF119450_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float JointPositionThreshold => jointPositionThreshold;
		float L_0 = __this->___jointPositionThreshold_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointRotationThreshold_m4C51611757615DF053436EDCADA3CFA348647213_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float JointRotationThreshold => jointRotationThreshold;
		float L_0 = __this->___jointRotationThreshold_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		float L_3 = ___2_value;
		float L_4 = ___0_a;
		float L_5 = ___1_b;
		float L_6 = ___0_a;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/((float)il2cpp_codegen_subtract(L_5, L_6)))), NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_001b:
	{
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_normalized_m08AB963B13A0EC6F540A29886C5ACFCCCC0A6D16_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Normalize_m8845A29F55B839D0CD43124B1AA34034BFCA9A7D_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_a;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_b;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_a;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_b;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityPose_get_Position_mDF63DBEBBB8B0979C9CA6F06902F9281C26ACA81_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___position_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MixedRealityPose_get_Rotation_m1DBCD393A804A4C08ABAF7A867B98CDB3F277D79_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___rotation_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m9806379126B288614A363F39705935CA0D86888C_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___position_1 = L_0;
		// public Vector3 Position { get { return position; } set { position = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m090951B4A308155032C377FF0AE6BED025C39868_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___rotation_2 = L_0;
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_Normalize_m0CB5FAED5332234E3F6267F5A4C99B6A6A79CBE1_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Normalize_m8845A29F55B839D0CD43124B1AA34034BFCA9A7D_inline(L_0, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_CameraPose_mC35D102F18876CB08D9B69AF3029A9B2A7749ABD_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___0_value, const RuntimeMethod* method) 
{
	{
		// public MixedRealityPose CameraPose { get; set; }
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_0 = ___0_value;
		__this->___U3CCameraPoseU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_GazeRay_m646AF29572384DD341B6C1932BF4077333512612_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Ray GazeRay { get; set; }
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = ___0_value;
		__this->___U3CGazeRayU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_LeftTracked_m04987AB33CC5584DB5EFFE9B348818463EDCF13C_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool LeftTracked { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CLeftTrackedU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_LeftPinch_m6722585825204D1BE8D4141CABAF477A80B6F3A9_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool LeftPinch { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CLeftPinchU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_RightTracked_m500C841E76DEB3011671FB06CB11DEB0C3B94990_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool RightTracked { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CRightTrackedU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_RightPinch_m008AB8FCB6255E7E6AA7FDF22D5F21807913D0DF_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool RightPinch { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CRightPinchU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_Time_m2DCE7E98D3923E2955D27FCBB28AF08F8E047E00_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Time { get; set; }
		float L_0 = ___0_value;
		__this->___U3CTimeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_LeftJoints_m7B17D04999FBC87AD6109479BFE9403BB2F825EB_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> LeftJoints { get; set; }
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_0 = ___0_value;
		__this->___U3CLeftJointsU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLeftJointsU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_RightJoints_mA41AF55774CADF48F661D93A487851AF31A180EE_inline (Keyframe_tAE10BA84AEC9053E7F87221B12971553048A561A* __this, Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> RightJoints { get; set; }
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_0 = ___0_value;
		__this->___U3CRightJointsU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRightJointsU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InputRecordingService_get_EndTime_m1D3BB614498597D6D8C8DB2588AF58F460F2249C_inline (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	{
		// public float EndTime { get; private set; }
		float L_0 = __this->___U3CEndTimeU3Ek__BackingField_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputRecordingService_set_IsRecording_mF57E9C9C9B8C4FF5D91B8736F57C89136C7535A2_inline (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CIsRecordingU3Ek__BackingField_23 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_FrameRate_m839FB3C3EF99E9376315AB9B20919854C732AFA0_inline (MixedRealityInputRecordingProfile_t32355C6966B950913C3110CFBC2CF77137BE5715* __this, const RuntimeMethod* method) 
{
	{
		// public float FrameRate => frameRate;
		float L_0 = __this->___frameRate_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_UseBufferTimeLimit_m4FE5D027784EC5A4B3E376364063EC81FB70BCCC_inline (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	{
		// get { return useBufferTimeLimit; }
		bool L_0 = __this->___useBufferTimeLimit_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsRecording_mA55D42F3E0289948A2743B3417B2BFAB3D686731_inline (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = __this->___U3CIsRecordingU3Ek__BackingField_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputRecordingService_set_EndTime_mDFD0B484544CAD9E98556ED578F70F0CA7FF295D_inline (InputRecordingService_tCEA5A4B091168C3213002992483B38F831E07F45* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float EndTime { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CEndTimeU3Ek__BackingField_27 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->___inputType_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// return boolData;
		bool L_0 = __this->___boolData_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m76B0ECD4B03E606A1CE3DF60589D2E97130B02CA_gshared_inline (Enumerator_tF9B1C7464F1BFE1675CFE608CC62D4507968CF08* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
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
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Normalize_m8845A29F55B839D0CD43124B1AA34034BFCA9A7D_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_q, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_q;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_q;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = sqrtf(L_2);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_4) < ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		V_2 = L_7;
		goto IL_004a;
	}

IL_0022:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_q;
		float L_9 = L_8.___x_0;
		float L_10 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = ___0_q;
		float L_12 = L_11.___y_1;
		float L_13 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___0_q;
		float L_15 = L_14.___z_2;
		float L_16 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = ___0_q;
		float L_18 = L_17.___w_3;
		float L_19 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_20), ((float)(L_9/L_10)), ((float)(L_12/L_13)), ((float)(L_15/L_16)), ((float)(L_18/L_19)), /*hidden argument*/NULL);
		V_2 = L_20;
		goto IL_004a;
	}

IL_004a:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = V_2;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
