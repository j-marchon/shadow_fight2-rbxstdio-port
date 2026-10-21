// TypeDefIndex 1755
// Namespace: 
// public class FCFEFEBAILK
// Fields:

// ===== public static void FAEKHJHILGP(XmlNode AHDGNOJPPIB, List<AJNNHGGLGIF> KENFFDHLNDA)  [RVA 0x31E3598]
// FCFEFEBAILK$$FAEKHJHILGP @ RVA 0x31E3598

/* WARNING: Removing unreachable block (ram,0x032e388c) */

void FCFEFEBAILK__FAEKHJHILGP
               (System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Collections_Generic_List_AJNNHGGLGIF__o *KENFFDHLNDA,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_String_o *a;
  AJNNHGGLGIF_o *item;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar6;
  AJNNHGGLGIF_array *pAVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04566d54 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    DAT_04566d54 = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_032e36a8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_032e36a8:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_032e382c;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 032e36d8 to 033e3817 has its CatchHandler @ 032e36d8
                       catch() { ... } // from try @ 032e36d8 with catch @ 032e36d8
                       catch() { ... } // from try @ 032e38f4 with catch @ 032e36d8
                       catch() { ... } // from try @ 032e39c0 with catch @ 032e36d8
                       catch() { ... } // from try @ 032e39f4 with catch @ 032e36d8
                       catch() { ... } // from try @ 032e3ac4 with catch @ 032e36d8 */
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_032e3708;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_032e3708:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
       ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032e3874 to 033e389f has its CatchHandler @ 032e39dc */
      FUN_01babc64(AHDGNOJPPIB_00);
    }
    a = (System_String_o *)
        (*(AHDGNOJPPIB_00->klass->vtable)._8_unknown.methodPtr)
                  (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._8_unknown.method);
    method_01 = (MethodInfo *)0x0;
    bVar3 = System_String__op_Equality(a,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
    if (bVar3) {
      FCFEFEBAILK__DJOOIKDELGF(AHDGNOJPPIB_00,KENFFDHLNDA,method_01);
    }
    else {
      item = FCFEFEBAILK__POKFALBPBDI(AHDGNOJPPIB_00,method_00);
      lVar6 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
      if (item != (AJNNHGGLGIF_o *)0x0) {
        if (KENFFDHLNDA == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pAVar7 = (KENFFDHLNDA->fields)._items;
        (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
        if (pAVar7 == (AJNNHGGLGIF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (KENFFDHLNDA->fields)._size;
        if (uVar2 < (uint)pAVar7->max_length) {
          (KENFFDHLNDA->fields)._size = uVar2 + 1;
          pAVar7->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
                    /* try { // try from 032e3818 to 033e383f has its CatchHandler @ 032e39e0 */
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_032e3848;
    }
  }
LAB_032e382c:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_032e3848:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== protected static void DJOOIKDELGF(XmlNode AHDGNOJPPIB, List<AJNNHGGLGIF> KENFFDHLNDA)  [RVA 0x31E3968]
// FCFEFEBAILK$$DJOOIKDELGF @ RVA 0x31E3968

/* WARNING: Removing unreachable block (ram,0x032e3c28) */

void FCFEFEBAILK__DJOOIKDELGF
               (System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Collections_Generic_List_AJNNHGGLGIF__o *KENFFDHLNDA,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  MGNDHCBAPEN_int__int__o *pMVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  AJNNHGGLGIF_o *item;
  System_Xml_XmlNode_c *method_00;
  long lVar7;
  AJNNHGGLGIF_array *pAVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_04566d55 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 032e39a8 to 033e39af has its CatchHandler @ 032e39d8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__);
                    /* try { // try from 032e39b4 to 033e39b7 has its CatchHandler @ 032e39c8 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
                    /* try { // try from 032e39bc to 033e39bf has its CatchHandler @ 032e39c4 */
                    /* try { // try from 032e39c0 to 033e39ef has its CatchHandler @ 032e36d8 */
    DAT_04566d55 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e39bc with catch @ 032e39c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e39b4 with catch @ 032e39c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e38e8 with catch @ 032e39d0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e38dc with catch @ 032e39d4
                        */
  pMVar4 = GIAMPEGMNHE__GGPIBJJKMPK(AHDGNOJPPIB,0,0x7fffffff,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e39a8 with catch @ 032e39d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e3874 with catch @ 032e39dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e3818 with catch @ 032e39e0
                        */
                    /* try { // try from 032e39f0 to 033e39f3 has its CatchHandler @ 032e3a44 */
                    /* try { // try from 032e39f4 to 033e3a53 has its CatchHandler @ 032e36d8 */
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar5 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 032e39f0 with catch @ 032e3a44 */
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_032e3a78;
        }
        uVar9 = uVar9 - 1;
                    /* try { // try from 032e3a54 to 033e3ac3 has its CatchHandler @ 032e3ad8 */
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_032e3a78:
    uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_032e3bd0;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 032e3ad0 to 033e3ad7 has its CatchHandler @ 032e3ad8 */
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_032e3ad8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
                    /* try { // try from 032e3ac4 to 033e3acf has its CatchHandler @ 032e36d8 */
LAB_032e3ad8:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032e3a54 with catch @ 032e3ad8
                       catch(type#2 @ 00000000) { ... } // from try @ 032e3ad0 with catch @ 032e3ad8
                        */
    auVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    AHDGNOJPPIB_00 = auVar11._0_8_;
    method_00 = auVar11._8_8_;
    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
         (method_00 = System_Xml_XmlNode_TypeInfo,
         (AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
         (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    item = FCFEFEBAILK__POKFALBPBDI(AHDGNOJPPIB_00,(MethodInfo *)method_00);
    if (item != (AJNNHGGLGIF_o *)0x0) {
      if (pMVar4 == (MGNDHCBAPEN_int__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = (pMVar4->fields).DOKHHBGJICA;
      (item->fields).ONDDFBGIOPJ = (pMVar4->fields).PHPELPFMOII;
      lVar7 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
      (item->fields).AGBDJNHBLNM = iVar3;
      if (KENFFDHLNDA == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pAVar8 = (KENFFDHLNDA->fields)._items;
      (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
      if (pAVar8 == (AJNNHGGLGIF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (KENFFDHLNDA->fields)._size;
      if (uVar2 < (uint)pAVar8->max_length) {
        (KENFFDHLNDA->fields)._size = uVar2 + 1;
        pAVar8->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_032e3bec;
    }
  }
LAB_032e3bd0:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_032e3bec:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== public void .ctor()  [RVA 0x31E481C]
// FCFEFEBAILK$$.ctor @ RVA 0x31E481C

void FCFEFEBAILK___ctor(FCFEFEBAILK_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static AJNNHGGLGIF POKFALBPBDI(XmlNode AHDGNOJPPIB)  [RVA 0x31E3CFC]
// FCFEFEBAILK$$POKFALBPBDI @ RVA 0x31E3CFC

AJNNHGGLGIF_o * FCFEFEBAILK__POKFALBPBDI(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t ACCIHBHMFPN;
  System_String_o *pSVar2;
  MJACKBKADMN_o *__this;
  CNIGOFCKBGI_o *pCVar3;
  AGCDKMOOJGI_o *__this_00;
  PNEKMHMACLG_o *__this_01;
  HIJGJNFACPG_o *__this_02;
  ICCLONHCNBL_o *__this_03;
  ECGPIFIJMFF_o *__this_04;
  CALLBECPAIA_o *__this_05;
  NIAFDKHDBMA_o *__this_06;
  FPLOLKHJIAF_o *__this_07;
  EFNDJJDBNFN_o *__this_08;
  ONMBPNGKBBO_o *__this_09;
  MethodInfo *method_00;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = AHDGNOJPPIB;
  if ((DAT_04566d56 & 1) == 0) {
    FUN_01bab630(&AGCDKMOOJGI_TypeInfo);
    FUN_01bab630(&AJLPMEBENAE_TypeInfo);
    FUN_01bab630(&CALLBECPAIA_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ECGPIFIJMFF_TypeInfo);
    FUN_01bab630(&EFNDJJDBNFN_TypeInfo);
    FUN_01bab630(&FPLOLKHJIAF_TypeInfo);
    FUN_01bab630(&HIJGJNFACPG_TypeInfo);
    FUN_01bab630(&ICCLONHCNBL_TypeInfo);
    FUN_01bab630(&JCHNBADDBGO_TypeInfo);
    FUN_01bab630(&JFAGMCHGOEH_TypeInfo);
    FUN_01bab630(&KMFIGBGAKNL_TypeInfo);
    FUN_01bab630(&MJACKBKADMN_TypeInfo);
    FUN_01bab630(&NIAFDKHDBMA_TypeInfo);
    FUN_01bab630(&ONMBPNGKBBO_TypeInfo);
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    FUN_01bab630(&StringLiteral_5102/*"Darkness"*/);
    FUN_01bab630(&StringLiteral_11101/*"RechargeMagicEachRound"*/);
    FUN_01bab630(&StringLiteral_4507/*"Combo"*/);
    FUN_01bab630(&StringLiteral_9526/*"NoBulletsReplenishment"*/);
    FUN_01bab630(&StringLiteral_14961/*"WinStyle"*/);
    FUN_01bab630(&StringLiteral_9527/*"NoButton"*/);
    FUN_01bab630(&StringLiteral_4549/*"ComplexRule"*/);
    FUN_01bab630(&StringLiteral_11004/*"RandomArea"*/);
    FUN_01bab630(&StringLiteral_3208/*"Attributes"*/);
    FUN_01bab630(&StringLiteral_11460/*"RuleParser::parseRules - unknown node name: "*/);
    FUN_01bab630(&StringLiteral_9534/*"NoHealthBar"*/);
    FUN_01bab630(&StringLiteral_14959/*"WinShock"*/);
    FUN_01bab630(&StringLiteral_13802/*"TimeOutWin"*/);
    FUN_01bab630(&StringLiteral_3262/*"Avatar"*/);
    FUN_01bab630(&StringLiteral_7895/*"InvertJoystick"*/);
    FUN_01bab630(&StringLiteral_11294/*"RequireItem"*/);
    FUN_01bab630(&StringLiteral_11202/*"RemoveInterval"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_11007/*"RandomRule"*/);
    FUN_01bab630(&StringLiteral_9539/*"NoPerks"*/);
    FUN_01bab630(&StringLiteral_8674/*"LoseFall"*/);
    FUN_01bab630(&StringLiteral_4848/*"Crazy"*/);
    FUN_01bab630(&StringLiteral_11154/*"Regeneration"*/);
    FUN_01bab630(&StringLiteral_11469/*"RulesWithConditions"*/);
    FUN_01bab630(&StringLiteral_7140/*"HotGround"*/);
    FUN_01bab630(&StringLiteral_7902/*"Invulnerability"*/);
    FUN_01bab630(&StringLiteral_10830/*"RaidCurrencyCost"*/);
    FUN_01bab630(&StringLiteral_11030/*"RatingEvaluation"*/);
    FUN_01bab630(&StringLiteral_8428/*"Lifesteal"*/);
    FUN_01bab630(&StringLiteral_10346/*"Points"*/);
    FUN_01bab630(&StringLiteral_5065/*"DamageFactor"*/);
    FUN_01bab630(&StringLiteral_11919/*"SetTactic"*/);
    FUN_01bab630(&StringLiteral_4925/*"CurrencyCost"*/);
    FUN_01bab630(&StringLiteral_9524/*"NoAnimation"*/);
    FUN_01bab630(&StringLiteral_14952/*"WinCombo"*/);
    FUN_01bab630(&StringLiteral_5835/*"EquipItem"*/);
    FUN_01bab630(&StringLiteral_11311/*"Resistance"*/);
    FUN_01bab630(&StringLiteral_8437/*"LightInTheDarkness"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    FUN_01bab630(&StringLiteral_4253/*"ChangeFight"*/);
    FUN_01bab630(&StringLiteral_5304/*"Description"*/);
    FUN_01bab630(&StringLiteral_11392/*"Ringout"*/);
    FUN_01bab630(&StringLiteral_11003/*"RandomAquiredItem"*/);
    auVar4 = FUN_01bab630(&StringLiteral_10599/*"Pvp"*/);
    DAT_04566d56 = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
  }
  pSVar2 = (System_String_o *)
           (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_11294/*"RequireItem"*/,(MethodInfo *)0x0);
  if (bVar1) {
    __this = (MJACKBKADMN_o *)thunk_FUN_01bda818(JCHNBADDBGO_TypeInfo);
    JCHNBADDBGO___ctor((JCHNBADDBGO_o *)__this,AHDGNOJPPIB,true,(MethodInfo *)0x0);
  }
  else {
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_5835/*"EquipItem"*/,(MethodInfo *)0x0);
    if (bVar1) {
      __this = (MJACKBKADMN_o *)thunk_FUN_01bda818(AJLPMEBENAE_TypeInfo);
      AJLPMEBENAE___ctor((AJLPMEBENAE_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    }
    else {
      bVar1 = System_String__op_Equality(pSVar2,StringLiteral_11003/*"RandomAquiredItem"*/,(MethodInfo *)0x0);
      if (bVar1) {
        __this = (MJACKBKADMN_o *)thunk_FUN_01bda818(MJACKBKADMN_TypeInfo);
        MJACKBKADMN___ctor(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
      }
      else {
        bVar1 = System_String__op_Equality(pSVar2,StringLiteral_9527/*"NoButton"*/,(MethodInfo *)0x0);
        if (bVar1) {
          __this = (MJACKBKADMN_o *)thunk_FUN_01bda818(KMFIGBGAKNL_TypeInfo);
          KMFIGBGAKNL___ctor((KMFIGBGAKNL_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
        }
        else {
          bVar1 = System_String__op_Equality(pSVar2,StringLiteral_9524/*"NoAnimation"*/,(MethodInfo *)0x0);
          if (!bVar1) {
            method_00 = (MethodInfo *)0x0;
            bVar1 = System_String__op_Equality(pSVar2,StringLiteral_11392/*"Ringout"*/,(MethodInfo *)0x0);
            if (bVar1) {
              ACCIHBHMFPN = 5;
            }
            else {
              method_00 = (MethodInfo *)0x0;
              bVar1 = System_String__op_Equality(pSVar2,StringLiteral_7140/*"HotGround"*/,(MethodInfo *)0x0);
              if (bVar1) {
                ACCIHBHMFPN = 7;
              }
              else {
                method_00 = (MethodInfo *)0x0;
                bVar1 = System_String__op_Equality(pSVar2,StringLiteral_8674/*"LoseFall"*/,(MethodInfo *)0x0);
                if (bVar1) {
                  ACCIHBHMFPN = 8;
                }
                else {
                  method_00 = (MethodInfo *)0x0;
                  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_11154/*"Regeneration"*/,(MethodInfo *)0x0);
                  if (bVar1) {
                    ACCIHBHMFPN = 9;
                  }
                  else {
                    method_00 = (MethodInfo *)0x0;
                    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_3208/*"Attributes"*/,(MethodInfo *)0x0);
                    if (bVar1) {
                      ACCIHBHMFPN = 10;
                    }
                    else {
                      method_00 = (MethodInfo *)0x0;
                      bVar1 = System_String__op_Equality
                                        (pSVar2,StringLiteral_5065/*"DamageFactor"*/,(MethodInfo *)0x0);
                      if (bVar1) {
                        ACCIHBHMFPN = 0xb;
                      }
                      else {
                        method_00 = (MethodInfo *)0x0;
                        bVar1 = System_String__op_Equality
                                          (pSVar2,StringLiteral_11202/*"RemoveInterval"*/,(MethodInfo *)0x0);
                        if (bVar1) {
                          ACCIHBHMFPN = 0xc;
                        }
                        else {
                          method_00 = (MethodInfo *)0x0;
                          bVar1 = System_String__op_Equality
                                            (pSVar2,StringLiteral_4848/*"Crazy"*/,(MethodInfo *)0x0);
                          if (bVar1) {
                            ACCIHBHMFPN = 0xd;
                          }
                          else {
                            method_00 = (MethodInfo *)0x0;
                            bVar1 = System_String__op_Equality
                                              (pSVar2,StringLiteral_8428/*"Lifesteal"*/,(MethodInfo *)0x0);
                            if (bVar1) {
                              ACCIHBHMFPN = 0xe;
                            }
                            else {
                              method_00 = (MethodInfo *)0x0;
                              bVar1 = System_String__op_Equality
                                                (pSVar2,StringLiteral_10599/*"Pvp"*/,(MethodInfo *)0x0);
                              if (bVar1) {
                                ACCIHBHMFPN = 0x28;
                              }
                              else {
                                method_00 = (MethodInfo *)0x0;
                                bVar1 = System_String__op_Equality
                                                  (pSVar2,StringLiteral_9534/*"NoHealthBar"*/,(MethodInfo *)0x0);
                                if (bVar1) {
                                  ACCIHBHMFPN = 0xf;
                                }
                                else {
                                  method_00 = (MethodInfo *)0x0;
                                  bVar1 = System_String__op_Equality
                                                    (pSVar2,StringLiteral_13802/*"TimeOutWin"*/,(MethodInfo *)0x0);
                                  if (bVar1) {
                                    ACCIHBHMFPN = 0x11;
                                  }
                                  else {
                                    method_00 = (MethodInfo *)0x0;
                                    bVar1 = System_String__op_Equality
                                                      (pSVar2,StringLiteral_4507/*"Combo"*/,(MethodInfo *)0x0);
                                    if (bVar1) {
                                      ACCIHBHMFPN = 0x10;
                                    }
                                    else {
                                      method_00 = (MethodInfo *)0x0;
                                      bVar1 = System_String__op_Equality
                                                        (pSVar2,StringLiteral_5102/*"Darkness"*/,(MethodInfo *)0x0
                                                        );
                                      if (bVar1) {
                                        ACCIHBHMFPN = 6;
                                      }
                                      else {
                                        method_00 = (MethodInfo *)0x0;
                                        bVar1 = System_String__op_Equality
                                                          (pSVar2,StringLiteral_10346/*"Points"*/,
                                                           (MethodInfo *)0x0);
                                        if (bVar1) {
                                          ACCIHBHMFPN = 0x12;
                                        }
                                        else {
                                          method_00 = (MethodInfo *)0x0;
                                          bVar1 = System_String__op_Equality
                                                            (pSVar2,StringLiteral_9526/*"NoBulletsReplenishment"*/,
                                                             (MethodInfo *)0x0);
                                          if (bVar1) {
                                            ACCIHBHMFPN = 0x14;
                                          }
                                          else {
                                            method_00 = (MethodInfo *)0x0;
                                            bVar1 = System_String__op_Equality
                                                              (pSVar2,StringLiteral_11101/*"RechargeMagicEachRound"*/,
                                                               (MethodInfo *)0x0);
                                            if (bVar1) {
                                              ACCIHBHMFPN = 0x13;
                                            }
                                            else {
                                              method_00 = (MethodInfo *)0x0;
                                              bVar1 = System_String__op_Equality
                                                                (pSVar2,StringLiteral_10213/*"Perk"*/,
                                                                 (MethodInfo *)0x0);
                                              if (bVar1) {
                                                ACCIHBHMFPN = 0x18;
                                              }
                                              else {
                                                method_00 = (MethodInfo *)0x0;
                                                bVar1 = System_String__op_Equality
                                                                  (pSVar2,StringLiteral_9539/*"NoPerks"*/,
                                                                   (MethodInfo *)0x0);
                                                if (bVar1) {
                                                  ACCIHBHMFPN = 0x19;
                                                }
                                                else {
                                                  bVar1 = System_String__op_Equality
                                                                    (pSVar2,StringLiteral_11007/*"RandomRule"*/,
                                                                     (MethodInfo *)0x0);
                                                  if (bVar1) {
                                                    __this_00 = (AGCDKMOOJGI_o *)
                                                                thunk_FUN_01bda818(
                                                  AGCDKMOOJGI_TypeInfo);
                                                  AGCDKMOOJGI___ctor(__this_00,AHDGNOJPPIB,
                                                                     (MethodInfo *)0x0);
                                                  return (AJNNHGGLGIF_o *)__this_00;
                                                  }
                                                  bVar1 = System_String__op_Equality
                                                                    (pSVar2,StringLiteral_4549/*"ComplexRule"*/,
                                                                     (MethodInfo *)0x0);
                                                  if (bVar1) {
                                                    __this_01 = (PNEKMHMACLG_o *)
                                                                thunk_FUN_01bda818(
                                                  PNEKMHMACLG_TypeInfo);
                                                  PNEKMHMACLG___ctor(__this_01,AHDGNOJPPIB,
                                                                     (MethodInfo *)0x0);
                                                  return (AJNNHGGLGIF_o *)__this_01;
                                                  }
                                                  bVar1 = System_String__op_Equality
                                                                    (pSVar2,StringLiteral_11469/*"RulesWithConditions"*/,
                                                                     (MethodInfo *)0x0);
                                                  if (bVar1) {
                                                    __this_02 = (HIJGJNFACPG_o *)
                                                                thunk_FUN_01bda818(
                                                  HIJGJNFACPG_TypeInfo);
                                                  HIJGJNFACPG___ctor(__this_02,AHDGNOJPPIB,
                                                                     (MethodInfo *)0x0);
                                                  return (AJNNHGGLGIF_o *)__this_02;
                                                  }
                                                  bVar1 = System_String__op_Equality
                                                                    (pSVar2,StringLiteral_5304/*"Description"*/,
                                                                     (MethodInfo *)0x0);
                                                  if (bVar1) {
                                                    __this_03 = (ICCLONHCNBL_o *)
                                                                thunk_FUN_01bda818(
                                                  ICCLONHCNBL_TypeInfo);
                                                  ICCLONHCNBL___ctor(__this_03,AHDGNOJPPIB,
                                                                     (MethodInfo *)0x0);
                                                  return (AJNNHGGLGIF_o *)__this_03;
                                                  }
                                                  method_00 = (MethodInfo *)0x0;
                                                  bVar1 = System_String__op_Equality
                                                                    (pSVar2,StringLiteral_14952/*"WinCombo"*/,
                                                                     (MethodInfo *)0x0);
                                                  if (bVar1) {
                                                    ACCIHBHMFPN = 0x1b;
                                                  }
                                                  else {
                                                    method_00 = (MethodInfo *)0x0;
                                                    bVar1 = System_String__op_Equality
                                                                      (pSVar2,StringLiteral_14961/*"WinStyle"*/,
                                                                       (MethodInfo *)0x0);
                                                    if (bVar1) {
                                                      ACCIHBHMFPN = 0x1a;
                                                    }
                                                    else {
                                                      method_00 = (MethodInfo *)0x0;
                                                      bVar1 = System_String__op_Equality
                                                                        (pSVar2,StringLiteral_14959/*"WinShock"*/,
                                                                         (MethodInfo *)0x0);
                                                      if (bVar1) {
                                                        ACCIHBHMFPN = 0x1c;
                                                      }
                                                      else {
                                                        bVar1 = System_String__op_Equality
                                                                          (pSVar2,StringLiteral_4253/*"ChangeFight"*/
                                                                           ,(MethodInfo *)0x0);
                                                        if (bVar1) {
                                                          __this_04 = (ECGPIFIJMFF_o *)
                                                                      thunk_FUN_01bda818(
                                                  ECGPIFIJMFF_TypeInfo);
                                                  ECGPIFIJMFF___ctor(__this_04,AHDGNOJPPIB,
                                                                     (MethodInfo *)0x0);
                                                  return (AJNNHGGLGIF_o *)__this_04;
                                                  }
                                                  method_00 = (MethodInfo *)0x0;
                                                  bVar1 = System_String__op_Equality
                                                                    (pSVar2,StringLiteral_11919/*"SetTactic"*/,
                                                                     (MethodInfo *)0x0);
                                                  if (bVar1) {
                                                    ACCIHBHMFPN = 0x1e;
                                                  }
                                                  else {
                                                    method_00 = (MethodInfo *)0x0;
                                                    bVar1 = System_String__op_Equality
                                                                      (pSVar2,StringLiteral_7895/*"InvertJoystick"*/,
                                                                       (MethodInfo *)0x0);
                                                    if (bVar1) {
                                                      ACCIHBHMFPN = 0x1f;
                                                    }
                                                    else {
                                                      method_00 = (MethodInfo *)0x0;
                                                      bVar1 = System_String__op_Equality
                                                                        (pSVar2,StringLiteral_11004/*"RandomArea"*/,
                                                                         (MethodInfo *)0x0);
                                                      if (bVar1) {
                                                        ACCIHBHMFPN = 0x20;
                                                      }
                                                      else {
                                                        bVar1 = System_String__op_Equality
                                                                          (pSVar2,
                                                  StringLiteral_11030/*"RatingEvaluation"*/,(MethodInfo *)0x0);
                                                  if (bVar1) {
                                                    __this_05 = (CALLBECPAIA_o *)
                                                                thunk_FUN_01bda818(
                                                  CALLBECPAIA_TypeInfo);
                                                  CALLBECPAIA___ctor(__this_05,AHDGNOJPPIB,
                                                                     (MethodInfo *)0x0);
                                                  return (AJNNHGGLGIF_o *)__this_05;
                                                  }
                                                  method_00 = (MethodInfo *)0x0;
                                                  bVar1 = System_String__op_Equality
                                                                    (pSVar2,StringLiteral_7902/*"Invulnerability"*/,
                                                                     (MethodInfo *)0x0);
                                                  if (bVar1) {
                                                    ACCIHBHMFPN = 0x22;
                                                  }
                                                  else {
                                                    bVar1 = System_String__op_Equality
                                                                      (pSVar2,StringLiteral_4925/*"CurrencyCost"*/,
                                                                       (MethodInfo *)0x0);
                                                    if (bVar1) {
                                                      __this_06 = (NIAFDKHDBMA_o *)
                                                                  thunk_FUN_01bda818(
                                                  NIAFDKHDBMA_TypeInfo);
                                                  NIAFDKHDBMA___ctor(__this_06,AHDGNOJPPIB,
                                                                     (MethodInfo *)0x0);
                                                  return (AJNNHGGLGIF_o *)__this_06;
                                                  }
                                                  bVar1 = System_String__op_Equality
                                                                    (pSVar2,StringLiteral_10830/*"RaidCurrencyCost"*/,
                                                                     (MethodInfo *)0x0);
                                                  if (bVar1) {
                                                    __this_07 = (FPLOLKHJIAF_o *)
                                                                thunk_FUN_01bda818(
                                                  FPLOLKHJIAF_TypeInfo);
                                                  FPLOLKHJIAF___ctor(__this_07,AHDGNOJPPIB,
                                                                     (MethodInfo *)0x0);
                                                  return (AJNNHGGLGIF_o *)__this_07;
                                                  }
                                                  method_00 = (MethodInfo *)0x0;
                                                  bVar1 = System_String__op_Equality
                                                                    (pSVar2,StringLiteral_11311/*"Resistance"*/,
                                                                     (MethodInfo *)0x0);
                                                  if (bVar1) {
                                                    ACCIHBHMFPN = 0x24;
                                                  }
                                                  else {
                                                    bVar1 = System_String__op_Equality
                                                                      (pSVar2,StringLiteral_3262/*"Avatar"*/,
                                                                       (MethodInfo *)0x0);
                                                    if (bVar1) {
                                                      __this_08 = (EFNDJJDBNFN_o *)
                                                                  thunk_FUN_01bda818(
                                                  EFNDJJDBNFN_TypeInfo);
                                                  EFNDJJDBNFN___ctor(__this_08,AHDGNOJPPIB,
                                                                     (MethodInfo *)0x0);
                                                  return (AJNNHGGLGIF_o *)__this_08;
                                                  }
                                                  bVar1 = System_String__op_Equality
                                                                    (pSVar2,StringLiteral_9327/*"Name"*/,
                                                                     (MethodInfo *)0x0);
                                                  if (bVar1) {
                                                    __this_09 = (ONMBPNGKBBO_o *)
                                                                thunk_FUN_01bda818(
                                                  ONMBPNGKBBO_TypeInfo);
                                                  ONMBPNGKBBO___ctor(__this_09,AHDGNOJPPIB,
                                                                     (MethodInfo *)0x0);
                                                  return (AJNNHGGLGIF_o *)__this_09;
                                                  }
                                                  method_00 = (MethodInfo *)0x0;
                                                  bVar1 = System_String__op_Equality
                                                                    (pSVar2,StringLiteral_8437/*"LightInTheDarkness"*/,
                                                                     (MethodInfo *)0x0);
                                                  if (!bVar1) {
                                                    pSVar2 = System_String__Concat
                                                                       (StringLiteral_11460/*"RuleParser::parseRules - unknown node name: "*/,pSVar2,
                                                                        (MethodInfo *)0x0);
                                                    if ((UnityEngine_Debug_TypeInfo->_2).
                                                        cctor_finished == 0) {
                                                      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo)
                                                      ;
                                                    }
                                                    UnityEngine_Debug__LogError
                                                              ((Il2CppObject *)pSVar2,
                                                               (MethodInfo *)0x0);
                                                    return (AJNNHGGLGIF_o *)0x0;
                                                  }
                                                  ACCIHBHMFPN = 0x2a;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            pCVar3 = FCFEFEBAILK__POBMIHHFPPO(ACCIHBHMFPN,AHDGNOJPPIB,method_00);
            return (AJNNHGGLGIF_o *)pCVar3;
          }
          __this = (MJACKBKADMN_o *)thunk_FUN_01bda818(JFAGMCHGOEH_TypeInfo);
          JFAGMCHGOEH___ctor((JFAGMCHGOEH_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
        }
      }
    }
  }
  return (AJNNHGGLGIF_o *)__this;
}


// ===== protected static CNIGOFCKBGI POBMIHHFPPO(AJNNHGGLGIF.NJHOEHEJNPH ACCIHBHMFPN, XmlNode AHDGNOJPPIB)  [RVA 0x31E4824]
// FCFEFEBAILK$$POBMIHHFPPO @ RVA 0x31E4824

CNIGOFCKBGI_o *
FCFEFEBAILK__POBMIHHFPPO(int32_t ACCIHBHMFPN,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  System_Object_array *pSVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *in_x3;
  ACBCKKIEOCE_o *__this_00;
  int32_t HEHMPFLAEGE;
  int32_t local_24;
  
  if ((DAT_04566d57 & 1) == 0) {
    FUN_01bab630(&ACBCKKIEOCE_TypeInfo);
    FUN_01bab630(&ACKAABIGIAI_TypeInfo);
    FUN_01bab630(&AFIEAGJGHGK_TypeInfo);
    FUN_01bab630(&APGFNOPIODP_TypeInfo);
    FUN_01bab630(&BDGLOJJKLFN_TypeInfo);
    FUN_01bab630(&BFDLCIGIKBJ_TypeInfo);
    FUN_01bab630(&BIEHNLODKBK_TypeInfo);
    FUN_01bab630(&CCAEOJMALLA_TypeInfo);
    FUN_01bab630(&CIDOIOIEAFF_TypeInfo);
    FUN_01bab630(&CNPFMNENBMG_TypeInfo);
    FUN_01bab630(&DEENPPDACAD_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EDELKOLBNDG_TypeInfo);
    FUN_01bab630(&EDIHAKCJAMI_TypeInfo);
    FUN_01bab630(&HHCPHEMFLGO_TypeInfo);
    FUN_01bab630(&HLBENPGOJAN_TypeInfo);
    FUN_01bab630(&HMPMHFHGAMH_TypeInfo);
    FUN_01bab630(&IEDMAJBEPCN_TypeInfo);
    FUN_01bab630(&IEEEKABGCHL_TypeInfo);
    FUN_01bab630(&IJHANGIFHPF_TypeInfo);
    FUN_01bab630(&JFDPMLLJKFH_TypeInfo);
    FUN_01bab630(&KMCKIANFOLB_TypeInfo);
    FUN_01bab630(&LNMCGOLABEK_TypeInfo);
    FUN_01bab630(&MAMPGAGEGOG_TypeInfo);
    FUN_01bab630(&NAKKKCKOHGH_TypeInfo);
    FUN_01bab630(&NBCALFOIEAA_TypeInfo);
    FUN_01bab630(&AJNNHGGLGIF_NJHOEHEJNPH_TypeInfo);
    FUN_01bab630(&OGOKJDDJEOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&PADDODJLLFJ_TypeInfo);
    FUN_01bab630(&PLIKNCJICMM_TypeInfo);
    FUN_01bab630(&StringLiteral_3023/*"ApplyTo"*/);
    FUN_01bab630(&StringLiteral_11459/*"RuleParser::parseInFightRule ERROR - wrong rule type {0}"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_2810/*"All"*/);
    FUN_01bab630(&StringLiteral_11458/*"RuleParser::parseInFightRule ERROR - wrong rule applyTo {0}"*/);
    FUN_01bab630(&StringLiteral_3550/*"Bot"*/);
    DAT_04566d57 = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (__this = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     __this != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this,StringLiteral_3023/*"ApplyTo"*/,(MethodInfo *)0x0);
    a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_2810/*"All"*/,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
    if (bVar1) {
      HEHMPFLAEGE = 1;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_3550/*"Bot"*/,(MethodInfo *)0x0);
      if (bVar1) {
        HEHMPFLAEGE = 2;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_2810/*"All"*/,(MethodInfo *)0x0);
        if (bVar1) {
          HEHMPFLAEGE = 3;
        }
        else {
          pSVar2 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          if (pSVar2 == (System_Object_array *)0x0) goto LAB_032e5054;
          if ((a != (System_String_o *)0x0) &&
             (lVar4 = thunk_FUN_01bda71c(a,(((pSVar2->obj).klass)->_1).element_class), lVar4 == 0))
          goto LAB_032e505c;
          if ((int)pSVar2->max_length == 0) goto LAB_032e5058;
          pSVar2->m_Items[0] = (Il2CppObject *)a;
          thunk_FUN_01c20e04(pSVar2->m_Items,a);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_11458/*"RuleParser::parseInFightRule ERROR - wrong rule applyTo {0}"*/,pSVar2,(MethodInfo *)0x0);
          HEHMPFLAEGE = 0;
        }
      }
    }
    switch(ACCIHBHMFPN) {
    case 5:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(NBCALFOIEAA_TypeInfo);
      NBCALFOIEAA___ctor((NBCALFOIEAA_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 6:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(EDIHAKCJAMI_TypeInfo);
      EDIHAKCJAMI___ctor((EDIHAKCJAMI_o *)__this_00,AHDGNOJPPIB,1,in_x3);
      break;
    case 7:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(AFIEAGJGHGK_TypeInfo);
      AFIEAGJGHGK___ctor((AFIEAGJGHGK_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 8:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(PADDODJLLFJ_TypeInfo);
      PADDODJLLFJ___ctor((PADDODJLLFJ_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 9:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(BDGLOJJKLFN_TypeInfo);
      BDGLOJJKLFN___ctor((BDGLOJJKLFN_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 10:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(JFDPMLLJKFH_TypeInfo);
      JFDPMLLJKFH___ctor((JFDPMLLJKFH_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0xb:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(DEENPPDACAD_TypeInfo);
      DEENPPDACAD___ctor((DEENPPDACAD_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0xc:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(NAKKKCKOHGH_TypeInfo);
      NAKKKCKOHGH___ctor((NAKKKCKOHGH_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0xd:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(ACKAABIGIAI_TypeInfo);
      ACKAABIGIAI___ctor((ACKAABIGIAI_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0xe:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(APGFNOPIODP_TypeInfo);
      APGFNOPIODP___ctor((APGFNOPIODP_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0xf:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(CNPFMNENBMG_TypeInfo);
      CNPFMNENBMG___ctor((CNPFMNENBMG_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0x10:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(HHCPHEMFLGO_TypeInfo);
      HHCPHEMFLGO___ctor((HHCPHEMFLGO_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0x11:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(MAMPGAGEGOG_TypeInfo);
      MAMPGAGEGOG___ctor((MAMPGAGEGOG_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0x12:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(EDELKOLBNDG_TypeInfo);
      EDELKOLBNDG___ctor((EDELKOLBNDG_o *)__this_00,AHDGNOJPPIB,3,(MethodInfo *)0x0);
      break;
    case 0x13:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(KMCKIANFOLB_TypeInfo);
      KMCKIANFOLB___ctor((KMCKIANFOLB_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0x14:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(BIEHNLODKBK_TypeInfo);
      BIEHNLODKBK___ctor((BIEHNLODKBK_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    default:
      pSVar2 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = ACCIHBHMFPN;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(AJNNHGGLGIF_NJHOEHEJNPH_TypeInfo,&local_24);
      if (pSVar2 == (System_Object_array *)0x0) goto LAB_032e5054;
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pIVar3,(((pSVar2->obj).klass)->_1).element_class), lVar4 == 0))
      {
LAB_032e505c:
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
      }
      if ((int)pSVar2->max_length == 0) {
LAB_032e5058:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pSVar2->m_Items[0] = pIVar3;
      thunk_FUN_01c20e04(pSVar2->m_Items,pIVar3);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_11459/*"RuleParser::parseInFightRule ERROR - wrong rule type {0}"*/,pSVar2,(MethodInfo *)0x0);
      __this_00 = (ACBCKKIEOCE_o *)0x0;
      break;
    case 0x18:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(LNMCGOLABEK_TypeInfo);
      LNMCGOLABEK___ctor((LNMCGOLABEK_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0x19:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(CCAEOJMALLA_TypeInfo);
      CCAEOJMALLA___ctor((CCAEOJMALLA_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0x1a:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(CIDOIOIEAFF_TypeInfo);
      CIDOIOIEAFF___ctor((CIDOIOIEAFF_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
      break;
    case 0x1b:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(IEEEKABGCHL_TypeInfo);
      IEEEKABGCHL___ctor((IEEEKABGCHL_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0x1c:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(IJHANGIFHPF_TypeInfo);
      IJHANGIFHPF___ctor((IJHANGIFHPF_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0x1e:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(BFDLCIGIKBJ_TypeInfo);
      BFDLCIGIKBJ___ctor((BFDLCIGIKBJ_o *)__this_00,AHDGNOJPPIB,2,(MethodInfo *)0x0);
      break;
    case 0x1f:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(IEDMAJBEPCN_TypeInfo);
      IEDMAJBEPCN___ctor((IEDMAJBEPCN_o *)__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
      break;
    case 0x20:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(ACBCKKIEOCE_TypeInfo);
      ACBCKKIEOCE___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
      break;
    case 0x22:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(HLBENPGOJAN_TypeInfo);
      HLBENPGOJAN___ctor((HLBENPGOJAN_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0x24:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(PLIKNCJICMM_TypeInfo);
      PLIKNCJICMM___ctor((PLIKNCJICMM_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0x28:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(HMPMHFHGAMH_TypeInfo);
      HMPMHFHGAMH___ctor((HMPMHFHGAMH_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
      break;
    case 0x2a:
      __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(OGOKJDDJEOE_TypeInfo);
      OGOKJDDJEOE___ctor((OGOKJDDJEOE_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,(MethodInfo *)0x0);
    }
    return (CNIGOFCKBGI_o *)__this_00;
  }
LAB_032e5054:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BKHDDKOEEKP.BGGNJLLOHII INAPKENHIEC(XmlNode AHDGNOJPPIB)  [RVA 0x31D438C]
// FCFEFEBAILK$$INAPKENHIEC @ RVA 0x31D438C

int32_t FCFEFEBAILK__INAPKENHIEC(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = AHDGNOJPPIB;
  if ((DAT_04566d58 & 1) == 0) {
                    /* try { // try from 032d43a4 to 033d44ab has its CatchHandler @ 032d43a4
                       catch() { ... } // from try @ 032d43a4 with catch @ 032d43a4
                       catch() { ... } // from try @ 032d44d8 with catch @ 032d43a4
                       catch() { ... } // from try @ 032d4630 with catch @ 032d43a4
                       catch() { ... } // from try @ 032d4660 with catch @ 032d43a4 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_13972/*"Turtle"*/);
    FUN_01bab630(&StringLiteral_11461/*"RuleParser::parseStyleType - unknown type: "*/);
    FUN_01bab630(&StringLiteral_7019/*"Hard"*/);
    FUN_01bab630(&StringLiteral_4848/*"Crazy"*/);
    FUN_01bab630(&StringLiteral_2789/*"Aggressive"*/);
    FUN_01bab630(&StringLiteral_6273/*"Fantastic"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    auVar4 = FUN_01bab630(&StringLiteral_3572/*"Brutal"*/);
    DAT_04566d58 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    auVar5 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar5._8_8_;
    auVar4 = auVar1 << 0x40;
    if (auVar5._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (auVar5._0_8_,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar3,StringLiteral_13972/*"Turtle"*/,(MethodInfo *)0x0);
      if (!bVar2) {
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_7019/*"Hard"*/,(MethodInfo *)0x0);
        if (bVar2) {
          return 1;
        }
                    /* try { // try from 032d44bc to 033d44bf has its CatchHandler @ 032d4610 */
                    /* try { // try from 032d44c0 to 033d44d7 has its CatchHandler @ 032d460c */
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_3572/*"Brutal"*/,(MethodInfo *)0x0);
        if (bVar2) {
          return 2;
        }
                    /* try { // try from 032d44d8 to 033d462b has its CatchHandler @ 032d43a4 */
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_2789/*"Aggressive"*/,(MethodInfo *)0x0);
        if (bVar2) {
          return 3;
        }
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_4848/*"Crazy"*/,(MethodInfo *)0x0);
        if (bVar2) {
          return 4;
        }
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_6273/*"Fantastic"*/,(MethodInfo *)0x0);
        if (bVar2) {
          return 5;
        }
        pSVar3 = System_String__Concat(StringLiteral_11461/*"RuleParser::parseStyleType - unknown type: "*/,pSVar3,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}

