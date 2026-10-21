// TypeDefIndex 1863
// Namespace: Nekki.SF2.GUI.Scripts
// public class EditBox : InputField
// Fields:
//   private bool OIHLBDPHBMI; // 0x220
//   private Action<EditBox> HHHKCKLPENH; // 0x228

// ===== public void add_OnShowKeyboard(Action<EditBox> CJNHFNHJHPE)  [RVA 0x324969C]
// Nekki.SF2.GUI.Scripts.EditBox$$add_OnShowKeyboard @ RVA 0x324969C

void Nekki_SF2_GUI_Scripts_EditBox__add_OnShowKeyboard
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,System_Action_EditBox__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_EditBox__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_EditBox__o *pSVar5;
  System_Action_EditBox__o *a;
  
                    /* try { // try from 033496b8 to 034496bf has its CatchHandler @ 03349990 */
  if ((DAT_045670e0 & 1) == 0) {
    FUN_01bab630(&System_Action<EditBox>_TypeInfo);
    DAT_045670e0 = 1;
  }
  a = (__this->fields).HHHKCKLPENH;
  do {
                    /* try { // try from 033496e4 to 034496e7 has its CatchHandler @ 033498c4 */
                    /* try { // try from 033496e8 to 034496ef has its CatchHandler @ 033498ec */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<EditBox>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 033496f8 to 034496ff has its CatchHandler @ 033498f0 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<EditBox>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 0334971c to 0344971f has its CatchHandler @ 033498dc */
    pSVar5 = (System_Action_EditBox__o *)FUN_01c07368(&(__this->fields).HHHKCKLPENH,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
                    /* try { // try from 0334972c to 03449737 has its CatchHandler @ 033498e4 */
  } while (bVar2);
                    /* try { // try from 03349740 to 03449767 has its CatchHandler @ 033498fc */
  return;
}


// ===== public void remove_OnShowKeyboard(Action<EditBox> CJNHFNHJHPE)  [RVA 0x3249750]
// Nekki.SF2.GUI.Scripts.EditBox$$remove_OnShowKeyboard @ RVA 0x3249750

