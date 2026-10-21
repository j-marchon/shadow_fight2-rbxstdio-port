// IDDIABHBDEE$$HFHBOJAMGEK @ RVA 0x3388A90

void IDDIABHBDEE__HFHBOJAMGEK
               (IDDIABHBDEE_o *__this,System_String_o *CJFAPGEEPLM,System_TimeSpan_o MINHPKOPAIE,
               System_Action_bool__o *BLMFLPJJMPF,MethodInfo *method)

{
  bool bVar1;
  IDDIABHBDEE_JFFCLNDLAKP_o *__this_00;
  System_Action_bool__o **ppSVar2;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_HashSet_string__o **ppSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  EDLFPEGBIFO_o *__this_02;
  Il2CppObject *arg1;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  int32_t local_44;
  
                    /* try { // try from 03488a94 to 03588a9b has its CatchHandler @ 03488d74 */
                    /* try { // try from 03488ab8 to 03588abb has its CatchHandler @ 03488d68 */
                    /* try { // try from 03488abc to 03588ac7 has its CatchHandler @ 03488d70 */
  if ((DAT_04567bbe & 1) == 0) {
                    /* try { // try from 03488ac8 to 03588d5f has its CatchHandler @ 034888a4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_527);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_528);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_529);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_530);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&EDLFPEGBIFO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_JFFCLNDLAKP_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04567bbe = 1;
  }
  __this_00 = (IDDIABHBDEE_JFFCLNDLAKP_o *)thunk_FUN_01bda818(IDDIABHBDEE_JFFCLNDLAKP_TypeInfo);
  IDDIABHBDEE_JFFCLNDLAKP___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (IDDIABHBDEE_JFFCLNDLAKP_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    thunk_FUN_01c20e04(&__this_00->fields,__this);
    ppSVar8 = &(__this_00->fields).url;
    *ppSVar8 = CJFAPGEEPLM;
    thunk_FUN_01c20e04(ppSVar8,CJFAPGEEPLM);
    (__this_00->fields).timeout.fields._ticks = (int64_t)MINHPKOPAIE.fields._ticks;
    ppSVar2 = &(__this_00->fields).callback;
    *ppSVar2 = BLMFLPJJMPF;
    thunk_FUN_01c20e04(ppSVar2,BLMFLPJJMPF);
    __this_01 = (System_Collections_Generic_HashSet_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
    System_Collections_Generic_HashSet<object>___ctor
              (__this_01,Method_System_Collections_Generic_HashSet<string>__ctor__);
    ppSVar3 = &(__this_00->fields).uniqueUrls;
    *ppSVar3 = (System_Collections_Generic_HashSet_string__o *)__this_01;
    thunk_FUN_01c20e04(ppSVar3,__this_01);
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(*ppSVar8,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar7 = string_TypeInfo->static_fields->Empty;
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_527,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_528,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      __this_02 = (EDLFPEGBIFO_o *)thunk_FUN_01bda818(EDLFPEGBIFO_TypeInfo);
      EDLFPEGBIFO___ctor(__this_02,pSVar7,(System_Byte_array *)0x0,pSVar6,(MethodInfo *)0x0);
      IDDIABHBDEE_JFFCLNDLAKP__PAPMCOCCBOO(__this_00,__this_02,(MethodInfo *)0x0);
      return;
    }
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_529,(MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_530,(MethodInfo *)0x0);
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pSVar7 = *ppSVar8;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo);
    }
    local_44 = LIIFLGALGNK__HLMBDJOGONJ(1000000,(MethodInfo *)0x0);
                    /* try { // try from 03488d60 to 03588d63 has its CatchHandler @ 03488d6c */
                    /* try { // try from 03488d64 to 03588d8b has its CatchHandler @ 034888a4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03488ab8 with catch @ 03488d68
                        */
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03488d60 with catch @ 03488d6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03488abc with catch @ 03488d70
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03488a94 with catch @ 03488d74
                        */
    pSVar6 = System_String__Format(pSVar6,(Il2CppObject *)pSVar7,arg1,(MethodInfo *)0x0);
    (__this_00->fields).url = pSVar6;
                    /* try { // try from 03488d8c to 03588d8f has its CatchHandler @ 03488db0 */
    thunk_FUN_01c20e04(ppSVar8,pSVar6);
                    /* try { // try from 03488d90 to 03588db7 has its CatchHandler @ 034888a4 */
    (__this->fields)._FLMGPIBLEFL_k__BackingField = false;
    IDDIABHBDEE_JFFCLNDLAKP__ENPPBILLJOG(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03488d8c with catch @ 03488db0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03488db8 to 03588dbf has its CatchHandler @ 03488dd4 */
  FUN_01bab8c8();
}

