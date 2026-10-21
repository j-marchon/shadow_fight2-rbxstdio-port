// TypeDefIndex 722
// Namespace: 
// public class MDLDFLDGLND
// Fields:
//   private string <JEEFFPFPAMB>k__BackingField; // 0x10
//   private string <OMJMODDJNLF>k__BackingField; // 0x18
//   private ObscuredInt <IAKMPICIHJD>k__BackingField; // 0x20
//   private string <AFGGPNHPNHK>k__BackingField; // 0x30
//   private ObscuredInt <IMHPFEFJIGN>k__BackingField; // 0x38
//   private ObscuredInt <INNMKAKBLBD>k__BackingField; // 0x48

// ===== private void DEBLPOLGAIM(ObscuredInt CJNHFNHJHPE)  [RVA 0x3045A48]
// MDLDFLDGLND$$DEBLPOLGAIM @ RVA 0x3045A48

void MDLDFLDGLND__DEBLPOLGAIM
               (MDLDFLDGLND_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields)._IAKMPICIHJD_k__BackingField.fields.currentCryptoKey =
       (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._IAKMPICIHJD_k__BackingField.fields.hiddenValue =
       (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields)._IAKMPICIHJD_k__BackingField.fields.fakeValue = (int)uVar1;
  (__this->fields)._IAKMPICIHJD_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields)._IAKMPICIHJD_k__BackingField.fields.inited =
       (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields)._IAKMPICIHJD_k__BackingField.fields.field_0xe =
       (short)((ulong)uVar1 >> 0x30);
  return;
}


// ===== private void KEFDDJDCAJE(string CJNHFNHJHPE)  [RVA 0x3045A50]
// MDLDFLDGLND$$KEFDDJDCAJE @ RVA 0x3045A50

