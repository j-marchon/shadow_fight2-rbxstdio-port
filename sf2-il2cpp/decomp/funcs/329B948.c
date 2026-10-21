// OMANDMDCGMF.MOHBDJOFHEN$$BeginInvoke @ RVA 0x329B948

System_IAsyncResult_o *
OMANDMDCGMF_MOHBDJOFHEN__BeginInvoke
          (OMANDMDCGMF_MOHBDJOFHEN_o *__this,int32_t BLMDGGCEDCB,System_AsyncCallback_o *BLMFLPJJMPF
          ,Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  int32_t local_34;
  
  local_34 = BLMDGGCEDCB;
  if ((DAT_04567393 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04567393 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_48 = thunk_FUN_01bda448(int_TypeInfo,&local_34);
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_48,BLMFLPJJMPF,LPDENCPICOM);
  return pSVar1;
}

