// GMGALNFPLPA$$NGCNIGDMJIM @ RVA 0x306DB64

void GMGALNFPLPA__NGCNIGDMJIM(GMGALNFPLPA_o *__this,MethodInfo *method)

{
  System_Action_GMGALNFPLPA__o **ppSVar1;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  System_Action_GMGALNFPLPA__o *action;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04565f46 & 1) == 0) {
    FUN_01bab630(&System_Action<GMGALNFPLPA>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_get_Count__);
    FUN_01bab630(&Method_GMGALNFPLPA_<>c_CLOGMAPBOCG__);
    auVar2 = FUN_01bab630(&GMGALNFPLPA_<>c_TypeInfo);
    DAT_04565f46 = 1;
  }
  __this_00 = (__this->fields).DOLDMIEIMPL;
  if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      if ((GMGALNFPLPA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = GMGALNFPLPA_<>c_TypeInfo->static_fields->__9__59_0;
      if (action == (System_Action_GMGALNFPLPA__o *)0x0) {
        if ((GMGALNFPLPA_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = (System_Action_GMGALNFPLPA__o *)
                 thunk_FUN_01bda818(System_Action<GMGALNFPLPA>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar1 = &GMGALNFPLPA_<>c_TypeInfo->static_fields->__9__59_0;
        *ppSVar1 = action;
        thunk_FUN_01c20e04(ppSVar1,action);
      }
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<GMGALNFPLPA>_ForEach__);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

