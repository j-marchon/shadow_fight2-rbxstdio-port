// CFEANGJDHEE$$CEOCJPLKFNF @ RVA 0x30AF648

void CFEANGJDHEE__CEOCJPLKFNF
               (System_String_o *EFENHAFFBAG,System_String_o *IEHEDNIMCBI,
               GHACLGGJIKK_CDAKEOFFIAJ_o *BLMFLPJJMPF,bool GHGHANBKBJF,bool HEEKFKOMCED,
               MethodInfo *method)

{
  bool bVar1;
  CFEANGJDHEE_c *pCVar2;
  CFEANGJDHEE_o *pCVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Object_array *args;
  long lVar5;
  GHACLGGJIKK_o *__this;
  MethodInfo *method_00;
  ABMPAOFAAEI_o *__this_00;
  undefined8 uVar6;
  
                    /* try { // try from 031af66c to 032af6eb has its CatchHandler @ 031af2e0 */
  if ((DAT_045661cc & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GHACLGGJIKK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15444);
    FUN_01bab630(&StringLiteral_15443);
    DAT_045661cc = 1;
  }
                    /* try { // try from 031af6ec to 032af6ef has its CatchHandler @ 031af700 */
                    /* try { // try from 031af6f0 to 032af72b has its CatchHandler @ 031af2e0 */
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(EFENHAFFBAG,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031af5c0 with catch @ 031af6f4 */
  if (bVar1) {
                    /* catch() { ... } // from try @ 031af5b0 with catch @ 031af6f8 */
                    /* catch() { ... } // from try @ 031af5dc with catch @ 031af6fc */
                    /* catch() { ... } // from try @ 031af6ec with catch @ 031af700 */
                    /* catch() { ... } // from try @ 031af4d0 with catch @ 031af704 */
                    /* catch() { ... } // from try @ 031af63c with catch @ 031af708 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031af4ac with catch @ 031af70c */
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 031af490 with catch @ 031af710 */
                    /* catch() { ... } // from try @ 031af4e4 with catch @ 031af714 */
    UnityEngine_Debug__LogError(StringLiteral_15444,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 031af72c to 032af743 has its CatchHandler @ 031af990 */
  pCVar2 = CFEANGJDHEE_TypeInfo;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    pCVar2 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
  }
                    /* try { // try from 031af744 to 032af97b has its CatchHandler @ 031af2e0 */
  pCVar3 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar2);
  if ((pCVar3 != (CFEANGJDHEE_o *)0x0) &&
     (pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pCVar3->fields).CPBGOKDCADG,
     pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (pSVar4,(Il2CppObject *)EFENHAFFBAG,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    if (bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        if ((EFENHAFFBAG != (System_String_o *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(EFENHAFFBAG,(((args->obj).klass)->_1).element_class),
           lVar5 == 0)) {
          uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar6,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)EFENHAFFBAG;
          thunk_FUN_01c20e04(args->m_Items,EFENHAFFBAG);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_15443,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
    else {
      pCVar2 = CFEANGJDHEE_TypeInfo;
      if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
        pCVar2 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
      }
      pCVar3 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar2);
      if ((pCVar3 != (CFEANGJDHEE_o *)0x0) &&
         (pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pCVar3->fields).CPBGOKDCADG,
         pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet<object>__Add
                  (pSVar4,(Il2CppObject *)EFENHAFFBAG,
                   Method_System_Collections_Generic_HashSet<string>_Add__);
        __this = (GHACLGGJIKK_o *)thunk_FUN_01bda818(GHACLGGJIKK_TypeInfo);
        GHACLGGJIKK___ctor(__this,EFENHAFFBAG,IEHEDNIMCBI,BLMFLPJJMPF,GHGHANBKBJF,HEEKFKOMCED,
                           (MethodInfo *)0x0);
        pCVar3 = CFEANGJDHEE__AIHNLLGNBLC(method_00);
        if ((pCVar3 != (CFEANGJDHEE_o *)0x0) &&
           (__this_00 = (pCVar3->fields).MMFAILFMCJC, __this_00 != (ABMPAOFAAEI_o *)0x0)) {
          ABMPAOFAAEI__LFENGGKOJDO(__this_00,__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

