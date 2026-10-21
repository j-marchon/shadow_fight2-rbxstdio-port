// Nekki.SF2.GUI.Profile.InfoPanel$$Refresh @ RVA 0x333AEC0

void Nekki_SF2_GUI_Profile_InfoPanel__Refresh
               (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,
               Nekki_SF2_GUI_Profile_AchievementSubItem_o *OLNJMPMPLOB,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  Nekki_SF2_GUI_Profile_PerkContent_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Profile_TrickContent_o *__this_01;
  Nekki_SF2_GUI_Profile_AchievementContent_o *pNVar4;
  Nekki_SF2_GUI_Profile_SealsContent_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  System_String_o *message;
  MethodInfo *in_x4;
  KMJDCOABCCG_o *pKVar5;
  
  if ((DAT_0456796b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_16285);
    FUN_01bab630(&StringLiteral_465);
    FUN_01bab630(&StringLiteral_7506);
    DAT_0456796b = 1;
  }
  __this_00 = (__this->fields)._PerkContent;
  if ((__this_00 != (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._TrickContent;
    if ((__this_01 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._AchievementContent;
      if ((pNVar4 != (Nekki_SF2_GUI_Profile_AchievementContent_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        __this_02 = (__this->fields)._SealsContent;
        if ((__this_02 != (Nekki_SF2_GUI_Profile_SealsContent_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
          __this_03 = (__this->fields)._NoContentMessageLabel;
          if ((__this_03 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar2 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)OLNJMPMPLOB,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar2) {
LAB_0343b034:
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar2 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)OLNJMPMPLOB,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              puVar1 = &StringLiteral_465;
              if (!bVar2) {
                puVar1 = &StringLiteral_16285;
              }
              message = System_String__Concat
                                  (StringLiteral_7506,(System_String_o *)*puVar1,(MethodInfo *)0x0);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
              return;
            }
            if (OLNJMPMPLOB != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
              pKVar5 = (OLNJMPMPLOB->fields).HNNMAMJOEMB;
              if (pKVar5 == (KMJDCOABCCG_o *)0x0) goto LAB_0343b034;
              Nekki_SF2_GUI_Profile_InfoPanel__PPGCAKOPAJI
                        (__this,(pKVar5->fields).JIJLBFGKNJK,true,0x58,in_x4);
              pNVar4 = (__this->fields)._AchievementContent;
              if (pNVar4 != (Nekki_SF2_GUI_Profile_AchievementContent_o *)0x0) {
                Nekki_SF2_GUI_Profile_AchievementContent__Refresh
                          (pNVar4,(OLNJMPMPLOB->fields).HNNMAMJOEMB,
                           (OLNJMPMPLOB->fields).IFGGFDOALOG,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

