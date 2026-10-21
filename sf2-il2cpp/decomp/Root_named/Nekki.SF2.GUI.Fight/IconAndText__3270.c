// TypeDefIndex 3270
// Namespace: Nekki.SF2.GUI.Fight
// public class IconAndText : MonoBehaviour
// Fields:
//   private ResolutionImageLE icon; // 0x20
//   private LabelAliasLE text; // 0x28
//   private LayoutElement layoutElement; // 0x30

// ===== public void SetIcon(string LOHCEAICEBN)  [RVA 0x3519B68]
// Nekki.SF2.GUI.Fight.IconAndText$$SetIcon @ RVA 0x3519B68

void Nekki_SF2_GUI_Fight_IconAndText__SetIcon
               (Nekki_SF2_GUI_Fight_IconAndText_o *__this,System_String_o *LOHCEAICEBN,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImageLE_o *pNVar2;
  
  if ((DAT_04568969 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568969 = 1;
  }
  pNVar2 = (__this->fields).icon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    pNVar2 = (__this->fields).icon;
    if (pNVar2 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar2,LOHCEAICEBN,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_GUI_Fight_IconAndText__HMOMDLHAJJE(__this,method_00);
  return;
}


// ===== public void SetFontSize(int NJBICBHLOMO)  [RVA 0x3519CFC]
// Nekki.SF2.GUI.Fight.IconAndText$$SetFontSize @ RVA 0x3519CFC

void Nekki_SF2_GUI_Fight_IconAndText__SetFontSize
               (Nekki_SF2_GUI_Fight_IconAndText_o *__this,int32_t NJBICBHLOMO,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAliasLE_o *__this_00;
  
  __this_00 = (__this->fields).text;
  if (__this_00 != (Nekki_SF2_GUI_LabelAliasLE_o *)0x0) {
    UnityEngine_UI_Text__set_fontSize
              ((UnityEngine_UI_Text_o *)__this_00,NJBICBHLOMO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3519D18]
// Nekki.SF2.GUI.Fight.IconAndText$$.ctor @ RVA 0x3519D18

void Nekki_SF2_GUI_Fight_IconAndText___ctor
               (Nekki_SF2_GUI_Fight_IconAndText_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SetBestFit(bool CJNHFNHJHPE)  [RVA 0x3519D20]
// Nekki.SF2.GUI.Fight.IconAndText$$SetBestFit @ RVA 0x3519D20

void Nekki_SF2_GUI_Fight_IconAndText__SetBestFit
               (Nekki_SF2_GUI_Fight_IconAndText_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAliasLE_o *__this_00;
  
  __this_00 = (__this->fields).text;
                    /* try { // try from 03619d28 to 03719dbf has its CatchHandler @ 03619d28
                       catch() { ... } // from try @ 03619d28 with catch @ 03619d28
                       catch() { ... } // from try @ 03619dec with catch @ 03619d28
                       catch() { ... } // from try @ 03619e2c with catch @ 03619d28
                       catch() { ... } // from try @ 03619e54 with catch @ 03619d28
                       catch() { ... } // from try @ 03619e90 with catch @ 03619d28 */
  if (__this_00 != (Nekki_SF2_GUI_LabelAliasLE_o *)0x0) {
    UnityEngine_UI_Text__set_resizeTextForBestFit
              ((UnityEngine_UI_Text_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetFontSize()  [RVA 0x3519D40]
// Nekki.SF2.GUI.Fight.IconAndText$$GetFontSize @ RVA 0x3519D40

int32_t Nekki_SF2_GUI_Fight_IconAndText__GetFontSize
                  (Nekki_SF2_GUI_Fight_IconAndText_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_LabelAliasLE_o *__this_00;
  
  __this_00 = (__this->fields).text;
  if (__this_00 != (Nekki_SF2_GUI_LabelAliasLE_o *)0x0) {
    iVar1 = UnityEngine_UI_Text__get_fontSize((UnityEngine_UI_Text_o *)__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HMOMDLHAJJE()  [RVA 0x3519BF8]
// Nekki.SF2.GUI.Fight.IconAndText$$HMOMDLHAJJE @ RVA 0x3519BF8

void Nekki_SF2_GUI_Fight_IconAndText__HMOMDLHAJJE
               (Nekki_SF2_GUI_Fight_IconAndText_o *__this,MethodInfo *method)

{
  bool bVar1;
  long *plVar2;
  MethodInfo *extraout_x1;
  UnityEngine_UI_LayoutElement_o *x;
  Nekki_SF2_GUI_ResolutionImageLE_o *pNVar3;
  Nekki_SF2_GUI_LabelAliasLE_o *pNVar4;
  
  if ((DAT_0456896a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456896a = 1;
    method = extraout_x1;
  }
  x = (__this->fields).layoutElement;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).icon;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).icon;
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) ||
         (plVar2 = *(long **)&(pNVar3->fields).super.UseCacheForSingleSprites, plVar2 == (long *)0x0
         )) goto LAB_03619cf8;
      (**(code **)(*plVar2 + 0x328))(plVar2,*(undefined8 *)(*plVar2 + 0x330));
    }
    pNVar4 = (__this->fields).text;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar4 = (__this->fields).text;
      if ((pNVar4 != (Nekki_SF2_GUI_LabelAliasLE_o *)0x0) &&
         (plVar2 = *(long **)&(pNVar4->fields).super._ToUpperCase, plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x03619ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x328))(plVar2,*(undefined8 *)(*plVar2 + 0x330));
        return;
      }
LAB_03619cf8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void SetTextColor(Color EFJKPCADGJH)  [RVA 0x3519D5C]
// Nekki.SF2.GUI.Fight.IconAndText$$SetTextColor @ RVA 0x3519D5C

void Nekki_SF2_GUI_Fight_IconAndText__SetTextColor
               (Nekki_SF2_GUI_Fight_IconAndText_o *__this,UnityEngine_Color_o EFJKPCADGJH,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAliasLE_o *pNVar2;
  
  if ((DAT_0456896b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456896b = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 03619dc0 to 03719dc7 has its CatchHandler @ 03619e38 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAliasLE_o *)0x0) {
                    /* try { // try from 03619de0 to 03719deb has its CatchHandler @ 03619e30 */
                    /* try { // try from 03619dec to 03719e27 has its CatchHandler @ 03619d28 */
                    /* WARNING: Could not recover jumptable at 0x03619e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                (CONCAT44((int)((ulong)EFJKPCADGJH.fields._0_8_ >> 0x20),EFJKPCADGJH.fields.r),
                 CONCAT44((int)((ulong)EFJKPCADGJH.fields._4_8_ >> 0x20),EFJKPCADGJH.fields.g),
                 CONCAT44((int)((ulong)EFJKPCADGJH.fields._8_8_ >> 0x20),EFJKPCADGJH.fields.b),
                 CONCAT44((int)((ulong)register0x00005060 >> 0x20),EFJKPCADGJH.fields.a),pNVar2,
                 (pNVar2->klass->vtable)._23_set_color.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void SetText(string CJNHFNHJHPE)  [RVA 0x3519E20]
// Nekki.SF2.GUI.Fight.IconAndText$$SetText @ RVA 0x3519E20

void Nekki_SF2_GUI_Fight_IconAndText__SetText
               (Nekki_SF2_GUI_Fight_IconAndText_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAliasLE_o *pNVar2;
  
                    /* try { // try from 03619e28 to 03719e2b has its CatchHandler @ 03619e34 */
                    /* try { // try from 03619e2c to 03719e4f has its CatchHandler @ 03619d28 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03619de0 with catch @ 03619e30
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03619e28 with catch @ 03619e34
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03619dc0 with catch @ 03619e38
                        */
  if ((DAT_0456896c & 1) == 0) {
                    /* try { // try from 03619e50 to 03719e53 has its CatchHandler @ 03619e80 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03619e54 to 03719e87 has its CatchHandler @ 03619d28 */
    DAT_0456896c = 1;
  }
  pNVar2 = (__this->fields).text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
                    /* catch() { ... } // from try @ 03619e50 with catch @ 03619e80 */
  if (bVar1) {
    pNVar2 = (__this->fields).text;
                    /* try { // try from 03619e88 to 03719e8f has its CatchHandler @ 03619ea4 */
    if (pNVar2 == (Nekki_SF2_GUI_LabelAliasLE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03619e90 to 03719e9b has its CatchHandler @ 03619d28 */
    Nekki_SF2_GUI_LabelAliasLE__set_text(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
                    /* try { // try from 03619e9c to 03719ea3 has its CatchHandler @ 03619ea4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03619e88 with catch @ 03619ea4
                       catch(type#2 @ 00000000) { ... } // from try @ 03619e9c with catch @ 03619ea4
                        */
  Nekki_SF2_GUI_Fight_IconAndText__HMOMDLHAJJE(__this,method_00);
  return;
}

