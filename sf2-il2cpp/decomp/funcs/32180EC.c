// Nekki.SF2.GUI.Map.BattlePrize$$AKOJCICPDFI @ RVA 0x32180EC

void Nekki_SF2_GUI_Map_BattlePrize__AKOJCICPDFI
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,
               Nekki_SF2_GUI_Map_BattlePrizeElement_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE_00;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04566ee9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattlePrize_FAOOCIFKPEM__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ee9 = 1;
  }
  CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (CJNHFNHJHPE != (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)0x0) {
    Nekki_SF2_GUI_Map_BattlePrizeElement__remove_OnRendered
              (CJNHFNHJHPE,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Object__Destroy((UnityEngine_Object_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

