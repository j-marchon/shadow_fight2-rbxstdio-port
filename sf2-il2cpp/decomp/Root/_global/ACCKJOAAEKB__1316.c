// TypeDefIndex 1316
// Namespace: 
// public class ACCKJOAAEKB
// Fields:
//   public string BEMCNJHEADJ; // 0x10
//   public string IJDAKGKCHLG; // 0x18
//   public string DBJKFCGNMIE; // 0x20
//   public ObscuredFloat CJOICFODKMF; // 0x28
//   public string JLENLBPOCMF; // 0x40

// ===== public void RandomizeObscuredVars()  [RVA 0x3159BF0]
// ACCKJOAAEKB$$RandomizeObscuredVars @ RVA 0x3159BF0

void ACCKJOAAEKB__RandomizeObscuredVars(ACCKJOAAEKB_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).CJOICFODKMF,(MethodInfo *)0x0);
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB, Dictionary<string, ObscuredString> KGJIMFMKHCD)  [RVA 0x3159BFC]
// ACCKJOAAEKB$$HNIHOIAMDPC @ RVA 0x3159BFC

/* WARNING: Removing unreachable block (ram,0x0325a0e8) */

void ACCKJOAAEKB__HNIHOIAMDPC
               (ACCKJOAAEKB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Collections_Generic_Dictionary_string__ObscuredString__o *KGJIMFMKHCD,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  uint16_t uVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *CJNHFNHJHPE;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  System_String_o **ppSVar12;
  float CJNHFNHJHPE_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_98;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  
  if ((DAT_0456685d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_get_Item__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 03259c5c to 03359c77 has its CatchHandler @ 03259d30 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    FUN_01bab630(&StringLiteral_5058/*"Damage"*/);
                    /* try { // try from 03259c78 to 03359c7b has its CatchHandler @ 03259cb8 */
                    /* try { // try from 03259c7c to 03359c7f has its CatchHandler @ 03259cb4 */
                    /* try { // try from 03259c80 to 03359c87 has its CatchHandler @ 03259cb0 */
    FUN_01bab630(&StringLiteral_8907/*"Me"*/);
                    /* try { // try from 03259c88 to 03359c8b has its CatchHandler @ 03259c9c */
                    /* try { // try from 03259c8c to 03359cd3 has its CatchHandler @ 03259920 */
    FUN_01bab630(&StringLiteral_5266/*"Defense"*/);
                    /* catch() { ... } // from try @ 03259be4 with catch @ 03259c90 */
    FUN_01bab630(&StringLiteral_9253/*"Multiplier"*/);
                    /* catch() { ... } // from try @ 03259c88 with catch @ 03259c9c */
                    /* catch() { ... } // from try @ 03259b04 with catch @ 03259ca0 */
                    /* catch() { ... } // from try @ 03259aec with catch @ 03259ca4 */
    FUN_01bab630(&StringLiteral_5760/*"EnemyAttribute"*/);
                    /* catch() { ... } // from try @ 03259ad8 with catch @ 03259ca8 */
                    /* catch() { ... } // from try @ 03259b14 with catch @ 03259cac */
                    /* catch() { ... } // from try @ 03259c80 with catch @ 03259cb0 */
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
                    /* catch() { ... } // from try @ 03259c7c with catch @ 03259cb4 */
                    /* catch() { ... } // from try @ 03259c78 with catch @ 03259cb8 */
                    /* catch() { ... } // from try @ 03259ac0 with catch @ 03259cbc */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch() { ... } // from try @ 03259b9c with catch @ 03259cc0 */
                    /* catch() { ... } // from try @ 03259aa0 with catch @ 03259cc4 */
    DAT_0456685d = 1;
  }
  if (KGJIMFMKHCD != (System_Collections_Generic_Dictionary_string__ObscuredString__o *)0x0) {
                    /* try { // try from 03259cd4 to 03359cd7 has its CatchHandler @ 03259d04 */
                    /* try { // try from 03259cd8 to 03359d13 has its CatchHandler @ 03259920 */
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
       plVar4 != (long *)0x0)) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar9 = *plVar4;
                    /* try { // try from 03259d28 to 03359d2f has its CatchHandler @ 03259d30 */
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch() { ... } // from try @ 03259c5c with catch @ 03259d30
                       catch() { ... } // from try @ 03259d14 with catch @ 03259d30
                       catch() { ... } // from try @ 03259d28 with catch @ 03259d30 */
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03259d70;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03259d70:
        uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar10 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) goto LAB_03259f28;
          lVar9 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_03259efc;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03259ee4;
        }
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_03259dd0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03259dd0:
        pSVar6 = (System_Xml_XmlAttribute_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
          bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
          if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
             ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pSVar6);
          }
        }
        pSVar7 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar3 = System_String__get_Chars(pSVar7,0,(MethodInfo *)0x0);
        if (uVar3 == 0x5f) {
          pSVar7 = System_String__Substring
                             (pSVar7,1,(pSVar7->fields)._stringLength + -1,(MethodInfo *)0x0);
          bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                            ((System_Collections_Generic_Dictionary_object__object__o *)KGJIMFMKHCD,
                             (Il2CppObject *)pSVar7,
                             Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_ContainsKey__
                            );
          if (bVar2) {
            CJNHFNHJHPE = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)
                          System_Collections_Generic_Dictionary<object,_object>__get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)
                                     KGJIMFMKHCD,(Il2CppObject *)pSVar7,
                                     Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_get_Item__
                                    );
            pSVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                               (CJNHFNHJHPE,(MethodInfo *)0x0);
          }
          if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar6,pSVar7,(pSVar6->klass->vtable)._10_set_Value.method);
        }
      } while( true );
    }
    goto LAB_0325a0e0;
  }
  goto LAB_03259f28;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03259ee4:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03259f18;
    }
  }
