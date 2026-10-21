// AHHELIMMIED$$.cctor @ RVA 0x319F028

void AHHELIMMIED___cctor(MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array **ppSVar2;
  
  if ((DAT_04566ad0 & 1) == 0) {
    FUN_01bab630(&AHHELIMMIED_TypeInfo);
                    /* try { // try from 0329f070 to 0339f077 has its CatchHandler @ 0329f1d8 */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_193D8929CA5109D6E38BC1498B97D8DBFF53B49F98827C2F3C8E64D29C35B918
                );
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_2581B09F434BC49D16AEE9E4869D8A3C2F8F9FB2FCE360209C4D27EEC5FF4C7E
                );
                    /* try { // try from 0329f090 to 0339f0db has its CatchHandler @ 0329f290 */
    DAT_04566ad0 = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x20);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_2581B09F434BC49D16AEE9E4869D8A3C2F8F9FB2FCE360209C4D27EEC5FF4C7E
             ,(MethodInfo *)0x0);
  ppSVar2 = &AHHELIMMIED_TypeInfo->static_fields->EDCHCICLDBD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x10);
                    /* try { // try from 0329f0e0 to 0339f0e3 has its CatchHandler @ 0329f1c4 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_193D8929CA5109D6E38BC1498B97D8DBFF53B49F98827C2F3C8E64D29C35B918
             ,(MethodInfo *)0x0);
                    /* try { // try from 0329f0e4 to 0339f0e7 has its CatchHandler @ 0329f1c0 */
                    /* try { // try from 0329f0e8 to 0339f0eb has its CatchHandler @ 0329f1a0 */
                    /* try { // try from 0329f0ec to 0339f0ef has its CatchHandler @ 0329f19c */
                    /* try { // try from 0329f0f0 to 0339f0f3 has its CatchHandler @ 0329f198 */
  ppSVar2 = &AHHELIMMIED_TypeInfo->static_fields->PDMLGKMLOKP;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}

