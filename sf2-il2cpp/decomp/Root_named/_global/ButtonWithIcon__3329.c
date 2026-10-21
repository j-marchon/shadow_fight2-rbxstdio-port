// TypeDefIndex 3329
// Namespace: 
// public class ButtonWithIcon : LabelButton
// Fields:
//   private ResolutionImage _iconImage; // 0x1F0

// ===== public void SetIcon(string IAEIFAJBEGF)  [RVA 0x352B5C8]
// ButtonWithIcon$$SetIcon @ RVA 0x352B5C8

void ButtonWithIcon__SetIcon
               (ButtonWithIcon_o *__this,System_String_o *IAEIFAJBEGF,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_04568a29 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a29 = 1;
  }
  pNVar2 = (__this->fields)._iconImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(IAEIFAJBEGF,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._iconImage;
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (bVar1) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._iconImage;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,IAEIFAJBEGF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x352B6B0]
// ButtonWithIcon$$.ctor @ RVA 0x352B6B0

void ButtonWithIcon___ctor(ButtonWithIcon_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568a2a & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    DAT_04568a2a = 1;
    method = extraout_x1;
  }
  if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LabelButton_TypeInfo,method);
  }
  LabelButton___ctor((LabelButton_o *)__this,(MethodInfo *)0x0);
  return;
}

