// AGILEPNENOH.JMFABHCADII$$ADKAPHALAMC @ RVA 0x30FF508

void AGILEPNENOH_JMFABHCADII__ADKAPHALAMC
               (AGILEPNENOH_JMFABHCADII_o *__this,AGILEPNENOH_o *x,MethodInfo *method)

{
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  System_Action_AFFHKININGD__o *action;
  System_Action_AFFHKININGD__o **ppSVar1;
  
                    /* try { // try from 031ff514 to 032ff53f has its CatchHandler @ 031ffb9c */
  if ((DAT_045664b7 & 1) == 0) {
    FUN_01bab630(&System_Action<AFFHKININGD>_TypeInfo);
    FUN_01bab630(&Method_AGILEPNENOH_JMFABHCADII_GDCKOAMPKCN__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_ForEach__);
    DAT_045664b7 = 1;
  }
  if (x != (AGILEPNENOH_o *)0x0) {
    __this_00 = (x->fields).super.HDDNEKLMLMF;
    ppSVar1 = &(__this->fields).__9__1;
    action = *ppSVar1;
    if (action == (System_Action_AFFHKININGD__o *)0x0) {
      action = (System_Action_AFFHKININGD__o *)
               thunk_FUN_01bda818(System_Action<AFFHKININGD>_TypeInfo);
                    /* try { // try from 031ff57c to 032ff583 has its CatchHandler @ 031ffb8c */
                    /* try { // try from 031ff588 to 032ff58f has its CatchHandler @ 031ffb7c */
      System_Action<object>___ctor();
      (__this->fields).__9__1 = action;
      thunk_FUN_01c20e04(ppSVar1,action);
    }
    if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<AFFHKININGD>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

