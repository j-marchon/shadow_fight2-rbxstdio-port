// TypeDefIndex 2141
// Namespace: 
// public class BKFFOLFKECB : HPEENDCCJND
// Fields:

// ===== protected override string AKPPNIPNKDH()  [RVA 0x32D42CC]
// BKFFOLFKECB$$AKPPNIPNKDH @ RVA 0x32D42CC

System_String_o * BKFFOLFKECB__AKPPNIPNKDH(BKFFOLFKECB_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  int32_t local_24;
  
  if ((DAT_04567573 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1222/*",v2]+-00"*/);
    FUN_01bab630(&StringLiteral_1143/*"*v4\n                            - ?Player[].Level*v5\n                 "*/);
    FUN_01bab630(&StringLiteral_2502/*"?Multi[0"*/);
    DAT_04567573 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_2502/*"?Multi[0"*/;
      thunk_FUN_01c20e04(values->m_Items);
      local_24 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
      pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar1;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_1222/*",v2]+-00"*/;
          thunk_FUN_01c20e04(values->m_Items + 2);
          local_24 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
          pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_1143/*"*v4\n                            - ?Player[].Level*v5\n                 "*/;
              thunk_FUN_01c20e04();
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar1;
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


// ===== protected override object CJOHHBMFAAG()  [RVA 0x32D4450]
// BKFFOLFKECB$$CJOHHBMFAAG @ RVA 0x32D4450

Il2CppObject * BKFFOLFKECB__CJOHHBMFAAG(BKFFOLFKECB_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  int32_t iVar6;
  Roster_o *__this_00;
  Il2CppObject *pIVar7;
  int local_44;
  
  if ((DAT_04567574 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567574 = 1;
  }
  iVar1 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  iVar2 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  iVar3 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  iVar4 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (Roster_o *)0x0) {
    iVar5 = Roster__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    iVar6 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
    local_44 = iVar2 * iVar1 - (iVar4 * iVar3 + iVar6 * iVar5);
    pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
    return pIVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x32D45A0]
// BKFFOLFKECB$$ODGFCLOEKJD @ RVA 0x32D45A0

void BKFFOLFKECB__ODGFCLOEKJD(BKFFOLFKECB_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  int32_t local_24;
  
  if ((DAT_04567575 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04567575 = 1;
  }
  iVar1 = 5;
  do {
    local_24 = HPEENDCCJND__MNAABHNFFGN((HPEENDCCJND_o *)__this,0,100,(MethodInfo *)0x0);
    MNODCIGLHEL = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,MNODCIGLHEL,(MethodInfo *)0x0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ===== public void .ctor()  [RVA 0x32D462C]
// BKFFOLFKECB$$.ctor @ RVA 0x32D462C

void BKFFOLFKECB___ctor(BKFFOLFKECB_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}

