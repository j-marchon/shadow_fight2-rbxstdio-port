// TypeDefIndex 2484
// Namespace: 
// public class KDBLNDBCECD : GJFEBGNFFBA
// Fields:

// ===== public void .ctor()  [RVA 0x33732F4]
// KDBLNDBCECD$$.ctor @ RVA 0x33732F4

void KDBLNDBCECD___ctor(KDBLNDBCECD_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567b3d & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_04567b3d = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string FGBGAKLKONL()  [RVA 0x337334C]
// KDBLNDBCECD$$FGBGAKLKONL @ RVA 0x337334C

System_String_o * KDBLNDBCECD__FGBGAKLKONL(KDBLNDBCECD_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  int32_t iVar4;
  System_Xml_XmlDocument_o *pSVar5;
  HEFOANCOHDC_o *__this_00;
  long *plVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Collections_Generic_List_NJPBBPOABKP__o *pSVar7;
  Il2CppObject *pIVar8;
  MMFIDKMDADC_o *pMVar9;
  ACHLOMELAJE_o *__this_01;
  System_String_o *pSVar10;
  System_String_o *b;
  Il2CppClass *pIVar11;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  int local_84;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567b3e & 1) == 0) {
    FUN_01bab630(&CHKKPKKBBPL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_get_Current__);
    FUN_01bab630(&HEFOANCOHDC_TypeInfo);
    FUN_01bab630(&LBGHEJGGCHM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21305/*"success"*/);
    FUN_01bab630(&StringLiteral_262/*" <color=red>failed</color>"*/);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    FUN_01bab630(&StringLiteral_67/*"\n<Perks>\n    <Perk Name='TestPerk001' Level='10'>\n        <Set DamageFactor='100' Chance='1' Frames='1' Defense='H..."*/);
    FUN_01bab630(&StringLiteral_3247/*"AutoTestPerksActionProvoke Test processed.  result "*/);
    DAT_04567b3e = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_84 = 0;
  pSVar5 = GIAMPEGMNHE__KGEKFIHAHLJ(StringLiteral_67/*"\n<Perks>\n    <Perk Name='TestPerk001' Level='10'>\n        <Set DamageFactor='100' Chance='1' Frames='1' Defense='H..."*/,true,false,(MethodInfo *)0x0);
  __this_00 = (HEFOANCOHDC_o *)thunk_FUN_01bda818(HEFOANCOHDC_TypeInfo);
  HEFOANCOHDC___ctor(__this_00,(MethodInfo *)0x0);
  if (((pSVar5 != (System_Xml_XmlDocument_o *)0x0) &&
      (plVar6 = (long *)(*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                                  (pSVar5,StringLiteral_10239/*"Perks"*/,
                                   (pSVar5->klass->vtable)._51_get_Item.method),
      plVar6 != (long *)0x0)) &&
     (AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                    (**(code **)(*plVar6 + 0x468))
                              (plVar6,StringLiteral_10213/*"Perk"*/,*(undefined8 *)(*plVar6 + 0x470)),
     __this_00 != (HEFOANCOHDC_o *)0x0)) {
                    /* try { // try from 034734d8 to 035734ff has its CatchHandler @ 03473a18 */
    HEFOANCOHDC__HNIHOIAMDPC(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
    pSVar7 = (__this_00->fields).EMNOFACFIBF;
    if (((pSVar7 != (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) &&
        (pIVar8 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar7,0,
                             Method_System_Collections_Generic_List<NJPBBPOABKP>_get_Item__),
        pIVar8 != (Il2CppObject *)0x0)) &&
       ((pIVar8[3].klass != (Il2CppClass *)0x0 &&
        (pIVar8 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pIVar8[3].klass,0,
                             Method_System_Collections_Generic_List<HJNEOLCKEMD>_get_Item__),
        pIVar8 != (Il2CppObject *)0x0)))) {
      pIVar11 = pIVar8->klass;
                    /* try { // try from 03473534 to 0357355b has its CatchHandler @ 03473a14 */
      bVar2 = (CHKKPKKBBPL_TypeInfo->_2).naturalAligment;
      if ((bVar2 <= (pIVar11->_2).naturalAligment) &&
         ((pIVar11->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)CHKKPKKBBPL_TypeInfo)) {
        pSVar7 = (__this_00->fields).EMNOFACFIBF;
        if ((pIVar11->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)CHKKPKKBBPL_TypeInfo) {
          pIVar8 = (Il2CppObject *)0x0;
        }
        if (pSVar7 != (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) {
                    /* try { // try from 03473578 to 0357357f has its CatchHandler @ 03473a04 */
                    /* try { // try from 03473588 to 03573593 has its CatchHandler @ 03473a00 */
                    /* try { // try from 034735a0 to 035735b3 has its CatchHandler @ 034739e4 */
          pIVar11 = pIVar8[6].klass;
                    /* try { // try from 034735b4 to 035735c7 has its CatchHandler @ 034739e8 */
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_a0,(System_Collections_Generic_List_object__o *)pSVar7,
                     Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
          pMVar9 = (MMFIDKMDADC_o *)0x0;
          local_80.fields._index = local_a0.fields._index;
          local_80.fields._version = local_a0.fields._version;
          local_80.fields._list = local_a0.fields._list;
          local_80.fields._current = local_a0.fields._current;
LAB_034735dc:
          do {
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_80,
                               Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__
                              );
            pIVar8 = local_80.fields._current;
            if (!bVar3) goto LAB_034736b8;
            if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 034735f4 to 035735fb has its CatchHandler @ 034739d4 */
            bVar3 = System_String__op_Equality
                              ((System_String_o *)local_80.fields._current[1].klass,
                               (System_String_o *)pIVar11,(MethodInfo *)0x0);
                    /* try { // try from 03473604 to 0357360b has its CatchHandler @ 03473980 */
            if (bVar3) {
              if (pIVar8[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pIVar8 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pIVar8[3].klass,0,
                                  Method_System_Collections_Generic_List<HJNEOLCKEMD>_get_Item__);
              if (pIVar8 != (Il2CppObject *)0x0) {
                bVar2 = (LBGHEJGGCHM_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03473630 to 03573633 has its CatchHandler @ 034739a4 */
                    /* try { // try from 03473634 to 0357365b has its CatchHandler @ 034739dc */
                if ((bVar2 <= (pIVar8->klass->_2).naturalAligment) &&
                   ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                    (Il2CppClass *)LBGHEJGGCHM_TypeInfo)) {
                  if (pIVar8[6].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pMVar9 = NILLKLHKLHG__CHKGAHCDFJF
                                     ((NILLKLHKLHG_o *)pIVar8[6].klass,true,(MethodInfo *)0x0);
                  goto LAB_034735dc;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          } while( true );
        }
      }
    }
  }
LAB_03473794:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_034736b8:
                    /* try { // try from 034736bc to 035736bf has its CatchHandler @ 034739a0 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034736d8 to 035736db has its CatchHandler @ 03473994 */
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
                    /* try { // try from 034736f4 to 035736f7 has its CatchHandler @ 03473984 */
                    /* try { // try from 034736f8 to 03573713 has its CatchHandler @ 034739d0 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_01 != (ACHLOMELAJE_o *)0x0) {
    iVar4 = ACHLOMELAJE__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 0347371c to 03573723 has its CatchHandler @ 034739bc */
    local_84 = iVar4 * 0xf;
    pSVar10 = System_Int32__ToString((int32_t)&local_84,(MethodInfo *)0x0);
    if (pMVar9 == (MMFIDKMDADC_o *)0x0) {
      b = (System_String_o *)0x0;
    }
    else {
      b = (pMVar9->fields).HPACPFLKHPK;
    }
                    /* try { // try from 03473748 to 0357374b has its CatchHandler @ 034739b8 */
    bVar3 = System_String__op_Inequality(pSVar10,b,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_262/*" <color=red>failed</color>"*/;
    if (!bVar3) {
      puVar1 = &StringLiteral_21305/*"success"*/;
    }
                    /* try { // try from 03473764 to 03573767 has its CatchHandler @ 034739c8 */
    pSVar10 = System_String__Concat(StringLiteral_3247/*"AutoTestPerksActionProvoke Test processed.  result "*/,(System_String_o *)*puVar1,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03473780 to 03573783 has its CatchHandler @ 034739a8 */
                    /* try { // try from 03473784 to 035737ab has its CatchHandler @ 034739f0 */
    return pSVar10;
  }
  goto LAB_03473794;
}

