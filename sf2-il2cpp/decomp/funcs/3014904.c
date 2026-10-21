// AJOGJBFNELI$$EPFNGHLFCDC @ RVA 0x3014904

void AJOGJBFNELI__EPFNGHLFCDC(AJOGJBFNELI_o *__this,int32_t JKKCLILCBKN,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *KGLJICLJHEL;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)(uint)JKKCLILCBKN;
  if ((DAT_04565bc8 & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<int>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2992);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2993);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565bc8 = 1;
    method_00 = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method_00);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2992,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2993,(MethodInfo *)0x0);
  KGLJICLJHEL = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<int>
            (__this,KGLJICLJHEL,JKKCLILCBKN,Method_AJOGJBFNELI_MLDEHFFGJDP<int>__);
  AJOGJBFNELI__CHLJMDILNBI(__this,method_01);
  return;
}

