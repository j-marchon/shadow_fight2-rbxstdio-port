// Nekki.SF2.GUI.Map.LampsPanel$$.ctor @ RVA 0x32C8D00

void Nekki_SF2_GUI_Map_LampsPanel___ctor(Nekki_SF2_GUI_Map_LampsPanel_o *__this,MethodInfo *method)

{
  System_Action_int__o **ppSVar1;
  System_Collections_Generic_List_Button__o *pSVar2;
  System_Collections_Generic_List_Button__o **ppSVar3;
  System_Collections_Generic_List_ResolutionImage__o *pSVar4;
  System_Collections_Generic_List_ResolutionImage__o **ppSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_int__o *pSVar6;
  
  if ((DAT_04567506 & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<Button>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_LampsPanel_<>c_NLBKDJDOELO__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo);
    DAT_04567506 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar6 = Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo->static_fields->__9__38_0;
  if (pSVar6 == (System_Action_int__o *)0x0) {
    if ((Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo,method);
    }
    pSVar6 = (System_Action_int__o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
    System_Action<int>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo->static_fields->__9__38_0;
    *ppSVar1 = pSVar6;
    thunk_FUN_01c20e04(ppSVar1,pSVar6);
  }
  if (__this != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
    ppSVar1 = &(__this->fields).BAIENFNFLAI;
    *ppSVar1 = pSVar6;
    thunk_FUN_01c20e04(ppSVar1,pSVar6);
    pSVar2 = (System_Collections_Generic_List_Button__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<Button>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<Button>__ctor__);
    ppSVar3 = &(__this->fields).NPKEJHGOGOE;
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    pSVar4 = (System_Collections_Generic_List_ResolutionImage__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    ppSVar5 = &(__this->fields).GOAMNFEGHIB;
    *ppSVar5 = pSVar4;
    thunk_FUN_01c20e04(ppSVar5,pSVar4);
    pSVar2 = (System_Collections_Generic_List_Button__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<Button>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<Button>__ctor__);
    ppSVar3 = &(__this->fields).FGFAMIEFDEO;
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    pSVar4 = (System_Collections_Generic_List_ResolutionImage__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    ppSVar5 = &(__this->fields).GENBELDCMGN;
    *ppSVar5 = pSVar4;
    thunk_FUN_01c20e04(ppSVar5,pSVar4);
    (__this->fields).GJNBBEBNALP = 0xff;
    (__this->fields).CHEKKHNGMMP = true;
    (__this->fields).MIIHHLIFPJM = true;
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

