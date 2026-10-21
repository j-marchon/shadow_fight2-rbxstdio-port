// FKDLCJJOGIP$$BADKKABIPKK @ RVA 0x350AFE4

void FKDLCJJOGIP__BADKKABIPKK(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *exists;
  undefined1 auVar3 [16];
  
  if ((DAT_045688c2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045688c2 = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  auVar3._8_8_ = method;
  auVar3._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar3 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar3._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar3._8_8_);
  }
  exists = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
        (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
      Nekki_SF2_GUI_Map_MapScene__CloseRaids
                ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

