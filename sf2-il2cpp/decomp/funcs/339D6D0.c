// CKMOFDBAEKH$$KEKELCCGNCE @ RVA 0x339D6D0

/* WARNING: Removing unreachable block (ram,0x0349dac0) */

void CKMOFDBAEKH__KEKELCCGNCE
               (System_Xml_XmlNode_o *MNPCOGBCAED,NGJHCIGFLFD_o *GFJKJAFOFLC,
               PJNPKJMMNDI_o *LCECBIKDBKI,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_String_o *pSVar5;
  HACFBKCHBEJ_o *__this;
  NGJHCIGFLFD_o *__this_00;
  JHHBFBCJOOB_o *__this_01;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04567c92 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HACFBKCHBEJ_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JHHBFBCJOOB_TypeInfo);
    FUN_01bab630(&NGJHCIGFLFD_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4833);
    FUN_01bab630(&StringLiteral_14951);
    FUN_01bab630(&StringLiteral_3426);
    FUN_01bab630(&StringLiteral_9968);
    DAT_04567c92 = 1;
  }
  if ((MNPCOGBCAED == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (MNPCOGBCAED,(MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0349d838;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0349d838:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
                    /* try { // try from 0349da24 to 0359da2b has its CatchHandler @ 0349dbb8 */
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_0349da58;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0349d898;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0349d898:
    AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
       ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHDGNOJPPIB);
    }
    pSVar5 = (System_String_o *)
             (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
    bVar2 = System_String__op_Equality(pSVar5,StringLiteral_3426,(MethodInfo *)0x0);
    if (bVar2) {
      __this = (HACFBKCHBEJ_o *)thunk_FUN_01bda818(HACFBKCHBEJ_TypeInfo);
      HACFBKCHBEJ___ctor(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
      if (GFJKJAFOFLC == (NGJHCIGFLFD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      NGJHCIGFLFD__NIDKNDMBJNB(GFJKJAFOFLC,(OANBNKOOJFH_o *)__this,(MethodInfo *)0x0);
    }
    else {
      bVar2 = System_String__op_Equality(pSVar5,StringLiteral_9968,(MethodInfo *)0x0);
      if (bVar2) {
                    /* try { // try from 0349d948 to 0359d96f has its CatchHandler @ 0349dbd0 */
        __this_00 = (NGJHCIGFLFD_o *)thunk_FUN_01bda818(NGJHCIGFLFD_TypeInfo);
        NGJHCIGFLFD___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
        if (GFJKJAFOFLC == (NGJHCIGFLFD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        NGJHCIGFLFD__NIDKNDMBJNB(GFJKJAFOFLC,(OANBNKOOJFH_o *)__this_00,(MethodInfo *)0x0);
      }
      else {
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_14951,(MethodInfo *)0x0);
        if (bVar2) {
          __this_01 = (JHHBFBCJOOB_o *)thunk_FUN_01bda818(JHHBFBCJOOB_TypeInfo);
                    /* try { // try from 0349d9a4 to 0359d9ef has its CatchHandler @ 0349dbd8 */
          JHHBFBCJOOB___ctor(__this_01,AHDGNOJPPIB,(MethodInfo *)0x0);
          if (LCECBIKDBKI == (PJNPKJMMNDI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          PJNPKJMMNDI__AOHPFMNMABI(LCECBIKDBKI,(JKHPOKJIMHC_o *)__this_01,(MethodInfo *)0x0);
        }
        else {
          pSVar5 = System_String__Concat(StringLiteral_4833,pSVar5,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 0349da00 to 0359da07 has its CatchHandler @ 0349dbc8 */
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
        }
      }
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
                    /* try { // try from 0349da50 to 0359da53 has its CatchHandler @ 0349dbb4 */
    piVar8 = piVar8 + 4;
                    /* try { // try from 0349da54 to 0359da5f has its CatchHandler @ 0349dbbc */
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 0349da6c to 0359da87 has its CatchHandler @ 0349dbc4 */
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0349da74;
    }
  }
LAB_0349da58:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0349da74:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 0349da88 to 0359daef has its CatchHandler @ 0349dbcc */
  return;
}

