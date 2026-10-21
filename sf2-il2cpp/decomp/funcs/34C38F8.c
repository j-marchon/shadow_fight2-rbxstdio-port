// JBGPNJEDALF$$OLGILMECDLP @ RVA 0x34C38F8

void JBGPNJEDALF__OLGILMECDLP
               (JBGPNJEDALF_o *__this,System_Collections_Generic_List_BCGLDKLKKDA__o *GGBBGNMJIEI,
               MethodInfo *method)

{
  System_Action_T__o *action;
  
  if ((DAT_04568620 & 1) == 0) {
    FUN_01bab630(&System_Action<BCGLDKLKKDA>_TypeInfo);
    FUN_01bab630(&Method_JBGPNJEDALF_GDFBKGCDOIL__);
                    /* try { // try from 035c3948 to 036c3973 has its CatchHandler @ 035c3b24 */
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_ForEach__);
    DAT_04568620 = 1;
  }
  action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<BCGLDKLKKDA>_TypeInfo);
  System_Action<object>___ctor();
  if (GGBBGNMJIEI != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)GGBBGNMJIEI,action,
               Method_System_Collections_Generic_List<BCGLDKLKKDA>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

