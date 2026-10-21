// TypeDefIndex 837
// Namespace: Nekki.SF2.GUI.Map
// public class IndicatorFight : SFMonoBehaviour<object>
// Fields:
//   public const string FILE_INDICATOR_ATLAS = "MiscSprites";
//   public const string FILE_INDICATOR_ON = "MiscSprites.indicatorOn";
//   public const string FILE_INDICATOR_OFF = "MiscSprites.indicatorOff";
//   public const string FILE_INDICATOR_LOCKED = "MiscSprites.indicatorLocked";
//   private IndicatorFight.OMOMCJEDDOM DFCJLLMHKLE; // 0x28
//   private float OAEPPCNALGL; // 0x2C

// ===== public IndicatorFight.OMOMCJEDDOM get_CurrentState()  [RVA 0x3081D70]
// Nekki.SF2.GUI.Map.IndicatorFight$$get_CurrentState @ RVA 0x3081D70

int32_t Nekki_SF2_GUI_Map_IndicatorFight__get_CurrentState
                  (Nekki_SF2_GUI_Map_IndicatorFight_o *__this,MethodInfo *method)

{
  return (__this->fields).DFCJLLMHKLE;
}


// ===== public void set_CurrentState(IndicatorFight.OMOMCJEDDOM CJNHFNHJHPE)  [RVA 0x3081D78]
// Nekki.SF2.GUI.Map.IndicatorFight$$set_CurrentState @ RVA 0x3081D78

void Nekki_SF2_GUI_Map_IndicatorFight__set_CurrentState
               (Nekki_SF2_GUI_Map_IndicatorFight_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  uint uVar1;
  undefined4 uVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  
                    /* try { // try from 03181d9c to 03281da3 has its CatchHandler @ 03181e30 */
  if ((DAT_04565ffd & 1) == 0) {
                    /* try { // try from 03181da4 to 03281db3 has its CatchHandler @ 03181e3c */
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    FUN_01bab630(&StringLiteral_9087/*"MiscSprites.indicatorOff"*/);
    FUN_01bab630(&StringLiteral_9080/*"MiscSprites"*/);
                    /* try { // try from 03181dc4 to 03281dcf has its CatchHandler @ 03181e38 */
    FUN_01bab630(&StringLiteral_9088/*"MiscSprites.indicatorOn"*/);
    FUN_01bab630(&StringLiteral_9086/*"MiscSprites.indicatorLocked"*/);
    DAT_04565ffd = 1;
  }
  (__this->fields).DFCJLLMHKLE = CJNHFNHJHPE;
                    /* try { // try from 03181de8 to 03281deb has its CatchHandler @ 03181e2c */
                    /* try { // try from 03181dec to 03281e0f has its CatchHandler @ 03181e40 */
  __this_00 = (Nekki_SF2_GUI_ResolutionImage_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar2 = StringLiteral_9080/*"MiscSprites"*/._4_4_;
    (__this_00->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_9080/*"MiscSprites"*/;
    (__this_00->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar2;
                    /* try { // try from 03181e10 to 03281e23 has its CatchHandler @ 03181e34 */
    thunk_FUN_01c20e04(&(__this_00->fields).super.m_PixelsPerUnitMultiplier);
    uVar1 = (__this->fields).DFCJLLMHKLE;
    if (uVar1 < 3) {
                    /* try { // try from 03181e24 to 03281e57 has its CatchHandler @ 03181a10 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03181de8 with catch @ 03181e2c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03181d9c with catch @ 03181e30
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03181e10 with catch @ 03181e34
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03181dc4 with catch @ 03181e38
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03181da4 with catch @ 03181e3c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03181dec with catch @ 03181e40
                        */
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_00,*(System_String_o **)(&PTR_StringLiteral_9088/*"MiscSprites.indicatorOn"*/_03fc63c0)[(int)uVar1],
                 (MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03181e58 to 03281e6f has its CatchHandler @ 03181f10 */
  FUN_01bab8c8();
}


// ===== public float get_Scale()  [RVA 0x3081E5C]
// Nekki.SF2.GUI.Map.IndicatorFight$$get_Scale @ RVA 0x3081E5C

float Nekki_SF2_GUI_Map_IndicatorFight__get_Scale
                (Nekki_SF2_GUI_Map_IndicatorFight_o *__this,MethodInfo *method)

{
  return (__this->fields).OAEPPCNALGL;
}


// ===== public void set_Scale(float CJNHFNHJHPE)  [RVA 0x3081E64]
// Nekki.SF2.GUI.Map.IndicatorFight$$set_Scale @ RVA 0x3081E64

void Nekki_SF2_GUI_Map_IndicatorFight__set_Scale
               (Nekki_SF2_GUI_Map_IndicatorFight_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o value;
  
                    /* try { // try from 03181e70 to 03281eff has its CatchHandler @ 03181a10 */
  if ((DAT_04565ffe & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    DAT_04565ffe = 1;
  }
  (__this->fields).OAEPPCNALGL = CJNHFNHJHPE;
  __this_00 = (UnityEngine_Component_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
  if ((__this_00 != (UnityEngine_Component_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.x = (__this->fields).OAEPPCNALGL;
    value.fields.y = value.fields.x;
    value.fields.z = 0.0;
    UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3081EE4]
// Nekki.SF2.GUI.Map.IndicatorFight$$.ctor @ RVA 0x3081EE4

void Nekki_SF2_GUI_Map_IndicatorFight___ctor
               (Nekki_SF2_GUI_Map_IndicatorFight_o *__this,MethodInfo *method)

{
                    /* try { // try from 03181f00 to 03281f0f has its CatchHandler @ 03181f10 */
  if ((DAT_04565fff & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
                    /* catch() { ... } // from try @ 03181e58 with catch @ 03181f10
                       catch() { ... } // from try @ 03181f00 with catch @ 03181f10 */
                    /* try { // try from 03181f14 to 03281f17 has its CatchHandler @ 03181f20 */
    DAT_04565fff = 1;
  }
                    /* try { // try from 03181f18 to 03281f23 has its CatchHandler @ 03181a10 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03181f14 with catch @ 03181f20
                        */
  (__this->fields).DFCJLLMHKLE = 1;
  (__this->fields).OAEPPCNALGL = 1.0;
  Nekki_SF2_GUI_SFMonoBehaviour<object>___ctor
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
  return;
}

