// JJPNLEPEAFM.<>c$$MHJDNNHFNAK @ RVA 0x3535A74

void JJPNLEPEAFM_<>c__MHJDNNHFNAK(JJPNLEPEAFM___c_o *__this,Il2CppObject *o,MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  long lVar3;
  GCIFMNHADDF_o *pGVar4;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar5;
  NDPMLPGANCI_o *__this_00;
  FFHKCJAOPLI_o *__this_01;
  UnityEngine_Object_o *x;
  
  if ((DAT_04568a8c & 1) == 0) {
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04568a8c = 1;
  }
  if (o != (Il2CppObject *)0x0) {
    if ((o->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(o);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if (*piVar2 == 0) {
      pGVar4 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
      if ((pGVar4 != (GCIFMNHADDF_o *)0x0) &&
         (pNVar5 = (pGVar4->fields)._AOOFDKJAALA_k__BackingField,
         pNVar5 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x03635be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar5->klass->vtable)._20_Close.methodPtr)
                  (pNVar5,(pNVar5->klass->vtable)._20_Close.method);
        return;
      }
    }
    else {
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pGVar4 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pGVar4 != (GCIFMNHADDF_o *)0x0) {
          GCIFMNHADDF__DEAPPIKAHEP(pGVar4,(MethodInfo *)0x0);
          lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
              (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
            Nekki_SF2_GUI_Shop_ShopScene__GoToSlider
                      ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),6,true,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        __this_01 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
        FFHKCJAOPLI___ctor(__this_01,6,(HOOAAGABMBL_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(MethodInfo *)0x0);
        if (__this_00 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EKPAFDJIAGI
                    (__this_00,4,(Il2CppObject *)__this_01,(System_Action_object__o *)0x0,true,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

