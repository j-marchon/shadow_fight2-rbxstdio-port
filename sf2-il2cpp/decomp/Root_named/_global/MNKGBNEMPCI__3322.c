// TypeDefIndex 3322
// Namespace: 
// public class MNKGBNEMPCI
// Fields:
//   private string DEKCPPOJFEH; // 0x10
//   private string NEFMLODIKPE; // 0x18
//   private ObscuredFloat DHDPEBOFPPN; // 0x20

// ===== public void RandomizeObscuredVars()  [RVA 0x3529B50]
// MNKGBNEMPCI$$RandomizeObscuredVars @ RVA 0x3529B50

void MNKGBNEMPCI__RandomizeObscuredVars(MNKGBNEMPCI_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).DHDPEBOFPPN,(MethodInfo *)0x0);
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3529B5C]
// MNKGBNEMPCI$$HNIHOIAMDPC @ RVA 0x3529B5C

void MNKGBNEMPCI__HNIHOIAMDPC
               (MNKGBNEMPCI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58 [2];
  
  if ((DAT_04568a14 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3202/*"Attribute"*/);
    FUN_01bab630(&StringLiteral_3400/*"Base"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568a14 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).DEKCPPOJFEH = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_3202/*"Attribute"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).NEFMLODIKPE = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_3400/*"Base"*/,(MethodInfo *)0x0);
          CJNHFNHJHPE = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_58,CJNHFNHJHPE,
                     (MethodInfo *)0x0);
          (__this->fields).DHDPEBOFPPN.fields.fakeValueActive = local_58[0].fakeValueActive;
          (__this->fields).DHDPEBOFPPN.fields.inited = local_58[0].inited;
          *(undefined2 *)&(__this->fields).DHDPEBOFPPN.fields.field_0x12 = local_58[0]._18_2_;
          (__this->fields).DHDPEBOFPPN.fields.hiddenValueOldByte4 =
               (CodeStage_AntiCheat_Common_ACTkByte4_o)local_58[0].hiddenValueOldByte4.fields;
          (__this->fields).DHDPEBOFPPN.fields.fakeValue = local_58[0].fakeValue;
          (__this->fields).DHDPEBOFPPN.fields.currentCryptoKey = local_58[0].currentCryptoKey;
          (__this->fields).DHDPEBOFPPN.fields.hiddenValue = local_58[0].hiddenValue;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string EBAFJKOKCNA()  [RVA 0x3529CC0]
// MNKGBNEMPCI$$EBAFJKOKCNA @ RVA 0x3529CC0

System_String_o * MNKGBNEMPCI__EBAFJKOKCNA(MNKGBNEMPCI_o *__this,MethodInfo *method)

{
  return (__this->fields).NEFMLODIKPE;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3529CC8]
// MNKGBNEMPCI$$KCHJCGEMCGE @ RVA 0x3529CC8

System_String_o * MNKGBNEMPCI__KCHJCGEMCGE(MNKGBNEMPCI_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public int PPOKEOHAHFG(double NMMIKGIINDF, int JLAFGLDIFOC, int HGDNFDIMIOP, double HIANAMIFFLJ)  [RVA 0x3529CD0]
// MNKGBNEMPCI$$PPOKEOHAHFG @ RVA 0x3529CD0

int32_t MNKGBNEMPCI__PPOKEOHAHFG
                  (MNKGBNEMPCI_o *__this,double NMMIKGIINDF,int32_t JLAFGLDIFOC,int32_t HGDNFDIMIOP,
                  double HIANAMIFFLJ,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *pCVar1;
  int32_t iVar2;
  float fVar3;
  double dVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  
  if ((DAT_04568a15 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04568a15 = 1;
  }
  dVar4 = (NMMIKGIINDF - (double)(HGDNFDIMIOP * JLAFGLDIFOC)) / HIANAMIFFLJ;
  pCVar1 = &(__this->fields).DHDPEBOFPPN;
  if (0.0 <= dVar4) {
    local_60.fakeValueActive = (__this->fields).DHDPEBOFPPN.fields.fakeValueActive;
    local_60.inited = (__this->fields).DHDPEBOFPPN.fields.inited;
    local_60._18_2_ = *(undefined2 *)&(__this->fields).DHDPEBOFPPN.fields.field_0x12;
    local_60.hiddenValueOldByte4.fields =
         (__this->fields).DHDPEBOFPPN.fields.hiddenValueOldByte4.fields;
    local_60.fakeValue = (__this->fields).DHDPEBOFPPN.fields.fakeValue;
    local_60.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_60.hiddenValue = (pCVar1->fields).hiddenValue;
    fVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                       (MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    dVar4 = System_Math__Pow(2.0,-dVar4,(MethodInfo *)0x0);
    dVar4 = 2.0 - dVar4;
  }
  else {
    local_80.fakeValueActive = (__this->fields).DHDPEBOFPPN.fields.fakeValueActive;
    local_80.inited = (__this->fields).DHDPEBOFPPN.fields.inited;
    local_80._18_2_ = *(undefined2 *)&(__this->fields).DHDPEBOFPPN.fields.field_0x12;
    local_80.hiddenValueOldByte4.fields =
         (__this->fields).DHDPEBOFPPN.fields.hiddenValueOldByte4.fields;
    local_80.fakeValue = (__this->fields).DHDPEBOFPPN.fields.fakeValue;
    local_80.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_80.hiddenValue = (pCVar1->fields).hiddenValue;
    fVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_80,
                       (MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    dVar4 = System_Math__Pow(2.0,dVar4,(MethodInfo *)0x0);
  }
  iVar2 = -0x80000000;
  if (dVar4 * (double)fVar3 != INFINITY) {
    iVar2 = (int)(dVar4 * (double)fVar3);
  }
  return iVar2;
}


// ===== public void .ctor()  [RVA 0x3529E04]
// MNKGBNEMPCI$$.ctor @ RVA 0x3529E04

void MNKGBNEMPCI___ctor(MNKGBNEMPCI_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_04568a16 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568a16 = 1;
  }
  (__this->fields).DEKCPPOJFEH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).NEFMLODIKPE = StringLiteral_1/*""*/;
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
  (__this->fields).DHDPEBOFPPN.fields.fakeValueActive = local_58.fakeValueActive;
  (__this->fields).DHDPEBOFPPN.fields.inited = local_58.inited;
  *(undefined2 *)&(__this->fields).DHDPEBOFPPN.fields.field_0x12 = local_58._18_2_;
  (__this->fields).DHDPEBOFPPN.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_58.hiddenValueOldByte4.fields;
  (__this->fields).DHDPEBOFPPN.fields.fakeValue = local_58.fakeValue;
  (__this->fields).DHDPEBOFPPN.fields.currentCryptoKey = local_58.currentCryptoKey;
  (__this->fields).DHDPEBOFPPN.fields.hiddenValue = local_58.hiddenValue;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

