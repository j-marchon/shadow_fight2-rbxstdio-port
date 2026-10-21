// Nekki.SF2.GUI.Fight.PreFight$$OpenEndFightScreen @ RVA 0x2FFE0B0

void Nekki_SF2_GUI_Fight_PreFight__OpenEndFightScreen
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,IGPDCHBJAPD_o *HPACPFLKHPK,MethodInfo *method
               )

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *__this_00;
  Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *pNVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  Nekki_SF2_GUI_Fight_EndFightScreen_o *pNVar5;
  MethodInfo *method_00;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  Nekki_SF2_GUI_Fight_EndPvpFightScreen_o **ppNVar8;
  Nekki_SF2_GUI_Fight_EndFightScreen_o **ppNVar9;
  
  if ((DAT_04565b05 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<EndFightScreen>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<EndPvpFightScreen>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b05 = 1;
  }
  __this_00 = (__this->fields).LJAILGNLPAB;
  if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenFight__Clear(__this_00,(MethodInfo *)0x0);
  }
  if (HPACPFLKHPK == (IGPDCHBJAPD_o *)0x0) goto LAB_030fe3cc;
  if ((HPACPFLKHPK->fields).ACCIHBHMFPN == 0x11) {
    pUVar6 = (UnityEngine_Object_o *)(__this->fields).endPvpFightScreenPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar7 = (__this->fields).endPvpFightScreenPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar7 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar7,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pNVar2 = (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (pUVar7,Method_UnityEngine_GameObject_GetComponent<EndPvpFightScreen>__);
        ppNVar8 = &(__this->fields).LJEDFCFDKAE;
        *ppNVar8 = pNVar2;
        thunk_FUN_01c20e04(ppNVar8,pNVar2);
        if ((*ppNVar8 != (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *)0x0) &&
           (pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)*ppNVar8,(MethodInfo *)0x0),
           pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (bVar1) {
              if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_030fe3cc;
              pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
            }
            if ((*ppNVar8 != (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *)0x0) &&
               (pUVar4 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)*ppNVar8,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar4,pUVar3,false,(MethodInfo *)0x0);
              if ((*ppNVar8 != (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *)0x0) &&
                 (pUVar3 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)*ppNVar8,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
                if (*ppNVar8 != (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *)0x0) {
                  Nekki_SF2_GUI_Fight_EndPvpFightScreen__Init
                            (*ppNVar8,HPACPFLKHPK,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
LAB_030fe3cc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else {
    pUVar6 = (UnityEngine_Object_o *)(__this->fields).endFightScreenPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar7 = (__this->fields).endFightScreenPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar7 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar7,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pNVar5 = (Nekki_SF2_GUI_Fight_EndFightScreen_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (pUVar7,Method_UnityEngine_GameObject_GetComponent<EndFightScreen>__);
        ppNVar9 = &(__this->fields).GOALBJHEANN;
        *ppNVar9 = pNVar5;
        thunk_FUN_01c20e04(ppNVar9,pNVar5);
        if ((*ppNVar9 != (Nekki_SF2_GUI_Fight_EndFightScreen_o *)0x0) &&
           (pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)*ppNVar9,(MethodInfo *)0x0),
           pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (bVar1) {
              if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_030fe3cc;
              pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
            }
            if ((*ppNVar9 != (Nekki_SF2_GUI_Fight_EndFightScreen_o *)0x0) &&
               (pUVar4 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)*ppNVar9,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_Transform_o *)0x0)) {
              method_00 = (MethodInfo *)0x0;
              UnityEngine_Transform__SetParent(pUVar4,pUVar3,false,(MethodInfo *)0x0);
              if ((*ppNVar9 != (Nekki_SF2_GUI_Fight_EndFightScreen_o *)0x0) &&
                 (pUVar3 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)*ppNVar9,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
                if (*ppNVar9 != (Nekki_SF2_GUI_Fight_EndFightScreen_o *)0x0) {
                  Nekki_SF2_GUI_Fight_EndFightScreen__Init(*ppNVar9,HPACPFLKHPK,method_00);
                  return;
                }
              }
            }
          }
        }
      }
      goto LAB_030fe3cc;
    }
  }
  return;
}

