// CNLIOJMLIFN$$ToString @ RVA 0x3596438

System_String_o * CNLIOJMLIFN__ToString(CNLIOJMLIFN_o *__this,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  int32_t local_24;
  
                    /* try { // try from 03696448 to 037964cb has its CatchHandler @ 036965a4 */
  if ((DAT_04568da4 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_22295);
    DAT_04568da4 = 1;
  }
  local_24 = (__this->fields)._AJBLFMPFEIO_k__BackingField;
  pSVar1 = (__this->fields)._COIPKAKHDFP_k__BackingField;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  pSVar1 = System_String__Format(StringLiteral_22295,(Il2CppObject *)pSVar1,arg1,(MethodInfo *)0x0);
  return pSVar1;
}

