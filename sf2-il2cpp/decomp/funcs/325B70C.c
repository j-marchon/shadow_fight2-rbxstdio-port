// ILNFICAMFCI$$GIENGNEGHPJ @ RVA 0x325B70C

void ILNFICAMFCI__GIENGNEGHPJ(MethodInfo *method)

{
  bool bVar1;
  ILNFICAMFCI_c *method_00;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *__this;
  System_Action_KeyCode__o *CJNHFNHJHPE;
  System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o **ppSVar2;
  ILNFICAMFCI_StaticFields *pIVar3;
  
  if ((DAT_04567189 & 1) == 0) {
    FUN_01bab630(&System_Action<KeyCode>_TypeInfo);
    FUN_01bab630(&Method_ILNFICAMFCI_AEKEGMAOOHO__);
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_TypeInfo);
    DAT_04567189 = 1;
  }
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar3 = ILNFICAMFCI_TypeInfo->static_fields;
  if (pIVar3->DHKAODBNGNJ == false) {
    method_00 = ILNFICAMFCI_TypeInfo;
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (ILNFICAMFCI_c *)thunk_FUN_01ba7564();
      pIVar3 = ILNFICAMFCI_TypeInfo->static_fields;
    }
    pIVar3->DHKAODBNGNJ = true;
    bVar1 = ILNFICAMFCI__ABHJLMEPMBF((MethodInfo *)method_00);
    if (bVar1) {
      __this = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_KeyCode__o *)thunk_FUN_01bda818(System_Action<KeyCode>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (__this == (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_Core_InputControllers_KeyboardController__add_OnKeyDown
                (__this,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_TypeInfo
                                  );
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>__ctor__);
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar2 = &ILNFICAMFCI_TypeInfo->static_fields->JHMLNHOBABK;
    *ppSVar2 = __this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    ILNFICAMFCI_TypeInfo->static_fields->BNDFDNCBEFI = 1;
  }
  return;
}

