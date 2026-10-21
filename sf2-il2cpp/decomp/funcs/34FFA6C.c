// LHKALFIIJKB$$.cctor @ RVA 0x34FFA6C

void LHKALFIIJKB___cctor(MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *pSVar2;
  System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o **ppSVar3;
  LHKALFIIJKB_CFFGMHNFPLN_o *__this;
  MethodInfo *method_00;
  System_String_o *pSVar4;
  System_Delegate_o *pSVar5;
  long lVar6;
  LHKALFIIJKB_CFFGMHNFPLN_array *pLVar7;
  System_Action_string__byte____o *pSVar8;
  System_Action_string__o *pSVar9;
  System_Action_string__byte____o **ppSVar10;
  System_Action_string__o **ppSVar11;
  System_Action_string__c *pSVar12;
  
  if ((DAT_04568848 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<string,_byte[]>_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_CFFGMHNFPLN_TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_BDHOPPBMMCH__);
    FUN_01bab630(&Method_LHKALFIIJKB_PADAJCPPCBJ__);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21892);
    DAT_04568848 = 1;
  }
  pSVar2 = (System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>__ctor__);
  ppSVar3 = &LHKALFIIJKB_TypeInfo->static_fields->KLMLDJJBLKO;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  if (DAT_04568906 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568906 = '\x01';
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = LHKALFIIJKB_TypeInfo->static_fields->KLMLDJJBLKO;
  LHKALFIIJKB_TypeInfo->static_fields->_IKKBHKLDJLD_k__BackingField = true;
  if (pSVar2 == (System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *)0x0) {
LAB_035ffe24:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    pSVar2 = LHKALFIIJKB_TypeInfo->static_fields->KLMLDJJBLKO;
  }
  __this = (LHKALFIIJKB_CFFGMHNFPLN_o *)thunk_FUN_01bda818(LHKALFIIJKB_CFFGMHNFPLN_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar4 = LHKALFIIJKB__OPIFOELMDAH(method_00);
  pSVar4 = System_String__Concat(pSVar4,StringLiteral_21892,(MethodInfo *)0x0);
  if (__this == (LHKALFIIJKB_CFFGMHNFPLN_o *)0x0) goto LAB_035ffe24;
  (__this->fields).IBOLCNEIGNI = pSVar4;
  thunk_FUN_01c20e04();
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)0x0);
  (__this->fields).JPFHNMLAJLM = pSVar4;
  thunk_FUN_01c20e04();
  lVar6 = Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_Add__;
  if (pSVar2 == (System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *)0x0)
  goto LAB_035ffe24;
  pLVar7 = (pSVar2->fields)._items;
  (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
  if (pLVar7 == (LHKALFIIJKB_CFFGMHNFPLN_array *)0x0) goto LAB_035ffe24;
  uVar1 = (pSVar2->fields)._size;
  if (uVar1 < (uint)pLVar7->max_length) {
    (pSVar2->fields)._size = uVar1 + 1;
    pLVar7->m_Items[(int)uVar1] = __this;
    thunk_FUN_01c20e04(pLVar7->m_Items + (int)uVar1,__this);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)__this,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
  }
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar8 = NHJCFGACFDF_TypeInfo->static_fields->GEHAHBFKNCM;
  pSVar5 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<string,_byte[]>_TypeInfo);
  System_Action<object,_object>___ctor();
  pSVar5 = System_Delegate__Combine((System_Delegate_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  pSVar12 = (System_Action_string__c *)System_Action<string,_byte[]>_TypeInfo;
  if (pSVar5 == (System_Delegate_o *)0x0) {
    lVar6 = 0;
    ppSVar10 = &NHJCFGACFDF_TypeInfo->static_fields->GEHAHBFKNCM;
    *ppSVar10 = (System_Action_string__byte____o *)0x0;
  }
  else {
    pSVar8 = (System_Action_string__byte____o *)
             thunk_FUN_01bda71c(pSVar5,System_Action<string,_byte[]>_TypeInfo);
    if (pSVar8 == (System_Action_string__byte____o *)0x0) goto LAB_035ffe28;
    ppSVar10 = &NHJCFGACFDF_TypeInfo->static_fields->GEHAHBFKNCM;
    *ppSVar10 = pSVar8;
    pSVar12 = (System_Action_string__c *)System_Action<string,_byte[]>_TypeInfo;
    lVar6 = thunk_FUN_01bda71c(pSVar5,System_Action<string,_byte[]>_TypeInfo);
    if (lVar6 == 0) goto LAB_035ffe34;
  }
  thunk_FUN_01c20e04(ppSVar10,lVar6);
  pSVar9 = NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
  pSVar5 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  pSVar5 = System_Delegate__Combine((System_Delegate_o *)pSVar9,pSVar5,(MethodInfo *)0x0);
  pSVar12 = System_Action<string>_TypeInfo;
  if (pSVar5 == (System_Delegate_o *)0x0) {
    lVar6 = 0;
    ppSVar11 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar11 = (System_Action_string__o *)0x0;
  }
  else {
    pSVar9 = (System_Action_string__o *)thunk_FUN_01bda71c(pSVar5,System_Action<string>_TypeInfo);
    if (pSVar9 == (System_Action_string__o *)0x0) {
LAB_035ffe28:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar5,pSVar12);
    }
    ppSVar11 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar11 = pSVar9;
    pSVar12 = System_Action<string>_TypeInfo;
    lVar6 = thunk_FUN_01bda71c(pSVar5,System_Action<string>_TypeInfo);
    if (lVar6 == 0) {
LAB_035ffe34:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar5,pSVar12);
    }
  }
  thunk_FUN_01c20e04(ppSVar11,lVar6);
  return;
}

