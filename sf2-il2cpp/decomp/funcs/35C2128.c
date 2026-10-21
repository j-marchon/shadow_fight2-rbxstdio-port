// IMAPABEJECG$$BKKOBBDEPFH @ RVA 0x35C2128

System_String_o * IMAPABEJECG__BKKOBBDEPFH(MethodInfo *method)

{
  bool bVar1;
  int32_t GMGGINDHNPI;
  MethodInfo *method_00;
  System_String_o *pSVar2;
  NHJCFGACFDF_o *pNVar3;
  
  if ((DAT_04568f38 & 1) == 0) {
    FUN_01bab630(&IMAPABEJECG_TypeInfo);
    method = (MethodInfo *)FUN_01bab630(&string_TypeInfo);
    DAT_04568f38 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_00);
  if (bVar1) {
    GMGGINDHNPI = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
    pNVar3 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
                    /* try { // try from 036c2180 to 037c2183 has its CatchHandler @ 036c230c */
    if (pNVar3 != (NHJCFGACFDF_o *)0x0) {
                    /* try { // try from 036c2184 to 037c2193 has its CatchHandler @ 036c2320 */
      pSVar2 = (System_String_o *)
               (*pNVar3->klass[1]._1.this_arg.data)
                         (pNVar3,*(undefined8 *)&pNVar3->klass[1]._1.this_arg.bits);
      pSVar2 = GNAFJMPJNKI__HDJCIHBAFNJ(GMGGINDHNPI,pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return string_TypeInfo->static_fields->Empty;
}

