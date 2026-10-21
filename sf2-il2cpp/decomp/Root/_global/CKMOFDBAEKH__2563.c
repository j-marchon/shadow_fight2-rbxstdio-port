// TypeDefIndex 2563
// Namespace: 
// public static class CKMOFDBAEKH
// Fields:

// ===== public static OANBNKOOJFH PLANLODIOHG(XmlNode AHDGNOJPPIB)  [RVA 0x339D19C]
// CKMOFDBAEKH$$PLANLODIOHG @ RVA 0x339D19C

OANBNKOOJFH_o * CKMOFDBAEKH__PLANLODIOHG(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  NGJHCIGFLFD_o *__this;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = AHDGNOJPPIB;
                    /* try { // try from 0349d19c to 0359d19f has its CatchHandler @ 0349d1b8 */
                    /* try { // try from 0349d1a0 to 0359d1a3 has its CatchHandler @ 0349cfa4 */
                    /* try { // try from 0349d1a4 to 0359d1a7 has its CatchHandler @ 0349d1b4 */
                    /* try { // try from 0349d1a8 to 0359d1db has its CatchHandler @ 0349cfa4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349d114 with catch @ 0349d1b0
                        */
  if ((DAT_04567c8f & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349d1a4 with catch @ 0349d1b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349d19c with catch @ 0349d1b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349d198 with catch @ 0349d1bc
                        */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349d0c8 with catch @ 0349d1c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349d06c with catch @ 0349d1c4
                        */
    FUN_01bab630(&HACFBKCHBEJ_TypeInfo);
    FUN_01bab630(&NGJHCIGFLFD_TypeInfo);
                    /* try { // try from 0349d1dc to 0359d1df has its CatchHandler @ 0349d1ec */
    FUN_01bab630(&StringLiteral_4833/*"CounterConditionsParser::parseCondition - "*/);
                    /* catch() { ... } // from try @ 0349d1dc with catch @ 0349d1ec */
    FUN_01bab630(&StringLiteral_3426/*"Battle"*/);
    auVar3 = FUN_01bab630(&StringLiteral_9968/*"Operator"*/);
    DAT_04567c8f = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
                    /* try { // try from 0349d22c to 0359d253 has its CatchHandler @ 0349d268 */
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_3426/*"Battle"*/,(MethodInfo *)0x0);
    if (bVar1) {
      __this = (NGJHCIGFLFD_o *)thunk_FUN_01bda818(HACFBKCHBEJ_TypeInfo);
      HACFBKCHBEJ___ctor((HACFBKCHBEJ_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* try { // try from 0349d254 to 0359d25f has its CatchHandler @ 0349cfa4 */
    }
    else {
                    /* try { // try from 0349d260 to 0359d267 has its CatchHandler @ 0349d268 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0349d22c with catch @ 0349d268
                       catch(type#2 @ 00000000) { ... } // from try @ 0349d260 with catch @ 0349d268
                        */
      bVar1 = System_String__op_Equality(pSVar2,StringLiteral_9968/*"Operator"*/,(MethodInfo *)0x0);
      if (bVar1) {
        __this = (NGJHCIGFLFD_o *)thunk_FUN_01bda818(NGJHCIGFLFD_TypeInfo);
        NGJHCIGFLFD___ctor(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
      }
      else {
        pSVar2 = System_String__Concat(StringLiteral_4833/*"CounterConditionsParser::parseCondition - "*/,pSVar2,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
        __this = (NGJHCIGFLFD_o *)0x0;
      }
    }
    return (OANBNKOOJFH_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== public static List<OANBNKOOJFH> MLJDPILPJDE(XmlNode AHDGNOJPPIB)  [RVA 0x339D2F4]
// CKMOFDBAEKH$$MLJDPILPJDE @ RVA 0x339D2F4

System_Collections_Generic_List_OANBNKOOJFH__o *
CKMOFDBAEKH__MLJDPILPJDE(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_OANBNKOOJFH__o *HPACPFLKHPK;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567c90 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OANBNKOOJFH>_TypeInfo);
    DAT_04567c90 = 1;
    method = extraout_x1;
  }
  HPACPFLKHPK = (System_Collections_Generic_List_OANBNKOOJFH__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<OANBNKOOJFH>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
             Method_System_Collections_Generic_List<OANBNKOOJFH>__ctor__);
  CKMOFDBAEKH__MLJDPILPJDE(AHDGNOJPPIB,HPACPFLKHPK,in_x2);
  return HPACPFLKHPK;
}


// ===== public static void MLJDPILPJDE(XmlNode MNPCOGBCAED, List<OANBNKOOJFH> HPACPFLKHPK)  [RVA 0x339D374]
// CKMOFDBAEKH$$MLJDPILPJDE @ RVA 0x339D374

/* WARNING: Removing unreachable block (ram,0x0349d608) */

void CKMOFDBAEKH__MLJDPILPJDE
               (System_Xml_XmlNode_o *MNPCOGBCAED,
               System_Collections_Generic_List_OANBNKOOJFH__o *HPACPFLKHPK,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  OANBNKOOJFH_o *item;
  System_Xml_XmlNode_c *method_00;
  long lVar5;
  OANBNKOOJFH_array *pOVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_04567c91 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567c91 = 1;
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
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0349d46c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0349d46c:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_0349d5b4;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0349d4cc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0349d4cc:
    auVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    AHDGNOJPPIB = auVar9._0_8_;
    method_00 = auVar9._8_8_;
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
         (method_00 = System_Xml_XmlNode_TypeInfo,
         (AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
         (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    item = CKMOFDBAEKH__PLANLODIOHG(AHDGNOJPPIB,(MethodInfo *)method_00);
    lVar5 = Method_System_Collections_Generic_List<OANBNKOOJFH>_Add__;
    if (HPACPFLKHPK == (System_Collections_Generic_List_OANBNKOOJFH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pOVar6 = (HPACPFLKHPK->fields)._items;
    (HPACPFLKHPK->fields)._version = (HPACPFLKHPK->fields)._version + 1;
    if (pOVar6 == (OANBNKOOJFH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (HPACPFLKHPK->fields)._size;
    if (uVar2 < (uint)pOVar6->max_length) {
      (HPACPFLKHPK->fields)._size = uVar2 + 1;
      pOVar6->m_Items[(int)uVar2] = item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0349d5d0;
    }
  }
LAB_0349d5b4:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0349d5d0:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public static void KEKELCCGNCE(XmlNode MNPCOGBCAED, NGJHCIGFLFD GFJKJAFOFLC, PJNPKJMMNDI LCECBIKDBKI)  [RVA 0x339D6D0]
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
    FUN_01bab630(&StringLiteral_4833/*"CounterConditionsParser::parseCondition - "*/);
    FUN_01bab630(&StringLiteral_14951/*"WinBattle"*/);
    FUN_01bab630(&StringLiteral_3426/*"Battle"*/);
    FUN_01bab630(&StringLiteral_9968/*"Operator"*/);
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
    bVar2 = System_String__op_Equality(pSVar5,StringLiteral_3426/*"Battle"*/,(MethodInfo *)0x0);
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
      bVar2 = System_String__op_Equality(pSVar5,StringLiteral_9968/*"Operator"*/,(MethodInfo *)0x0);
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
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_14951/*"WinBattle"*/,(MethodInfo *)0x0);
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
          pSVar5 = System_String__Concat(StringLiteral_4833/*"CounterConditionsParser::parseCondition - "*/,pSVar5,(MethodInfo *)0x0);
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

