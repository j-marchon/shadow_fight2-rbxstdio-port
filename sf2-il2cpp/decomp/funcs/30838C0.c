// KFCFGKEHPNK$$OHJCOEOKFLG @ RVA 0x30838C0

int32_t KFCFGKEHPNK__OHJCOEOKFLG(NLFLMJPNOLF_o *NLOFDAJCIML,MethodInfo *method)

{
  int32_t iVar1;
  CNLGMNIEGFG_o *pCVar2;
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456600b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    DAT_0456600b = 1;
    method = extraout_x1;
  }
  pCVar2 = KFCFGKEHPNK__FHEIBJBHOKF(NLOFDAJCIML,method);
  iVar1 = 0;
  if (pCVar2 != (CNLGMNIEGFG_o *)0x0) {
    __this = (System_Collections_Generic_List_object__o *)
             (*(pCVar2->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                       (pCVar2,(pCVar2->klass->vtable)._4_NIKCNPMKAFK.method);
    if (__this == (System_Collections_Generic_List_object__o *)0x0) {
LAB_03183950:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((__this->fields)._size < 1) {
      iVar1 = 0;
    }
    else {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         (__this,0,Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03183950;
      iVar1 = *(int32_t *)&pIVar3[6].klass;
    }
  }
  return iVar1;
}

