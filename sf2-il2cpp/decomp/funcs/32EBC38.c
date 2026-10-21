// IBMPAMLCCHF$$KOBEFHOFGBI @ RVA 0x32EBC38

System_String_o *
IBMPAMLCCHF__KOBEFHOFGBI
          (System_Byte_array *IKKKILCDMMB,System_Byte_array *MLLHENCNAMI,
          System_String_o *CIBIKDNNBAM,bool ILDOEIOKKNO,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Text_Encoding_o *pSVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456763e & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_0456763e = 1;
  }
  pSVar1 = IBMPAMLCCHF__MFKIMIBAPEE(IKKKILCDMMB,MLLHENCNAMI,CIBIKDNNBAM,ILDOEIOKKNO,method);
  if (pSVar1 != (System_Byte_array *)0x0) {
    pSVar2 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar2 != (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033ebcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar3 = (System_String_o *)
               (*(pSVar2->klass->vtable)._37_GetString.methodPtr)
                         (pSVar2,pSVar1,(pSVar2->klass->vtable)._37_GetString.method);
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return string_TypeInfo->static_fields->Empty;
}

