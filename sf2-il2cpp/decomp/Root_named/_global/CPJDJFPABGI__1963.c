// TypeDefIndex 1963
// Namespace: 
// public class CPJDJFPABGI : QuestAction
// Fields:
//   private string PMHMOJGEAAN; // 0x68
//   private List<KeyValuePair<string, int>> NDEECPOPNFM; // 0x70

// ===== private void KFPDGHBDLGK(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3284028]
// CPJDJFPABGI$$KFPDGHBDLGK @ RVA 0x3284028

void CPJDJFPABGI__KFPDGHBDLGK(CPJDJFPABGI_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  System_Action_o *LILIJINNGNC;
  System_String_o *pSVar1;
  
  if ((DAT_045672a5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_BOFEMGGNODC_FGNINNOOCCL__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_045672a5 = 1;
  }
  pSVar1 = (__this->fields).PMHMOJGEAAN;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MFBNFJGBPBB__LPLONLCAIGL(pSVar1,AAJBIMFNMBB,(MethodInfo *)0x0);
  LILIJINNGNC = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  GameUtils__JBMJNGNBGKC(pSVar1,LILIJINNGNC,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x328411C]
// CPJDJFPABGI$$MAHFCKJGBPP @ RVA 0x328411C

void CPJDJFPABGI__MAHFCKJGBPP(CPJDJFPABGI_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  MethodInfo *method_00;
  System_Collections_Generic_List_KeyValuePair_string__int___o *pSVar3;
  UnityEngine_Object_o *x;
  
  if ((DAT_045672a6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045672a6 = 1;
  }
  method_00 = (MethodInfo *)0x0;
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).NDEECPOPNFM;
  if (pSVar3 != (System_Collections_Generic_List_KeyValuePair_string__int___o *)0x0) {
    if ((pSVar3->fields)._size < 1) {
      CPJDJFPABGI__KFPDGHBDLGK(__this,AAJBIMFNMBB,method_00);
    }
    else {
      CPJDJFPABGI__GCKNPLLGECO(__this,AAJBIMFNMBB,method_00);
    }
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
        (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
      Nekki_SF2_GUI_Map_MapScene__UpdateZoneLamps
                ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3284410]
// CPJDJFPABGI$$HNIHOIAMDPC @ RVA 0x3284410

void CPJDJFPABGI__HNIHOIAMDPC
               (CPJDJFPABGI_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if ((DAT_045672a7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12880/*"Text"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045672a7 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_12880/*"Text"*/,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).PMHMOJGEAAN = pSVar1;
      thunk_FUN_01c20e04();
      CPJDJFPABGI__JGIDNDELBPG(__this,NPLGCIFGFOK,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GCKNPLLGECO(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3284258]
// CPJDJFPABGI$$GCKNPLLGECO @ RVA 0x3284258

void CPJDJFPABGI__GCKNPLLGECO(CPJDJFPABGI_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_Generic_List_T__o *__this_01;
  System_Action_T__o *action;
  System_Action_o *LILIJINNGNC;
  void **ppvVar1;
  System_Collections_Generic_List_KeyValuePair_string__int___o *pSVar2;
  
  if ((DAT_045672a8 & 1) == 0) {
    FUN_01bab630(&System_Action<KeyValuePair<string,_int>>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_BOFEMGGNODC_FGNINNOOCCL__);
    FUN_01bab630(&Method_CPJDJFPABGI_FGGFAAPJLCN_KGNDFCKAIHN__);
    FUN_01bab630(&CPJDJFPABGI_FGGFAAPJLCN_TypeInfo);
                    /* try { // try from 033842c8 to 034844ff has its CatchHandler @ 033842c8
                       catch() { ... } // from try @ 033842c8 with catch @ 033842c8
                       catch() { ... } // from try @ 03384738 with catch @ 033842c8
                       catch() { ... } // from try @ 0338481c with catch @ 033842c8
                       catch() { ... } // from try @ 03384880 with catch @ 033842c8
                       catch() { ... } // from try @ 03384888 with catch @ 033842c8
                       catch() { ... } // from try @ 033848cc with catch @ 033842c8
                       catch() { ... } // from try @ 03384908 with catch @ 033842c8
                       catch() { ... } // from try @ 03384a08 with catch @ 033842c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_int>>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_045672a8 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(CPJDJFPABGI_FGGFAAPJLCN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)AAJBIMFNMBB;
    thunk_FUN_01c20e04(__this_00 + 1,AAJBIMFNMBB);
    __this_01 = (System_Collections_Generic_List_T__o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_List<KeyValuePair<string,_int>>_TypeInfo
                                  );
    System_Collections_Generic_List<KeyValuePair<object,_int>>___ctor
              (__this_01,Method_System_Collections_Generic_List<KeyValuePair<string,_int>>__ctor__);
    ppvVar1 = &__this_00[1].monitor;
    *ppvVar1 = __this_01;
    thunk_FUN_01c20e04(ppvVar1,__this_01);
    pSVar2 = (__this->fields).NDEECPOPNFM;
    action = (System_Action_T__o *)
             thunk_FUN_01bda818(System_Action<KeyValuePair<string,_int>>_TypeInfo);
    System_Action<KeyValuePair<object,_int>>___ctor();
    if (pSVar2 != (System_Collections_Generic_List_KeyValuePair_string__int___o *)0x0) {
      System_Collections_Generic_List<KeyValuePair<object,_int>>__ForEach
                ((System_Collections_Generic_List_T__o *)pSVar2,action,
                 Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_ForEach__);
      pSVar2 = *ppvVar1;
      LILIJINNGNC = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      GameUtils__JBMJNGNBGKC(pSVar2,LILIJINNGNC,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3284968]
// CPJDJFPABGI$$.ctor @ RVA 0x3284968

void CPJDJFPABGI___ctor(CPJDJFPABGI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_string__int___o *__this_00;
  System_Collections_Generic_List_KeyValuePair_string__int___o **ppSVar1;
  
                    /* try { // try from 03384974 to 03484977 has its CatchHandler @ 03384988 */
                    /* catch() { ... } // from try @ 03384974 with catch @ 03384988 */
                    /* try { // try from 03384998 to 03484a07 has its CatchHandler @ 03384a1c */
  if ((DAT_045672a9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_int>>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045672a9 = 1;
  }
  (__this->fields).PMHMOJGEAAN = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_KeyValuePair_string__int___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<string,_int>>_TypeInfo
                                );
  System_Collections_Generic_List<KeyValuePair<object,_int>>___ctor
            ((System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<KeyValuePair<string,_int>>__ctor__);
  ppSVar1 = &(__this->fields).NDEECPOPNFM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 03384a08 to 03484a13 has its CatchHandler @ 033842c8 */
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void JGIDNDELBPG(XmlNode NPLGCIFGFOK)  [RVA 0x32844C8]
// CPJDJFPABGI$$JGIDNDELBPG @ RVA 0x32844C8

/* WARNING: Removing unreachable block (ram,0x0338485c) */

void CPJDJFPABGI__JGIDNDELBPG
               (CPJDJFPABGI_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_KeyValuePair_object__int__o item;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *pSVar8;
  MethodInfo_2639C80 *in_x4;
  long lVar9;
  System_Collections_Generic_KeyValuePair_string__int__array *pSVar10;
  ulong uVar11;
  int *piVar12;
  System_Collections_Generic_List_KeyValuePair_string__int___o *__this_00;
  System_Collections_Generic_KeyValuePair_object__int__o __this_01;
  Il2CppObject local_70;
  
  if ((DAT_045672aa & 1) == 0) {
                    /* try { // try from 03384500 to 03484527 has its CatchHandler @ 03384950 */
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12880/*"Text"*/);
    FUN_01bab630(&StringLiteral_6584/*"Frames"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 0338455c to 03484587 has its CatchHandler @ 0338494c */
    DAT_045672aa = 1;
  }
  if ((NPLGCIFGFOK == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03384854 to 03484857 has its CatchHandler @ 03384934 */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03384858 to 0348485b has its CatchHandler @ 03384930 */
    FUN_01bab8c8();
  }
  do {
    lVar9 = *plVar3;
                    /* try { // try from 033845d0 to 034845d7 has its CatchHandler @ 03384920 */
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 033845e8 to 034845ef has its CatchHandler @ 03384948 */
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 0338460c to 0348460f has its CatchHandler @ 03384944 */
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03384614;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
                    /* try { // try from 033845fc to 034845ff has its CatchHandler @ 03384938 */
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03384614:
    uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 03384620 to 03484627 has its CatchHandler @ 03384918 */
    if ((uVar11 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_033847ec;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 03384630 to 03484637 has its CatchHandler @ 0338493c */
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 03384644 to 03484647 has its CatchHandler @ 03384910 */
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 03384664 to 0348466b has its CatchHandler @ 03384908 */
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_03384674;
        }
                    /* try { // try from 03384648 to 03484653 has its CatchHandler @ 03384914 */
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03384674:
    plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 03384684 to 0348468f has its CatchHandler @ 03384898 */
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033846a0 to 034846ab has its CatchHandler @ 033848a4 */
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar5);
    }
    pSVar6 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar6,StringLiteral_12880/*"Text"*/,(MethodInfo *)0x0);
    pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 033846f0 to 034846f7 has its CatchHandler @ 033848a8 */
    pSVar6 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar6,StringLiteral_6584/*"Frames"*/,(MethodInfo *)0x0);
                    /* try { // try from 0338470c to 0348471b has its CatchHandler @ 0338489c */
    uVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
    __this_00 = (__this->fields).NDEECPOPNFM;
    local_70.klass = (Il2CppClass *)0x0;
    local_70.monitor = (void *)0x0;
    __this_01.fields._8_8_ = pSVar8;
    __this_01.fields.key = &local_70;
                    /* try { // try from 0338472c to 03484737 has its CatchHandler @ 033848a8 */
    System_Collections_Generic_KeyValuePair<object,_int>___ctor
              (__this_01,(Il2CppObject *)(ulong)uVar2,
               (int32_t)Method_System_Collections_Generic_KeyValuePair<string,_int>__ctor__,in_x4);
    lVar9 = Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_Add__;
    if (__this_00 == (System_Collections_Generic_List_KeyValuePair_string__int___o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0338484c to 03484853 has its CatchHandler @ 03384954 */
      FUN_01bab8c8();
    }
                    /* try { // try from 03384738 to 034847f7 has its CatchHandler @ 033842c8 */
    item.fields._8_8_ = local_70.monitor;
    item.fields.key = (Il2CppObject *)local_70.klass;
    pSVar10 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar10 == (System_Collections_Generic_KeyValuePair_string__int__array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar10->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pSVar10->m_Items[(int)uVar2].fields.key = (System_String_o *)local_70.klass;
      *(void **)&pSVar10->m_Items[(int)uVar2].fields.value = local_70.monitor;
      thunk_FUN_01c20e04(pSVar10->m_Items + (int)uVar2,0);
    }
    else {
      System_Collections_Generic_List<KeyValuePair<object,_int>>__AddWithResize
                ((System_Collections_Generic_List_T__o *)__this_00,item,
                 *(MethodInfo_266AAC4 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03384808;
    }
  }
LAB_033847ec:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
                    /* try { // try from 033847f8 to 034847ff has its CatchHandler @ 033848b0 */
LAB_03384808:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 03384814 to 0348481b has its CatchHandler @ 033848ac */
                    /* try { // try from 0338481c to 0348484b has its CatchHandler @ 033842c8 */
  return;
}

