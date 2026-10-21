// LJNDBPEOILF$$ToString @ RVA 0x3084CB8

System_String_o * LJNDBPEOILF__ToString(LJNDBPEOILF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  int32_t local_24;
  
  if ((DAT_04566017 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04566017 = 1;
  }
  local_24 = (__this->fields)._PFHJDMOFFOG_k__BackingField;
  pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_1;
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar1 = pSVar2;
  }
  return pSVar1;
}

