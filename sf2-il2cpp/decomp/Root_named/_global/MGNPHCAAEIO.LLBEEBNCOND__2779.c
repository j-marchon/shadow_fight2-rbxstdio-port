// TypeDefIndex 2779
// Namespace: 
// public class GameUtils.LLBEEBNCOND
// Fields:
//   public string KDLGEDNJDMK; // 0x10
//   public string LGMAINFHKMG; // 0x18
//   public string PHCJAIMPHFA; // 0x20
//   public float OLHCJPEKLLA; // 0x28
//   public List<string> PKPJOJCIDGA; // 0x30

// ===== public void .ctor()  [RVA 0x341292C]
// GameUtils.LLBEEBNCOND$$.ctor @ RVA 0x341292C

void GameUtils_LLBEEBNCOND___ctor(GameUtils_LLBEEBNCOND_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  
  if ((DAT_04568092 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568092 = 1;
  }
  (__this->fields).KDLGEDNJDMK = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).LGMAINFHKMG = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).PHCJAIMPHFA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).PKPJOJCIDGA;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool KAAFKKOAMKP(string EMDIIDFAPGE)  [RVA 0x34129F8]
// GameUtils.LLBEEBNCOND$$KAAFKKOAMKP @ RVA 0x34129F8

bool GameUtils_LLBEEBNCOND__KAAFKKOAMKP
               (GameUtils_LLBEEBNCOND_o *__this,System_String_o *EMDIIDFAPGE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  
  if ((DAT_04568093 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    DAT_04568093 = 1;
  }
  __this_00 = (__this->fields).PKPJOJCIDGA;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)EMDIIDFAPGE,
                       Method_System_Collections_Generic_List<string>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3412A50]
// GameUtils.LLBEEBNCOND$$HNIHOIAMDPC @ RVA 0x3412A50

/* WARNING: Removing unreachable block (ram,0x03512fa0) */

