// Nekki.SF2.GUI.Fight.PreFight$$OpenEndRaidRoundFightScreen @ RVA 0x2FFCCCC

void Nekki_SF2_GUI_Fight_PreFight__OpenEndRaidRoundFightScreen
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,IGPDCHBJAPD_o *HPACPFLKHPK,MethodInfo *method
               )

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *__this_00;
  Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *pNVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o **ppNVar5;
  
  if ((DAT_04565af0 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<EndRaidRoundFightScreen>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af0 = 1;
  }
  __this_00 = (__this->fields).LJAILGNLPAB;
  if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenFight__Clear(__this_00,(MethodInfo *)0x0);
  }
  x = (UnityEngine_Object_o *)(__this->fields).endRaidRoundFightScreenPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pUVar4 = (__this->fields).endRaidRoundFightScreenPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pNVar2 = (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar4,Method_UnityEngine_GameObject_GetComponent<EndRaidRoundFightScreen>__
                       );
    ppNVar5 = &(__this->fields).FFCLNFCCMKN;
    *ppNVar5 = pNVar2;
    thunk_FUN_01c20e04(ppNVar5,pNVar2);
    if ((*ppNVar5 != (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
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
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_030fce8c;
          pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
        }
        if ((*ppNVar5 != (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(__this_01,pUVar3,false,(MethodInfo *)0x0);
          if ((*ppNVar5 != (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
            pNVar2 = *ppNVar5;
            if (pNVar2 != (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x030fce78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pNVar2->klass->vtable)._6_Init.methodPtr)
                        (pNVar2,HPACPFLKHPK,(pNVar2->klass->vtable)._6_Init.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_030fce8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

