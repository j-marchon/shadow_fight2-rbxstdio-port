// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$IIFBHJCLOPC @ RVA 0x317225C

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IIFBHJCLOPC
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *y;
  UnityEngine_GameObject_o *HODGKDNOHLP;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  
  if ((DAT_04566937 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566937 = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  if ((__this->fields).IMCAMDBEHMH == false) {
    __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      if ((__this_00 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
      y = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)y,(MethodInfo *)0x0)
      ;
      if (bVar1) {
        HODGKDNOHLP = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Menu_MainMenu__ChangeParentAndHideScroll
                  (__this_00,HODGKDNOHLP,pUVar2,(MethodInfo *)0x0);
      }
      (__this->fields).IMCAMDBEHMH = true;
    }
  }
  return;
}

