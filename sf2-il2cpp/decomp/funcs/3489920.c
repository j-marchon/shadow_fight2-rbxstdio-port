// LDAJCBOOHPE$$.cctor @ RVA 0x3489920

void LDAJCBOOHPE___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Byte_array *pSVar2;
  MethodInfo *method_00;
  System_Byte_array **ppSVar3;
  
  if ((DAT_045683cd & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    method = (MethodInfo *)FUN_01bab630(&LDAJCBOOHPE_TypeInfo);
    DAT_045683cd = 1;
  }
  pSVar1 = LDAJCBOOHPE__NJLEHCMENAJ(method);
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Convert_TypeInfo);
  }
  pSVar2 = System_Convert__FromBase64String(pSVar1,(MethodInfo *)0x0);
  LDAJCBOOHPE_TypeInfo->static_fields->EDCHCICLDBD = pSVar2;
  method_00 = (MethodInfo *)thunk_FUN_01c20e04(LDAJCBOOHPE_TypeInfo->static_fields,pSVar2);
  pSVar1 = LDAJCBOOHPE__BIJFFJILEBE(method_00);
  pSVar2 = System_Convert__FromBase64String(pSVar1,(MethodInfo *)0x0);
  ppSVar3 = &LDAJCBOOHPE_TypeInfo->static_fields->PDMLGKMLOKP;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  return;
}

