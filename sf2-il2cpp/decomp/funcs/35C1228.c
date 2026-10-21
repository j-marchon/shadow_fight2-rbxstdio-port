// IMAPABEJECG$$ECDBHGCNKBO @ RVA 0x35C1228

void IMAPABEJECG__ECDBHGCNKBO(System_Byte_array *IMMNELPBGIF,bool BHPEJDOPLFD,MethodInfo *method)

{
  System_Byte_array *method_00;
  NHJCFGACFDF_o *pNVar1;
  
  method_00 = IMMNELPBGIF;
  if ((DAT_04568f1c & 1) == 0) {
    method_00 = (System_Byte_array *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f1c = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB((MethodInfo *)method_00);
  pNVar1 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar1 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pNVar1->klass[1]._1.properties)(pNVar1,IMMNELPBGIF,BHPEJDOPLFD,pNVar1->klass[1]._1.methods);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

