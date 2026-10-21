// Nekki.SF2.GUI.Profile.InfoPanel$$Refresh @ RVA 0x333B10C

void Nekki_SF2_GUI_Profile_InfoPanel__Refresh
               (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,
               Nekki_SF2_GUI_Profile_TrickSubItem_o *OLNJMPMPLOB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_PerkContent_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Profile_TrickContent_o *pNVar3;
  Nekki_SF2_GUI_Profile_AchievementContent_o *__this_01;
  Nekki_SF2_GUI_Profile_SealsContent_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  System_Collections_Generic_List_float__o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *in_x4;
  KCLPNDAPADO_o *pKVar6;
  undefined8 *puVar7;
  
  if ((DAT_0456796c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_7509);
    FUN_01bab630(&StringLiteral_6773);
    FUN_01bab630(&StringLiteral_19210);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_6837);
    DAT_0456796c = 1;
  }
  __this_00 = (__this->fields)._PerkContent;
  if ((__this_00 != (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._TrickContent;
    if ((pNVar3 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._AchievementContent;
      if ((__this_01 != (Nekki_SF2_GUI_Profile_AchievementContent_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        __this_02 = (__this->fields)._SealsContent;
        if ((__this_02 != (Nekki_SF2_GUI_Profile_SealsContent_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          __this_03 = (__this->fields)._NoContentMessageLabel;
          if ((__this_03 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)OLNJMPMPLOB,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (!bVar1) {
              if (OLNJMPMPLOB == (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0) goto LAB_0343b388;
              if (((OLNJMPMPLOB->fields).MGHHBGMPDEI != (KCLPNDAPADO_o *)0x0) &&
                 (pSVar4 = Nekki_SF2_GUI_Profile_TrickSubItem__GetBaseDMG
                                     (OLNJMPMPLOB,(MethodInfo *)0x0),
                 pSVar4 != (System_Collections_Generic_List_float__o *)0x0)) {
                pKVar6 = (OLNJMPMPLOB->fields).MGHHBGMPDEI;
                if (pKVar6 != (KCLPNDAPADO_o *)0x0) {
                  Nekki_SF2_GUI_Profile_InfoPanel__PPGCAKOPAJI
                            (__this,(pKVar6->fields).JIJLBFGKNJK,true,0x58,in_x4);
                  pNVar3 = (__this->fields)._TrickContent;
                  pKVar6 = (OLNJMPMPLOB->fields).MGHHBGMPDEI;
                  pSVar4 = Nekki_SF2_GUI_Profile_TrickSubItem__GetBaseDMG
                                     (OLNJMPMPLOB,(MethodInfo *)0x0);
                  if (pNVar3 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) {
                    Nekki_SF2_GUI_Profile_TrickContent__Refresh
                              (pNVar3,pKVar6,pSVar4,(MethodInfo *)0x0);
                    return;
                  }
                }
                goto LAB_0343b388;
              }
            }
            pSVar5 = StringLiteral_7509;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)OLNJMPMPLOB,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              puVar7 = &StringLiteral_19210;
            }
            else {
              if (OLNJMPMPLOB == (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0) goto LAB_0343b388;
              puVar7 = &StringLiteral_6837;
              if ((OLNJMPMPLOB->fields).MGHHBGMPDEI != (KCLPNDAPADO_o *)0x0) {
                puVar7 = &StringLiteral_1;
              }
              pSVar5 = System_String__Concat(pSVar5,(System_String_o *)*puVar7,(MethodInfo *)0x0);
              pSVar4 = Nekki_SF2_GUI_Profile_TrickSubItem__GetBaseDMG(OLNJMPMPLOB,(MethodInfo *)0x0)
              ;
              puVar7 = &StringLiteral_6773;
              if (pSVar4 != (System_Collections_Generic_List_float__o *)0x0) {
                puVar7 = &StringLiteral_1;
              }
            }
            pSVar5 = System_String__Concat(pSVar5,(System_String_o *)*puVar7,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0343b388:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

