// FFFAKMHNGKI$$KFIBMPDDAFG @ RVA 0x33FB84C

void FFFAKMHNGKI__KFIBMPDDAFG(FFFAKMHNGKI_o *__this,bool CICIOPHDHAF,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  UnityEngine_Events_UnityEvent_bool__o *__this_01;
  
  if ((DAT_04567fb9 & 1) == 0) {
    FUN_01bab630(&Method_FFFAKMHNGKI_KFIBMPDDAFG__,CICIOPHDHAF);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__);
    DAT_04567fb9 = 1;
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  if ((**(long **)(lVar1 + 0xb8) != 0) &&
     (lVar1 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x100), lVar1 != 0)) {
    __this_01 = *(UnityEngine_Events_UnityEvent_bool__o **)(lVar1 + 0x78);
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<bool>_TypeInfo);
    UnityEngine_Events_UnityAction<bool>___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
      UnityEngine_Events_UnityEvent<bool>__RemoveListener
                (__this_01,call,Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__);
      __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
        Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,false,(MethodInfo *)0x0);
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

