// EINKKMIHCHI$$ADBBGOBBAJA @ RVA 0x34C6F4C

System_String_o * EINKKMIHCHI__ADBBGOBBAJA(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  GPFMGALHFJK_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568641 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04568641 = 1;
    method = extraout_x1;
  }
  pGVar1 = (__this->fields).KAKIHIMNDAE;
  if (pGVar1 != (GPFMGALHFJK_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(pGVar1->klass->vtable)._48_IKGOHPFGLKD.methodPtr)
                       (pGVar1,(pGVar1->klass->vtable)._48_IKGOHPFGLKD.method);
    if (pSVar2 == (System_String_o *)0x0) {
      pSVar2 = string_TypeInfo->static_fields->Empty;
    }
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

