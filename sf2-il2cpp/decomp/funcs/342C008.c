// POEIJGLGEED$$ODCAOCGHMPN @ RVA 0x342C008

void POEIJGLGEED__ODCAOCGHMPN(int32_t PDGLILNNEJJ,System_String_o *HFOIODFEKCH,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  int32_t LKFALEIFDIO;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  int32_t local_24;
  
  method_00 = (MethodInfo *)HFOIODFEKCH;
  if ((DAT_0456813f & 1) == 0) {
    FUN_01bab630(&POEIJGLGEED_TypeInfo);
    DAT_0456813f = 1;
    method_00 = extraout_x1;
  }
  local_24 = 0;
  if (PDGLILNNEJJ == 1) {
    bVar2 = System_Int32__TryParse(HFOIODFEKCH,&local_24,(MethodInfo *)0x0);
                    /* try { // try from 0352c070 to 0362c107 has its CatchHandler @ 0352c070
                       catch() { ... } // from try @ 0352c070 with catch @ 0352c070
                       catch() { ... } // from try @ 0352c138 with catch @ 0352c070
                       catch() { ... } // from try @ 0352c18c with catch @ 0352c070
                       catch() { ... } // from try @ 0352c1b4 with catch @ 0352c070
                       catch() { ... } // from try @ 0352c1e8 with catch @ 0352c070 */
    LKFALEIFDIO = 1;
    iVar1 = local_24;
    if (!bVar2) {
      iVar1 = -1;
    }
    POEIJGLGEED_TypeInfo->static_fields->FJPDEJPEHMI = iVar1;
    method_00 = extraout_x1_00;
  }
  else {
    if (PDGLILNNEJJ != 0) {
      return;
    }
    LKFALEIFDIO = 0;
  }
  POEIJGLGEED__NHEFKKBBCDJ(LKFALEIFDIO,method_00);
  return;
}

