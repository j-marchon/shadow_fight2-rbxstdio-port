// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$KIJDNLMKGDH @ RVA 0x307D698

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__KIJDNLMKGDH
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Object_o *obj;
  MethodInfo *extraout_x1;
  undefined1 auVar2 [16];
  
  if ((DAT_04565fe8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    DAT_04565fe8 = 1;
    method = extraout_x1;
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
  auVar2._8_8_ = method;
  auVar2._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    auVar2 = FUN_01b81620(lVar1,method);
  }
  lVar1 = *(long *)(*(long *)(auVar2._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620(lVar1,auVar2._8_8_);
  }
  if ((Nekki_SF2_GUI_Fight_FightScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
      (Nekki_SF2_GUI_Fight_FightScene_o *)0x0) {
    Nekki_SF2_GUI_Fight_FightScene__RestartFight
              ((Nekki_SF2_GUI_Fight_FightScene_o *)**(undefined8 **)(lVar1 + 0xb8),(MethodInfo *)0x0
              );
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
    ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

