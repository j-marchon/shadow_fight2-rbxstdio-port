// MKFAKELPPAC$$FIELNNIEFOG @ RVA 0x3314FF4

void MKFAKELPPAC__FIELNNIEFOG(MKFAKELPPAC_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  MethodInfo *method_00;
  System_Action_MPAKDCNMLEG__o *pSVar2;
  int32_t local_44;
  
  if ((DAT_045677d2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6535);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6536);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    DAT_045677d2 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6535,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6536,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  local_44 = BKFOLMBMFNP;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(MPAKDCNMLEG_TypeInfo,&local_44);
  pSVar1 = System_String__Format(pSVar1,arg0,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar1,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__MHNCGDFKIJN((MethodInfo *)0x0);
  MKFAKELPPAC__AJENNDOGPBB(__this,false,method_00);
  pSVar2 = (__this->fields).NBEAOEDKFLO;
  (__this->fields).AHLHIFAMFCA = 0;
  if (pSVar2 != (System_Action_MPAKDCNMLEG__o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,BKFOLMBMFNP,
               (pSVar2->fields).super.super.method);
  }
  return;
}

