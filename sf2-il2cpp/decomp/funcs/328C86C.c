// Nekki.SF2.GUI.Dialogs.LotteryDialog$$OnClose @ RVA 0x328C86C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  Il2CppObject *IMMNELPBGIF_00;
  long lVar3;
  MethodInfo *in_x3;
  LPGLKMNHELJ_o *pLVar4;
  PKHMIGFEJCL_o *pPVar5;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar6;
  UnityEngine_Object_o *x;
  undefined4 local_14;
  
  if ((DAT_045672e3 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_045672e3 = 1;
  }
  pLVar4 = (__this->fields).DKMMBMBMJBO;
  if (pLVar4 != (LPGLKMNHELJ_o *)0x0) {
    if ((pLVar4->fields).BGHFADDGPAD != 1) {
      Nekki_SF2_GUI_Dialogs_LotteryDialog__DMKPAPKKDMP(__this,false,false,in_x3);
      return;
    }
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar5 = (pNVar2->fields).QuestParameters, pPVar5 != (PKHMIGFEJCL_o *)0x0)) {
      (pPVar5->fields).BILELFMLGNC = false;
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      pNVar6 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (pNVar6 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        *(undefined1 *)&(pNVar6->fields)._money = 1;
        local_14 = 0;
        IMMNELPBGIF_00 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_14);
        Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
                  ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF_00,(MethodInfo *)0x0);
        pLVar4 = (__this->fields).DKMMBMBMJBO;
        if (pLVar4 != (LPGLKMNHELJ_o *)0x0) {
          if ((pLVar4->fields).BGHFADDGPAD == 1) {
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
            bVar1 = UnityEngine_Object__op_Inequality
                              (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar1) {
              lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01b81620();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01b81620();
              }
              if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) ==
                  (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_0338ca20;
              Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefreshDelayed
                        ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                         (MethodInfo *)0x0);
            }
          }
          return;
        }
      }
    }
  }
LAB_0338ca20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

