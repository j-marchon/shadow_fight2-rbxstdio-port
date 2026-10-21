// TypeDefIndex 3305
// Namespace: 
// public static class DLAFGNMCMFA
// Fields:
//   private static MGNDHCBAPEN<int, int> <KCODOPGBHJI>k__BackingField; // 0x0
//   private static MGNDHCBAPEN<int, int> <LNCAAMPFOII>k__BackingField; // 0x8
//   private static int CNNNAMKEGBB; // 0x10
//   private static float KODKKHPADDM; // 0x14
//   private static int IIEEJEFADFL; // 0x18
//   private static bool GKKDAFELPHG; // 0x1C
//   private static int MMFABIKGCOH; // 0x20
//   private static Dictionary<int, int> HGMHAHBNEOA; // 0x28
//   private static float <OCNOHDFKBAP>k__BackingField; // 0x30

// ===== public static float ICDJJEEFJPN()  [RVA 0x3521314]
// DLAFGNMCMFA$$ICDJJEEFJPN @ RVA 0x3521314

float DLAFGNMCMFA__ICDJJEEFJPN(MethodInfo *method)

{
  if ((DAT_045689c3 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_045689c3 = 1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return DLAFGNMCMFA_TypeInfo->static_fields->_OCNOHDFKBAP_k__BackingField;
}


// ===== public static void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x352136C]
// DLAFGNMCMFA$$HNIHOIAMDPC @ RVA 0x352136C

/* WARNING: Removing unreachable block (ram,0x036219f0) */

void DLAFGNMCMFA__HNIHOIAMDPC(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  int32_t iVar5;
  int32_t value;
  System_Xml_XmlNode_o *pSVar6;
  MGNDHCBAPEN_int__int__o *pMVar7;
  MGNDHCBAPEN_int__int__o **ppMVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_Collections_Generic_Dictionary_int__int__o *pSVar10;
  long *plVar11;
  undefined8 *puVar12;
  System_String_o *__this;
  ulong extraout_x1;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  float fVar16;
  undefined1 auVar17 [16];
  
  auVar17._8_8_ = method;
  auVar17._0_8_ = AHDGNOJPPIB;
  if ((DAT_045689c4 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_int>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_int>_set_Item__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9631/*"NotificationDlgDefaultReadTime"*/);
    FUN_01bab630(&StringLiteral_7117/*"HintWidth"*/);
    FUN_01bab630(&StringLiteral_5258/*"DefaultRollTime"*/);
    FUN_01bab630(&StringLiteral_3102/*"ArrowFlashingFrames"*/);
    FUN_01bab630(&StringLiteral_3620/*"ButtonWidth"*/);
    FUN_01bab630(&StringLiteral_12107/*"ShowMenuTime"*/);
    FUN_01bab630(&StringLiteral_7115/*"HintTimeout"*/);
    FUN_01bab630(&StringLiteral_5249/*"DefaultButtonCenterWidth"*/);
    auVar17 = FUN_01bab630(&StringLiteral_4926/*"CurrencyCounterRollTime"*/);
    DAT_045689c4 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar6 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_3620/*"ButtonWidth"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    pMVar7 = GIAMPEGMNHE__GGPIBJJKMPK(pSVar6,0xf2,0x156,(MethodInfo *)0x0);
    if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DLAFGNMCMFA_TypeInfo);
    }
    if (DAT_04568a2f == '\0') {
      FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
      DAT_04568a2f = '\x01';
    }
    if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    DLAFGNMCMFA_TypeInfo->static_fields->_KCODOPGBHJI_k__BackingField = pMVar7;
    thunk_FUN_01c20e04(DLAFGNMCMFA_TypeInfo->static_fields,pMVar7);
    pSVar6 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_7117/*"HintWidth"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    pMVar7 = GIAMPEGMNHE__GGPIBJJKMPK(pSVar6,0xf2,0x156,(MethodInfo *)0x0);
    if (DAT_04568a30 == '\0') {
      FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
      DAT_04568a30 = '\x01';
    }
                    /* try { // try from 0362154c to 03721553 has its CatchHandler @ 03621c98 */
                    /* try { // try from 0362155c to 03721567 has its CatchHandler @ 03621c94 */
                    /* try { // try from 03621570 to 0372157f has its CatchHandler @ 03621c90 */
    if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppMVar8 = &DLAFGNMCMFA_TypeInfo->static_fields->_LNCAAMPFOII_k__BackingField;
    *ppMVar8 = pMVar7;
                    /* try { // try from 0362158c to 03721597 has its CatchHandler @ 03621c88 */
    thunk_FUN_01c20e04(ppMVar8,pMVar7);
                    /* try { // try from 03621598 to 03721c83 has its CatchHandler @ 03620fd4 */
    pSVar6 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_5249/*"DefaultButtonCenterWidth"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    pSVar9 = EIABCPKDEBD__IOBEKBNCOMI(pSVar6,(MethodInfo *)0x0);
    iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
    DLAFGNMCMFA_TypeInfo->static_fields->CNNNAMKEGBB = iVar5;
    pSVar6 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_7115/*"HintTimeout"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    pSVar9 = EIABCPKDEBD__IOBEKBNCOMI(pSVar6,(MethodInfo *)0x0);
    fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar9,1.0,(MethodInfo *)0x0);
    DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM = fVar16;
    pSVar6 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_3102/*"ArrowFlashingFrames"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    pSVar9 = EIABCPKDEBD__IOBEKBNCOMI(pSVar6,(MethodInfo *)0x0);
    iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0x78,(MethodInfo *)0x0);
    DLAFGNMCMFA_TypeInfo->static_fields->IIEEJEFADFL = iVar5;
    pSVar6 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_12107/*"ShowMenuTime"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    pSVar9 = EIABCPKDEBD__IOBEKBNCOMI(pSVar6,(MethodInfo *)0x0);
    bVar4 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
    DLAFGNMCMFA_TypeInfo->static_fields->GKKDAFELPHG = bVar4;
    pSVar6 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_9631/*"NotificationDlgDefaultReadTime"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    pSVar9 = EIABCPKDEBD__IOBEKBNCOMI(pSVar6,(MethodInfo *)0x0);
    fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar9,0.0,(MethodInfo *)0x0);
    if (DAT_04568a31 == '\0') {
      FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
      DAT_04568a31 = '\x01';
    }
    if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    DLAFGNMCMFA_TypeInfo->static_fields->_OCNOHDFKBAP_k__BackingField = fVar16;
    auVar17 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                        (AHDGNOJPPIB,StringLiteral_4926/*"CurrencyCounterRollTime"*/,
                         (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    uVar14 = auVar17._8_8_;
    plVar11 = auVar17._0_8_;
    if (plVar11 == (long *)0x0) {
      return;
    }
    if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      uVar14 = extraout_x1;
    }
    pSVar10 = DLAFGNMCMFA_TypeInfo->static_fields->HGMHAHBNEOA;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar14;
    auVar17 = auVar2 << 0x40;
    if (pSVar10 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
      System_Collections_Generic_Dictionary<int,_int>__Clear
                (pSVar10,Method_System_Collections_Generic_Dictionary<int,_int>_Clear__);
      auVar17 = (**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
      plVar11 = auVar17._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar17._8_8_;
      auVar17 = auVar3 << 0x40;
      if (plVar11 != (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0))
        ;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar13 = *plVar11;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_036217d8;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar12 = (undefined8 *)FUN_01b81914(plVar11,System_Collections_IEnumerator_TypeInfo,0);
LAB_036217d8:
          uVar14 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if ((uVar14 & 1) == 0) {
            plVar11 = (long *)thunk_FUN_01bda71c(plVar11,System_IDisposable_TypeInfo);
            if (plVar11 == (long *)0x0) {
              return;
            }
            lVar13 = *plVar11;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 == 0) goto LAB_0362198c;
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_03621974;
          }
          lVar13 = *plVar11;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_03621838;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar12 = (undefined8 *)FUN_01b81914(plVar11,System_Collections_IEnumerator_TypeInfo,1);
LAB_03621838:
          pSVar6 = (System_Xml_XmlNode_o *)(*(code *)*puVar12)(plVar11,puVar12[1]);
          if (pSVar6 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
             ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pSVar6);
          }
          __this = (System_String_o *)
                   (*(pSVar6->klass->vtable)._8_unknown.methodPtr)
                             (pSVar6,(pSVar6->klass->vtable)._8_unknown.method);
          if (__this == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar4 = System_String__Equals(__this,StringLiteral_5258/*"DefaultRollTime"*/,(MethodInfo *)0x0);
          if (bVar4) {
            pSVar9 = EIABCPKDEBD__OJIPGJBNOKD(pSVar6,(MethodInfo *)0x0);
            iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0x78,(MethodInfo *)0x0);
            if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            DLAFGNMCMFA_TypeInfo->static_fields->MMFABIKGCOH = iVar5;
          }
          else {
            pSVar9 = EIABCPKDEBD__IOBEKBNCOMI(pSVar6,(MethodInfo *)0x0);
            iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            pSVar9 = EIABCPKDEBD__OJIPGJBNOKD(pSVar6,(MethodInfo *)0x0);
            value = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar10 = DLAFGNMCMFA_TypeInfo->static_fields->HGMHAHBNEOA;
            if (pSVar10 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_Dictionary<int,_int>__set_Item
                      (pSVar10,iVar5,value,
                       Method_System_Collections_Generic_Dictionary<int,_int>_set_Item__);
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar17._0_8_,auVar17._8_8_);
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_03621974:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_036219a8;
    }
  }
LAB_0362198c:
  puVar12 = (undefined8 *)FUN_01b81914(plVar11,System_IDisposable_TypeInfo,0);
LAB_036219a8:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  return;
}


// ===== public static float FOLDEPOKOEG()  [RVA 0x3521AE0]
// DLAFGNMCMFA$$FOLDEPOKOEG @ RVA 0x3521AE0

float DLAFGNMCMFA__FOLDEPOKOEG(MethodInfo *method)

{
  if ((DAT_045689c5 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_045689c5 = 1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM;
}


// ===== public static MGNDHCBAPEN<int, int> EIPEMNKNCLI()  [RVA 0x3521B38]
// DLAFGNMCMFA$$EIPEMNKNCLI @ RVA 0x3521B38

MGNDHCBAPEN_int__int__o * DLAFGNMCMFA__EIPEMNKNCLI(MethodInfo *method)

{
  if ((DAT_045689c6 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_045689c6 = 1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return DLAFGNMCMFA_TypeInfo->static_fields->_KCODOPGBHJI_k__BackingField;
}


// ===== private static void .cctor()  [RVA 0x3521B90]
// DLAFGNMCMFA$$.cctor @ RVA 0x3521B90

void DLAFGNMCMFA___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *__this;
  System_Collections_Generic_Dictionary_int__int__o **ppSVar1;
  DLAFGNMCMFA_StaticFields *pDVar2;
  
  if ((DAT_045689c7 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_int>_TypeInfo);
    DAT_045689c7 = 1;
  }
  pDVar2 = DLAFGNMCMFA_TypeInfo->static_fields;
  pDVar2->MMFABIKGCOH = 0;
  pDVar2->CNNNAMKEGBB = 0;
  pDVar2->KODKKHPADDM = 0.0;
  *(undefined8 *)((long)&pDVar2->KODKKHPADDM + 1) = 0;
  __this = (System_Collections_Generic_Dictionary_int__int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_int>_TypeInfo);
  System_Collections_Generic_Dictionary<int,_int>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<int,_int>__ctor__);
  ppSVar1 = &DLAFGNMCMFA_TypeInfo->static_fields->HGMHAHBNEOA;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}


// ===== public static int AGHJNKOFBEK()  [RVA 0x3521C34]
// DLAFGNMCMFA$$AGHJNKOFBEK @ RVA 0x3521C34

int32_t DLAFGNMCMFA__AGHJNKOFBEK(MethodInfo *method)

{
  if ((DAT_045689c8 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_045689c8 = 1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03621c84 to 03721c87 has its CatchHandler @ 03621c8c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362158c with catch @ 03621c88
                       try { // try from 03621c88 to 03721caf has its CatchHandler @ 03620fd4 */
  return DLAFGNMCMFA_TypeInfo->static_fields->MMFABIKGCOH;
}


// ===== public static Dictionary<int, int> CDIHFHBNHBE()  [RVA 0x3521C8C]
// DLAFGNMCMFA$$CDIHFHBNHBE @ RVA 0x3521C8C

System_Collections_Generic_Dictionary_int__int__o * DLAFGNMCMFA__CDIHFHBNHBE(MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03621c84 with catch @ 03621c8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03621570 with catch @ 03621c90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362155c with catch @ 03621c94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362154c with catch @ 03621c98
                        */
  if ((DAT_045689c9 & 1) == 0) {
                    /* try { // try from 03621cb0 to 03721cb3 has its CatchHandler @ 03621cdc */
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
                    /* try { // try from 03621cb4 to 03721ceb has its CatchHandler @ 03620fd4 */
    DAT_045689c9 = 1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 03621cb0 with catch @ 03621cdc */
  return DLAFGNMCMFA_TypeInfo->static_fields->HGMHAHBNEOA;
}


// ===== private static void EOLKHMJJPJA(MGNDHCBAPEN<int, int> CJNHFNHJHPE)  [RVA 0x3521CE4]
// DLAFGNMCMFA$$EOLKHMJJPJA @ RVA 0x3521CE4

void DLAFGNMCMFA__EOLKHMJJPJA(MGNDHCBAPEN_int__int__o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03621cec to 03721cf3 has its CatchHandler @ 03621d08 */
                    /* try { // try from 03621cf4 to 03721cff has its CatchHandler @ 03620fd4 */
                    /* try { // try from 03621d00 to 03721d07 has its CatchHandler @ 03621d08 */
  if ((DAT_045689ca & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03621cec with catch @ 03621d08
                       catch(type#2 @ 00000000) { ... } // from try @ 03621d00 with catch @ 03621d08
                        */
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_045689ca = 1;
    method = extraout_x1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DLAFGNMCMFA_TypeInfo,method);
  }
  DLAFGNMCMFA_TypeInfo->static_fields->_KCODOPGBHJI_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(DLAFGNMCMFA_TypeInfo->static_fields,CJNHFNHJHPE);
  return;
}


// ===== public static MGNDHCBAPEN<int, int> AHOGKKPOGGJ()  [RVA 0x3521D4C]
// DLAFGNMCMFA$$AHOGKKPOGGJ @ RVA 0x3521D4C

MGNDHCBAPEN_int__int__o * DLAFGNMCMFA__AHOGKKPOGGJ(MethodInfo *method)

{
  if ((DAT_045689cb & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_045689cb = 1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return DLAFGNMCMFA_TypeInfo->static_fields->_LNCAAMPFOII_k__BackingField;
}


// ===== public static int JONIFHEEOPP()  [RVA 0x3521DA4]
// DLAFGNMCMFA$$JONIFHEEOPP @ RVA 0x3521DA4

int32_t DLAFGNMCMFA__JONIFHEEOPP(MethodInfo *method)

{
  if ((DAT_045689cc & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_045689cc = 1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return DLAFGNMCMFA_TypeInfo->static_fields->IIEEJEFADFL;
}


// ===== public static int MKCOEBLBCFK()  [RVA 0x3521DFC]
// DLAFGNMCMFA$$MKCOEBLBCFK @ RVA 0x3521DFC

int32_t DLAFGNMCMFA__MKCOEBLBCFK(MethodInfo *method)

{
  if ((DAT_045689cd & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_045689cd = 1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return DLAFGNMCMFA_TypeInfo->static_fields->CNNNAMKEGBB;
}


// ===== private static void HPGPBIINODK(float CJNHFNHJHPE)  [RVA 0x3521E54]
// DLAFGNMCMFA$$HPGPBIINODK @ RVA 0x3521E54

void DLAFGNMCMFA__HPGPBIINODK(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_045689ce & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_045689ce = 1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  DLAFGNMCMFA_TypeInfo->static_fields->_OCNOHDFKBAP_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private static void EIFCLKFDOOI(MGNDHCBAPEN<int, int> CJNHFNHJHPE)  [RVA 0x3521EB8]
// DLAFGNMCMFA$$EIFCLKFDOOI @ RVA 0x3521EB8

void DLAFGNMCMFA__EIFCLKFDOOI(MGNDHCBAPEN_int__int__o *CJNHFNHJHPE,MethodInfo *method)

{
  MGNDHCBAPEN_int__int__o **ppMVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689cf & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_045689cf = 1;
    method = extraout_x1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DLAFGNMCMFA_TypeInfo,method);
  }
  ppMVar1 = &DLAFGNMCMFA_TypeInfo->static_fields->_LNCAAMPFOII_k__BackingField;
  *ppMVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppMVar1,CJNHFNHJHPE);
  return;
}


// ===== public static bool DHHHKPFBIOB()  [RVA 0x3521F18]
// DLAFGNMCMFA$$DHHHKPFBIOB @ RVA 0x3521F18

bool DLAFGNMCMFA__DHHHKPFBIOB(MethodInfo *method)

{
  if ((DAT_045689d0 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_045689d0 = 1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return DLAFGNMCMFA_TypeInfo->static_fields->GKKDAFELPHG;
}

