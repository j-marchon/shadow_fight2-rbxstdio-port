// MKFAKELPPAC$$FDKDJJJDKKK @ RVA 0x3314CF8

void MKFAKELPPAC__FDKDJJJDKKK
               (MKFAKELPPAC_o *__this,int32_t BKFOLMBMFNP,bool NIMNHIPFEOG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  FCMAKNBEJDA_o *pFVar3;
  ulong uVar4;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar5;
  Il2CppObject *arg0;
  MethodInfo *pMVar6;
  int32_t local_44;
  
  pMVar6 = (MethodInfo *)(ulong)NIMNHIPFEOG;
  if ((DAT_045677fa & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6591);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6592);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    DAT_045677fa = 1;
  }
  pFVar3 = MKFAKELPPAC__GJOJFKPLDHF(__this,BKFOLMBMFNP,pMVar6);
  if ((pFVar3 == (FCMAKNBEJDA_o *)0x0) ||
     (uVar4 = (*(pFVar3->klass->vtable)._8_unknown.methodPtr)
                        (pFVar3,(pFVar3->klass->vtable)._8_unknown.method), (uVar4 & 1) != 0)) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6591,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6592,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    local_44 = BKFOLMBMFNP;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(MPAKDCNMLEG_TypeInfo,&local_44);
    pSVar5 = System_String__Format(pSVar5,arg0,(MethodInfo *)0x0);
    pMVar6 = (MethodInfo *)0x0;
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar5,(MethodInfo *)0x0);
    if (NIMNHIPFEOG) {
      bVar1 = MKFAKELPPAC__HCPKDCBMMBA(__this,BKFOLMBMFNP,pMVar6);
      bVar1 = !bVar1;
    }
    else {
      bVar1 = false;
    }
    if ((pFVar3 != (FCMAKNBEJDA_o *)0x0) && (!bVar1)) {
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = UnityEngine_Application__get_internetReachability((MethodInfo *)0x0);
      if (iVar2 != 0) {
        (*(pFVar3->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                  (pFVar3,(ulong)(uint)BKFOLMBMFNP,(pFVar3->klass->vtable)._9_HNIHOIAMDPC.method);
        return;
      }
    }
    MKFAKELPPAC__BDAMEFBOKGF(__this,BKFOLMBMFNP,pMVar6);
  }
  return;
}

