// IBMPAMLCCHF$$NLDHOAPBNJO @ RVA 0x32EBD48

void IBMPAMLCCHF__NLDHOAPBNJO
               (System_String_o *OCMMDIHLKMH,System_Byte_array *IKKKILCDMMB,
               System_Byte_array *MLLHENCNAMI,System_String_o *LILLFLCEFNK,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  System_Byte_array *pSVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)LILLFLCEFNK;
  pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar1 != (System_Text_Encoding_o *)0x0) {
    pSVar2 = (System_Byte_array *)
             (*(pSVar1->klass->vtable)._19_GetBytes.methodPtr)
                       (pSVar1,OCMMDIHLKMH,(pSVar1->klass->vtable)._19_GetBytes.method);
    pSVar2 = IBMPAMLCCHF__ALKNAMLGEJM(pSVar2,IKKKILCDMMB,MLLHENCNAMI,method_00);
    NEHNBJKKABI__IGOPCLNJIGA(LILLFLCEFNK,pSVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

