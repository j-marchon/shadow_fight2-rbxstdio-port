// APJKDKCGNHG.PABADKLLFHB$$BeginInvoke @ RVA 0x33243D8

System_IAsyncResult_o *
APJKDKCGNHG_PABADKLLFHB__BeginInvoke
          (APJKDKCGNHG_PABADKLLFHB_o *__this,float BCEJOJECHDA,System_AsyncCallback_o *BLMFLPJJMPF,
          Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_34;
  
  local_34 = BCEJOJECHDA;
  if ((DAT_04567863 & 1) == 0) {
    FUN_01bab630(&float_TypeInfo);
    DAT_04567863 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_48 = thunk_FUN_01bda448(float_TypeInfo,&local_34);
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_48,BLMFLPJJMPF,LPDENCPICOM);
  return pSVar1;
}