LAB_03259efc:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03259f18:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_03259f28:
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar8 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar8,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
    pSVar7 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar6,StringLiteral_8907/*"Me"*/,(MethodInfo *)0x0);
    (__this->fields).BEMCNJHEADJ = pSVar7;
    thunk_FUN_01c20e04();
    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar8,StringLiteral_5058/*"Damage"*/,(MethodInfo *)0x0);
      pSVar7 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).IJDAKGKCHLG = pSVar7;
      thunk_FUN_01c20e04();
      pSVar8 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_5266/*"Defense"*/,(MethodInfo *)0x0);
        pSVar7 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this->fields).DBJKFCGNMIE = pSVar7;
        thunk_FUN_01c20e04();
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_9253/*"Multiplier"*/,(MethodInfo *)0x0);
          CJNHFNHJHPE_00 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar6,0.0,(MethodInfo *)0x0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_98,CJNHFNHJHPE_00,
                     (MethodInfo *)0x0);
          local_80.fakeValueActive = local_98.fakeValueActive;
          local_80.inited = local_98.inited;
          local_80._18_2_ = local_98._18_2_;
          local_80.hiddenValueOldByte4.fields = local_98.hiddenValueOldByte4.fields;
          local_80.fakeValue = local_98.fakeValue;
          local_80.currentCryptoKey = local_98.currentCryptoKey;
          local_80.hiddenValue = local_98.hiddenValue;
          (__this->fields).CJOICFODKMF.fields.fakeValueActive = local_98.fakeValueActive;
          (__this->fields).CJOICFODKMF.fields.inited = local_98.inited;
          *(undefined2 *)&(__this->fields).CJOICFODKMF.fields.field_0x12 = local_98._18_2_;
          (__this->fields).CJOICFODKMF.fields.hiddenValueOldByte4 =
               (CodeStage_AntiCheat_Common_ACTkByte4_o)local_98.hiddenValueOldByte4.fields;
          (__this->fields).CJOICFODKMF.fields.fakeValue = local_98.fakeValue;
          (__this->fields).CJOICFODKMF.fields.currentCryptoKey = local_98.currentCryptoKey;
          (__this->fields).CJOICFODKMF.fields.hiddenValue = local_98.hiddenValue;
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_5760/*"EnemyAttribute"*/,(MethodInfo *)0x0);
            pSVar7 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
            ppSVar12 = &(__this->fields).JLENLBPOCMF;
            *ppSVar12 = pSVar7;
            thunk_FUN_01c20e04(ppSVar12,pSVar7);
            return;
          }
        }
      }
    }
  }
