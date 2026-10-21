// Nekki.SF2.GUI.Fight.EndFightScreen$$DKOJPFEMKDC @ RVA 0x2FF034C

void Nekki_SF2_GUI_Fight_EndFightScreen__DKOJPFEMKDC
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ResistanceContent_o *pNVar2;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Fight_ResistanceContent_o **ppNVar4;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  
  if ((DAT_04565a61 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightScreen_CCLILNDOHAB__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ResistanceContent>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 030f03a4 to 031f0513 has its CatchHandler @ 030f03a4
                       catch() { ... } // from try @ 030f03a4 with catch @ 030f03a4
                       catch() { ... } // from try @ 030f051c with catch @ 030f03a4
                       catch() { ... } // from try @ 030f0558 with catch @ 030f03a4
                       catch() { ... } // from try @ 030f07c4 with catch @ 030f03a4
                       catch() { ... } // from try @ 030f07f4 with catch @ 030f03a4
                       catch() { ... } // from try @ 030f0828 with catch @ 030f03a4
                       catch() { ... } // from try @ 030f0854 with catch @ 030f03a4
                       catch() { ... } // from try @ 030f08a0 with catch @ 030f03a4 */
    DAT_04565a61 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_EndFightScreen__INHOOPJHFPC(__this,method);
  if ((__this->fields).IJINDHBBABM != false) {
    (__this->fields).IJINDHBBABM = false;
    pUVar3 = (__this->fields)._resistanceContentPrefab;
    pUVar5 = (__this->fields)._content;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar5 = (__this->fields)._content;
    }
    else {
      pUVar5 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = Method_UnityEngine_Object_Instantiate<GameObject>__;
    pUVar3 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar3,pUVar5,
                        (MethodInfo_1F1EC6C *)Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pNVar2 = (Nekki_SF2_GUI_Fight_ResistanceContent_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar3,Method_UnityEngine_GameObject_GetComponent<ResistanceContent>__);
      ppNVar4 = &(__this->fields).EHKAIEBMIFA;
      *ppNVar4 = pNVar2;
      thunk_FUN_01c20e04(ppNVar4,pNVar2);
      if (*ppNVar4 != (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) {
        Nekki_SF2_GUI_Fight_ResistanceContent__Init(*ppNVar4,(__this->fields).INIAKIIBBHK,method_00)
        ;
        pNVar2 = (__this->fields).EHKAIEBMIFA;
        if (pNVar2 != (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) {
          __this_00 = (pNVar2->fields).CloseEvent;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

