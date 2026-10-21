// IIADFMDIDDL$$.cctor @ RVA 0x31120FC

void IIADFMDIDDL___cctor(MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array **ppSVar2;
  
  if ((DAT_0456658c & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&IIADFMDIDDL_TypeInfo);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_1E94CE8D9E95F9800C584875E46891FB687655C41B8D0209C7B2F5D5B59DA6F9
                );
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_831DE16E8F3D03A10D3593441D5B82AB9EB8EF9405C53021470665EA35332285
                );
    DAT_0456658c = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x20);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_1E94CE8D9E95F9800C584875E46891FB687655C41B8D0209C7B2F5D5B59DA6F9
             ,(MethodInfo *)0x0);
  IIADFMDIDDL_TypeInfo->static_fields->EDCHCICLDBD = pSVar1;
  thunk_FUN_01c20e04(IIADFMDIDDL_TypeInfo->static_fields,pSVar1);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x10);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_831DE16E8F3D03A10D3593441D5B82AB9EB8EF9405C53021470665EA35332285
             ,(MethodInfo *)0x0);
  ppSVar2 = &IIADFMDIDDL_TypeInfo->static_fields->PDMLGKMLOKP;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}

