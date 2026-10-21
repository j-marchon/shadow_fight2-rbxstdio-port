// PMFNDKKBEKN$$RandomizeObscuredVars @ RVA 0x35AB03C

void PMFNDKKBEKN__RandomizeObscuredVars(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  System_Action_AJNNHGGLGIF__o **ppSVar1;
  System_Action_PJKHAJKEHEL__o **ppSVar2;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_01;
  System_Action_PJKHAJKEHEL__o *action;
  System_Action_AJNNHGGLGIF__o *action_00;
  
                    /* try { // try from 036ab040 to 037ab09b has its CatchHandler @ 036aaf98 */
  if ((DAT_04568e50 & 1) == 0) {
    FUN_01bab630(&System_Action<PJKHAJKEHEL>_TypeInfo);
    FUN_01bab630(&System_Action<AJNNHGGLGIF>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_ForEach__);
    FUN_01bab630(&Method_PMFNDKKBEKN_<>c_KIECENPIMPB__);
                    /* try { // try from 036ab09c to 037ab0ab has its CatchHandler @ 036ab0b0 */
    FUN_01bab630(&Method_PMFNDKKBEKN_<>c_MBCOECLGJCG__);
                    /* try { // try from 036ab0ac to 037ab0b3 has its CatchHandler @ 036aaf98 */
                    /* catch() { ... } // from try @ 036ab028 with catch @ 036ab0b0
                       catch() { ... } // from try @ 036ab09c with catch @ 036ab0b0 */
    FUN_01bab630(&PMFNDKKBEKN_<>c_TypeInfo);
                    /* try { // try from 036ab0b4 to 037ab0b7 has its CatchHandler @ 036ab0c0 */
                    /* try { // try from 036ab0b8 to 037ab0c3 has its CatchHandler @ 036aaf98 */
    DAT_04568e50 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036ab0b4 with catch @ 036ab0c0
                        */
  OOMHDDBCBJP__RandomizeObscuredVars((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
  __this_01 = (__this->fields).LJNCACBBIBD;
  if ((PMFNDKKBEKN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action_00 = PMFNDKKBEKN_<>c_TypeInfo->static_fields->__9__27_0;
  if (action_00 == (System_Action_AJNNHGGLGIF__o *)0x0) {
    if ((PMFNDKKBEKN_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_00 = (System_Action_AJNNHGGLGIF__o *)
                thunk_FUN_01bda818(System_Action<AJNNHGGLGIF>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &PMFNDKKBEKN_<>c_TypeInfo->static_fields->__9__27_0;
    *ppSVar1 = action_00;
    thunk_FUN_01c20e04(ppSVar1,action_00);
  }
  if (__this_01 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_ForEach__);
    __this_00 = (__this->fields).PKBACCIJGGD;
    if ((PMFNDKKBEKN_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = PMFNDKKBEKN_<>c_TypeInfo->static_fields->__9__27_1;
    if (action == (System_Action_PJKHAJKEHEL__o *)0x0) {
      if ((PMFNDKKBEKN_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_PJKHAJKEHEL__o *)
               thunk_FUN_01bda818(System_Action<PJKHAJKEHEL>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &PMFNDKKBEKN_<>c_TypeInfo->static_fields->__9__27_1;
      *ppSVar2 = action;
      thunk_FUN_01c20e04(ppSVar2,action);
    }
    if (__this_00 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<PJKHAJKEHEL>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