LAB_0325a0e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(ACCKJOAAEKB IBKIPBJJCPG)  [RVA 0x315A1E4]
// ACCKJOAAEKB$$.ctor @ RVA 0x315A1E4

void ACCKJOAAEKB___ctor(ACCKJOAAEKB_o *__this,ACCKJOAAEKB_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_String_o **ppSVar7;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (ACCKJOAAEKB_o *)0x0) {
    (__this->fields).BEMCNJHEADJ = (IBKIPBJJCPG->fields).BEMCNJHEADJ;
    thunk_FUN_01c20e04();
    (__this->fields).IJDAKGKCHLG = (IBKIPBJJCPG->fields).IJDAKGKCHLG;
    thunk_FUN_01c20e04();
    (__this->fields).DBJKFCGNMIE = (IBKIPBJJCPG->fields).DBJKFCGNMIE;
    thunk_FUN_01c20e04();
    bVar1 = (IBKIPBJJCPG->fields).CJOICFODKMF.fields.inited;
    uVar2 = *(undefined2 *)&(IBKIPBJJCPG->fields).CJOICFODKMF.fields.field_0x12;
    CVar3.fields = (IBKIPBJJCPG->fields).CJOICFODKMF.fields.hiddenValueOldByte4.fields;
    fVar4 = (IBKIPBJJCPG->fields).CJOICFODKMF.fields.fakeValue;
    iVar5 = (IBKIPBJJCPG->fields).CJOICFODKMF.fields.currentCryptoKey;
    iVar6 = (IBKIPBJJCPG->fields).CJOICFODKMF.fields.hiddenValue;
    (__this->fields).CJOICFODKMF.fields.fakeValueActive =
         (IBKIPBJJCPG->fields).CJOICFODKMF.fields.fakeValueActive;
    (__this->fields).CJOICFODKMF.fields.inited = bVar1;
    *(undefined2 *)&(__this->fields).CJOICFODKMF.fields.field_0x12 = uVar2;
    (__this->fields).CJOICFODKMF.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
    (__this->fields).CJOICFODKMF.fields.fakeValue = fVar4;
    (__this->fields).CJOICFODKMF.fields.currentCryptoKey = iVar5;
    (__this->fields).CJOICFODKMF.fields.hiddenValue = iVar6;
    ppSVar7 = &(__this->fields).JLENLBPOCMF;
    *ppSVar7 = (IBKIPBJJCPG->fields).JLENLBPOCMF;
    thunk_FUN_01c20e04(ppSVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x315A25C]
// ACCKJOAAEKB$$.ctor @ RVA 0x315A25C

void ACCKJOAAEKB___ctor(ACCKJOAAEKB_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_0456685e & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456685e = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BEMCNJHEADJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).IJDAKGKCHLG = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).DBJKFCGNMIE = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_58,0.0,(MethodInfo *)0x0);
  local_40.fakeValueActive = local_58.fakeValueActive;
  local_40.inited = local_58.inited;
  local_40._18_2_ = local_58._18_2_;
  local_40.hiddenValueOldByte4.fields = local_58.hiddenValueOldByte4.fields;
  local_40.fakeValue = local_58.fakeValue;
  local_40.currentCryptoKey = local_58.currentCryptoKey;
  local_40.hiddenValue = local_58.hiddenValue;
  (__this->fields).CJOICFODKMF.fields.fakeValueActive = local_58.fakeValueActive;
  (__this->fields).CJOICFODKMF.fields.inited = local_58.inited;
  *(undefined2 *)&(__this->fields).CJOICFODKMF.fields.field_0x12 = local_58._18_2_;
  (__this->fields).CJOICFODKMF.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_58.hiddenValueOldByte4.fields;
  (__this->fields).CJOICFODKMF.fields.fakeValue = local_58.fakeValue;
  (__this->fields).CJOICFODKMF.fields.currentCryptoKey = local_58.currentCryptoKey;
  (__this->fields).CJOICFODKMF.fields.hiddenValue = local_58.hiddenValue;
  ppSVar1 = &(__this->fields).JLENLBPOCMF;
  *ppSVar1 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar1);
  return;
}

