// Nekki.SF2.GUI.Map.ZoneScrollItem$$BEAPAMLLBOM @ RVA 0x3347C1C

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__BEAPAMLLBOM
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  Nekki_SF2_GUI_Map_BattleButton_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  void **ppvVar2;
  UnityEngine_Events_UnityEvent_o *__this_02;
  
  if ((DAT_045679d2 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ZoneScrollItem_GFOAKOGPEAC_GLBBFALLPLL__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_GFOAKOGPEAC_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045679d2 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Map_ZoneScrollItem_GFOAKOGPEAC_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar2 = &__this_00[1].monitor;
    *ppvVar2 = BANHBMINMMP;
    thunk_FUN_01c20e04(ppvVar2,BANHBMINMMP);
    __this_01 = Nekki_SF2_GUI_Map_ZoneScrollItem__GIJLHPDBFEK(__this,*ppvVar2,method);
    if (__this_01 != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) {
      __this_02 = (UnityEngine_Events_UnityEvent_o *)(__this_01->fields).super.super.super.m_OnClick
      ;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
        if (*ppvVar2 != (OOMHDDBCBJP_o *)0x0) {
          bVar1 = OOMHDDBCBJP__KFMAFEPOEIB(*ppvVar2,(MethodInfo *)0x0);
          (__this_01->fields).KAKCIFAKCBG = bVar1;
          Nekki_SF2_GUI_Map_BattleButton__set_Battle(__this_01,*ppvVar2,(MethodInfo *)0x0);
          if (*ppvVar2 != (OOMHDDBCBJP_o *)0x0) {
            bVar1 = OOMHDDBCBJP__EFLKILFFJKH(*ppvVar2,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Map_BattleButton__set_Hidden(__this_01,bVar1,(MethodInfo *)0x0);
            return __this_01;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

