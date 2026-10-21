// TypeDefIndex 3314
// Namespace: Nekki.SF2.GUI.Common.ControlsInfo
// public class ControlsInfoCategoryTab : MonoBehaviour
// Fields:
//   private RectMask2D _Mask; // 0x20
//   private Image _Fade; // 0x28
//   private LabelAlias _CategoryName; // 0x30
//   private MHMFGIIOGBA _Category; // 0x38
//   private ControlsInfoCategoryTab.KMMLFEFAHNM _OnClicked; // 0x40

// ===== public MHMFGIIOGBA get_Category()  [RVA 0x3524978]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoCategoryTab$$get_Category @ RVA 0x3524978

int32_t Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__get_Category
                  (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this,
                  MethodInfo *method)

{
  return (__this->fields)._Category;
}


// ===== public void set_Category(MHMFGIIOGBA CJNHFNHJHPE)  [RVA 0x3524980]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoCategoryTab$$set_Category @ RVA 0x3524980

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__set_Category
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this,
               int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._Category == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._Category = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__Refresh
            (__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== public ControlsInfoCategoryTab.KMMLFEFAHNM get_OnClicked()  [RVA 0x35249C8]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoCategoryTab$$get_OnClicked @ RVA 0x35249C8

Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_o *
Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__get_OnClicked
          (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnClicked;
}


// ===== public void Refresh()  [RVA 0x3524998]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoCategoryTab$$Refresh @ RVA 0x3524998

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__Refresh
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields)._CategoryName;
  CJNHFNHJHPE = BFBAOPNJDKL__GKMAFGODLLG((__this->fields)._Category,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Select(bool OFKBEIFPFMN)  [RVA 0x35249D0]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoCategoryTab$$Select @ RVA 0x35249D0

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__Select
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this,bool OFKBEIFPFMN
               ,MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o *__this_00;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  
  __this_00 = (__this->fields)._Mask;
  if (__this_00 != (UnityEngine_UI_RectMask2D_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,true,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._Fade;
    if ((__this_01 != (UnityEngine_UI_Image_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
      if (OFKBEIFPFMN) {
        EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Unselect()  [RVA 0x3524A3C]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoCategoryTab$$Unselect @ RVA 0x3524A3C

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__Unselect
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this,
               MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o *__this_00;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  
  __this_00 = (__this->fields)._Mask;
  if (__this_00 != (UnityEngine_UI_RectMask2D_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0)
    ;
    __this_01 = (__this->fields)._Fade;
    if ((__this_01 != (UnityEngine_UI_Image_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnButtonClick()  [RVA 0x3524A80]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoCategoryTab$$OnButtonClick @ RVA 0x3524A80

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__OnButtonClick
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689f0 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ControlsInfoCategoryTab>_Invoke__);
    DAT_045689f0 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._OnClicked;
  if (__this_00 != (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)__this,
               Method_UnityEngine_Events_UnityEvent<ControlsInfoCategoryTab>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void .ctor()  [RVA 0x3524AD4]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoCategoryTab$$.ctor @ RVA 0x3524AD4

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab___ctor
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_o *__this_00;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_o **ppNVar1;
  MethodInfo *extraout_x1;
  undefined1 auVar2 [16];
  
  if ((DAT_045689f1 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_TypeInfo);
    DAT_045689f1 = 1;
    method = extraout_x1;
  }
  (__this->fields)._Category = -1;
  auVar2 = thunk_FUN_01bda818(Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_TypeInfo
                              ,method);
  __this_00 = auVar2._0_8_;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM___ctor
            (__this_00,auVar2._8_8_);
  ppNVar1 = &(__this->fields)._OnClicked;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

