// Nekki.SF2.GUI.Map.MapScene$$EDBJMDJLCKH @ RVA 0x3587684

void Nekki_SF2_GUI_Map_MapScene__EDBJMDJLCKH
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar3;
  Nekki_SF2_GUI_Map_RaidMapContainer_o **ppNVar4;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *x;
  
  if ((DAT_04568d03 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d03 = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_Map_MapScene__IsSwitchingMapContainers(__this,method);
  if (bVar1) {
    return;
  }
  ppNVar4 = &(__this->fields).CLKPHCHEEJA;
  x = *ppNVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    if (*ppNVar4 == (Nekki_SF2_GUI_Map_RaidMapContainer_o *)0x0) goto LAB_0368776c;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar4,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    *ppNVar4 = (Nekki_SF2_GUI_Map_RaidMapContainer_o *)0x0;
    thunk_FUN_01c20e04(ppNVar4,0);
    method_00 = extraout_x1_01;
  }
  if ((__this->fields)._raidDailyButtonHideLogic == 1) {
    pNVar3 = (__this->fields).FMIFNIIJJNK;
    if (((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
        (__this_00 = (pNVar3->fields)._RaidDailyQuestsButton_k__BackingField,
        __this_00 == (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)0x0)) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) {
LAB_0368776c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    method_00 = extraout_x1_02;
  }
  Nekki_SF2_GUI_Map_MapScene__MKEBFHLGMPO(__this,method_00);
  return;
}

