// JANDANNAOBB$$NKLGCNHLBAF @ RVA 0x334A9D8

void JANDANNAOBB__NKLGCNHLBAF(JANDANNAOBB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Core_Network_ServerProvider_o *__this_01;
  System_Action_ServerProvider_DEBEPAKJMBK__o *ODJGKAPGNFF;
  MethodInfo *extraout_x1;
  
  if ((DAT_045679ef & 1) == 0) {
    FUN_01bab630(&System_Action<ServerProvider_DEBEPAKJMBK>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&Method_JANDANNAOBB_FBBMDNCGPFN__);
    DAT_045679ef = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  __this_01 = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
  ODJGKAPGNFF = (System_Action_ServerProvider_DEBEPAKJMBK__o *)
                thunk_FUN_01bda818(System_Action<ServerProvider_DEBEPAKJMBK>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_01 != (Core_Network_ServerProvider_o *)0x0) {
    Core_Network_ServerProvider__Login
              (__this_01,ODJGKAPGNFF,
               (System_Collections_Generic_Dictionary_string__string__o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