void Nekki_SF2_GUI_Scripts_EditBox__remove_OnShowKeyboard
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,System_Action_EditBox__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_EditBox__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_EditBox__o *pSVar5;
  System_Action_EditBox__o *source;
  
                    /* try { // try from 03349768 to 034497bf has its CatchHandler @ 03349364 */
  if ((DAT_045670e1 & 1) == 0) {
    FUN_01bab630(&System_Action<EditBox>_TypeInfo);
    DAT_045670e1 = 1;
  }
  source = (__this->fields).HHHKCKLPENH;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<EditBox>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<EditBox>_TypeInfo);
                    /* try { // try from 033497c0 to 034497c7 has its CatchHandler @ 0334998c */
      if (lVar4 == 0) {
                    /* try { // try from 033497fc to 03449803 has its CatchHandler @ 0334991c */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 033497d4 to 034497e3 has its CatchHandler @ 03349a00 */
    pSVar5 = (System_Action_EditBox__o *)FUN_01c07368(&(__this->fields).HHHKCKLPENH,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public Color get_FontColor()  [RVA 0x3249804]
// Nekki.SF2.GUI.Scripts.EditBox$$get_FontColor @ RVA 0x3249804

UnityEngine_Color_o
Nekki_SF2_GUI_Scripts_EditBox__get_FontColor
          (Nekki_SF2_GUI_Scripts_EditBox_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o UVar2;
  
                    /* try { // try from 03349804 to 03449893 has its CatchHandler @ 03349364 */
  pUVar1 = (__this->fields).super.m_TextComponent;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03349820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar2.fields.r =
         (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
                   (pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
    UVar2.fields.g = (float)in_s1;
    UVar2.fields.a = (float)in_s3;
    UVar2.fields.b = (float)in_s2;
    return (UnityEngine_Color_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_FontColor(Color CJNHFNHJHPE)  [RVA 0x3249828]
// Nekki.SF2.GUI.Scripts.EditBox$$set_FontColor @ RVA 0x3249828

void Nekki_SF2_GUI_Scripts_EditBox__set_FontColor
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,UnityEngine_Color_o CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  
  pUVar1 = (__this->fields).super.m_TextComponent;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03349844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CJNHFNHJHPE.fields.r,CJNHFNHJHPE.fields.g,CJNHFNHJHPE.fields.b,CJNHFNHJHPE.fields.a);
}


// ===== public override void OnSelect(BaseEventData OHNNFPGGEFK)  [RVA 0x324984C]
// Nekki.SF2.GUI.Scripts.EditBox$$OnSelect @ RVA 0x324984C

void Nekki_SF2_GUI_Scripts_EditBox__OnSelect
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  System_Action_EditBox__o *pSVar1;
  
  UnityEngine_UI_InputField__OnSelect
            ((UnityEngine_UI_InputField_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  if ((__this->fields).OIHLBDPHBMI == false) {
    pSVar1 = (__this->fields).HHHKCKLPENH;
    if (pSVar1 == (System_Action_EditBox__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method);
  }
  (__this->fields).OIHLBDPHBMI = true;
  return;
}


// ===== public override void OnDeselect(BaseEventData OHNNFPGGEFK)  [RVA 0x3249894]
// Nekki.SF2.GUI.Scripts.EditBox$$OnDeselect @ RVA 0x3249894

void Nekki_SF2_GUI_Scripts_EditBox__OnDeselect
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
                    /* try { // try from 03349894 to 03449897 has its CatchHandler @ 03349920 */
                    /* try { // try from 03349898 to 0344989b has its CatchHandler @ 03349918 */
  (__this->fields).OIHLBDPHBMI = false;
                    /* try { // try from 0334989c to 0344989f has its CatchHandler @ 03349914 */
  UnityEngine_UI_InputField__OnDeselect
            ((UnityEngine_UI_InputField_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  return;
}


// ===== public void Clear()  [RVA 0x32498A0]
// Nekki.SF2.GUI.Scripts.EditBox$$Clear @ RVA 0x32498A0

void Nekki_SF2_GUI_Scripts_EditBox__Clear
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,MethodInfo *method)

{
                    /* try { // try from 033498a0 to 034498a3 has its CatchHandler @ 03349910 */
                    /* try { // try from 033498a4 to 034498a7 has its CatchHandler @ 03349904 */
                    /* try { // try from 033498a8 to 034498ab has its CatchHandler @ 03349900 */
                    /* try { // try from 033498ac to 034498af has its CatchHandler @ 033498f4 */
                    /* try { // try from 033498b0 to 034498b3 has its CatchHandler @ 033498e8 */
                    /* try { // try from 033498b4 to 034498b7 has its CatchHandler @ 033498e0 */
                    /* try { // try from 033498b8 to 034498bb has its CatchHandler @ 033498d8 */
                    /* try { // try from 033498bc to 034498bf has its CatchHandler @ 033498d4 */
  if ((DAT_045670e2 & 1) == 0) {
                    /* try { // try from 033498c0 to 0344993b has its CatchHandler @ 03349364 */
                    /* catch() { ... } // from try @ 033496e4 with catch @ 033498c4 */
                    /* catch() { ... } // from try @ 033495dc with catch @ 033498c8 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch() { ... } // from try @ 03349620 with catch @ 033498cc */
                    /* catch() { ... } // from try @ 03349630 with catch @ 033498d0 */
    DAT_045670e2 = 1;
  }
                    /* catch() { ... } // from try @ 033498bc with catch @ 033498d4 */
                    /* catch() { ... } // from try @ 033498b8 with catch @ 033498d8 */
                    /* catch() { ... } // from try @ 0334971c with catch @ 033498dc */
                    /* catch() { ... } // from try @ 033498b4 with catch @ 033498e0 */
                    /* catch() { ... } // from try @ 0334972c with catch @ 033498e4 */
                    /* catch() { ... } // from try @ 033498b0 with catch @ 033498e8 */
  UnityEngine_UI_InputField__set_text
            ((UnityEngine_UI_InputField_o *)__this,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  return;
}


// ===== public Color get_BGColor()  [RVA 0x32498EC]
// Nekki.SF2.GUI.Scripts.EditBox$$get_BGColor @ RVA 0x32498EC

UnityEngine_Color_o
Nekki_SF2_GUI_Scripts_EditBox__get_BGColor
          (Nekki_SF2_GUI_Scripts_EditBox_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Graphic_o *pUVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_o UVar4;
  
                    /* catch() { ... } // from try @ 033496e8 with catch @ 033498ec */
                    /* catch() { ... } // from try @ 033496f8 with catch @ 033498f0 */
                    /* catch() { ... } // from try @ 033498ac with catch @ 033498f4 */
                    /* catch() { ... } // from try @ 03349644 with catch @ 033498f8 */
                    /* catch() { ... } // from try @ 03349740 with catch @ 033498fc */
                    /* catch() { ... } // from try @ 033498a8 with catch @ 03349900 */
                    /* catch() { ... } // from try @ 033498a4 with catch @ 03349904 */
                    /* catch() { ... } // from try @ 033495f4 with catch @ 03349908 */
  if ((DAT_045670e3 & 1) == 0) {
                    /* catch() { ... } // from try @ 033495e0 with catch @ 0334990c */
                    /* catch() { ... } // from try @ 033498a0 with catch @ 03349910 */
                    /* catch() { ... } // from try @ 0334989c with catch @ 03349914 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 03349898 with catch @ 03349918 */
                    /* catch() { ... } // from try @ 033497fc with catch @ 0334991c */
    DAT_045670e3 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03349894 with catch @ 03349920 */
  pUVar2 = (__this->fields).super.super.m_TargetGraphic;
                    /* catch() { ... } // from try @ 033495c0 with catch @ 03349928 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 0334993c to 0344993f has its CatchHandler @ 03349968 */
                    /* try { // try from 03349940 to 03449977 has its CatchHandler @ 03349364 */
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    UVar3.fields.g = 1.0;
    UVar3.fields.r = 1.0;
    UVar3.fields.a = 1.0;
    UVar3.fields.b = 1.0;
    return (UnityEngine_Color_o)UVar3.fields;
  }
  pUVar2 = (__this->fields).super.super.m_TargetGraphic;
                    /* catch() { ... } // from try @ 0334993c with catch @ 03349968 */
  if (pUVar2 != (UnityEngine_UI_Graphic_o *)0x0) {
                    /* try { // try from 03349978 to 0344998b has its CatchHandler @ 03349a70 */
                    /* WARNING: Could not recover jumptable at 0x03349980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar4.fields.r =
         (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
                   (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
    UVar4.fields.g = (float)in_s1;
    UVar4.fields.a = (float)in_s3;
    UVar4.fields.b = (float)in_s2;
    return (UnityEngine_Color_o)UVar4.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_BGColor(Color CJNHFNHJHPE)  [RVA 0x3249988]
// Nekki.SF2.GUI.Scripts.EditBox$$set_BGColor @ RVA 0x3249988

void Nekki_SF2_GUI_Scripts_EditBox__set_BGColor
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,UnityEngine_Color_o CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Graphic_o *pUVar2;
  
                    /* catch() { ... } // from try @ 033497c0 with catch @ 0334998c
                       try { // try from 0334998c to 034499af has its CatchHandler @ 03349364 */
                    /* catch() { ... } // from try @ 033496b8 with catch @ 03349990 */
                    /* try { // try from 033499b0 to 034499b3 has its CatchHandler @ 033499dc */
                    /* try { // try from 033499b4 to 034499eb has its CatchHandler @ 03349364 */
  if ((DAT_045670e4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045670e4 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields).super.super.m_TargetGraphic;
                    /* catch() { ... } // from try @ 033499b0 with catch @ 033499dc */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 033499ec to 034499ff has its CatchHandler @ 03349a70 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).super.super.m_TargetGraphic;
                    /* catch() { ... } // from try @ 033497d4 with catch @ 03349a00
                       try { // try from 03349a00 to 03449a13 has its CatchHandler @ 03349364 */
    if (pUVar2 != (UnityEngine_UI_Graphic_o *)0x0) {
                    /* try { // try from 03349a14 to 03449a17 has its CatchHandler @ 03349a44 */
                    /* try { // try from 03349a18 to 03449a53 has its CatchHandler @ 03349364 */
                    /* WARNING: Could not recover jumptable at 0x03349a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                (CONCAT44((int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20),CJNHFNHJHPE.fields.r),
                 CONCAT44((int)((ulong)CJNHFNHJHPE.fields._4_8_ >> 0x20),CJNHFNHJHPE.fields.g),
                 CONCAT44((int)((ulong)CJNHFNHJHPE.fields._8_8_ >> 0x20),CJNHFNHJHPE.fields.b),
                 CONCAT44((int)((ulong)register0x00005060 >> 0x20),CJNHFNHJHPE.fields.a),pUVar2,
                 (pUVar2->klass->vtable)._23_set_color.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03349a14 with catch @ 03349a44 */
  return;
}


// ===== public void .ctor()  [RVA 0x3249A4C]
// Nekki.SF2.GUI.Scripts.EditBox$$.ctor @ RVA 0x3249A4C

void Nekki_SF2_GUI_Scripts_EditBox___ctor
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,MethodInfo *method)

{
  System_Action_EditBox__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_EditBox__o *pSVar2;
  
                    /* try { // try from 03349a54 to 03449a5b has its CatchHandler @ 03349a70 */
                    /* try { // try from 03349a5c to 03449a67 has its CatchHandler @ 03349364 */
                    /* try { // try from 03349a68 to 03449a6f has its CatchHandler @ 03349a70 */
  if ((DAT_045670e5 & 1) == 0) {
                    /* catch() { ... } // from try @ 03349978 with catch @ 03349a70
                       catch() { ... } // from try @ 033499ec with catch @ 03349a70
                       catch() { ... } // from try @ 03349a54 with catch @ 03349a70
                       catch() { ... } // from try @ 03349a68 with catch @ 03349a70 */
    FUN_01bab630(&System_Action<EditBox>_TypeInfo);
    FUN_01bab630(&UnityEngine_UI_InputField_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scripts_EditBox_<>c_NKMMMIILPAA__);
    FUN_01bab630(&Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo);
    DAT_045670e5 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo->static_fields->__9__13_0;
  if (pSVar2 == (System_Action_EditBox__o *)0x0) {
    if ((Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_EditBox__o *)thunk_FUN_01bda818(System_Action<EditBox>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo->static_fields->__9__13_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
    (__this->fields).HHHKCKLPENH = pSVar2;
    thunk_FUN_01c20e04(&(__this->fields).HHHKCKLPENH,pSVar2);
    if ((UnityEngine_UI_InputField_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_UI_InputField___ctor((UnityEngine_UI_InputField_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

