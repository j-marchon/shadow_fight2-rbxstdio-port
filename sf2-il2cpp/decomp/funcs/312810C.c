// GPEHLCDLNDL$$OHJINPLLLIM @ RVA 0x312810C

void GPEHLCDLNDL__OHJINPLLLIM(Nekki_SF2_GUI_Tutorial_TutorialNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Collections_Generic_List_TutorialNode__o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456666e & 1) == 0) {
    FUN_01bab630(&GPEHLCDLNDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>_Remove__);
    DAT_0456666e = 1;
    method = extraout_x1;
  }
  if ((GPEHLCDLNDL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GPEHLCDLNDL_TypeInfo,method);
  }
  __this = GPEHLCDLNDL_TypeInfo->static_fields->JFNDMOBADAG;
  if (__this != (System_Collections_Generic_List_TutorialNode__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)JHMENEKPIBO,
               Method_System_Collections_Generic_List<TutorialNode>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

