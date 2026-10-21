// EFODCAGPLNE$$CJOHHBMFAAG @ RVA 0x33937E0

Il2CppObject * EFODCAGPLNE__CJOHHBMFAAG(EFODCAGPLNE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  System_String_array *values;
  int local_34;
  
  if ((DAT_04567c39 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22506);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_2634);
    DAT_04567c39 = 1;
  }
  pSVar4 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  iVar1 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  iVar2 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  iVar3 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
  local_34 = iVar3 * (iVar2 + iVar1);
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_2634;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar4;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar4);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_22506;
          thunk_FUN_01c20e04(values->m_Items + 2);
          pSVar4 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar4;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar4);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_22500;
              thunk_FUN_01c20e04();
              pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
              return (Il2CppObject *)pSVar4;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

