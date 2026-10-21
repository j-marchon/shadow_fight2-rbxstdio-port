// AEGOLGIJEBI.BPIAJOBCKFC$$.ctor @ RVA 0x3303BF4

void AEGOLGIJEBI_BPIAJOBCKFC___ctor
               (AEGOLGIJEBI_BPIAJOBCKFC_o *__this,System_String_o *NLKOFFFAFHM,MethodInfo *method)

{
  int iVar1;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str1;
  System_String_o **ppSVar4;
  System_String_o **ppSVar5;
  System_String_o **ppSVar6;
  AEGOLGIJEBI_BPIAJOBCKFC_Fields *pAVar7;
  int local_48;
  int32_t local_44;
  
  if ((DAT_0456773a & 1) == 0) {
    FUN_01bab630(&StringLiteral_4516);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_4517);
    DAT_0456773a = 1;
  }
  local_48 = 0;
  pAVar7 = &__this->fields;
  pAVar7->MIPJOEKCFOF = StringLiteral_1;
  thunk_FUN_01c20e04(pAVar7);
  ppSVar6 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar6 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar6);
  ppSVar5 = &(__this->fields).JAICMIMBIOA;
  *ppSVar5 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar5);
  ppSVar4 = &(__this->fields).GFGEOMECLKC;
  *ppSVar4 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pAVar7->MIPJOEKCFOF = NLKOFFFAFHM;
  thunk_FUN_01c20e04(pAVar7,NLKOFFFAFHM);
  local_44 = PCOEHCPGBBG__DGMBALOKJDJ(NLKOFFFAFHM,0x3d,(MethodInfo *)0x0);
  if (local_44 == 1) {
    if ((NLKOFFFAFHM == (System_String_o *)0x0) ||
       (pSVar2 = System_String__Split(NLKOFFFAFHM,0x3d,0,(MethodInfo *)0x0),
       pSVar2 == (System_String_array *)0x0)) {
LAB_03403dc0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (int)pSVar2->max_length;
    if (iVar1 == 2) {
      if (pSVar2->m_Items[0] == (System_String_o *)0x0) goto LAB_03403dc0;
      pSVar3 = System_String__ToLower(pSVar2->m_Items[0],(MethodInfo *)0x0);
      *ppSVar6 = pSVar3;
      thunk_FUN_01c20e04(ppSVar6,pSVar3);
      if ((uint)pSVar2->max_length < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      *ppSVar5 = pSVar2->m_Items[1];
      thunk_FUN_01c20e04(ppSVar5);
      pSVar3 = StringLiteral_1;
      *ppSVar4 = StringLiteral_1;
      goto LAB_03403da0;
    }
    local_48 = iVar1;
    str1 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_4517;
  }
  else {
    str1 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_4516;
  }
                    /* try { // try from 03403d8c to 03503d93 has its CatchHandler @ 0340421c */
  pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
  *ppSVar4 = pSVar3;
LAB_03403da0:
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
                    /* try { // try from 03403da8 to 03503dab has its CatchHandler @ 03404174 */
                    /* try { // try from 03403db4 to 03503dd3 has its CatchHandler @ 03404188 */
  return;
}

