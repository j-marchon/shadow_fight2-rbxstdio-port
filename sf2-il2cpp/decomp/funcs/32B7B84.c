// Nekki.SF2.GUI.Map.IRaidKeysView$$ANMOLCFIIJK @ RVA 0x32B7B84

Nekki_SF2_GUI_Map_RaidKey_o *
Nekki_SF2_GUI_Map_IRaidKeysView__ANMOLCFIIJK
          (Nekki_SF2_GUI_Map_IRaidKeysView_o *__this,NPKKNCCEIND_o *BGDNOAFNJGG,
          UnityEngine_GameObject_o *ELOCKFLGKNO,MethodInfo *method)

{
  UnityEngine_Transform_o *ODNJEHJPBGA;
  Nekki_SF2_GUI_Map_RaidKey_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04567463 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_IRaidKeysView_OCLHAMMOPEK__);
    DAT_04567463 = 1;
  }
  if (ELOCKFLGKNO != (UnityEngine_GameObject_o *)0x0) {
    ODNJEHJPBGA = UnityEngine_GameObject__get_transform(ELOCKFLGKNO,(MethodInfo *)0x0);
    __this_00 = Nekki_SF2_GUI_Map_RaidKey__CreateIconAndCountLabel
                          (ODNJEHJPBGA,BGDNOAFNJGG,(MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_00 != (Nekki_SF2_GUI_Map_RaidKey_o *)0x0) {
      Nekki_SF2_GUI_Map_RaidKey__add_OnRebuilt(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

