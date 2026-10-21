// CUDLR.Server.NFEBIKDKJPN$$BeginInvoke @ RVA 0x33C1784

System_IAsyncResult_o *
CUDLR_Server_NFEBIKDKJPN__BeginInvoke
          (CUDLR_Server_NFEBIKDKJPN_o *__this,JOCIOCLPIHI_o *OHKEKFCKBED,bool INADPMLBJHN,
          System_AsyncCallback_o *BLMFLPJJMPF,Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  JOCIOCLPIHI_o *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_34 [4];
  
  local_34[0] = INADPMLBJHN;
  if ((DAT_04567dd5 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_04567dd5 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = OHKEKFCKBED;
  local_50 = thunk_FUN_01bda448(bool_TypeInfo,local_34);
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_58,BLMFLPJJMPF,LPDENCPICOM);
  return pSVar1;
}

