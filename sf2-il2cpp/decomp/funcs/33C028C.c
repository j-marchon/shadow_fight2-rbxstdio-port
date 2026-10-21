// CUDLR.Server$$BHIAOHEOEDL @ RVA 0x33C028C

void CUDLR_Server__BHIAOHEOEDL
               (CUDLR_Server_o *__this,JOCIOCLPIHI_o *OHKEKFCKBED,bool INADPMLBJHN,
               MethodInfo *method)

{
  bool bVar1;
  System_Net_HttpListenerResponse_o *IDCGLBOIAFJ;
  MethodInfo *in_x5;
  System_String_o *local_28;
  System_String_o *local_18;
  
  local_18 = (System_String_o *)0x0;
  local_28 = (System_String_o *)0x0;
  CUDLR_Server__CFCJGDIMHBA(__this,OHKEKFCKBED,INADPMLBJHN,&local_18,&local_28,in_x5);
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(local_18,(MethodInfo *)0x0);
  if (OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) {
    if (bVar1) {
      IDCGLBOIAFJ = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
      KEBDCIFDLPB__LNBHCPLMPAA(IDCGLBOIAFJ,local_18,local_28,INADPMLBJHN,(MethodInfo *)0x0);
    }
    else {
      (OHKEKFCKBED->fields).IPOHACONDOB = true;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

