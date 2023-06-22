#include "pch-cpp.hpp"

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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct IEqualityComparer_1_tC211CB59CA97B343627BB9567F9978F7B0EDE52A;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct IEqualityComparer_1_t1539A49033C3F5A4026435640F020A586A4589F5;
// System.Collections.Generic.List`1<DrawNoteTargetModel>
struct List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>[]
struct SlotU5BU5D_tA95A5B6D117238C58C72BC1727BB8C3CC97E5039;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>[]
struct SlotU5BU5D_t5352D3708E20A120FCB9C071207F940FB2F2C004;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// DrawNoteTargetModel[]
struct DrawNoteTargetModelU5BU5D_t1E614B8402BB863D23F0DA40B3814C9BCEAC37BD;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DrawNoteCore
struct DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2;
// DrawNoteInput
struct DrawNoteInput_t8746FAB26F731BF1E6071FAE9B42AA740C335135;
// DrawNoteTargetModel
struct DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// SmallDrawingHUD
struct SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DrawNoteAction_t7563DBB12B143CFA782F6FB161C568847F746F39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DrawNoteType_t66D9649F960C96891DC20B79ED7E0A88199340D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityNearPointer_tA29E79073B12FE06E833720EBEE764F4E3D94373_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057AB8C95C71277687C27788BD5DA69D4A3E85E4;
IL2CPP_EXTERN_C String_t* _stringLiteral095499FD7A116E2A100C3F87CC96C8678AC2BE4F;
IL2CPP_EXTERN_C String_t* _stringLiteral2168FBD37640345B64AAB94434501920A09710B8;
IL2CPP_EXTERN_C String_t* _stringLiteral61BFC611F66FD507C0283A6E61262F080B82ED17;
IL2CPP_EXTERN_C String_t* _stringLiteral99206F059C14634F66798E88F097A2B725FF5DE4;
IL2CPP_EXTERN_C String_t* _stringLiteral9C441C802EFF6FB06F2F2C2C24B9FAA791CB4546;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralC496827F20B1B764827DCA5CBB27C0E8866218C7;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2_m500FB46C67F7C95A3BFCD472B1F61DDF277BF63F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_mBAC4300374CB2A91D86B674F10BF8BC568FB9962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DrawNoteCore_get_ConfigurationProfile_mF00B439A5D8C2C416DFDE3C6981114C22EC38211_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DrawNoteCore_get_Name_mB9CAA159F61C35B219762D8B1EFA2F60A04448EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DrawNoteCore_get_Priority_mB7E7CFAC5998C3EC94FAFD218636F4572E50A43C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1A01CF7AAEACC56D097C973FB27BA1DE1ECA19D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m21E1D723A4EA1A8A474BEB11090E58DA5DA00517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6F159853C1A8DAA77838EAFF7F6FD59EF3CA5900_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m7F521399752E6007B0B4EA60CB82D580C158A8B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityInputActionHandler_tCDF849806E7C00A16D78FD3F0F59D95119DC613C_m7C26A0DF04E624F86150B064563800C5307CD120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityInputHandler_tAE395C82027951AE5E9329D6D1AD525CF50457FC_mC3652D44BA65685DD01FACFA3F2806C17BAA8559_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityInputActionHandler_tCDF849806E7C00A16D78FD3F0F59D95119DC613C_mEFCC2A38D9E868715865A23BFF526262D78B97A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityInputHandler_tAE395C82027951AE5E9329D6D1AD525CF50457FC_m59D812704F7F10AA59E510227ED30D6359897F04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m38A9A2849CCF080DF506CEE05FEC2DD2A1C81EC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB8F851FE8ED3D187593B6830FB07D5F9B5190A02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2C8B8D437F3270BE0E20F5475E3781779205C2E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DrawNoteType_t66D9649F960C96891DC20B79ED7E0A88199340D9_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t18251E5627441EA2F7A526BE14990990AFE0B402 
{
};

// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA95A5B6D117238C58C72BC1727BB8C3CC97E5039* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5352D3708E20A120FCB9C071207F940FB2F2C004* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<DrawNoteTargetModel>
struct List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DrawNoteTargetModelU5BU5D_t1E614B8402BB863D23F0DA40B3814C9BCEAC37BD* ____items_1;
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// DrawNoteTargetModel
struct DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C  : public RuntimeObject
{
	// System.Int32 DrawNoteTargetModel::instanceID
	int32_t ___instanceID_0;
	// System.Boolean DrawNoteTargetModel::instanceArtExists
	bool ___instanceArtExists_1;
	// UnityEngine.GameObject DrawNoteTargetModel::instanceGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instanceGameObject_2;
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

// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
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

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CMixedRealityInputActionU3Ek__BackingField_4;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_2;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9 
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::barycentricCoordinate
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___barycentricCoordinate_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::distance
	float ___distance_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::triangleIndex
	int32_t ___triangleIndex_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord2_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::lightmapCoord
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lightmapCoord_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::raycastValid
	bool ___raycastValid_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_10;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord2_6;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_10;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord2_6;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_10;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 
{
	// System.Single Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<RayDistance>k__BackingField
	float ___U3CRayDistanceU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Point>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Normal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Object>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CObjectU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastRaycastHit>k__BackingField
	MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9 ___U3CLastRaycastHitU3Ek__BackingField_4;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastGraphicsRaycastResult>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<PointLocalSpace>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointLocalSpaceU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<NormalLocalSpace>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76_marshaled_pinvoke
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalU3Ek__BackingField_2;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_pinvoke ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76_marshaled_com
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalU3Ek__BackingField_2;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_com ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85  : public BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399
{
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
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

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// DrawNoteCore
struct DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction DrawNoteCore::triggerAction
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___triggerAction_4;
	// System.Boolean DrawNoteCore::triggerPressed
	bool ___triggerPressed_5;
	// UnityEngine.Vector3 DrawNoteCore::controllerpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___controllerpos_6;
	// UnityEngine.Quaternion DrawNoteCore::controllerRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___controllerRot_7;
	// UnityEngine.Vector3 DrawNoteCore::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_8;
	// System.Boolean DrawNoteCore::drawing
	bool ___drawing_9;
	// UnityEngine.Transform DrawNoteCore::drawingsParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___drawingsParent_10;
	// UnityEngine.GameObject DrawNoteCore::drawNoteTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___drawNoteTarget_11;
	// UnityEngine.BoxCollider DrawNoteCore::drawPlane
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___drawPlane_12;
	// System.Collections.Generic.List`1<DrawNoteTargetModel> DrawNoteCore::drawNoteTargets
	List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* ___drawNoteTargets_13;
	// System.Int32 DrawNoteCore::curDrawIndex
	int32_t ___curDrawIndex_14;
	// DrawNoteCore/DrawNoteType DrawNoteCore::curMode
	int32_t ___curMode_15;
	// DrawNoteCore/DrawNoteType DrawNoteCore::controllerMode
	int32_t ___controllerMode_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose DrawNoteCore::pose
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___pose_17;
	// UnityEngine.Material DrawNoteCore::drawMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___drawMaterial_18;
	// UnityEngine.Color[] DrawNoteCore::colorSwatches
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colorSwatches_19;
	// UnityEngine.Color DrawNoteCore::drawColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___drawColor_20;
	// SmallDrawingHUD DrawNoteCore::instanceSmallDrawingHUD
	SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* ___instanceSmallDrawingHUD_21;
};

// DrawNoteInput
struct DrawNoteInput_t8746FAB26F731BF1E6071FAE9B42AA740C335135  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DrawNoteCore DrawNoteInput::instanceDNC
	DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* ___instanceDNC_4;
	// System.Single DrawNoteInput::lastActionTime
	float ___lastActionTime_5;
	// System.Single DrawNoteInput::dontAllowActionBufferTime
	float ___dontAllowActionBufferTime_6;
};

// SmallDrawingHUD
struct SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SmallDrawingHUD::drawingNowMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___drawingNowMenu_4;
	// UnityEngine.GameObject SmallDrawingHUD::drawingDetails
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___drawingDetails_5;
	// System.Boolean SmallDrawingHUD::lastSet
	bool ___lastSet_6;
	// UnityEngine.UI.Image[] SmallDrawingHUD::bigColorBlocks
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___bigColorBlocks_7;
	// UnityEngine.UI.Image[] SmallDrawingHUD::smallColorBlocks
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___smallColorBlocks_8;
	// TMPro.TextMeshProUGUI SmallDrawingHUD::modeText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___modeText_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>

// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>

// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>

// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>

// System.Collections.Generic.List`1<DrawNoteTargetModel>
struct List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DrawNoteTargetModelU5BU5D_t1E614B8402BB863D23F0DA40B3814C9BCEAC37BD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DrawNoteTargetModel>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// DrawNoteTargetModel

// DrawNoteTargetModel

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>

// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>

// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>

// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CNoneU3Ek__BackingField_0;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.UInt32

// System.UInt32

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

// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData

// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData

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

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Component

// UnityEngine.Component

// Microsoft.MixedReality.Toolkit.Physics.FocusDetails

// Microsoft.MixedReality.Toolkit.Physics.FocusDetails

// UnityEngine.GameObject

// UnityEngine.GameObject

// Microsoft.MixedReality.Toolkit.Input.InputEventData

// Microsoft.MixedReality.Toolkit.Input.InputEventData

// UnityEngine.Material

// UnityEngine.Material

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

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotImplementedException

// System.NotImplementedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

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

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.TrailRenderer

// UnityEngine.TrailRenderer

// DrawNoteCore

// DrawNoteCore

// DrawNoteInput

// DrawNoteInput

// SmallDrawingHUD

// SmallDrawingHUD

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4  : public RuntimeArray
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
// System.String[]
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
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
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


// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607 (const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void SmallDrawingHUD::SetColorBlockOptions(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallDrawingHUD_SetColorBlockOptions_mDE1D249785A5B53A161DF3B6FCAD4E92E2F46F27 (SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_setColors, const RuntimeMethod* method) ;
// System.Void SmallDrawingHUD::SetColorSelectedIndicator(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallDrawingHUD_SetColorSelectedIndicator_m76F5E11CD6D9785EBDD6B253E82E258417A9DC22 (SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_setColor, const RuntimeMethod* method) ;
// System.Void SmallDrawingHUD::SetVisibility(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallDrawingHUD_SetVisibility_mB74A6C1A9A1BB162E40D5A4B16A0FE20901FE913 (SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* __this, bool ___0_drawingNow, bool ___1_forceUpdate, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void SmallDrawingHUD::SetModeText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallDrawingHUD_SetModeText_m664352EBA6D6831DF0CDE5FA9F60DF167D93353F (SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* __this, String_t* ___0_setText, const RuntimeMethod* method) ;
// System.Void DrawNoteCore::CheckControllerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_CheckControllerPosition_m8CC1C189A3B2D53F0F1FC5A03BC672C3B6D52D0B (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) ;
// System.Void DrawNoteCore::HandleDrawing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_HandleDrawing_m7262426DA3DB1D1228914A6A11CE5CC50DF4510E (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.HandJointUtils::TryGetJointPose(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandJointUtils_TryGetJointPose_mA09921DAC74E8B4F80DB7D1D013A5B30D26C225D (int32_t ___0_joint, uint8_t ___1_handedness, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* ___2_pose, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityPose_get_Position_mDF63DBEBBB8B0979C9CA6F06902F9281C26ACA81_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>::GetEnumerator()
inline Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80 HashSet_1_GetEnumerator_m7F521399752E6007B0B4EA60CB82D580C158A8B9 (HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80 (*) (HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>::Dispose()
inline void Enumerator_Dispose_m1A01CF7AAEACC56D097C973FB27BA1DE1ECA19D5 (Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6F159853C1A8DAA77838EAFF7F6FD59EF3CA5900_inline (Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Point()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FocusDetails_get_Point_mED97A47BC407BF95930337DF61EE88143661B89B_inline (FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Object()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* FocusDetails_get_Object_m003956817ED39A52E8D90EF635636421EE6D2506_inline (FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>::MoveNext()
inline bool Enumerator_MoveNext_m21E1D723A4EA1A8A474BEB11090E58DA5DA00517 (Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Int32 System.Collections.Generic.List`1<DrawNoteTargetModel>::get_Count()
inline int32_t List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_inline (List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_source, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.TrailRenderer>()
inline TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* Component_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_mBAC4300374CB2A91D86B674F10BF8BC568FB9962 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Void DrawNoteTargetModel::.ctor(System.Int32,System.Boolean,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteTargetModel__ctor_m3C63425F7B29058A6426EB2767F8E47BEDF7A042 (DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C* __this, int32_t ___0_setID, bool ___1_setArtExists, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_setGameObject, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DrawNoteTargetModel>::Add(T)
inline void List_1_Add_m38A9A2849CCF080DF506CEE05FEC2DD2A1C81EC7_inline (List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* __this, DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA*, DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<DrawNoteTargetModel>::get_Item(System.Int32)
inline DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C* List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3 (List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C* (*) (List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DrawNoteTargetModel>::Clear()
inline void List_1_Clear_mB8F851FE8ED3D187593B6830FB07D5F9B5190A02_inline (List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enum_GetNames_m382A68AE28D7B6035331EC0685315144F15957C3 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::get_MixedRealityInputAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 BaseInputEventData_get_MixedRealityInputAction_m88C7A667A337237AAF6C5DABF60319889C6C6F94_inline (BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399* __this, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityInputAction_get_Description_m5AD88A40A36F727F7D93C9EF01CE99577686F2F2_inline (MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486* __this, const RuntimeMethod* method) ;
// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MixedRealityInputAction_get_Id_m9B3BD973BF0E9A842348EB78C4D31B43353CB2AD_inline (MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::GetEnumerator()
inline Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA (HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 (*) (HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::Dispose()
inline void Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54 (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_inline (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PositionData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityInteractionMapping_get_PositionData_m189D602B6846B225CBFBAB5C64699469900972E5_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::MoveNext()
inline bool Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void DrawNoteCore::TryDrawNote(DrawNoteCore/DrawNoteType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_TryDrawNote_m2C6F0D72FBEED57397240C6D8CBE8DA1FEDBD9A9 (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, int32_t ___0_instanceType, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DrawNoteTargetModel>::.ctor()
inline void List_1__ctor_m2C8B8D437F3270BE0E20F5475E3781779205C2E0 (List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<DrawNoteCore>()
inline DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* Component_GetComponent_TisDrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2_m500FB46C67F7C95A3BFCD472B1F61DDF277BF63F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void DrawNoteCore::UpdateColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_UpdateColor_m67F3A4D841833D819C4E0E07E653399B1594E310 (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, int32_t ___0_setColor, const RuntimeMethod* method) ;
// System.Void DrawNoteCore::Undo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_Undo_m97FE5235EE5854DECCAB9C32893C9F866ABFB8BE (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) ;
// System.Void DrawNoteCore::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_Clear_mDAFFD5CD43E90DC02575F62C6952010E35BFB9A0 (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) ;
// System.Void DrawNoteCore::SwitchMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_SwitchMode_m5969DCFD643F32E8D46C97239D57B5250107207B (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
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
// System.Void DrawNoteCore::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_OnEnable_mF5775068AD809092CAEFB53EEB586F3F04CFDBE3 (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityInputActionHandler_tCDF849806E7C00A16D78FD3F0F59D95119DC613C_m7C26A0DF04E624F86150B064563800C5307CD120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityInputHandler_tAE395C82027951AE5E9329D6D1AD525CF50457FC_mC3652D44BA65685DD01FACFA3F2806C17BAA8559_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// CoreServices.InputSystem?.RegisterHandler<IMixedRealityInputHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityInputHandler_tAE395C82027951AE5E9329D6D1AD525CF50457FC_mC3652D44BA65685DD01FACFA3F2806C17BAA8559_RuntimeMethod_var, G_B2_0, __this);
	}

IL_0011:
	{
		// CoreServices.InputSystem?.RegisterHandler<IMixedRealityInputActionHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		NullCheck(G_B5_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityInputActionHandler_tCDF849806E7C00A16D78FD3F0F59D95119DC613C_m7C26A0DF04E624F86150B064563800C5307CD120_RuntimeMethod_var, G_B5_0, __this);
		// }
		return;
	}
}
// System.Void DrawNoteCore::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_OnDisable_mE86E3DBCE018316172F4DCB7A8E6E26F7093E200 (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityInputActionHandler_tCDF849806E7C00A16D78FD3F0F59D95119DC613C_mEFCC2A38D9E868715865A23BFF526262D78B97A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityInputHandler_tAE395C82027951AE5E9329D6D1AD525CF50457FC_m59D812704F7F10AA59E510227ED30D6359897F04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealityInputHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityInputHandler_tAE395C82027951AE5E9329D6D1AD525CF50457FC_m59D812704F7F10AA59E510227ED30D6359897F04_RuntimeMethod_var, G_B2_0, __this);
	}

IL_0011:
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealityInputActionHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		NullCheck(G_B5_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityInputActionHandler_tCDF849806E7C00A16D78FD3F0F59D95119DC613C_mEFCC2A38D9E868715865A23BFF526262D78B97A6_RuntimeMethod_var, G_B5_0, __this);
		// }
		return;
	}
}
// System.String DrawNoteCore::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DrawNoteCore_get_Name_mB9CAA159F61C35B219762D8B1EFA2F60A04448EA (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) 
{
	{
		// public string Name => throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DrawNoteCore_get_Name_mB9CAA159F61C35B219762D8B1EFA2F60A04448EA_RuntimeMethod_var)));
	}
}
// System.UInt32 DrawNoteCore::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DrawNoteCore_get_Priority_mB7E7CFAC5998C3EC94FAFD218636F4572E50A43C (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) 
{
	{
		// public uint Priority => throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DrawNoteCore_get_Priority_mB7E7CFAC5998C3EC94FAFD218636F4572E50A43C_RuntimeMethod_var)));
	}
}
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile DrawNoteCore::get_ConfigurationProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* DrawNoteCore_get_ConfigurationProfile_mF00B439A5D8C2C416DFDE3C6981114C22EC38211 (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) 
{
	{
		// public BaseMixedRealityProfile ConfigurationProfile => throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DrawNoteCore_get_ConfigurationProfile_mF00B439A5D8C2C416DFDE3C6981114C22EC38211_RuntimeMethod_var)));
	}
}
// System.Void DrawNoteCore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_Start_m90D9CE1F9571878A9B6D5C11AFF9E28394EC59F7 (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawNoteType_t66D9649F960C96891DC20B79ED7E0A88199340D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instanceSmallDrawingHUD.SetColorBlockOptions(colorSwatches);
		SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* L_0 = __this->___instanceSmallDrawingHUD_21;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1 = __this->___colorSwatches_19;
		NullCheck(L_0);
		SmallDrawingHUD_SetColorBlockOptions_mDE1D249785A5B53A161DF3B6FCAD4E92E2F46F27(L_0, L_1, NULL);
		// instanceSmallDrawingHUD.SetColorSelectedIndicator(drawColor);
		SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* L_2 = __this->___instanceSmallDrawingHUD_21;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___drawColor_20;
		NullCheck(L_2);
		SmallDrawingHUD_SetColorSelectedIndicator_m76F5E11CD6D9785EBDD6B253E82E258417A9DC22(L_2, L_3, NULL);
		// instanceSmallDrawingHUD.SetVisibility(drawing, true);
		SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* L_4 = __this->___instanceSmallDrawingHUD_21;
		bool L_5 = __this->___drawing_9;
		NullCheck(L_4);
		SmallDrawingHUD_SetVisibility_mB74A6C1A9A1BB162E40D5A4B16A0FE20901FE913(L_4, L_5, (bool)1, NULL);
		// instanceSmallDrawingHUD.SetModeText(curMode.ToString());
		SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* L_6 = __this->___instanceSmallDrawingHUD_21;
		int32_t* L_7 = (&__this->___curMode_15);
		Il2CppFakeBox<int32_t> L_8(DrawNoteType_t66D9649F960C96891DC20B79ED7E0A88199340D9_il2cpp_TypeInfo_var, L_7);
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		NullCheck(L_6);
		SmallDrawingHUD_SetModeText_m664352EBA6D6831DF0CDE5FA9F60DF167D93353F(L_6, L_9, NULL);
		// }
		return;
	}
}
// System.Void DrawNoteCore::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_Update_mA4C431776EA8AB9F483DC9B96A5D3F967D54F9F3 (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) 
{
	{
		// CheckControllerPosition();
		DrawNoteCore_CheckControllerPosition_m8CC1C189A3B2D53F0F1FC5A03BC672C3B6D52D0B(__this, NULL);
		// HandleDrawing();
		DrawNoteCore_HandleDrawing_m7262426DA3DB1D1228914A6A11CE5CC50DF4510E(__this, NULL);
		// }
		return;
	}
}
// System.Void DrawNoteCore::TryDrawNote(DrawNoteCore/DrawNoteType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_TryDrawNote_m2C6F0D72FBEED57397240C6D8CBE8DA1FEDBD9A9 (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, int32_t ___0_instanceType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_mBAC4300374CB2A91D86B674F10BF8BC568FB9962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1A01CF7AAEACC56D097C973FB27BA1DE1ECA19D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m21E1D723A4EA1A8A474BEB11090E58DA5DA00517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6F159853C1A8DAA77838EAFF7F6FD59EF3CA5900_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m7F521399752E6007B0B4EA60CB82D580C158A8B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityNearPointer_tA29E79073B12FE06E833720EBEE764F4E3D94373_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m38A9A2849CCF080DF506CEE05FEC2DD2A1C81EC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057AB8C95C71277687C27788BD5DA69D4A3E85E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61BFC611F66FD507C0283A6E61262F080B82ED17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC496827F20B1B764827DCA5CBB27C0E8866218C7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_8 = NULL;
	FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 V_9;
	memset((&V_9), 0, sizeof(V_9));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_10 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_11 = NULL;
	DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C* V_12 = NULL;
	{
		// bool foundDrawPositon = false;
		V_0 = (bool)0;
		// Vector3 drawPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_0;
		// if (curMode == DrawNoteType.Closeby)
		int32_t L_1 = __this->___curMode_15;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0052;
		}
	}
	{
		// if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Any, out pose))
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* L_2 = (&__this->___pose_17);
		bool L_3;
		L_3 = HandJointUtils_TryGetJointPose_mA09921DAC74E8B4F80DB7D1D013A5B30D26C225D(((int32_t)11), 7, L_2, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// foundDrawPositon = true;
		V_0 = (bool)1;
		// drawPosition = pose.Position;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* L_4 = (&__this->___pose_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = MixedRealityPose_get_Position_mDF63DBEBBB8B0979C9CA6F06902F9281C26ACA81_inline(L_4, NULL);
		V_1 = L_5;
	}

IL_002f:
	{
		// if (triggerPressed) {
		bool L_6 = __this->___triggerPressed_5;
		if (!L_6)
		{
			goto IL_0167;
		}
	}
	{
		// Debug.Log("controller drawing");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral61BFC611F66FD507C0283A6E61262F080B82ED17, NULL);
		// foundDrawPositon = true;
		V_0 = (bool)1;
		// drawPosition = controllerpos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___controllerpos_6;
		V_1 = L_7;
		goto IL_0167;
	}

IL_0052:
	{
		// foreach (var source in CoreServices.InputSystem.DetectedInputSources)
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		NullCheck(L_8);
		HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E* L_9;
		L_9 = InterfaceFuncInvoker0< HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E* >::Invoke(4 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedInputSources() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80 L_10;
		L_10 = HashSet_1_GetEnumerator_m7F521399752E6007B0B4EA60CB82D580C158A8B9(L_9, HashSet_1_GetEnumerator_m7F521399752E6007B0B4EA60CB82D580C158A8B9_RuntimeMethod_var);
		V_2 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0159:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1A01CF7AAEACC56D097C973FB27BA1DE1ECA19D5((&V_2), Enumerator_Dispose_m1A01CF7AAEACC56D097C973FB27BA1DE1ECA19D5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_014b_1;
			}

IL_0067_1:
			{
				// foreach (var source in CoreServices.InputSystem.DetectedInputSources)
				RuntimeObject* L_11;
				L_11 = Enumerator_get_Current_m6F159853C1A8DAA77838EAFF7F6FD59EF3CA5900_inline((&V_2), Enumerator_get_Current_m6F159853C1A8DAA77838EAFF7F6FD59EF3CA5900_RuntimeMethod_var);
				V_3 = L_11;
				// if (source.SourceType == InputSourceType.Hand || (source.SourceType == InputSourceType.Controller && triggerPressed))
				RuntimeObject* L_12 = V_3;
				NullCheck(L_12);
				int32_t L_13;
				L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_SourceType() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_12);
				if ((((int32_t)L_13) == ((int32_t)1)))
				{
					goto IL_008f_1;
				}
			}
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				int32_t L_15;
				L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_SourceType() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_14);
				if ((!(((uint32_t)L_15) == ((uint32_t)2))))
				{
					goto IL_014b_1;
				}
			}
			{
				bool L_16 = __this->___triggerPressed_5;
				if (!L_16)
				{
					goto IL_014b_1;
				}
			}

IL_008f_1:
			{
				// foreach (var p in source.Pointers)
				RuntimeObject* L_17 = V_3;
				NullCheck(L_17);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_18;
				L_18 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_17);
				V_4 = L_18;
				V_5 = 0;
				goto IL_0140_1;
			}

IL_009f_1:
			{
				// foreach (var p in source.Pointers)
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_19 = V_4;
				int32_t L_20 = V_5;
				NullCheck(L_19);
				int32_t L_21 = L_20;
				RuntimeObject* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
				V_6 = L_22;
				// if (p is IMixedRealityNearPointer)
				RuntimeObject* L_23 = V_6;
				if (((RuntimeObject*)IsInst((RuntimeObject*)L_23, IMixedRealityNearPointer_tA29E79073B12FE06E833720EBEE764F4E3D94373_il2cpp_TypeInfo_var)))
				{
					goto IL_013a_1;
				}
			}
			{
				// if (p.Result != null)
				RuntimeObject* L_24 = V_6;
				NullCheck(L_24);
				RuntimeObject* L_25;
				L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_24);
				if (!L_25)
				{
					goto IL_013a_1;
				}
			}
			{
				// var startPoint = p.Position;
				RuntimeObject* L_26 = V_6;
				NullCheck(L_26);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
				L_27 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(28 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Position() */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_26);
				// var endPoint = p.Result.Details.Point;
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				RuntimeObject* L_29;
				L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_28);
				NullCheck(L_29);
				FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 L_30;
				L_30 = InterfaceFuncInvoker0< FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var, L_29);
				V_9 = L_30;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
				L_31 = FocusDetails_get_Point_mED97A47BC407BF95930337DF61EE88143661B89B_inline((&V_9), NULL);
				V_7 = L_31;
				// var hitObject = p.Result.Details.Object;
				RuntimeObject* L_32 = V_6;
				NullCheck(L_32);
				RuntimeObject* L_33;
				L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_32);
				NullCheck(L_33);
				FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 L_34;
				L_34 = InterfaceFuncInvoker0< FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var, L_33);
				V_9 = L_34;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
				L_35 = FocusDetails_get_Object_m003956817ED39A52E8D90EF635636421EE6D2506_inline((&V_9), NULL);
				V_8 = L_35;
				// if (hitObject)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_8;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_37;
				L_37 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_36, NULL);
				if (!L_37)
				{
					goto IL_013a_1;
				}
			}
			{
				// if (instanceType == DrawNoteType.Distant)
				int32_t L_38 = ___0_instanceType;
				if (L_38)
				{
					goto IL_0117_1;
				}
			}
			{
				// if (hitObject.transform.name != "DrawPlane")
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_8;
				NullCheck(L_39);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
				L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
				NullCheck(L_40);
				String_t* L_41;
				L_41 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_40, NULL);
				bool L_42;
				L_42 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_41, _stringLiteral057AB8C95C71277687C27788BD5DA69D4A3E85E4, NULL);
				if (!L_42)
				{
					goto IL_0133_1;
				}
			}
			{
				// continue;
				goto IL_013a_1;
			}

IL_0117_1:
			{
				// else if (instanceType == DrawNoteType.Mesh)
				int32_t L_43 = ___0_instanceType;
				if ((!(((uint32_t)L_43) == ((uint32_t)1))))
				{
					goto IL_0133_1;
				}
			}
			{
				// if (hitObject.transform.name == "DrawPlane")
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = V_8;
				NullCheck(L_44);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
				L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
				NullCheck(L_45);
				String_t* L_46;
				L_46 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_45, NULL);
				bool L_47;
				L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteral057AB8C95C71277687C27788BD5DA69D4A3E85E4, NULL);
				if (L_47)
				{
					goto IL_013a_1;
				}
			}

IL_0133_1:
			{
				// foundDrawPositon = true;
				V_0 = (bool)1;
				// drawPosition = endPoint;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_7;
				V_1 = L_48;
				// break;
				goto IL_014b_1;
			}

IL_013a_1:
			{
				int32_t L_49 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
			}

IL_0140_1:
			{
				// foreach (var p in source.Pointers)
				int32_t L_50 = V_5;
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_51 = V_4;
				NullCheck(L_51);
				if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
				{
					goto IL_009f_1;
				}
			}

IL_014b_1:
			{
				// foreach (var source in CoreServices.InputSystem.DetectedInputSources)
				bool L_52;
				L_52 = Enumerator_MoveNext_m21E1D723A4EA1A8A474BEB11090E58DA5DA00517((&V_2), Enumerator_MoveNext_m21E1D723A4EA1A8A474BEB11090E58DA5DA00517_RuntimeMethod_var);
				if (L_52)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_0167;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0167:
	{
		// if (foundDrawPositon)
		bool L_53 = V_0;
		if (!L_53)
		{
			goto IL_025f;
		}
	}
	{
		goto IL_0215;
	}

IL_0172:
	{
		// GameObject instanceDrawTargetGO = Instantiate(drawNoteTarget);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___drawNoteTarget_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_54, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_10 = L_55;
		// instanceDrawTargetGO.transform.name = "NewDrawTarget(" + drawNoteTargets.Count + ")";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = V_10;
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_56, NULL);
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_58 = __this->___drawNoteTargets_13;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_inline(L_58, List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_RuntimeMethod_var);
		V_5 = L_59;
		String_t* L_60;
		L_60 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		String_t* L_61;
		L_61 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC496827F20B1B764827DCA5CBB27C0E8866218C7, L_60, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_57);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_57, L_61, NULL);
		// instanceDrawTargetGO.transform.parent = drawingsParent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = V_10;
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64 = __this->___drawingsParent_10;
		NullCheck(L_63);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_63, L_64, NULL);
		// Material newMat = new Material(drawMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65 = __this->___drawMaterial_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_66, L_65, NULL);
		V_11 = L_66;
		// newMat.color = drawColor;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67 = V_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_68 = __this->___drawColor_20;
		NullCheck(L_67);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_67, L_68, NULL);
		// instanceDrawTargetGO.transform.GetChild(0).GetComponent<TrailRenderer>().material = newMat;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = V_10;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_69, NULL);
		NullCheck(L_70);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_70, 0, NULL);
		NullCheck(L_71);
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_72;
		L_72 = Component_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_mBAC4300374CB2A91D86B674F10BF8BC568FB9962(L_71, Component_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_mBAC4300374CB2A91D86B674F10BF8BC568FB9962_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73 = V_11;
		NullCheck(L_72);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_72, L_73, NULL);
		// DrawNoteTargetModel instanceDNTM = new DrawNoteTargetModel(drawNoteTargets.Count, false, instanceDrawTargetGO);
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_74 = __this->___drawNoteTargets_13;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_inline(L_74, List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = V_10;
		DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C* L_77 = (DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C*)il2cpp_codegen_object_new(DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		DrawNoteTargetModel__ctor_m3C63425F7B29058A6426EB2767F8E47BEDF7A042(L_77, L_75, (bool)0, L_76, NULL);
		V_12 = L_77;
		// drawNoteTargets.Add(instanceDNTM);
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_78 = __this->___drawNoteTargets_13;
		DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C* L_79 = V_12;
		NullCheck(L_78);
		List_1_Add_m38A9A2849CCF080DF506CEE05FEC2DD2A1C81EC7_inline(L_78, L_79, List_1_Add_m38A9A2849CCF080DF506CEE05FEC2DD2A1C81EC7_RuntimeMethod_var);
	}

IL_0215:
	{
		// while (drawNoteTargets.Count <= curDrawIndex)
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_80 = __this->___drawNoteTargets_13;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_inline(L_80, List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_RuntimeMethod_var);
		int32_t L_82 = __this->___curDrawIndex_14;
		if ((((int32_t)L_81) <= ((int32_t)L_82)))
		{
			goto IL_0172;
		}
	}
	{
		// if (drawNoteTargets[curDrawIndex] != null)
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_83 = __this->___drawNoteTargets_13;
		int32_t L_84 = __this->___curDrawIndex_14;
		NullCheck(L_83);
		DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C* L_85;
		L_85 = List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3(L_83, L_84, List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3_RuntimeMethod_var);
		if (!L_85)
		{
			goto IL_025f;
		}
	}
	{
		// drawNoteTargets[curDrawIndex].instanceGameObject.transform.position = drawPosition;
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_86 = __this->___drawNoteTargets_13;
		int32_t L_87 = __this->___curDrawIndex_14;
		NullCheck(L_86);
		DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C* L_88;
		L_88 = List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3(L_86, L_87, List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3_RuntimeMethod_var);
		NullCheck(L_88);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = L_88->___instanceGameObject_2;
		NullCheck(L_89);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_89, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_1;
		NullCheck(L_90);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_90, L_91, NULL);
	}

IL_025f:
	{
		// }
		return;
	}
}
// System.Void DrawNoteCore::UpdateColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_UpdateColor_m67F3A4D841833D819C4E0E07E653399B1594E310 (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, int32_t ___0_setColor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// drawColor = colorSwatches[setColor];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = __this->___colorSwatches_19;
		int32_t L_1 = ___0_setColor;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->___drawColor_20 = L_3;
		// if (curDrawIndex < drawNoteTargets.Count)
		int32_t L_4 = __this->___curDrawIndex_14;
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_5 = __this->___drawNoteTargets_13;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_inline(L_5, List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_RuntimeMethod_var);
		if ((((int32_t)L_4) >= ((int32_t)L_6)))
		{
			goto IL_0033;
		}
	}
	{
		// curDrawIndex += 1;
		int32_t L_7 = __this->___curDrawIndex_14;
		__this->___curDrawIndex_14 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0033:
	{
		// drawing = true;
		__this->___drawing_9 = (bool)1;
		// instanceSmallDrawingHUD.SetColorSelectedIndicator(drawColor);
		SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* L_8 = __this->___instanceSmallDrawingHUD_21;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___drawColor_20;
		NullCheck(L_8);
		SmallDrawingHUD_SetColorSelectedIndicator_m76F5E11CD6D9785EBDD6B253E82E258417A9DC22(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void DrawNoteCore::Undo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_Undo_m97FE5235EE5854DECCAB9C32893C9F866ABFB8BE (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (drawing)
		bool L_0 = __this->___drawing_9;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// drawing = false;
		__this->___drawing_9 = (bool)0;
		// curDrawIndex += 1;
		int32_t L_1 = __this->___curDrawIndex_14;
		__this->___curDrawIndex_14 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_001d:
	{
		// for (int i = drawNoteTargets.Count - 1; i >= 0; i--)
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_2 = __this->___drawNoteTargets_13;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_inline(L_2, List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		goto IL_0061;
	}

IL_002d:
	{
		// if (drawNoteTargets[i].instanceGameObject.activeSelf)
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_4 = __this->___drawNoteTargets_13;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C* L_6;
		L_6 = List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3(L_4, L_5, List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___instanceGameObject_2;
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		// drawNoteTargets[i].instanceGameObject.SetActive(false);
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_9 = __this->___drawNoteTargets_13;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C* L_11;
		L_11 = List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3(L_9, L_10, List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3_RuntimeMethod_var);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___instanceGameObject_2;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// break;
		return;
	}

IL_005d:
	{
		// for (int i = drawNoteTargets.Count - 1; i >= 0; i--)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0061:
	{
		// for (int i = drawNoteTargets.Count - 1; i >= 0; i--)
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DrawNoteCore::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_Clear_mDAFFD5CD43E90DC02575F62C6952010E35BFB9A0 (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB8F851FE8ED3D187593B6830FB07D5F9B5190A02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// drawing = false;
		__this->___drawing_9 = (bool)0;
		// for (int i = 0; i < drawNoteTargets.Count; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_000b:
	{
		// Destroy(drawNoteTargets[i].instanceGameObject);
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_0 = __this->___drawNoteTargets_13;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C* L_2;
		L_2 = List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3(L_0, L_1, List_1_get_Item_m91CDA3ECA9B9506D7405901F13510979A92000F3_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___instanceGameObject_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// for (int i = 0; i < drawNoteTargets.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < drawNoteTargets.Count; i++)
		int32_t L_5 = V_0;
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_6 = __this->___drawNoteTargets_13;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_inline(L_6, List_1_get_Count_m0B1CC6F9BD44BCA35A156A1F96154D74F0FEA43A_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		// drawNoteTargets.Clear();
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_8 = __this->___drawNoteTargets_13;
		NullCheck(L_8);
		List_1_Clear_mB8F851FE8ED3D187593B6830FB07D5F9B5190A02_inline(L_8, List_1_Clear_mB8F851FE8ED3D187593B6830FB07D5F9B5190A02_RuntimeMethod_var);
		// curDrawIndex = 0;
		__this->___curDrawIndex_14 = 0;
		// }
		return;
	}
}
// System.Void DrawNoteCore::SwitchMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_SwitchMode_m5969DCFD643F32E8D46C97239D57B5250107207B (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawNoteType_t66D9649F960C96891DC20B79ED7E0A88199340D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawNoteType_t66D9649F960C96891DC20B79ED7E0A88199340D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// curMode++;
		int32_t L_0 = __this->___curMode_15;
		__this->___curMode_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, 1));
		// if ((int)curMode >= Enum.GetNames(typeof(DrawNoteType)).Length)
		int32_t L_1 = __this->___curMode_15;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (DrawNoteType_t66D9649F960C96891DC20B79ED7E0A88199340D9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = Enum_GetNames_m382A68AE28D7B6035331EC0685315144F15957C3(L_3, NULL);
		NullCheck(L_4);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}
	{
		// curMode = 0;
		__this->___curMode_15 = 0;
	}

IL_002e:
	{
		// instanceSmallDrawingHUD.SetModeText(curMode.ToString());
		SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* L_5 = __this->___instanceSmallDrawingHUD_21;
		int32_t* L_6 = (&__this->___curMode_15);
		Il2CppFakeBox<int32_t> L_7(DrawNoteType_t66D9649F960C96891DC20B79ED7E0A88199340D9_il2cpp_TypeInfo_var, L_6);
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		NullCheck(L_5);
		SmallDrawingHUD_SetModeText_m664352EBA6D6831DF0CDE5FA9F60DF167D93353F(L_5, L_8, NULL);
		// }
		return;
	}
}
// System.Void DrawNoteCore::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_OnInputUp_mAB979FBE11F6B86C4EA6DDD4989FEDBDF40B25A0 (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99206F059C14634F66798E88F097A2B725FF5DE4);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log(eventData.MixedRealityInputAction.Description);
		InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85* L_0 = ___0_eventData;
		NullCheck(L_0);
		MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_1;
		L_1 = BaseInputEventData_get_MixedRealityInputAction_m88C7A667A337237AAF6C5DABF60319889C6C6F94_inline(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = MixedRealityInputAction_get_Description_m5AD88A40A36F727F7D93C9EF01CE99577686F2F2_inline((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// Debug.Log(eventData.MixedRealityInputAction.Id);
		InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85* L_3 = ___0_eventData;
		NullCheck(L_3);
		MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_4;
		L_4 = BaseInputEventData_get_MixedRealityInputAction_m88C7A667A337237AAF6C5DABF60319889C6C6F94_inline(L_3, NULL);
		V_0 = L_4;
		uint32_t L_5;
		L_5 = MixedRealityInputAction_get_Id_m9B3BD973BF0E9A842348EB78C4D31B43353CB2AD_inline((&V_0), NULL);
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_6);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// if (eventData.MixedRealityInputAction.Id == 1)
		InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85* L_8 = ___0_eventData;
		NullCheck(L_8);
		MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_9;
		L_9 = BaseInputEventData_get_MixedRealityInputAction_m88C7A667A337237AAF6C5DABF60319889C6C6F94_inline(L_8, NULL);
		V_0 = L_9;
		uint32_t L_10;
		L_10 = MixedRealityInputAction_get_Id_m9B3BD973BF0E9A842348EB78C4D31B43353CB2AD_inline((&V_0), NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0063;
		}
	}
	{
		// triggerPressed = false;
		__this->___triggerPressed_5 = (bool)0;
		// if (drawing) {
		bool L_11 = __this->___drawing_9;
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		// curDrawIndex += 1;
		int32_t L_12 = __this->___curDrawIndex_14;
		__this->___curDrawIndex_14 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0059:
	{
		// Debug.Log("Trigger released");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral99206F059C14634F66798E88F097A2B725FF5DE4, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void DrawNoteCore::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_OnInputDown_m43006B640E082BCA89A1E94FA10CCEEF467D7313 (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2168FBD37640345B64AAB94434501920A09710B8);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log(eventData.MixedRealityInputAction.Description);
		InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85* L_0 = ___0_eventData;
		NullCheck(L_0);
		MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_1;
		L_1 = BaseInputEventData_get_MixedRealityInputAction_m88C7A667A337237AAF6C5DABF60319889C6C6F94_inline(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = MixedRealityInputAction_get_Description_m5AD88A40A36F727F7D93C9EF01CE99577686F2F2_inline((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// Debug.Log(eventData.MixedRealityInputAction.Id);
		InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85* L_3 = ___0_eventData;
		NullCheck(L_3);
		MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_4;
		L_4 = BaseInputEventData_get_MixedRealityInputAction_m88C7A667A337237AAF6C5DABF60319889C6C6F94_inline(L_3, NULL);
		V_0 = L_4;
		uint32_t L_5;
		L_5 = MixedRealityInputAction_get_Id_m9B3BD973BF0E9A842348EB78C4D31B43353CB2AD_inline((&V_0), NULL);
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_6);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// if (eventData.MixedRealityInputAction.Id == 1)
		InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85* L_8 = ___0_eventData;
		NullCheck(L_8);
		MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_9;
		L_9 = BaseInputEventData_get_MixedRealityInputAction_m88C7A667A337237AAF6C5DABF60319889C6C6F94_inline(L_8, NULL);
		V_0 = L_9;
		uint32_t L_10;
		L_10 = MixedRealityInputAction_get_Id_m9B3BD973BF0E9A842348EB78C4D31B43353CB2AD_inline((&V_0), NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		// triggerPressed = true;
		__this->___triggerPressed_5 = (bool)1;
		// Debug.Log("Trigger pressed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2168FBD37640345B64AAB94434501920A09710B8, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void DrawNoteCore::CheckControllerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_CheckControllerPosition_m8CC1C189A3B2D53F0F1FC5A03BC672C3B6D52D0B (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* V_1 = NULL;
	int32_t V_2 = 0;
	MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* V_3 = NULL;
	{
		// foreach (IMixedRealityController controller in CoreServices.InputSystem.DetectedControllers)
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		NullCheck(L_0);
		HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* L_1;
		L_1 = InterfaceFuncInvoker0< HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* >::Invoke(5 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedControllers() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 L_2;
		L_2 = HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA(L_1, HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54((&V_0), Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0046_1;
			}

IL_0012_1:
			{
				// foreach (IMixedRealityController controller in CoreServices.InputSystem.DetectedControllers)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_inline((&V_0), Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_RuntimeMethod_var);
				// foreach (MixedRealityInteractionMapping interactionMapping in controller.Interactions)
				NullCheck(L_3);
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_4;
				L_4 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var, L_3);
				V_1 = L_4;
				V_2 = 0;
				goto IL_0040_1;
			}

IL_0023_1:
			{
				// foreach (MixedRealityInteractionMapping interactionMapping in controller.Interactions)
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_5 = V_1;
				int32_t L_6 = V_2;
				NullCheck(L_5);
				int32_t L_7 = L_6;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
				V_3 = L_8;
				// if (interactionMapping.InputType == DeviceInputType.SpatialPointer)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_9 = V_3;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline(L_9, NULL);
				if ((!(((uint32_t)L_10) == ((uint32_t)3))))
				{
					goto IL_003c_1;
				}
			}
			{
				// controllerpos = interactionMapping.PositionData;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_11 = V_3;
				NullCheck(L_11);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
				L_12 = MixedRealityInteractionMapping_get_PositionData_m189D602B6846B225CBFBAB5C64699469900972E5_inline(L_11, NULL);
				__this->___controllerpos_6 = L_12;
			}

IL_003c_1:
			{
				int32_t L_13 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0040_1:
			{
				// foreach (MixedRealityInteractionMapping interactionMapping in controller.Interactions)
				int32_t L_14 = V_2;
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_15 = V_1;
				NullCheck(L_15);
				if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
				{
					goto IL_0023_1;
				}
			}

IL_0046_1:
			{
				// foreach (IMixedRealityController controller in CoreServices.InputSystem.DetectedControllers)
				bool L_16;
				L_16 = Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB((&V_0), Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void DrawNoteCore::HandleDrawing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore_HandleDrawing_m7262426DA3DB1D1228914A6A11CE5CC50DF4510E (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (CameraCache.Main != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		// transform.position = CameraCache.Main.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_5, NULL);
		// transform.rotation = CameraCache.Main.transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A(NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_9, NULL);
	}

IL_0041:
	{
		// instanceSmallDrawingHUD.SetVisibility(drawing);
		SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* L_10 = __this->___instanceSmallDrawingHUD_21;
		bool L_11 = __this->___drawing_9;
		NullCheck(L_10);
		SmallDrawingHUD_SetVisibility_mB74A6C1A9A1BB162E40D5A4B16A0FE20901FE913(L_10, L_11, (bool)0, NULL);
		// bool showDrawPlane = false;
		V_0 = (bool)0;
		// if (drawing && curMode == DrawNoteType.Distant)
		bool L_12 = __this->___drawing_9;
		if (!L_12)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_13 = __this->___curMode_15;
		if (L_13)
		{
			goto IL_0067;
		}
	}
	{
		// showDrawPlane = true;
		V_0 = (bool)1;
	}

IL_0067:
	{
		// if (drawPlane.enabled != showDrawPlane)
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_14 = __this->___drawPlane_12;
		NullCheck(L_14);
		bool L_15;
		L_15 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_14, NULL);
		bool L_16 = V_0;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0081;
		}
	}
	{
		// drawPlane.enabled = showDrawPlane;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_17 = __this->___drawPlane_12;
		bool L_18 = V_0;
		NullCheck(L_17);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_17, L_18, NULL);
	}

IL_0081:
	{
		// if (drawing)
		bool L_19 = __this->___drawing_9;
		if (!L_19)
		{
			goto IL_0096;
		}
	}
	{
		// TryDrawNote(curMode);
		int32_t L_20 = __this->___curMode_15;
		DrawNoteCore_TryDrawNote_m2C6F0D72FBEED57397240C6D8CBE8DA1FEDBD9A9(__this, L_20, NULL);
		return;
	}

IL_0096:
	{
		// if (drawPlane.enabled)
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_21 = __this->___drawPlane_12;
		NullCheck(L_21);
		bool L_22;
		L_22 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_21, NULL);
		if (!L_22)
		{
			goto IL_00af;
		}
	}
	{
		// drawPlane.enabled = false;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_23 = __this->___drawPlane_12;
		NullCheck(L_23);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_23, (bool)0, NULL);
	}

IL_00af:
	{
		// }
		return;
	}
}
// System.Void DrawNoteCore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteCore__ctor_m244DA8D7BF8B7DA18DE522458A9B13B6BBE2678C (DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2C8B8D437F3270BE0E20F5475E3781779205C2E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 offset = new Vector3(0, 0, 0.05f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0500000007f), /*hidden argument*/NULL);
		__this->___offset_8 = L_0;
		// public bool drawing = true;
		__this->___drawing_9 = (bool)1;
		// private List<DrawNoteTargetModel> drawNoteTargets = new List<DrawNoteTargetModel>();
		List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA* L_1 = (List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA*)il2cpp_codegen_object_new(List_1_t4C005EC85B8FAD87C8DE7BE0225D6854FA3E1AAA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m2C8B8D437F3270BE0E20F5475E3781779205C2E0(L_1, List_1__ctor_m2C8B8D437F3270BE0E20F5475E3781779205C2E0_RuntimeMethod_var);
		__this->___drawNoteTargets_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___drawNoteTargets_13), (void*)L_1);
		// public DrawNoteType controllerMode = DrawNoteType.Closeby;
		__this->___controllerMode_16 = 2;
		// public Color[] colorSwatches = new Color[4];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___colorSwatches_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorSwatches_19), (void*)L_2);
		// public Color drawColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___drawColor_20 = L_3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DrawNoteInput::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteInput_Awake_m283048159DDA9E68B6BD63A6F78D20B2352D6C55 (DrawNoteInput_t8746FAB26F731BF1E6071FAE9B42AA740C335135* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2_m500FB46C67F7C95A3BFCD472B1F61DDF277BF63F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instanceDNC = transform.GetComponent<DrawNoteCore>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* L_1;
		L_1 = Component_GetComponent_TisDrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2_m500FB46C67F7C95A3BFCD472B1F61DDF277BF63F(L_0, Component_GetComponent_TisDrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2_m500FB46C67F7C95A3BFCD472B1F61DDF277BF63F_RuntimeMethod_var);
		__this->___instanceDNC_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instanceDNC_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void DrawNoteInput::DrawNoteActionTaken(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteInput_DrawNoteActionTaken_m6D03B14E740D65293F43C9A617A87916F61DD235 (DrawNoteInput_t8746FAB26F731BF1E6071FAE9B42AA740C335135* __this, int32_t ___0_setActionInt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawNoteAction_t7563DBB12B143CFA782F6FB161C568847F746F39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral095499FD7A116E2A100C3F87CC96C8678AC2BE4F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (lastActionTime > Time.time - dontAllowActionBufferTime)
		float L_0 = __this->___lastActionTime_5;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___dontAllowActionBufferTime_6;
		if ((!(((float)L_0) > ((float)((float)il2cpp_codegen_subtract(L_1, L_2))))))
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// lastActionTime = Time.time;
		float L_3;
		L_3 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastActionTime_5 = L_3;
		// DrawNoteAction instanceAction = (DrawNoteAction)setActionInt;
		int32_t L_4 = ___0_setActionInt;
		V_0 = L_4;
		// Debug.Log($"DrawNoteActionTaken: {instanceAction}");
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(DrawNoteAction_t7563DBB12B143CFA782F6FB161C568847F746F39_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral095499FD7A116E2A100C3F87CC96C8678AC2BE4F, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		int32_t L_9 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, 1)))
		{
			case 0:
			{
				goto IL_0064;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_009e;
			}
			case 3:
			{
				goto IL_00ab;
			}
			case 4:
			{
				goto IL_00b8;
			}
			case 5:
			{
				goto IL_00c5;
			}
			case 6:
			{
				goto IL_00d2;
			}
			case 7:
			{
				goto IL_00de;
			}
			case 8:
			{
				goto IL_00ea;
			}
		}
	}
	{
		return;
	}

IL_0064:
	{
		// instanceDNC.drawing = true;
		DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* L_10 = __this->___instanceDNC_4;
		NullCheck(L_10);
		L_10->___drawing_9 = (bool)1;
		// break;
		return;
	}

IL_0071:
	{
		// if (instanceDNC.drawing)
		DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* L_11 = __this->___instanceDNC_4;
		NullCheck(L_11);
		bool L_12 = L_11->___drawing_9;
		if (!L_12)
		{
			goto IL_00f5;
		}
	}
	{
		// instanceDNC.drawing = false;
		DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* L_13 = __this->___instanceDNC_4;
		NullCheck(L_13);
		L_13->___drawing_9 = (bool)0;
		// instanceDNC.curDrawIndex += 1;
		DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* L_14 = __this->___instanceDNC_4;
		DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->___curDrawIndex_14;
		NullCheck(L_15);
		L_15->___curDrawIndex_14 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// break;
		return;
	}

IL_009e:
	{
		// instanceDNC.UpdateColor(0);
		DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* L_17 = __this->___instanceDNC_4;
		NullCheck(L_17);
		DrawNoteCore_UpdateColor_m67F3A4D841833D819C4E0E07E653399B1594E310(L_17, 0, NULL);
		// break;
		return;
	}

IL_00ab:
	{
		// instanceDNC.UpdateColor(1);
		DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* L_18 = __this->___instanceDNC_4;
		NullCheck(L_18);
		DrawNoteCore_UpdateColor_m67F3A4D841833D819C4E0E07E653399B1594E310(L_18, 1, NULL);
		// break;
		return;
	}

IL_00b8:
	{
		// instanceDNC.UpdateColor(2);
		DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* L_19 = __this->___instanceDNC_4;
		NullCheck(L_19);
		DrawNoteCore_UpdateColor_m67F3A4D841833D819C4E0E07E653399B1594E310(L_19, 2, NULL);
		// break;
		return;
	}

IL_00c5:
	{
		// instanceDNC.UpdateColor(3);
		DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* L_20 = __this->___instanceDNC_4;
		NullCheck(L_20);
		DrawNoteCore_UpdateColor_m67F3A4D841833D819C4E0E07E653399B1594E310(L_20, 3, NULL);
		// break;
		return;
	}

IL_00d2:
	{
		// instanceDNC.Undo();
		DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* L_21 = __this->___instanceDNC_4;
		NullCheck(L_21);
		DrawNoteCore_Undo_m97FE5235EE5854DECCAB9C32893C9F866ABFB8BE(L_21, NULL);
		// break;
		return;
	}

IL_00de:
	{
		// instanceDNC.Clear();
		DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* L_22 = __this->___instanceDNC_4;
		NullCheck(L_22);
		DrawNoteCore_Clear_mDAFFD5CD43E90DC02575F62C6952010E35BFB9A0(L_22, NULL);
		// break;
		return;
	}

IL_00ea:
	{
		// instanceDNC.SwitchMode();
		DrawNoteCore_tD82654DBDA7BF69EB0FE771CEE44A8D0D80B83A2* L_23 = __this->___instanceDNC_4;
		NullCheck(L_23);
		DrawNoteCore_SwitchMode_m5969DCFD643F32E8D46C97239D57B5250107207B(L_23, NULL);
	}

IL_00f5:
	{
		// }
		return;
	}
}
// System.Void DrawNoteInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteInput__ctor_m1985B004925183EEF9140F85138EEE76B8F4BEB1 (DrawNoteInput_t8746FAB26F731BF1E6071FAE9B42AA740C335135* __this, const RuntimeMethod* method) 
{
	{
		// private float dontAllowActionBufferTime = 1.5F;
		__this->___dontAllowActionBufferTime_6 = (1.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DrawNoteTargetModel::.ctor(System.Int32,System.Boolean,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawNoteTargetModel__ctor_m3C63425F7B29058A6426EB2767F8E47BEDF7A042 (DrawNoteTargetModel_t529B174D03123D93148A6015B0DD2C04B7E4DC7C* __this, int32_t ___0_setID, bool ___1_setArtExists, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_setGameObject, const RuntimeMethod* method) 
{
	{
		// public DrawNoteTargetModel(int setID, bool setArtExists, GameObject setGameObject)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// instanceID = setID;
		int32_t L_0 = ___0_setID;
		__this->___instanceID_0 = L_0;
		// instanceArtExists = setArtExists;
		bool L_1 = ___1_setArtExists;
		__this->___instanceArtExists_1 = L_1;
		// instanceGameObject = setGameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___2_setGameObject;
		__this->___instanceGameObject_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instanceGameObject_2), (void*)L_2);
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
// System.Void SmallDrawingHUD::SetModeText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallDrawingHUD_SetModeText_m664352EBA6D6831DF0CDE5FA9F60DF167D93353F (SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* __this, String_t* ___0_setText, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C441C802EFF6FB06F2F2C2C24B9FAA791CB4546);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string displayText = "Mode: " + setText;
		String_t* L_0 = ___0_setText;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9C441C802EFF6FB06F2F2C2C24B9FAA791CB4546, L_0, NULL);
		V_0 = L_1;
		// modeText.text = displayText;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___modeText_9;
		String_t* L_3 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void SmallDrawingHUD::SetColorBlockOptions(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallDrawingHUD_SetColorBlockOptions_mDE1D249785A5B53A161DF3B6FCAD4E92E2F46F27 (SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_setColors, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < smallColorBlocks.Length; i++)
		V_0 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		// smallColorBlocks[i].color = setColors[i];
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_0 = __this->___smallColorBlocks_8;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = ___0_setColors;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_7);
		// for (int i = 0; i < smallColorBlocks.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001c:
	{
		// for (int i = 0; i < smallColorBlocks.Length; i++)
		int32_t L_9 = V_0;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_10 = __this->___smallColorBlocks_8;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SmallDrawingHUD::SetColorSelectedIndicator(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallDrawingHUD_SetColorSelectedIndicator_m76F5E11CD6D9785EBDD6B253E82E258417A9DC22 (SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_setColor, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < bigColorBlocks.Length; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// bigColorBlocks[i].color = setColor;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_0 = __this->___bigColorBlocks_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_setColor;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// for (int i = 0; i < bigColorBlocks.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < bigColorBlocks.Length; i++)
		int32_t L_6 = V_0;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_7 = __this->___bigColorBlocks_7;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SmallDrawingHUD::SetVisibility(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallDrawingHUD_SetVisibility_mB74A6C1A9A1BB162E40D5A4B16A0FE20901FE913 (SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* __this, bool ___0_drawingNow, bool ___1_forceUpdate, const RuntimeMethod* method) 
{
	{
		// if (lastSet != drawingNow || forceUpdate)
		bool L_0 = __this->___lastSet_6;
		bool L_1 = ___0_drawingNow;
		bool L_2 = ___1_forceUpdate;
		if (!((int32_t)(((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0)|(int32_t)L_2)))
		{
			goto IL_004b;
		}
	}
	{
		// lastSet = drawingNow;
		bool L_3 = ___0_drawingNow;
		__this->___lastSet_6 = L_3;
		// if (drawingNow)
		bool L_4 = ___0_drawingNow;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// drawingNowMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___drawingNowMenu_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// drawingDetails.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___drawingDetails_5;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		return;
	}

IL_0033:
	{
		// drawingNowMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___drawingNowMenu_4;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// drawingDetails.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___drawingDetails_5;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void SmallDrawingHUD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallDrawingHUD__ctor_m62475A6899E4ED8E6BBB06FFB97A408E8BB27884 (SmallDrawingHUD_tB0669B1CAF650275766FA099BA20383B653BBD40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool lastSet = true;
		__this->___lastSet_6 = (bool)1;
		// public Image[] bigColorBlocks = new Image[2];
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_0 = (ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78*)(ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78*)SZArrayNew(ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___bigColorBlocks_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bigColorBlocks_7), (void*)L_0);
		// public Image[] smallColorBlocks = new Image[4];
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_1 = (ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78*)(ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78*)SZArrayNew(ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___smallColorBlocks_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___smallColorBlocks_8), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityPose_get_Position_mDF63DBEBBB8B0979C9CA6F06902F9281C26ACA81_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___position_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FocusDetails_get_Point_mED97A47BC407BF95930337DF61EE88143661B89B_inline (FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Point { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPointU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* FocusDetails_get_Object_m003956817ED39A52E8D90EF635636421EE6D2506_inline (FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Object { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CObjectU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 BaseInputEventData_get_MixedRealityInputAction_m88C7A667A337237AAF6C5DABF60319889C6C6F94_inline (BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399* __this, const RuntimeMethod* method) 
{
	{
		// public MixedRealityInputAction MixedRealityInputAction { get; private set; }
		MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_0 = __this->___U3CMixedRealityInputActionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityInputAction_get_Description_m5AD88A40A36F727F7D93C9EF01CE99577686F2F2_inline (MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486* __this, const RuntimeMethod* method) 
{
	{
		// public string Description => description;
		String_t* L_0 = __this->___description_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MixedRealityInputAction_get_Id_m9B3BD973BF0E9A842348EB78C4D31B43353CB2AD_inline (MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486* __this, const RuntimeMethod* method) 
{
	{
		// public uint Id => id;
		uint32_t L_0 = __this->___id_1;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityInteractionMapping_get_PositionData_m189D602B6846B225CBFBAB5C64699469900972E5_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// return positionData;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___positionData_15;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
