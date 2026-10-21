// OGFBENMAGJJ$$JJLBOMEDNIJ @ RVA 0x348DBDC

void OGFBENMAGJJ__JJLBOMEDNIJ
               (OGFBENMAGJJ_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,FPPKHNNABAD_o *NDBPOFMECGL,
               BOFEMGGNODC_o *CPECAEHDDDB,OGFBENMAGJJ_NLOBPGHHIEF_o *HPACPFLKHPK,
               System_Text_StringBuilder_o *KHHGPLOMHBB,MethodInfo *method)

{
  byte bVar1;
  EJALJLHMDHM_c *pEVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  BOFEMGGNODC_c *pBVar7;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  
  if ((DAT_045683f8 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BOFEMGGNODC>__);
    FUN_01bab630(&EJALJLHMDHM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BOFEMGGNODC>_GetEnumerator__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_1116);
    FUN_01bab630(&StringLiteral_15862);
    FUN_01bab630(&StringLiteral_1115);
    FUN_01bab630(&StringLiteral_220);
    DAT_045683f8 = 1;
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  if ((HPACPFLKHPK != (OGFBENMAGJJ_NLOBPGHHIEF_o *)0x0) &&
     ((HPACPFLKHPK->fields).KFNOHOOHFPG = (HPACPFLKHPK->fields).KFNOHOOHFPG + 1,
     pEVar2 = EJALJLHMDHM_TypeInfo, CPECAEHDDDB != (BOFEMGGNODC_o *)0x0)) {
    pBVar7 = CPECAEHDDDB->klass;
    bVar1 = (EJALJLHMDHM_TypeInfo->_2).naturalAligment;
    if (((pBVar7->_2).naturalAligment < bVar1) ||
       ((pBVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)EJALJLHMDHM_TypeInfo)) {
      __this_00 = (System_Collections_Generic_List_object__o *)
                  (*(pBVar7->vtable)._7_HELIKPINEIM.methodPtr)
                            (CPECAEHDDDB,(pBVar7->vtable)._7_HELIKPINEIM.method);
      if ((__this_00 != (System_Collections_Generic_List_object__o *)0x0) &&
         (bVar3 = DJNBJHPDKDP__OBECCOPBADO<object>
                            ((System_Collections_Generic_List_T__o *)__this_00,
                             Method_DJNBJHPDKDP_OBECCOPBADO<BOFEMGGNODC>__), !bVar3)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_68,__this_00,
                   Method_System_Collections_Generic_List<BOFEMGGNODC>_GetEnumerator__);
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_68,
                                  Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_MoveNext__
                                 ), bVar3) {
          OGFBENMAGJJ__JJLBOMEDNIJ
                    (__this,AAJBIMFNMBB,NDBPOFMECGL,(BOFEMGGNODC_o *)local_68.fields._current,
                     HPACPFLKHPK,KHHGPLOMHBB,method);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_68,
                   Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_Dispose__);
      }
      return;
    }
    (HPACPFLKHPK->fields).NHNMPHNJLHH = (HPACPFLKHPK->fields).NHNMPHNJLHH + 1;
    if (((CPECAEHDDDB->klass->_2).naturalAligment < bVar1) ||
       ((CPECAEHDDDB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pEVar2))
    goto LAB_0358e060;
    pHVar4 = EJALJLHMDHM__DHKCDPPAFFC((EJALJLHMDHM_o *)CPECAEHDDDB,AAJBIMFNMBB,(MethodInfo *)0x0);
    pBVar7 = CPECAEHDDDB[1].klass;
    if (pBVar7 == (BOFEMGGNODC_c *)0x0) goto LAB_0358e060;
    bVar3 = System_String__StartsWith
                      ((System_String_o *)pBVar7,StringLiteral_15862,(MethodInfo *)0x0);
    if ((!bVar3) && (pHVar4 == (HOOAAGABMBL_o *)0x0)) {
      (HPACPFLKHPK->fields).GLDHJGFLPAN = (HPACPFLKHPK->fields).GLDHJGFLPAN + 1;
      pSVar5 = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
      if ((NDBPOFMECGL == (FPPKHNNABAD_o *)0x0) || (pSVar5 == (System_String_array *)0x0))
      goto LAB_0358e060;
      if ((int)pSVar5->max_length == 0) goto LAB_0358e064;
      pSVar5->m_Items[0] = (NDBPOFMECGL->fields)._COIPKAKHDFP_k__BackingField;
      thunk_FUN_01c20e04(pSVar5->m_Items);
      if ((uint)pSVar5->max_length < 2) goto LAB_0358e064;
      pSVar5->m_Items[1] = StringLiteral_167;
      thunk_FUN_01c20e04(pSVar5->m_Items + 1);
      if ((uint)pSVar5->max_length < 3) goto LAB_0358e064;
      pSVar5->m_Items[2] = (CPECAEHDDDB->fields).LEMICKEFMOJ;
      thunk_FUN_01c20e04(pSVar5->m_Items + 2);
      if ((uint)pSVar5->max_length < 4) goto LAB_0358e064;
      pSVar5->m_Items[3] = StringLiteral_220;
      thunk_FUN_01c20e04(pSVar5->m_Items + 3);
      if ((uint)pSVar5->max_length < 5) goto LAB_0358e064;
      pSVar5->m_Items[4] = (System_String_o *)pBVar7;
      thunk_FUN_01c20e04(pSVar5->m_Items + 4,pBVar7);
      if ((uint)pSVar5->max_length < 6) goto LAB_0358e064;
      pSVar5->m_Items[5] = StringLiteral_1115;
      thunk_FUN_01c20e04();
      pSVar6 = System_String__Concat(pSVar5,(MethodInfo *)0x0);
      if (KHHGPLOMHBB == (System_Text_StringBuilder_o *)0x0) goto LAB_0358e060;
      System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,pSVar6,(MethodInfo *)0x0);
    }
    if (pHVar4 != (HOOAAGABMBL_o *)0x0 || ((bVar3 ^ 0xffU) & 1) != 0) {
      return;
    }
    (HPACPFLKHPK->fields).HFCMMCLMHMF = (HPACPFLKHPK->fields).HFCMMCLMHMF + 1;
    pSVar5 = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
    if ((NDBPOFMECGL != (FPPKHNNABAD_o *)0x0) && (pSVar5 != (System_String_array *)0x0)) {
      if ((int)pSVar5->max_length != 0) {
        pSVar5->m_Items[0] = (NDBPOFMECGL->fields)._COIPKAKHDFP_k__BackingField;
        thunk_FUN_01c20e04(pSVar5->m_Items);
        if (1 < (uint)pSVar5->max_length) {
          pSVar5->m_Items[1] = StringLiteral_167;
          thunk_FUN_01c20e04(pSVar5->m_Items + 1);
          if (2 < (uint)pSVar5->max_length) {
            pSVar5->m_Items[2] = (CPECAEHDDDB->fields).LEMICKEFMOJ;
            thunk_FUN_01c20e04(pSVar5->m_Items + 2);
            if (3 < (uint)pSVar5->max_length) {
              pSVar5->m_Items[3] = StringLiteral_220;
              thunk_FUN_01c20e04(pSVar5->m_Items + 3);
              if (4 < (uint)pSVar5->max_length) {
                pSVar5->m_Items[4] = (System_String_o *)pBVar7;
                thunk_FUN_01c20e04(pSVar5->m_Items + 4,pBVar7);
                if (5 < (uint)pSVar5->max_length) {
                  pSVar5->m_Items[5] = StringLiteral_1116;
                  thunk_FUN_01c20e04();
                  pSVar6 = System_String__Concat(pSVar5,(MethodInfo *)0x0);
                  if (KHHGPLOMHBB != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,pSVar6,(MethodInfo *)0x0);
                    return;
                  }
                  goto LAB_0358e060;
                }
              }
            }
          }
        }
      }
LAB_0358e064:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0358e060:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

