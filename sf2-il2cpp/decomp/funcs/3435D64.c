// Nekki.SF2.GUI.Shop.ShopScene$$LJEJIDPLJAA @ RVA 0x3435D64

void Nekki_SF2_GUI_Shop_ShopScene__LJEJIDPLJAA
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  
  if ((DAT_0456818d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_LJEJIDPLJAA__);
    DAT_0456818d = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._ModelContainer;
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__remove_OnTryOnEnd(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0)
    ;
    Nekki_SF2_GUI_Shop_ShopScene__ShowUI(__this,method_00);
    routine = Nekki_SF2_GUI_Shop_ShopScene__HPKHJPDMFGA(__this,method_01);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

