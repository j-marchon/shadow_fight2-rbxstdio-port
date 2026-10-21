// Nekki.SF2.GUI.Fight.EndFightScreen$$NBLLFEACOJK @ RVA 0x2FEF324

void Nekki_SF2_GUI_Fight_EndFightScreen__NBLLFEACOJK
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *pNVar2;
  System_Predicate_IGPDCHBJAPD_AKGCHFPLJEC__o **ppSVar3;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o **ppNVar5;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *pSVar7;
  System_Predicate_IGPDCHBJAPD_AKGCHFPLJEC__o *match;
  
  if ((DAT_04565a57 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightScreen_CCLILNDOHAB__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ForgeMaterialsContent>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_FindAll__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Predicate<IGPDCHBJAPD_AKGCHFPLJEC>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightScreen_<>c_NGIEDLBLNEJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565a57 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_EndFightScreen__INHOOPJHFPC(__this,method);
  if ((__this->fields).FPLAPLIHEGF != false) {
    (__this->fields).FPLAPLIHEGF = false;
    pUVar4 = (__this->fields)._forgeMaterialsContentPrefab;
    pUVar6 = (__this->fields)._content;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar6 = (__this->fields)._content;
    }
    else {
      pUVar6 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar4 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar4,pUVar6,
                        Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pNVar2 = (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar4,Method_UnityEngine_GameObject_GetComponent<ForgeMaterialsContent>__
                         );
      ppNVar5 = &(__this->fields).HABFEMIFKEL;
      *ppNVar5 = pNVar2;
      thunk_FUN_01c20e04(ppNVar5,pNVar2);
      pSVar7 = (__this->fields).DIELINNGEBJ;
      if ((Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo->static_fields->__9__23_0;
      if (match == (System_Predicate_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0) {
        if ((Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        match = (System_Predicate_IGPDCHBJAPD_AKGCHFPLJEC__o *)
                thunk_FUN_01bda818(System_Predicate<IGPDCHBJAPD_AKGCHFPLJEC>_TypeInfo);
        System_Predicate<object>___ctor();
        ppSVar3 = &Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo->static_fields->__9__23_0;
        *ppSVar3 = match;
        thunk_FUN_01c20e04(ppSVar3,match);
      }
      if (pSVar7 != (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0) {
        pSVar7 = (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)
                 System_Collections_Generic_List<object>__FindAll
                           ((System_Collections_Generic_List_object__o *)pSVar7,
                            (System_Predicate_T__o *)match,
                            Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_FindAll__
                           );
        if (*ppNVar5 != (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0) {
          Nekki_SF2_GUI_Fight_ForgeMaterialsContent__Init(*ppNVar5,pSVar7,(MethodInfo *)0x0);
          if (*ppNVar5 != (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0) {
            __this_00 = ((*ppNVar5)->fields).CloseEvent;
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
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