void MDLDFLDGLND__KEFDDJDCAJE(MDLDFLDGLND_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._AFGGPNHPNHK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(XmlNode JHMENEKPIBO)  [RVA 0x3045A58]
// MDLDFLDGLND$$.ctor @ RVA 0x3045A58

void MDLDFLDGLND___ctor(MDLDFLDGLND_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar5;
  
  if ((DAT_04565dd1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9063/*"MinDeviation"*/);
    FUN_01bab630(&StringLiteral_8880/*"MaxDeviation"*/);
    FUN_01bab630(&StringLiteral_3396/*"BarScale"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_10463/*"Prices"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    DAT_04565dd1 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields)._JEEFFPFPAMB_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_10463/*"Prices"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this->fields)._OMJMODDJNLF_k__BackingField = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_5703/*"Enchantments"*/,(MethodInfo *)0x0);
          iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
          CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            (iVar1,(MethodInfo *)0x0);
          (__this->fields)._IAKMPICIHJD_k__BackingField.fields = CVar5;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_3396/*"BarScale"*/,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this->fields)._AFGGPNHPNHK_k__BackingField = pSVar4;
            thunk_FUN_01c20e04();
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_9063/*"MinDeviation"*/,(MethodInfo *)0x0);
              iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
              CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                (iVar1,(MethodInfo *)0x0);
              (__this->fields)._IMHPFEFJIGN_k__BackingField.fields = CVar5;
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                                 (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,StringLiteral_8880/*"MaxDeviation"*/,(MethodInfo *)0x0);
                iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
                CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                  (iVar1,(MethodInfo *)0x0);
                (__this->fields)._INNMKAKBLBD_k__BackingField.fields = CVar5;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void APAMIEFEEKL(string CJNHFNHJHPE)  [RVA 0x3045C88]
// MDLDFLDGLND$$APAMIEFEEKL @ RVA 0x3045C88

void MDLDFLDGLND__APAMIEFEEKL(MDLDFLDGLND_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OMJMODDJNLF_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public ObscuredInt HPNJEPPOICM()  [RVA 0x3045C90]
// MDLDFLDGLND$$HPNJEPPOICM @ RVA 0x3045C90

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
MDLDFLDGLND__HPNJEPPOICM(MDLDFLDGLND_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
         (__this->fields)._IAKMPICIHJD_k__BackingField.fields;
}


// ===== public string LNBACCPCMOF()  [RVA 0x3045C9C]
// MDLDFLDGLND$$LNBACCPCMOF @ RVA 0x3045C9C

System_String_o * MDLDFLDGLND__LNBACCPCMOF(MDLDFLDGLND_o *__this,MethodInfo *method)

{
  return (__this->fields)._AFGGPNHPNHK_k__BackingField;
}


// ===== public ObscuredInt JJBLOKMEKKD()  [RVA 0x3045CA4]
// MDLDFLDGLND$$JJBLOKMEKKD @ RVA 0x3045CA4

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
MDLDFLDGLND__JJBLOKMEKKD(MDLDFLDGLND_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
         (__this->fields)._INNMKAKBLBD_k__BackingField.fields;
}


// ===== public ObscuredInt FLOJKBEDOJN()  [RVA 0x3045CB0]
// MDLDFLDGLND$$FLOJKBEDOJN @ RVA 0x3045CB0

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
MDLDFLDGLND__FLOJKBEDOJN(MDLDFLDGLND_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
         (__this->fields)._IMHPFEFJIGN_k__BackingField.fields;
}


// ===== public string FAGGDFBPOLE()  [RVA 0x3045CBC]
// MDLDFLDGLND$$FAGGDFBPOLE @ RVA 0x3045CBC

System_String_o * MDLDFLDGLND__FAGGDFBPOLE(MDLDFLDGLND_o *__this,MethodInfo *method)

{
  return (__this->fields)._JEEFFPFPAMB_k__BackingField;
}


// ===== private void GEPGOKBAHFD(ObscuredInt CJNHFNHJHPE)  [RVA 0x3045CC4]
// MDLDFLDGLND$$GEPGOKBAHFD @ RVA 0x3045CC4

void MDLDFLDGLND__GEPGOKBAHFD
               (MDLDFLDGLND_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields)._IMHPFEFJIGN_k__BackingField.fields.currentCryptoKey =
       (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._IMHPFEFJIGN_k__BackingField.fields.hiddenValue =
       (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields)._IMHPFEFJIGN_k__BackingField.fields.fakeValue = (int)uVar1;
  (__this->fields)._IMHPFEFJIGN_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields)._IMHPFEFJIGN_k__BackingField.fields.inited =
       (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields)._IMHPFEFJIGN_k__BackingField.fields.field_0xe =
       (short)((ulong)uVar1 >> 0x30);
  return;
}


// ===== private void BFMDGLKOEGM(string CJNHFNHJHPE)  [RVA 0x3045CCC]
// MDLDFLDGLND$$BFMDGLKOEGM @ RVA 0x3045CCC

void MDLDFLDGLND__BFMDGLKOEGM(MDLDFLDGLND_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._JEEFFPFPAMB_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x3045CD4]
// MDLDFLDGLND$$RandomizeObscuredVars @ RVA 0x3045CD4

void MDLDFLDGLND__RandomizeObscuredVars(MDLDFLDGLND_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = (__this->fields)._IAKMPICIHJD_k__BackingField.fields.fakeValue;
  uStack_18._4_1_ = (__this->fields)._IAKMPICIHJD_k__BackingField.fields.fakeValueActive;
  uStack_18._5_1_ = (__this->fields)._IAKMPICIHJD_k__BackingField.fields.inited;
  uStack_18._6_2_ = *(undefined2 *)&(__this->fields)._IAKMPICIHJD_k__BackingField.fields.field_0xe;
  local_20._0_4_ = (__this->fields)._IAKMPICIHJD_k__BackingField.fields.currentCryptoKey;
  local_20._4_4_ = (__this->fields)._IAKMPICIHJD_k__BackingField.fields.hiddenValue;
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &local_20;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  uStack_18._0_4_ = (__this->fields)._IMHPFEFJIGN_k__BackingField.fields.fakeValue;
  uStack_18._4_1_ = (__this->fields)._IMHPFEFJIGN_k__BackingField.fields.fakeValueActive;
  uStack_18._5_1_ = (__this->fields)._IMHPFEFJIGN_k__BackingField.fields.inited;
  uStack_18._6_2_ = *(undefined2 *)&(__this->fields)._IMHPFEFJIGN_k__BackingField.fields.field_0xe;
  local_20._0_4_ = (__this->fields)._IMHPFEFJIGN_k__BackingField.fields.currentCryptoKey;
  local_20._4_4_ = (__this->fields)._IMHPFEFJIGN_k__BackingField.fields.hiddenValue;
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &local_20;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  uStack_18._0_4_ = (__this->fields)._INNMKAKBLBD_k__BackingField.fields.fakeValue;
  uStack_18._4_1_ = (__this->fields)._INNMKAKBLBD_k__BackingField.fields.fakeValueActive;
  uStack_18._5_1_ = (__this->fields)._INNMKAKBLBD_k__BackingField.fields.inited;
  uStack_18._6_2_ = *(undefined2 *)&(__this->fields)._INNMKAKBLBD_k__BackingField.fields.field_0xe;
  local_20._0_4_ = (__this->fields)._INNMKAKBLBD_k__BackingField.fields.currentCryptoKey;
  local_20._4_4_ = (__this->fields)._INNMKAKBLBD_k__BackingField.fields.hiddenValue;
  __this_02.fields.fakeValue = 0;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields.inited = false;
  __this_02.fields._14_2_ = 0;
  __this_02.fields._0_8_ = &local_20;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
  return;
}


// ===== private void HMAHHHLMOMM(ObscuredInt CJNHFNHJHPE)  [RVA 0x3045D28]
// MDLDFLDGLND$$HMAHHHLMOMM @ RVA 0x3045D28

void MDLDFLDGLND__HMAHHHLMOMM
               (MDLDFLDGLND_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields)._INNMKAKBLBD_k__BackingField.fields.currentCryptoKey =
       (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._INNMKAKBLBD_k__BackingField.fields.hiddenValue =
       (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields)._INNMKAKBLBD_k__BackingField.fields.fakeValue = (int)uVar1;
  (__this->fields)._INNMKAKBLBD_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields)._INNMKAKBLBD_k__BackingField.fields.inited =
       (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields)._INNMKAKBLBD_k__BackingField.fields.field_0xe =
       (short)((ulong)uVar1 >> 0x30);
  return;
}


// ===== public string BEMNKOEOINJ()  [RVA 0x3045D30]
// MDLDFLDGLND$$BEMNKOEOINJ @ RVA 0x3045D30

System_String_o * MDLDFLDGLND__BEMNKOEOINJ(MDLDFLDGLND_o *__this,MethodInfo *method)

{
  return (__this->fields)._OMJMODDJNLF_k__BackingField;
}

