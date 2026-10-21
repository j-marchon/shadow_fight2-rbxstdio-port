// Nekki.SF2.GUI.Dialogs.Raids.SeasFinBaseContent$$.ctor @ RVA 0x32DC884

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Collections_Generic_List_Sequence__o *__this_00;
  System_Collections_Generic_List_Sequence__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar3;
  
  if ((DAT_045675c8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sequence>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Sequence>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_KOPCKFBLPBD__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo);
    DAT_045675c8 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo->static_fields->__9__10_0;
  if (pSVar3 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo->static_fields->__9__10_0
    ;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)0x0) {
    ppSVar1 = &(__this->fields).DKPPMJCLNAB;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    __this_00 = (System_Collections_Generic_List_Sequence__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<Sequence>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,8,
               Method_System_Collections_Generic_List<Sequence>__ctor__);
    ppSVar2 = &(__this->fields).HHEDCPBLJHD;
    *ppSVar2 = __this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

