// Nekki.SF2.GUI.Dialogs.LotteryDialog$$DMKPAPKKDMP @ RVA 0x3288E58

void Nekki_SF2_GUI_Dialogs_LotteryDialog__DMKPAPKKDMP
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,bool GFEFCPFECOJ,bool LKLBCPPLNGL,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  Il2CppObject *IMMNELPBGIF;
  long lVar3;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_01;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar4;
  LPGLKMNHELJ_o *pLVar5;
  UnityEngine_Object_o *x;
  PKHMIGFEJCL_o *pPVar6;
  System_String_o **ppSVar7;
  PKHMIGFEJCL_o *pPVar8;
  float CJNHFNHJHPE;
  undefined4 local_24;
  
  if ((DAT_045672ec & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_045672ec = 1;
  }
  CJNHFNHJHPE = (__this->fields).DEIFFBGHMIH;
  if (CJNHFNHJHPE == 0.0) {
    if (GFEFCPFECOJ) goto LAB_03388eb8;
LAB_03388ed8:
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03389098;
    pPVar6 = (pNVar2->fields).QuestParameters;
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) || (pPVar6 == (PKHMIGFEJCL_o *)0x0)
       ) goto LAB_03389098;
    pPVar8 = (pNVar2->fields).QuestParametersBeforeLottery;
    (pPVar6->fields).BILELFMLGNC = false;
    if (pPVar8 == (PKHMIGFEJCL_o *)0x0) goto LAB_03389098;
    (pPVar6->fields).NMHCLFFOMJH = (pPVar8->fields).NMHCLFFOMJH;
    thunk_FUN_01c20e04();
    (pPVar6->fields).PNPKEKHEMCD = (pPVar8->fields).PNPKEKHEMCD;
    thunk_FUN_01c20e04();
    ppSVar7 = &(pPVar6->fields).LOLFFJGLKLD;
    *ppSVar7 = (pPVar8->fields).LOLFFJGLKLD;
    thunk_FUN_01c20e04(ppSVar7);
    (pPVar6->fields).KADCKFHODOE = (pPVar8->fields).KADCKFHODOE;
    (pPVar6->fields).FAOAFEINLEL = (pPVar8->fields).FAOAFEINLEL;
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03389098;
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,3,(MethodInfo *)0x0);
  }
  else {
    MFIKGMIDDIG__ICHPKMALDCH(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (!GFEFCPFECOJ) goto LAB_03388ed8;
LAB_03388eb8:
    __this_00 = (__this->fields).OpenShopEvent;
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_03389098;
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  pNVar4 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (pNVar4 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
    *(undefined1 *)&(pNVar4->fields)._money = 1;
    local_24 = 0;
    IMMNELPBGIF = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
    pLVar5 = (__this->fields).DKMMBMBMJBO;
    if (pLVar5 != (LPGLKMNHELJ_o *)0x0) {
      if ((pLVar5->fields).BGHFADDGPAD == 1) {
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
          lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          __this_01 = (Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8);
          if (__this_01 == (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_03389098;
          if (LKLBCPPLNGL) {
            Nekki_SF2_GUI_Shop_ShopScene__ReloadRaidItemPackSliderDelayed
                      (__this_01,(MethodInfo *)0x0);
          }
          else {
            Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefreshDelayed
                      (__this_01,(MethodInfo *)0x0);
          }
        }
      }
      return;
    }
  }
LAB_03389098:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