void GameUtils_LLBEEBNCOND__HNIHOIAMDPC
               (GameUtils_LLBEEBNCOND_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  System_String_array *pSVar11;
  ulong uVar12;
  int *piVar13;
  System_Collections_Generic_List_string__o *__this_00;
  float fVar14;
  
  if ((DAT_04568094 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14838/*"WEAPON_KNIVES"*/);
    FUN_01bab630(&StringLiteral_15237/*"ZONE_1|BOSS_LYNX|1"*/);
    FUN_01bab630(&StringLiteral_13975/*"TutorialBoss"*/);
    FUN_01bab630(&StringLiteral_13982/*"TutorialWeapon"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_15239/*"ZONE_1|Tournament|1"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_12410/*"StepsNames"*/);
    FUN_01bab630(&StringLiteral_13981/*"TutorialTournament"*/);
    FUN_01bab630(&StringLiteral_13980/*"TutorialStepTimeout"*/);
    FUN_01bab630(&StringLiteral_12408/*"Step"*/);
    DAT_04568094 = 1;
  }
  if (((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
      (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                  (AHDGNOJPPIB,StringLiteral_13982/*"TutorialWeapon"*/,
                                   (AHDGNOJPPIB->klass->vtable)._51_get_Item.method),
      plVar4 != (long *)0x0)) &&
     (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)),
     pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_14838/*"WEAPON_KNIVES"*/,(MethodInfo *)0x0);
    (__this->fields).KDLGEDNJDMK = pSVar7;
    thunk_FUN_01c20e04();
    plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_13975/*"TutorialBoss"*/,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if ((plVar4 != (long *)0x0) &&
       (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)),
       pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                    /* try { // try from 03512c08 to 03612ecf has its CatchHandler @ 03512c08
                       catch() { ... } // from try @ 03512c08 with catch @ 03512c08
                       catch() { ... } // from try @ 03512f24 with catch @ 03512c08
                       catch() { ... } // from try @ 03513388 with catch @ 03512c08
                       catch() { ... } // from try @ 03513598 with catch @ 03512c08
                       catch() { ... } // from try @ 03513684 with catch @ 03512c08
                       catch() { ... } // from try @ 03513740 with catch @ 03512c08
                       catch() { ... } // from try @ 03513780 with catch @ 03512c08 */
      pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_15237/*"ZONE_1|BOSS_LYNX|1"*/,(MethodInfo *)0x0);
      (__this->fields).LGMAINFHKMG = pSVar7;
      thunk_FUN_01c20e04();
      plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                 (AHDGNOJPPIB,StringLiteral_13981/*"TutorialTournament"*/,
                                  (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      if ((plVar4 != (long *)0x0) &&
         (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)),
         pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_15239/*"ZONE_1|Tournament|1"*/,(MethodInfo *)0x0);
        (__this->fields).PHCJAIMPHFA = pSVar7;
        thunk_FUN_01c20e04();
        plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                   (AHDGNOJPPIB,StringLiteral_13980/*"TutorialStepTimeout"*/,
                                    (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        if ((plVar4 != (long *)0x0) &&
           (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)),
           pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
          fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
          (__this->fields).OLHCJPEKLLA = fVar14;
          plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                     (AHDGNOJPPIB,StringLiteral_12410/*"StepsNames"*/,
                                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
          if ((plVar4 != (long *)0x0) &&
             (plVar4 = (long *)(**(code **)(*plVar4 + 0x208))
                                         (plVar4,*(undefined8 *)(*plVar4 + 0x210)),
             plVar4 != (long *)0x0)) {
            plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0))
            ;
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              lVar10 = *plVar4;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_03512d98;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03512d98:
              uVar12 = (*(code *)*puVar8)(plVar4,puVar8[1]);
              if ((uVar12 & 1) == 0) {
                plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
                    /* try { // try from 03512f00 to 03612f0b has its CatchHandler @ 03512f28 */
                if (plVar4 == (long *)0x0) {
                  return;
                }
                lVar10 = *plVar4;
                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar12 == 0) goto LAB_03512f38;
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                goto LAB_03512f20;
              }
              lVar10 = *plVar4;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_03512df8;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03512df8:
              plVar9 = (long *)(*(code *)*puVar8)(plVar4,puVar8[1]);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                 (*(System_Xml_XmlNode_c **)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  System_Xml_XmlNode_TypeInfo)) {
                    /* try { // try from 03512f80 to 03612f83 has its CatchHandler @ 03513654 */
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(plVar9);
              }
              pSVar7 = (System_String_o *)
                       (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              bVar3 = System_String__op_Equality(StringLiteral_12408/*"Step"*/,pSVar7,(MethodInfo *)0x0);
              if (bVar3) {
                __this_00 = (__this->fields).PKPJOJCIDGA;
                pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                         (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
                if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
                lVar10 = Method_System_Collections_Generic_List<string>_Add__;
                if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar11 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pSVar11 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (__this_00->fields)._size;
                if (uVar2 < (uint)pSVar11->max_length) {
                  (__this_00->fields)._size = uVar2 + 1;
                  pSVar11->m_Items[(int)uVar2] = pSVar7;
                    /* try { // try from 03512ed0 to 03612ed7 has its CatchHandler @ 0351371c */
                  thunk_FUN_01c20e04();
                }
                else {
                    /* try { // try from 03512ee8 to 03612ef7 has its CatchHandler @ 03512f2c */
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)pSVar7,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
            } while( true );
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03512f98 to 03612fc3 has its CatchHandler @ 0351363c */
  FUN_01bab8c8();
  while( true ) {
                    /* catch() { ... } // from try @ 03512ee8 with catch @ 03512f2c */
    uVar12 = uVar12 - 1;
                    /* catch() { ... } // from try @ 03512f20 with catch @ 03512f30 */
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03512f20:
                    /* try { // try from 03512f20 to 03612f23 has its CatchHandler @ 03512f30 */
                    /* try { // try from 03512f24 to 03612f4b has its CatchHandler @ 03512c08 */
                    /* catch() { ... } // from try @ 03512f00 with catch @ 03512f28 */
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 03512f4c to 03612f67 has its CatchHandler @ 03513678 */
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03512f54;
    }
  }
LAB_03512f38:
  puVar8 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03512f54:
  (*(code *)*puVar8)(plVar4,puVar8[1]);
  return;
}

