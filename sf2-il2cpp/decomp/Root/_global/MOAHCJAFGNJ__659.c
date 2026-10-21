// TypeDefIndex 659
// Namespace: 
// public static class MOAHCJAFGNJ
// Fields:
//   public static MOAHCJAFGNJ.ODGLOLLAENF AEPDOIPFMKD; // 0x0
//   public static MOAHCJAFGNJ.NEEADEALBAI HLGBDNJJIMH; // 0x8
//   public static MOAHCJAFGNJ.DMJGKEDFAGF PIECBLBNNOP; // 0x10
//   public static MOAHCJAFGNJ.HADJGJNEKJD OIENMJKDCOL; // 0x18

// ===== public static void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x35D02A0]
// MOAHCJAFGNJ$$HNIHOIAMDPC @ RVA 0x35D02A0

/* WARNING: Removing unreachable block (ram,0x036d0c0c) */

void MOAHCJAFGNJ__HNIHOIAMDPC(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  long *plVar4;
  long *plVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_Xml_XmlNode_o *pSVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  undefined8 *puVar10;
  System_String_o *item;
  long lVar11;
  System_String_array *pSVar12;
  ulong uVar13;
  int *piVar14;
  MOAHCJAFGNJ_NEEADEALBAI_o *pMVar15;
  System_Collections_Generic_List_string__o **ppSVar16;
  MOAHCJAFGNJ_DMJGKEDFAGF_o *pMVar17;
  MOAHCJAFGNJ_ODGLOLLAENF_o *pMVar18;
  MOAHCJAFGNJ_HADJGJNEKJD_o *pMVar19;
  float fVar20;
  
  if ((DAT_04568fdf & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5274/*"DelayBeforeFade"*/);
    FUN_01bab630(&StringLiteral_5379/*"DifficultyIsFirstFrame"*/);
    FUN_01bab630(&StringLiteral_10862/*"RaidInfo"*/);
    FUN_01bab630(&StringLiteral_4248/*"Challenge"*/);
    FUN_01bab630(&StringLiteral_9992/*"OscillationFactor"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_3444/*"BattleTypes"*/);
    FUN_01bab630(&StringLiteral_6199/*"FadeDelay"*/);
    FUN_01bab630(&StringLiteral_11374/*"RewardLine"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_13913/*"TransitionDuration"*/);
    FUN_01bab630(&StringLiteral_10475/*"PrizeIsFirstFrame"*/);
    FUN_01bab630(&StringLiteral_6204/*"FadeSpeed"*/);
    FUN_01bab630(&StringLiteral_15313/*"ZoneSwitch"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_9068/*"MinOpacity"*/);
    FUN_01bab630(&StringLiteral_9993/*"OscillationPeriod"*/);
    DAT_04568fdf = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                             (AHDGNOJPPIB,StringLiteral_11374/*"RewardLine"*/,
                              (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MOAHCJAFGNJ_TypeInfo);
  }
  if (plVar4 != (long *)0x0) {
    pMVar17 = MOAHCJAFGNJ_TypeInfo->static_fields->PIECBLBNNOP;
    plVar5 = (long *)(**(code **)(*plVar4 + 0x468))
                               (plVar4,StringLiteral_9993/*"OscillationPeriod"*/,*(undefined8 *)(*plVar4 + 0x470));
    if ((plVar5 != (long *)0x0) &&
       (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
       pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 036d0488 to 037d072b has its CatchHandler @ 036d0488
                       catch() { ... } // from try @ 036d0488 with catch @ 036d0488
                       catch() { ... } // from try @ 036d0820 with catch @ 036d0488
                       catch() { ... } // from try @ 036d08c4 with catch @ 036d0488
                       catch() { ... } // from try @ 036d0904 with catch @ 036d0488 */
      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      fVar20 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
      if (pMVar17 != (MOAHCJAFGNJ_DMJGKEDFAGF_o *)0x0) {
        (pMVar17->fields).PLOLIDEDOEF = fVar20;
        pMVar17 = MOAHCJAFGNJ_TypeInfo->static_fields->PIECBLBNNOP;
        plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                                   (plVar4,StringLiteral_9992/*"OscillationFactor"*/,*(undefined8 *)(*plVar4 + 0x470));
        if ((plVar4 != (long *)0x0) &&
           (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)),
           pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
          pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar6,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
          fVar20 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
          if (pMVar17 != (MOAHCJAFGNJ_DMJGKEDFAGF_o *)0x0) {
            (pMVar17->fields).JDOIGKKGGDA = fVar20;
            plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                       (AHDGNOJPPIB,StringLiteral_4248/*"Challenge"*/,
                                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
            if (plVar4 != (long *)0x0) {
              pMVar18 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
              pSVar8 = (System_Xml_XmlNode_o *)
                       (**(code **)(*plVar4 + 0x468))
                                 (plVar4,StringLiteral_6199/*"FadeDelay"*/,*(undefined8 *)(*plVar4 + 0x470));
              pSVar7 = EIABCPKDEBD__IOBEKBNCOMI(pSVar8,(MethodInfo *)0x0);
              fVar20 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
              if (pMVar18 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
                (pMVar18->fields).NJOJKEKJIDC = fVar20;
                pMVar18 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
                pSVar8 = (System_Xml_XmlNode_o *)
                         (**(code **)(*plVar4 + 0x468))
                                   (plVar4,StringLiteral_13913/*"TransitionDuration"*/,*(undefined8 *)(*plVar4 + 0x470));
                pSVar7 = EIABCPKDEBD__IOBEKBNCOMI(pSVar8,(MethodInfo *)0x0);
                fVar20 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
                if (pMVar18 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
                  (pMVar18->fields).OJILDEBJODL = fVar20;
                  pMVar18 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
                  plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                                             (plVar4,StringLiteral_5379/*"DifficultyIsFirstFrame"*/,
                                              *(undefined8 *)(*plVar4 + 0x470));
                  if ((plVar4 != (long *)0x0) &&
                     (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                               (**(code **)(*plVar4 + 0x238))
                                         (plVar4,*(undefined8 *)(*plVar4 + 0x240)),
                     pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar6,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                    iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
                    if (pMVar18 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
                      (pMVar18->fields).CGEBFCBMLKC = iVar3;
                      plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                                 (AHDGNOJPPIB,StringLiteral_10862/*"RaidInfo"*/,
                                                  (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                      if (plVar4 != (long *)0x0) {
                        if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        pMVar19 = MOAHCJAFGNJ_TypeInfo->static_fields->OIENMJKDCOL;
                        pSVar8 = (System_Xml_XmlNode_o *)
                                 (**(code **)(*plVar4 + 0x468))
                                           (plVar4,StringLiteral_9068/*"MinOpacity"*/,
                                            *(undefined8 *)(*plVar4 + 0x470));
                        pSVar7 = EIABCPKDEBD__IOBEKBNCOMI(pSVar8,(MethodInfo *)0x0);
                        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
                        if (pMVar19 == (MOAHCJAFGNJ_HADJGJNEKJD_o *)0x0) goto LAB_036d0bf0;
                        (pMVar19->fields).CBEFHLDCMFF = iVar3;
                        pMVar19 = MOAHCJAFGNJ_TypeInfo->static_fields->OIENMJKDCOL;
                        pSVar8 = (System_Xml_XmlNode_o *)
                                 (**(code **)(*plVar4 + 0x468))
                                           (plVar4,StringLiteral_6204/*"FadeSpeed"*/,
                                            *(undefined8 *)(*plVar4 + 0x470));
                        pSVar7 = EIABCPKDEBD__IOBEKBNCOMI(pSVar8,(MethodInfo *)0x0);
                        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
                        if (pMVar19 == (MOAHCJAFGNJ_HADJGJNEKJD_o *)0x0) goto LAB_036d0bf0;
                        (pMVar19->fields).NJAMIACMNCG = iVar3;
                        pMVar19 = MOAHCJAFGNJ_TypeInfo->static_fields->OIENMJKDCOL;
                        plVar5 = (long *)(**(code **)(*plVar4 + 0x468))
                                                   (plVar4,StringLiteral_5274/*"DelayBeforeFade"*/,
                                                    *(undefined8 *)(*plVar4 + 0x470));
                        if ((plVar5 == (long *)0x0) ||
                           (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                     (**(code **)(*plVar5 + 0x238))
                                               (plVar5,*(undefined8 *)(*plVar5 + 0x240)),
                           pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_036d0bf0;
                    /* try { // try from 036d072c to 037d0733 has its CatchHandler @ 036d089c */
                        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar6,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
                        if (pMVar19 == (MOAHCJAFGNJ_HADJGJNEKJD_o *)0x0) goto LAB_036d0bf0;
                    /* try { // try from 036d0748 to 037d074b has its CatchHandler @ 036d088c */
                        (pMVar19->fields).LDKIEDOLMPM = iVar3;
                    /* try { // try from 036d0754 to 037d075b has its CatchHandler @ 036d0894 */
                    /* try { // try from 036d0760 to 037d076b has its CatchHandler @ 036d0898 */
                        pMVar19 = MOAHCJAFGNJ_TypeInfo->static_fields->OIENMJKDCOL;
                    /* try { // try from 036d0774 to 037d079f has its CatchHandler @ 036d08a0 */
                        plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                                                   (plVar4,StringLiteral_10475/*"PrizeIsFirstFrame"*/,
                                                    *(undefined8 *)(*plVar4 + 0x470));
                        if ((plVar4 == (long *)0x0) ||
                           (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                     (**(code **)(*plVar4 + 0x238))
                                               (plVar4,*(undefined8 *)(*plVar4 + 0x240)),
                           pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_036d0bf0;
                        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar6,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                    /* try { // try from 036d07a4 to 037d07af has its CatchHandler @ 036d0890 */
                        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
                        if (pMVar19 == (MOAHCJAFGNJ_HADJGJNEKJD_o *)0x0) goto LAB_036d0bf0;
                        (pMVar19->fields).CBBGNEAKBKO = iVar3;
                      }
                    /* try { // try from 036d07b8 to 037d081f has its CatchHandler @ 036d08a4 */
                      plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                                 (AHDGNOJPPIB,StringLiteral_15313/*"ZoneSwitch"*/,
                                                  (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                      if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564(MOAHCJAFGNJ_TypeInfo);
                      }
                      if (plVar4 != (long *)0x0) {
                        pMVar15 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
                        plVar5 = (long *)(**(code **)(*plVar4 + 0x468))
                                                   (plVar4,StringLiteral_9068/*"MinOpacity"*/,
                                                    *(undefined8 *)(*plVar4 + 0x470));
                    /* try { // try from 036d0820 to 037d08bf has its CatchHandler @ 036d0488 */
                        if ((plVar5 != (long *)0x0) &&
                           (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                     (**(code **)(*plVar5 + 0x238))
                                               (plVar5,*(undefined8 *)(*plVar5 + 0x240)),
                           pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                          pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar6,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                          iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
                          if (pMVar15 != (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) {
                            (pMVar15->fields).CBEFHLDCMFF = iVar3;
                            pMVar15 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
                            plVar5 = (long *)(**(code **)(*plVar4 + 0x468))
                                                       (plVar4,StringLiteral_6204/*"FadeSpeed"*/,
                                                        *(undefined8 *)(*plVar4 + 0x470));
                            if ((plVar5 != (long *)0x0) &&
                               (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                         (**(code **)(*plVar5 + 0x238))
                                                   (plVar5,*(undefined8 *)(*plVar5 + 0x240)),
                               pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d0748 with catch @ 036d088c
                        */
                              pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                 (pSVar6,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d07a4 with catch @ 036d0890
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d0754 with catch @ 036d0894
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d0760 with catch @ 036d0898
                        */
                              iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d072c with catch @ 036d089c
                        */
                              if (pMVar15 != (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d0774 with catch @ 036d08a0
                        */
                                (pMVar15->fields).NJAMIACMNCG = iVar3;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d07b8 with catch @ 036d08a4
                        */
                    /* try { // try from 036d08c0 to 037d08c3 has its CatchHandler @ 036d08ec */
                                pMVar15 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
                    /* try { // try from 036d08c4 to 037d08fb has its CatchHandler @ 036d0488 */
                                plVar5 = (long *)(**(code **)(*plVar4 + 0x468))
                                                           (plVar4,StringLiteral_5274/*"DelayBeforeFade"*/,
                                                            *(undefined8 *)(*plVar4 + 0x470));
                                if ((plVar5 != (long *)0x0) &&
                                   (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                             (**(code **)(*plVar5 + 0x238))
                                                       (plVar5,*(undefined8 *)(*plVar5 + 0x240)),
                                   pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                                  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                     (pSVar6,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036d08c0 with catch @ 036d08ec */
                                  iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
                                  if (pMVar15 != (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) {
                    /* try { // try from 036d08fc to 037d0903 has its CatchHandler @ 036d0918 */
                                    (pMVar15->fields).LDKIEDOLMPM = iVar3;
                    /* try { // try from 036d0904 to 037d090f has its CatchHandler @ 036d0488 */
                    /* try { // try from 036d0910 to 037d0917 has its CatchHandler @ 036d0918 */
                                    pMVar15 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036d08fc with catch @ 036d0918
                       catch(type#2 @ 00000000) { ... } // from try @ 036d0910 with catch @ 036d0918
                        */
                                    pSVar9 = (System_Collections_Generic_List_string__o *)
                                             thunk_FUN_01bda818(
                                                  System_Collections_Generic_List<string>_TypeInfo);
                                    System_Collections_Generic_List<object>___ctor
                                              ((System_Collections_Generic_List_object__o *)pSVar9,
                                               Method_System_Collections_Generic_List<string>__ctor__
                                              );
                                    if (pMVar15 != (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) {
                                      ppSVar16 = &(pMVar15->fields).IIDBLEBLLEM;
                                      *ppSVar16 = pSVar9;
                                      thunk_FUN_01c20e04(ppSVar16,pSVar9);
                                      plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                                                                 (plVar4,StringLiteral_3444/*"BattleTypes"*/,
                                                                  *(undefined8 *)(*plVar4 + 0x470));
                                      if ((plVar4 != (long *)0x0) &&
                                         (plVar4 = (long *)(**(code **)(*plVar4 + 0x208))
                                                                     (plVar4,*(undefined8 *)
                                                                              (*plVar4 + 0x210)),
                                         plVar4 != (long *)0x0)) {
                                        plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))
                                                                   (plVar4,*(undefined8 *)
                                                                            (*plVar4 + 0x1c0));
                                        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_01bab8c8();
                                        }
                                        do {
                                          lVar11 = *plVar4;
                                          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                          if (uVar13 != 0) {
                                            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                            do {
                                              if (*(System_Collections_IEnumerator_c **)
                                                   (piVar14 + -2) ==
                                                  System_Collections_IEnumerator_TypeInfo) {
                                                puVar10 = (undefined8 *)
                                                          (lVar11 + (long)*piVar14 * 0x10 + 0x138);
                                                goto LAB_036d0a0c;
                                              }
                                              uVar13 = uVar13 - 1;
                                              piVar14 = piVar14 + 4;
                                            } while (uVar13 != 0);
                                          }
                                          puVar10 = (undefined8 *)
                                                    FUN_01b81914(plVar4,
                                                  System_Collections_IEnumerator_TypeInfo,0);
LAB_036d0a0c:
                                          uVar13 = (*(code *)*puVar10)(plVar4,puVar10[1]);
                                          if ((uVar13 & 1) == 0) {
                                            plVar4 = (long *)thunk_FUN_01bda71c(plVar4,
                                                  System_IDisposable_TypeInfo);
                                            if (plVar4 == (long *)0x0) {
                                              return;
                                            }
                                            lVar11 = *plVar4;
                                            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                            if (uVar13 == 0) goto LAB_036d0ba4;
                                            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                            goto LAB_036d0b8c;
                                          }
                                          lVar11 = *plVar4;
                                          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                          if (uVar13 != 0) {
                                            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                            do {
                                              if (*(System_Collections_IEnumerator_c **)
                                                   (piVar14 + -2) ==
                                                  System_Collections_IEnumerator_TypeInfo) {
                                                puVar10 = (undefined8 *)
                                                          (lVar11 + (long)(*piVar14 + 1) * 0x10 +
                                                          0x138);
                                                goto LAB_036d0a6c;
                                              }
                                              uVar13 = uVar13 - 1;
                                              piVar14 = piVar14 + 4;
                                            } while (uVar13 != 0);
                                          }
                                          puVar10 = (undefined8 *)
                                                    FUN_01b81914(plVar4,
                                                  System_Collections_IEnumerator_TypeInfo,1);
LAB_036d0a6c:
                                          plVar5 = (long *)(*(code *)*puVar10)(plVar4,puVar10[1]);
                                          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_01bab8c8();
                                          }
                                          lVar11 = *plVar5;
                                          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                                          if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
                                             (*(System_Xml_XmlNode_c **)
                                               (*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                                              System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                                            FUN_01babc64();
                                          }
                                          pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                                   (**(code **)(lVar11 + 0x238))
                                                             (plVar5,*(undefined8 *)(lVar11 + 0x240)
                                                             );
                                          if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0)
                                          {
                    /* WARNING: Subroutine does not return */
                                            FUN_01bab8c8();
                                          }
                                          pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                             (pSVar6,StringLiteral_9327/*"Name"*/,
                                                              (MethodInfo *)0x0);
                                          item = EIABCPKDEBD__JPKEHIBGOEM
                                                           (pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0
                                                           );
                                          if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
                                            thunk_FUN_01ba7564();
                                          }
                                          lVar11 = 
                                          Method_System_Collections_Generic_List<string>_Add__;
                                          pMVar15 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH
                                          ;
                                          if (pMVar15 == (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_01bab8c8();
                                          }
                                          pSVar9 = (pMVar15->fields).IIDBLEBLLEM;
                                          if (pSVar9 == (System_Collections_Generic_List_string__o *
                                                        )0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_01bab8c8();
                                          }
                                          pSVar12 = (pSVar9->fields)._items;
                                          (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
                                          if (pSVar12 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_01bab8c8();
                                          }
                                          uVar2 = (pSVar9->fields)._size;
                                          if (uVar2 < (uint)pSVar12->max_length) {
                                            (pSVar9->fields)._size = uVar2 + 1;
                                            pSVar12->m_Items[(int)uVar2] = item;
                                            thunk_FUN_01c20e04(pSVar12->m_Items + (int)uVar2,item);
                                          }
                                          else {
                                            System_Collections_Generic_List<object>__AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)
                                                       pSVar9,(Il2CppObject *)item,
                                                       *(MethodInfo_26E4DAC **)
                                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                        + 0x70));
                                          }
                                        } while( true );
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
LAB_036d0bf0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_036d0b8c:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_036d0bc0;
    }
  }
LAB_036d0ba4:
  puVar10 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_036d0bc0:
  (*(code *)*puVar10)(plVar4,puVar10[1]);
  return;
}


// ===== private static void .cctor()  [RVA 0x35D0CE8]
// MOAHCJAFGNJ$$.cctor @ RVA 0x35D0CE8

void MOAHCJAFGNJ___cctor(MethodInfo *method)

{
  MOAHCJAFGNJ_ODGLOLLAENF_o *__this;
  MOAHCJAFGNJ_NEEADEALBAI_o *__this_00;
  MOAHCJAFGNJ_NEEADEALBAI_o **ppMVar1;
  MOAHCJAFGNJ_DMJGKEDFAGF_o *__this_01;
  MOAHCJAFGNJ_DMJGKEDFAGF_o **ppMVar2;
  MOAHCJAFGNJ_HADJGJNEKJD_o *__this_02;
  MOAHCJAFGNJ_HADJGJNEKJD_o **ppMVar3;
  
  if ((DAT_04568fe0 & 1) == 0) {
    FUN_01bab630(&MOAHCJAFGNJ_DMJGKEDFAGF_TypeInfo);
    FUN_01bab630(&MOAHCJAFGNJ_HADJGJNEKJD_TypeInfo);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    FUN_01bab630(&MOAHCJAFGNJ_NEEADEALBAI_TypeInfo);
    FUN_01bab630(&MOAHCJAFGNJ_ODGLOLLAENF_TypeInfo);
    DAT_04568fe0 = 1;
  }
  __this = (MOAHCJAFGNJ_ODGLOLLAENF_o *)thunk_FUN_01bda818(MOAHCJAFGNJ_ODGLOLLAENF_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD = __this;
  thunk_FUN_01c20e04(MOAHCJAFGNJ_TypeInfo->static_fields,__this);
  __this_00 = (MOAHCJAFGNJ_NEEADEALBAI_o *)thunk_FUN_01bda818(MOAHCJAFGNJ_NEEADEALBAI_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  ppMVar1 = &MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
  *ppMVar1 = __this_00;
  thunk_FUN_01c20e04(ppMVar1,__this_00);
  __this_01 = (MOAHCJAFGNJ_DMJGKEDFAGF_o *)thunk_FUN_01bda818(MOAHCJAFGNJ_DMJGKEDFAGF_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  ppMVar2 = &MOAHCJAFGNJ_TypeInfo->static_fields->PIECBLBNNOP;
  *ppMVar2 = __this_01;
  thunk_FUN_01c20e04(ppMVar2,__this_01);
  __this_02 = (MOAHCJAFGNJ_HADJGJNEKJD_o *)thunk_FUN_01bda818(MOAHCJAFGNJ_HADJGJNEKJD_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  ppMVar3 = &MOAHCJAFGNJ_TypeInfo->static_fields->OIENMJKDCOL;
  *ppMVar3 = __this_02;
  thunk_FUN_01c20e04(ppMVar3,__this_02);
  return;
}

