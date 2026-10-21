// BAFPOJFOFOC$$GBPHJBEGCEH @ RVA 0x32D4B4C

void BAFPOJFOFOC__GBPHJBEGCEH(BAFPOJFOFOC_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  long lVar3;
  NDPMLPGANCI_o *pNVar4;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  FFHKCJAOPLI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  System_String_o *JFPHHHFKKIK;
  undefined1 auVar5 [16];
  
  if ((DAT_0456757b & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&Method_BAFPOJFOFOC_IGHPJAOOKAF__);
    FUN_01bab630(&Method_BAFPOJFOFOC_LGEMJFBPAGO__);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456757b = 1;
    method = extraout_x1;
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  auVar5._8_8_ = method;
  auVar5._0_8_ = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    auVar5 = FUN_01b81620(lVar3,method);
  }
  lVar3 = *(long *)(*(long *)(auVar5._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3,auVar5._8_8_);
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).GNBLMDBLJAN != 0)) {
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
      Nekki_SF2_GUI_Shop_ShopScene__ScrollToItemByName
                ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                 (__this->fields).GNBLMDBLJAN,StringLiteral_1,(MethodInfo *)0x0);
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
        Nekki_SF2_GUI_Shop_ShopScene__OpenForgeAndSetRecipe
                  ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                   (__this->fields).KFPKPDDIFCD,(MethodInfo *)0x0);
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,method_00);
        return;
      }
    }
  }
  else {
    pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar4,(MethodInfo *)0x0);
      pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                    thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
      if (iVar2 == 4) {
        System_Action<Int32Enum>___ctor();
        if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EAPNEKLDLLM(pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        System_Action<Int32Enum>___ctor();
        if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EAPNEKLDLLM(pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          iVar2 = (__this->fields).GNBLMDBLJAN;
          JFPHHHFKKIK = (__this->fields).KFPKPDDIFCD;
          __this_00 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
          FFHKCJAOPLI___ctor(__this_00,iVar2,(HOOAAGABMBL_o *)0x0,JFPHHHFKKIK,(System_String_o *)0x0
                             ,(MethodInfo *)0x0);
          if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
            NDPMLPGANCI__EKPAFDJIAGI
                      (pNVar4,4,(Il2CppObject *)__this_00,(System_Action_object__o *)0x0,true,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

