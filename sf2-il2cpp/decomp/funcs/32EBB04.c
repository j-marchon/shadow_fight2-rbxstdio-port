// IBMPAMLCCHF$$JILEJCOCHIB @ RVA 0x32EBB04

System_String_o *
IBMPAMLCCHF__JILEJCOCHIB
          (System_String_o *OCMMDIHLKMH,System_Byte_array *IKKKILCDMMB,
          System_Byte_array *MLLHENCNAMI,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456763d & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_0456763d = 1;
  }
  pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar1 != (System_Text_Encoding_o *)0x0) {
    pSVar2 = (System_Byte_array *)
             (*(pSVar1->klass->vtable)._19_GetBytes.methodPtr)
                       (pSVar1,OCMMDIHLKMH,(pSVar1->klass->vtable)._19_GetBytes.method);
    pSVar2 = IBMPAMLCCHF__ALKNAMLGEJM(pSVar2,IKKKILCDMMB,MLLHENCNAMI,method);
    if (pSVar2 != (System_Byte_array *)0x0) {
      if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = System_Convert__ToBase64String(pSVar2,(MethodInfo *)0x0);
      return pSVar3;
    }
    return string_TypeInfo->static_fields->Empty;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

