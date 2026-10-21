// AJMOIOIBPGP$$HPNAOBPMDMP @ RVA 0x32743E0

bool AJMOIOIBPGP__HPNAOBPMDMP
               (AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,POGBKGFBOLC_o *PLJKGEJHILJ,
               IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  System_String_array *values;
  System_Func_HEFOANCOHDC__string__o **ppSVar1;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar2;
  System_String_o *pSVar3;
  System_Func_PKKLIJLIKGF__string__o **ppSVar4;
  System_Collections_Generic_List_PKKLIJLIKGF__o *pSVar5;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar6;
  undefined8 *puVar7;
  bool bVar8;
  System_Func_HEFOANCOHDC__string__o *selector;
  System_Func_PKKLIJLIKGF__string__o *selector_00;
  
  if ((DAT_04567248 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<HEFOANCOHDC,_string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<PKKLIJLIKGF,_string>__);
    FUN_01bab630(&System_Func<HEFOANCOHDC,_string>_TypeInfo);
    FUN_01bab630(&System_Func<PKKLIJLIKGF,_string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_MFKFCHNOEMM__);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_PGFJPEICPMP__);
    FUN_01bab630(&AJMOIOIBPGP_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_816);
    FUN_01bab630(&StringLiteral_13949);
    FUN_01bab630(&StringLiteral_822);
    FUN_01bab630(&StringLiteral_819);
    FUN_01bab630(&StringLiteral_1155);
    FUN_01bab630(&StringLiteral_844);
    FUN_01bab630(&StringLiteral_853);
    FUN_01bab630(&StringLiteral_855);
    DAT_04567248 = 1;
  }
  if ((PLJKGEJHILJ == (POGBKGFBOLC_o *)0x0) ||
     (pSVar5 = (PLJKGEJHILJ->fields)._OADOOFBKPEE_k__BackingField,
     pSVar5 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0)) {
LAB_03374984:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pSVar5->fields)._size == 0) {
                    /* try { // try from 0337468c to 034746ab has its CatchHandler @ 03374b04 */
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
    if (values == (System_String_array *)0x0) goto LAB_03374984;
    if ((int)values->max_length == 0) {
LAB_03374980:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* try { // try from 033746b8 to 034746bf has its CatchHandler @ 03374ad0 */
    values->m_Items[0] = StringLiteral_13949;
    thunk_FUN_01c20e04(values->m_Items);
                    /* try { // try from 033746d0 to 034746d7 has its CatchHandler @ 03374ae8 */
    if ((uint)values->max_length < 2) goto LAB_03374980;
                    /* try { // try from 033746d8 to 034746f3 has its CatchHandler @ 03374b08 */
    values->m_Items[1] = (PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04(values->m_Items + 1);
    if ((uint)values->max_length < 3) goto LAB_03374980;
                    /* try { // try from 03374700 to 03474707 has its CatchHandler @ 03374a80 */
    values->m_Items[2] = StringLiteral_822;
    thunk_FUN_01c20e04();
    if (NLFMDIGKNGP == (OPNMPAJKDMI_o *)0x0) goto LAB_03374984;
                    /* try { // try from 03374718 to 0347471f has its CatchHandler @ 03374ac4 */
    pSVar3 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
                    /* try { // try from 03374720 to 0347473b has its CatchHandler @ 03374b0c */
    if ((uint)values->max_length < 4) goto LAB_03374980;
    values->m_Items[3] = pSVar3;
    thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
                    /* try { // try from 03374748 to 0347474f has its CatchHandler @ 03374a90 */
    if ((uint)values->max_length < 5) goto LAB_03374980;
    puVar7 = &StringLiteral_819;
  }
  else {
    if ((ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) ||
       (pSVar6 = (ENHJPOHLMCL->fields).PAPANCDPPIF,
       pSVar6 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) goto LAB_03374984;
    if ((pSVar6->fields)._size < 1) {
                    /* try { // try from 03374768 to 03474773 has its CatchHandler @ 03374a8c */
      AMIINPEKKFB__NKGDNFCCFCD
                ((PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03374784 to 0347478b has its CatchHandler @ 03374ab8 */
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
      if (values == (System_String_array *)0x0) goto LAB_03374984;
      if ((int)values->max_length == 0) goto LAB_03374980;
                    /* try { // try from 0337479c to 034747a3 has its CatchHandler @ 03374a68 */
                    /* try { // try from 033747a4 to 034747c3 has its CatchHandler @ 03374b00 */
      values->m_Items[0] = StringLiteral_13949;
      thunk_FUN_01c20e04(values->m_Items);
      if ((uint)values->max_length < 2) goto LAB_03374980;
      values->m_Items[1] = (PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField;
                    /* try { // try from 033747d0 to 034747d7 has its CatchHandler @ 03374a6c */
      thunk_FUN_01c20e04(values->m_Items + 1);
      if ((uint)values->max_length < 3) goto LAB_03374980;
                    /* try { // try from 033747e8 to 034747ef has its CatchHandler @ 03374ab0 */
                    /* try { // try from 033747f0 to 034747fb has its CatchHandler @ 03374aa8 */
      values->m_Items[2] = StringLiteral_822;
      thunk_FUN_01c20e04();
      if (NLFMDIGKNGP == (OPNMPAJKDMI_o *)0x0) goto LAB_03374984;
      pSVar3 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
                    /* try { // try from 03374810 to 03474817 has its CatchHandler @ 03374ac8 */
      if ((uint)values->max_length < 4) goto LAB_03374980;
      values->m_Items[3] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
                    /* try { // try from 03374828 to 0347482f has its CatchHandler @ 03374a94 */
                    /* try { // try from 03374830 to 0347483b has its CatchHandler @ 03374a88 */
      if ((uint)values->max_length < 5) goto LAB_03374980;
      values->m_Items[4] = StringLiteral_844;
      thunk_FUN_01c20e04();
                    /* try { // try from 03374850 to 03474857 has its CatchHandler @ 03374a7c */
      pSVar5 = (PLJKGEJHILJ->fields)._OADOOFBKPEE_k__BackingField;
                    /* try { // try from 03374860 to 03474867 has its CatchHandler @ 03374abc */
      if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 03374868 to 03474873 has its CatchHandler @ 03374a70 */
      }
      pSVar3 = StringLiteral_1155;
      selector_00 = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__39_1;
      if (selector_00 == (System_Func_PKKLIJLIKGF__string__o *)0x0) {
                    /* try { // try from 03374888 to 0347488f has its CatchHandler @ 03374ac0 */
        if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 03374898 to 0347489f has its CatchHandler @ 03374a78 */
                    /* try { // try from 033748a0 to 034748bb has its CatchHandler @ 03374afc */
        selector_00 = (System_Func_PKKLIJLIKGF__string__o *)
                      thunk_FUN_01bda818(System_Func<PKKLIJLIKGF,_string>_TypeInfo);
                    /* try { // try from 033748c4 to 034748cb has its CatchHandler @ 03374a64 */
        System_Func<object,_object>___ctor();
        ppSVar4 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__39_1;
        *ppSVar4 = selector_00;
        thunk_FUN_01c20e04(ppSVar4,selector_00);
      }
                    /* try { // try from 033748e0 to 034748e7 has its CatchHandler @ 03374a54 */
      pSVar2 = System_Linq_Enumerable__Select<object,_object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                          (System_Func_TSource__TResult__o *)selector_00,
                          Method_System_Linq_Enumerable_Select<PKKLIJLIKGF,_string>__);
      pSVar3 = System_String__Join(pSVar3,(System_Collections_Generic_IEnumerable_string__o *)pSVar2
                                   ,(MethodInfo *)0x0);
      if ((uint)values->max_length < 6) goto LAB_03374980;
      values->m_Items[5] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items + 5,pSVar3);
                    /* try { // try from 03374928 to 0347494b has its CatchHandler @ 03374a5c */
      if ((uint)values->max_length < 7) goto LAB_03374980;
      bVar8 = true;
      values->m_Items[6] = StringLiteral_853;
      goto LAB_03374948;
    }
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
    if (values == (System_String_array *)0x0) goto LAB_03374984;
    if ((int)values->max_length == 0) goto LAB_03374980;
    values->m_Items[0] = StringLiteral_13949;
    thunk_FUN_01c20e04(values->m_Items);
    if ((uint)values->max_length < 2) goto LAB_03374980;
    values->m_Items[1] = (PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04(values->m_Items + 1);
                    /* try { // try from 0337457c to 034745a3 has its CatchHandler @ 03374af4 */
    if ((uint)values->max_length < 3) goto LAB_03374980;
    values->m_Items[2] = StringLiteral_816;
    thunk_FUN_01c20e04();
    pSVar6 = (ENHJPOHLMCL->fields).PAPANCDPPIF;
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = StringLiteral_1155;
    selector = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__39_0;
    if (selector == (System_Func_HEFOANCOHDC__string__o *)0x0) {
                    /* try { // try from 033745d8 to 03474603 has its CatchHandler @ 03374af0 */
      if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      selector = (System_Func_HEFOANCOHDC__string__o *)
                 thunk_FUN_01bda818(System_Func<HEFOANCOHDC,_string>_TypeInfo);
      System_Func<object,_object>___ctor();
      ppSVar1 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__39_0;
      *ppSVar1 = selector;
      thunk_FUN_01c20e04(ppSVar1,selector);
    }
    pSVar2 = System_Linq_Enumerable__Select<object,_object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                        (System_Func_TSource__TResult__o *)selector,
                        Method_System_Linq_Enumerable_Select<HEFOANCOHDC,_string>__);
                    /* try { // try from 0337464c to 0347465b has its CatchHandler @ 03374b10 */
    pSVar3 = System_String__Join(pSVar3,(System_Collections_Generic_IEnumerable_string__o *)pSVar2,
                                 (MethodInfo *)0x0);
    if ((uint)values->max_length < 4) goto LAB_03374980;
    values->m_Items[3] = pSVar3;
                    /* try { // try from 0337466c to 03474673 has its CatchHandler @ 03374ad4 */
    thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
    if ((uint)values->max_length < 5) goto LAB_03374980;
                    /* try { // try from 03374684 to 0347468b has its CatchHandler @ 03374acc */
    puVar7 = &StringLiteral_855;
  }
  bVar8 = false;
                    /* try { // try from 03374760 to 03474767 has its CatchHandler @ 03374a74 */
  values->m_Items[4] = (System_String_o *)*puVar7;
LAB_03374948:
  thunk_FUN_01c20e04();
  pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
                    /* try { // try from 0337495c to 03474963 has its CatchHandler @ 03374a58 */
                    /* try { // try from 03374964 to 034749ff has its CatchHandler @ 03374390 */
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
  return bVar8;
}

