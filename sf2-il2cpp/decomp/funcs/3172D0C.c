// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$OnBackKeyClicked @ RVA 0x3172D0C

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__OnBackKeyClicked
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
  if ((DAT_04566939 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<DojoScene>_get_Current__);
    DAT_04566939 = 1;
    IMMNELPBGIF = (Il2CppObject *)extraout_x1;
  }
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Hide(__this,(MethodInfo *)IMMNELPBGIF);
  if ((__this->fields).IGIDKCCDBPK != false) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<DojoScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<DojoScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(bool_conflict *)(**(long **)(lVar2 + 0xb8) + 0x98) = (__this->fields).IGIDKCCDBPK;
    }
  }
  (__this->fields).IGIDKCCDBPK = false;
  return;
}

