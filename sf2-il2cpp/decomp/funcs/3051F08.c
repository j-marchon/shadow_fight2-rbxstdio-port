// IKMOIKFPPBF$$.cctor @ RVA 0x3051F08

void IKMOIKFPPBF___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Byte_array *pSVar2;
  MethodInfo *method_00;
  System_Byte_array **ppSVar3;
  
  if ((DAT_04565e51 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    method = (MethodInfo *)FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    DAT_04565e51 = 1;
  }
  pSVar1 = IKMOIKFPPBF__NJLEHCMENAJ(method);
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03151f64 to 03251fb3 has its CatchHandler @ 03151f64
                       catch() { ... } // from try @ 03151f64 with catch @ 03151f64
                       catch() { ... } // from try @ 03151ffc with catch @ 03151f64
                       catch() { ... } // from try @ 03152040 with catch @ 03151f64
                       catch() { ... } // from try @ 03152090 with catch @ 03151f64 */
    thunk_FUN_01ba7564(System_Convert_TypeInfo);
  }
  pSVar2 = System_Convert__FromBase64String(pSVar1,(MethodInfo *)0x0);
  IKMOIKFPPBF_TypeInfo->static_fields->EDCHCICLDBD = pSVar2;
  method_00 = (MethodInfo *)thunk_FUN_01c20e04(IKMOIKFPPBF_TypeInfo->static_fields,pSVar2);
  pSVar1 = IKMOIKFPPBF__BIJFFJILEBE(method_00);
  pSVar2 = System_Convert__FromBase64String(pSVar1,(MethodInfo *)0x0);
  ppSVar3 = &IKMOIKFPPBF_TypeInfo->static_fields->PDMLGKMLOKP;
  *ppSVar3 = pSVar2;
                    /* try { // try from 03151fb4 to 03251fbf has its CatchHandler @ 03152050 */
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  return;
}

