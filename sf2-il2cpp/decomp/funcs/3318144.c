// MKFAKELPPAC$$BFCCEGGDJEF @ RVA 0x3318144

void MKFAKELPPAC__BFCCEGGDJEF
               (MKFAKELPPAC_o *__this,int32_t BKFOLMBMFNP,bool LNKIOAFBDMO,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  FCMAKNBEJDA_o *pFVar2;
  MethodInfo *method_00;
  undefined1 local_58 [4];
  int32_t local_54;
  
  if ((DAT_045677ef & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6569);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6570);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    DAT_045677ef = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6569,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6570,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  local_54 = BKFOLMBMFNP;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(MPAKDCNMLEG_TypeInfo,&local_54);
  local_58[0] = LNKIOAFBDMO;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_58);
  pSVar1 = System_String__Format(pSVar1,arg0,arg1,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar1,(MethodInfo *)0x0);
  if (LNKIOAFBDMO) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__JEGCBLKOEGN(true,(MethodInfo *)0x0);
  }
  pFVar2 = MKFAKELPPAC__GJOJFKPLDHF(__this,BKFOLMBMFNP,method_00);
  if (pFVar2 == (FCMAKNBEJDA_o *)0x0) {
    MKFAKELPPAC__FIELNNIEFOG(__this,BKFOLMBMFNP,method_00);
  }
  else {
    MKFAKELPPAC__AJENNDOGPBB(__this,true,method_00);
    (*(pFVar2->klass->vtable)._7_unknown.methodPtr)
              (pFVar2,(ulong)(uint)BKFOLMBMFNP,(pFVar2->klass->vtable)._7_unknown.method);
  }
  return;
}

