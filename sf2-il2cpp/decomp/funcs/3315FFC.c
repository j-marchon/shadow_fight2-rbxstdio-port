// MKFAKELPPAC$$FEIJLDOKHEE @ RVA 0x3315FFC

void MKFAKELPPAC__FEIJLDOKHEE
               (MKFAKELPPAC_o *__this,int32_t BKFOLMBMFNP,bool LNKIOAFBDMO,bool NIMNHIPFEOG,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar3;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  FCMAKNBEJDA_o *pFVar4;
  ulong uVar5;
  MethodInfo *pMVar6;
  Il2CppMethodPointer pIVar7;
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  int32_t local_54;
  
  if ((DAT_045677d9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6545);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6546);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    DAT_045677d9 = 1;
  }
  if (((__this->fields).AHLHIFAMFCA == 0) &&
     (bVar1 = OMMDIMHOHLK__GOLOABAFEJA(BKFOLMBMFNP,(MethodInfo *)0x0), !bVar1)) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6545,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6546,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    local_54 = BKFOLMBMFNP;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(MPAKDCNMLEG_TypeInfo,&local_54);
    local_58[0] = LNKIOAFBDMO;
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_58);
    local_5c[0] = NIMNHIPFEOG;
    arg2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_5c);
    pSVar3 = System_String__Format(pSVar3,arg0,arg1,arg2,(MethodInfo *)0x0);
    pMVar6 = (MethodInfo *)0x0;
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
    if (LNKIOAFBDMO) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__JEGCBLKOEGN(true,(MethodInfo *)0x0);
    }
    if (NIMNHIPFEOG) {
      bVar1 = MKFAKELPPAC__HCPKDCBMMBA(__this,BKFOLMBMFNP,pMVar6);
      bVar1 = !bVar1;
    }
    else {
      bVar1 = false;
    }
    pFVar4 = MKFAKELPPAC__GJOJFKPLDHF(__this,BKFOLMBMFNP,pMVar6);
    if ((bVar1) || (pFVar4 == (FCMAKNBEJDA_o *)0x0)) {
      MKFAKELPPAC__BDAMEFBOKGF(__this,BKFOLMBMFNP,pMVar6);
      MKFAKELPPAC__FIELNNIEFOG(__this,BKFOLMBMFNP,pMVar6);
    }
    else {
      (__this->fields).AHLHIFAMFCA = BKFOLMBMFNP;
      uVar5 = (*(pFVar4->klass->vtable)._6_unknown.methodPtr)
                        (pFVar4,(pFVar4->klass->vtable)._6_unknown.method);
      if ((uVar5 & 1) == 0) {
        if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = UnityEngine_Application__get_internetReachability((MethodInfo *)0x0);
        if (iVar2 == 0) {
          MKFAKELPPAC__BDAMEFBOKGF(__this,BKFOLMBMFNP,pMVar6);
          return;
        }
        pIVar7 = (pFVar4->klass->vtable)._9_HNIHOIAMDPC.methodPtr;
        pMVar6 = (pFVar4->klass->vtable)._9_HNIHOIAMDPC.method;
      }
      else {
        MKFAKELPPAC__AJENNDOGPBB(__this,true,pMVar6);
        pIVar7 = (pFVar4->klass->vtable)._7_unknown.methodPtr;
        pMVar6 = (pFVar4->klass->vtable)._7_unknown.method;
      }
      (*pIVar7)(pFVar4,(ulong)(uint)BKFOLMBMFNP,pMVar6);
    }
  }
  return;
}

