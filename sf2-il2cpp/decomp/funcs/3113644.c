// FJIFBJMMKHG$$ToString @ RVA 0x3113644

System_String_o * FJIFBJMMKHG__ToString(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566599 & 1) == 0) {
    FUN_01bab630(&StringLiteral_255);
    DAT_04566599 = 1;
  }
  pSVar1 = System_String__Concat
                     ((__this->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_255,
                      (__this->fields)._CIEBCKIBJHL_k__BackingField,(MethodInfo *)0x0);
  return pSVar1;
}

