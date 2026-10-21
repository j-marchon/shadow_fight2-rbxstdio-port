// Nekki.SF2.GUI.SimpleScroll$$.ctor @ RVA 0x302DD58

void Nekki_SF2_GUI_SimpleScroll___ctor(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_c *pUVar1;
  System_Action_o **ppSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar3;
  UnityEngine_Vector2_Fields UVar4;
  
  if ((DAT_04565cd0 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SimpleScroll_<>c_ALGCEDPILIM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SimpleScroll_<>c_FDKDFIANANH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SimpleScroll_<>c_KPLPIALLCMI__);
    FUN_01bab630(&Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo);
    DAT_04565cd0 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->static_fields->__9__139_0;
  if (pSVar3 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar2 = &Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->static_fields->__9__139_0;
    *ppSVar2 = pSVar3;
    thunk_FUN_01c20e04(ppSVar2,pSVar3);
  }
  if (__this != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    (__this->fields).FOKMEOHPDJL = (System_Action_BaseScrollItem__o *)pSVar3;
    thunk_FUN_01c20e04(&(__this->fields).FOKMEOHPDJL,pSVar3);
    if ((Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->static_fields->__9__139_1;
    if (pSVar3 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar2 = &Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->static_fields->__9__139_1;
      *ppSVar2 = pSVar3;
      thunk_FUN_01c20e04(ppSVar2,pSVar3);
    }
    (__this->fields).FOOOBJNPNEH = pSVar3;
    thunk_FUN_01c20e04(&(__this->fields).FOOOBJNPNEH,pSVar3);
    if ((Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->static_fields->__9__139_2;
    if (pSVar3 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar2 = &Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->static_fields->__9__139_2;
      *ppSVar2 = pSVar3;
      thunk_FUN_01c20e04(ppSVar2,pSVar3);
    }
    (__this->fields).Items = (System_Collections_Generic_List_BaseScrollItem__o *)pSVar3;
    thunk_FUN_01c20e04(&(__this->fields).Items,pSVar3);
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
    *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase = __this_00;
    thunk_FUN_01c20e04(&(__this->fields)._snapEase,__this_00);
    (__this->fields)._snap = true;
    (__this->fields)._looped = false;
    *(undefined6 *)&(__this->fields).field_0x14a = 0x3e99999a0000;
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    pUVar1 = UnityEngine_Vector2_TypeInfo;
    (__this->fields).KFDLOCBGNEA.fields =
         (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
    (__this->fields).IFDBJFNPOEK.fields = (pUVar1->static_fields->zeroVector).fields;
    UVar4 = (pUVar1->static_fields->zeroVector).fields;
    *(undefined8 *)&(__this->fields).IHIEPGHGHKH = 0x7fffffff;
    (__this->fields).AOLPGMKLBGK.fields = UVar4;
    UnityEngine_UI_ScrollRect___ctor((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

