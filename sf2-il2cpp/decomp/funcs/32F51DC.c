// NCNJEIBHGBH$$HKIGFKCDAGJ @ RVA 0x32F51DC

void NCNJEIBHGBH__HKIGFKCDAGJ
               (NCNJEIBHGBH_o *__this,FKNCNNOOOIO_o *GCOMKDMCMDN,HOOAAGABMBL_o *IKKAMAMLIKA,
               bool ALOCBHJFNFM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  Il2CppClass *item;
  FKNCNNOOOIO_array *pFVar6;
  System_Action_FKNCNNOOOIO__o *pSVar7;
  System_Collections_Generic_List_FKNCNNOOOIO__o *pSVar8;
  char **ppcVar9;
  
  if ((DAT_04567686 & 1) == 0) {
    FUN_01bab630(&Method_NCNJEIBHGBH_JFILHCHBMEC_DLGHGNBOKHP__);
    FUN_01bab630(&NCNJEIBHGBH_JFILHCHBMEC_TypeInfo);
                    /* try { // try from 033f5228 to 034f5237 has its CatchHandler @ 033f5458 */
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_Find__);
                    /* try { // try from 033f5244 to 034f524b has its CatchHandler @ 033f5434 */
    FUN_01bab630(&System_Predicate<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&StringLiteral_12931);
                    /* try { // try from 033f525c to 034f5263 has its CatchHandler @ 033f543c */
    DAT_04567686 = 1;
  }
  pIVar3 = (Il2CppObject *)thunk_FUN_01bda818(NCNJEIBHGBH_JFILHCHBMEC_TypeInfo);
                    /* try { // try from 033f526c to 034f5273 has its CatchHandler @ 033f5424 */
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3 = pIVar3 + 1;
                    /* try { // try from 033f5278 to 034f528f has its CatchHandler @ 033f5450 */
    pIVar3->klass = (Il2CppClass *)GCOMKDMCMDN;
    thunk_FUN_01c20e04(pIVar3,GCOMKDMCMDN);
    if (pIVar3->klass == (Il2CppClass *)0x0) {
      return;
    }
                    /* try { // try from 033f529c to 034f52a3 has its CatchHandler @ 033f5420 */
    pSVar8 = (__this->fields).JODEDMLAIEG;
                    /* try { // try from 033f52ac to 034f52b3 has its CatchHandler @ 033f541c */
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<FKNCNNOOOIO>_TypeInfo);
                    /* try { // try from 033f52b8 to 034f52cf has its CatchHandler @ 033f5454 */
    System_Predicate<object>___ctor();
    if (pSVar8 != (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
                    /* try { // try from 033f52d4 to 034f52df has its CatchHandler @ 033f5418 */
      pIVar4 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)pSVar8,match,
                          Method_System_Collections_Generic_List<FKNCNNOOOIO>_Find__);
      if (pIVar4 != (Il2CppObject *)0x0) {
        return;
      }
      if (pIVar3->klass != (Il2CppClass *)0x0) {
        ppcVar9 = &(pIVar3->klass->_1).namespaze;
        pSVar5 = OFFIONDOEPM__GHALIMLMDOP
                           ((System_String_o *)*ppcVar9,StringLiteral_12931,(MethodInfo *)0x0);
        *ppcVar9 = (char *)pSVar5;
                    /* try { // try from 033f5320 to 034f5343 has its CatchHandler @ 033f5414 */
        thunk_FUN_01c20e04(ppcVar9,pSVar5);
        NCNJEIBHGBH__GMIAPIANBMJ
                  (__this,(FKNCNNOOOIO_o *)pIVar3->klass,IKKAMAMLIKA,ALOCBHJFNFM,method);
        lVar2 = Method_System_Collections_Generic_List<FKNCNNOOOIO>_Add__;
        pSVar8 = (__this->fields).JODEDMLAIEG;
        if (pSVar8 != (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
                    /* try { // try from 033f5344 to 034f53df has its CatchHandler @ 033f503c */
          item = pIVar3->klass;
          pFVar6 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pFVar6 != (FKNCNNOOOIO_array *)0x0) {
            uVar1 = (pSVar8->fields)._size;
            if (uVar1 < (uint)pFVar6->max_length) {
              (pSVar8->fields)._size = uVar1 + 1;
              pFVar6->m_Items[(int)uVar1] = (FKNCNNOOOIO_o *)item;
              thunk_FUN_01c20e04(pFVar6->m_Items + (int)uVar1);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar7 = (__this->fields).HKBOCMKKIOI;
            if (pSVar7 == (System_Action_FKNCNNOOOIO__o *)0x0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x033f53cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar7->fields).super.super.invoke_impl)
                      ((pSVar7->fields).super.super.method_code,pIVar3->klass,
                       (pSVar7->fields).super.super.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

