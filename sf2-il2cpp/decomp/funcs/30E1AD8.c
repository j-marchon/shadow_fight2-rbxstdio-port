// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$DNOPCPONLEN @ RVA 0x30E1AD8

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__DNOPCPONLEN
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,bool NMAFEJHDPGO,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  long lVar3;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  int JACDAGALJHD;
  Nekki_SF2_GUI_Map_MapScene_o *__this_02;
  
  if ((DAT_045663bb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045663bb = 1;
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  __this_02 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    return;
  }
  if (NMAFEJHDPGO) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if ((__this_00 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_031e1bf8;
    iVar2 = UnityEngine_Transform__GetSiblingIndex(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 031e1bd4 to 032e1bfb has its CatchHandler @ 031e1da4 */
    JACDAGALJHD = iVar2 + -1;
  }
  else {
    JACDAGALJHD = -1;
  }
  if (__this_02 != (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
    Nekki_SF2_GUI_Map_MapScene__MapButtonsPanelSetSibling(__this_02,JACDAGALJHD,(MethodInfo *)0x0);
    return;
  }
LAB_031e1bf8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

