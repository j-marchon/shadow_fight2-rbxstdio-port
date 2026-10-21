// CKOFPNFDDAB$$BeginInvoke @ RVA 0x31D47B0

System_IAsyncResult_o *
CKOFPNFDDAB__BeginInvoke
          (CKOFPNFDDAB_o *__this,InControl_InputDevice_o *GIDJIIFPHJK,int32_t IKKKILCDMMB,
          System_AsyncCallback_o *BLMFLPJJMPF,Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  InControl_InputDevice_o *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int32_t local_34;
  
  local_34 = IKKKILCDMMB;
  if ((DAT_04566cce & 1) == 0) {
    FUN_01bab630(&LGMNENGMMOF_TypeInfo);
    DAT_04566cce = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = GIDJIIFPHJK;
  local_50 = thunk_FUN_01bda448(LGMNENGMMOF_TypeInfo,&local_34);
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_58,BLMFLPJJMPF,LPDENCPICOM);
  return pSVar1;
}

