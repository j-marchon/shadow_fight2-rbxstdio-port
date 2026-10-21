// PNLFHHJGDLI$$.cctor @ RVA 0x33272BC

void PNLFHHJGDLI___cctor(MethodInfo *method)

{
  PNLFHHJGDLI_StaticFields *pPVar1;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *pSVar2;
  System_Collections_Generic_List_KeyValuePair_string__uint___o **ppSVar3;
  undefined8 uVar4;
  
  if ((DAT_04567897 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_uint>>_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_19777);
    FUN_01bab630(&StringLiteral_1489);
    FUN_01bab630(&StringLiteral_21131);
    FUN_01bab630(&StringLiteral_1479);
    DAT_04567897 = 1;
  }
  pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
  pPVar1->EEFDLAHNJHL = 0;
  pPVar1->CPOAGJAKIDL = 1;
  pPVar1->PLGCMDGLNEL = 10;
  pPVar1->NOGIEJFCDNM = StringLiteral_21131;
  thunk_FUN_01c20e04();
  PNLFHHJGDLI_TypeInfo->static_fields->FHAAJJAKNEJ = StringLiteral_19777;
  thunk_FUN_01c20e04();
  PNLFHHJGDLI_TypeInfo->static_fields->JBHIKFIKHHG = StringLiteral_1489;
  thunk_FUN_01c20e04();
  PNLFHHJGDLI_TypeInfo->static_fields->CAFEPKICHPK = StringLiteral_1479;
  thunk_FUN_01c20e04();
  uVar4 = NEON_fmov(0x3f800000,4);
  pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
  pPVar1->EHPFFCGFFOO = (float)(int)uVar4;
  pPVar1->AGBNCFPOLOE = (float)(int)((ulong)uVar4 >> 0x20);
  pPVar1->MJGOIJNGHKE = false;
  pPVar1->GBBBAEHFPLH = false;
  pPVar1->MGFLMNJLJLK = false;
  pSVar2 = (System_Collections_Generic_List_KeyValuePair_string__uint___o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<string,_uint>>_TypeInfo);
  System_Collections_Generic_List<KeyValuePair<object,_uint>>___ctor
            ((System_Collections_Generic_List_T__o *)pSVar2,
             Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>__ctor__);
  ppSVar3 = &PNLFHHJGDLI_TypeInfo->static_fields->CPHHBNFBJGP;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  pSVar2 = (System_Collections_Generic_List_KeyValuePair_string__uint___o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<string,_uint>>_TypeInfo);
  System_Collections_Generic_List<KeyValuePair<object,_uint>>___ctor
            ((System_Collections_Generic_List_T__o *)pSVar2,
             Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>__ctor__);
  ppSVar3 = &PNLFHHJGDLI_TypeInfo->static_fields->CMDACPPJJEF;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  PNLFHHJGDLI_TypeInfo->static_fields->BLMPLPPHAGO = 10;
  return;
}

