// NGCEHDLJOMI$$BKDDOKCPGJI @ RVA 0x3224418

void NGCEHDLJOMI__BKDDOKCPGJI(NGCEHDLJOMI_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  int32_t ICJLHMDFMKG;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar1;
  UnityEngine_UI_Selectable_o *PFNMDNHEFEC;
  UnityEngine_UI_Selectable_c *__this_00;
  
  if ((DAT_04566f64 & 1) == 0) {
    FUN_01bab630(&Method_NGCEHDLJOMI_BKDDOKCPGJI__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566f64 = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar1 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((pNVar1 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) &&
     (PFNMDNHEFEC = (UnityEngine_UI_Selectable_o *)(pNVar1->fields)._raidRating,
     PFNMDNHEFEC != (UnityEngine_UI_Selectable_o *)0x0)) {
    __this_00 = PFNMDNHEFEC[1].klass;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_UI_Selectable_c *)0x0) {
      method_02 = (MethodInfo *)0x0;
      UnityEngine_Events_UnityEvent__RemoveListener
                ((UnityEngine_Events_UnityEvent_o *)__this_00,call,(MethodInfo *)0x0);
      AKJJAPEHKCG__HJDDBKPCAFJ(PFNMDNHEFEC,(MethodInfo *)0x0);
      NGCEHDLJOMI__ABJHGPKGMLH(__this,ICJLHMDFMKG,method_02);
      NGCEHDLJOMI__APBMPBNOOHK(__this,method_00);
      NGCEHDLJOMI__GNLDBPBJBOA(__this,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

