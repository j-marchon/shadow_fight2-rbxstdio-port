// Nekki.SF2.Core.Fights.ModelContainer$$RandomizeObscuredVars @ RVA 0x3560F88

void Nekki_SF2_Core_Fights_ModelContainer__RandomizeObscuredVars
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  System_Action_OLKKAIFGGAK__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  System_Action_OLKKAIFGGAK__o *action;
  
  if ((DAT_04568bc5 & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_ForEach__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_<>c_MINMIDFADAC__);
    FUN_01bab630(&Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo);
    DAT_04568bc5 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).EHJHKEEDKBE;
  if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__76_0;
  if (action == (System_Action_OLKKAIFGGAK__o *)0x0) {
    if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo,method);
    }
    action = (System_Action_OLKKAIFGGAK__o *)thunk_FUN_01bda818(System_Action<OLKKAIFGGAK>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__76_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

