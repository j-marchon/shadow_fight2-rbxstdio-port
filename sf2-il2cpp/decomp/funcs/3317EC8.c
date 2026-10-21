// MKFAKELPPAC$$IMDCLMOELGL @ RVA 0x3317EC8

void MKFAKELPPAC__IMDCLMOELGL(MKFAKELPPAC_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  System_Action_MPAKDCNMLEG__o *pSVar2;
  int32_t local_44;
  
  if ((DAT_045677ec & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6561);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6562);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    DAT_045677ec = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6561,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6562,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  local_44 = BKFOLMBMFNP;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(MPAKDCNMLEG_TypeInfo,&local_44);
  pSVar1 = System_String__Format(pSVar1,arg0,(MethodInfo *)0x0);
                    /* try { // try from 03417fbc to 03518047 has its CatchHandler @ 03417fbc
                       catch() { ... } // from try @ 03417fbc with catch @ 03417fbc
                       catch() { ... } // from try @ 03418060 with catch @ 03417fbc
                       catch() { ... } // from try @ 034180a4 with catch @ 03417fbc
                       catch() { ... } // from try @ 034180d4 with catch @ 03417fbc */
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar1,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).IIEIOOACJJL;
  if (pSVar2 != (System_Action_MPAKDCNMLEG__o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,BKFOLMBMFNP,
               (pSVar2->fields).super.super.method);
  }
  return;
}

