// NGCEHDLJOMI$$GNLDBPBJBOA @ RVA 0x3224024

void NGCEHDLJOMI__GNLDBPBJBOA(NGCEHDLJOMI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar1;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04566f5f & 1) == 0) {
    FUN_01bab630(&Method_NGCEHDLJOMI_GNLDBPBJBOA__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566f5f = 1;
  }
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).PKJPFDMJLKM;
    if (pNVar1 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
      SFButton__set_IsFlashing((SFButton_o *)pNVar1,false,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).PKJPFDMJLKM;
      if (pNVar1 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
        __this_01 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
          AKJJAPEHKCG__HJDDBKPCAFJ
                    ((UnityEngine_UI_Selectable_o *)(__this->fields).PKJPFDMJLKM,(MethodInfo *)0x0);
          BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

