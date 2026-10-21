// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PGDMPHCECDF @ RVA 0x328A30C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__PGDMPHCECDF
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *HODGKDNOHLP;
  UnityEngine_Transform_o *pUVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar4;
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *pNVar5;
  
  if ((DAT_045672d5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_BPHEMMPAJGO__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045672d5 = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar4 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar4 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    HODGKDNOHLP = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0),
       pNVar4 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0)) {
      Nekki_SF2_GUI_Menu_MainMenu__ChangeParentAndHideScroll
                (pNVar4,HODGKDNOHLP,pUVar2,(MethodInfo *)0x0);
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      pNVar4 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (pNVar4 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        pNVar5 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(pNVar4->fields)._energy;
        pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar5 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
          Nekki_SF2_GUI_Menu_MenuMoneyPanel__remove_OnRubyBtnClick(pNVar5,pSVar3,(MethodInfo *)0x0);
          if (DAT_04565b84 == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
            DAT_04565b84 = '\x01';
          }
          pNVar4 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField
          ;
          if (pNVar4 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
            pNVar5 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(pNVar4->fields)._energy;
            pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pNVar5 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
              Nekki_SF2_GUI_Menu_MenuMoneyPanel__add_OnRubyBtnClick(pNVar5,pSVar3,(MethodInfo *)0x0)
              ;
              method_00 = extraout_x1_01;
              goto LAB_0338a4f0;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0338a4f0:
  Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK(__this,method_00);
  Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH(__this,method_01);
  Nekki_SF2_GUI_Dialogs_LotteryDialog__KIEKMKFIHFG(__this,method_02);
  return;
}

