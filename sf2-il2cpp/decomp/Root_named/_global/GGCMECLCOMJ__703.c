// TypeDefIndex 703
// Namespace: 
// public class GGCMECLCOMJ
// Fields:
//   private ObscuredInt DDGIAHKNGEJ; // 0x10
//   private ObscuredInt KEJPPMKBOBN; // 0x20
//   private ObscuredInt <AJBLFMPFEIO>k__BackingField; // 0x30

// ===== public void RandomizeObscuredVars()  [RVA 0x303658C]
// GGCMECLCOMJ$$RandomizeObscuredVars @ RVA 0x303658C

void GGCMECLCOMJ__RandomizeObscuredVars(GGCMECLCOMJ_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  undefined8 local_20;
  undefined8 uStack_18;
  
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &__this->fields;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &(__this->fields).KEJPPMKBOBN;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  uStack_18._0_4_ = (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.fakeValue;
  uStack_18._4_1_ = (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.fakeValueActive;
  uStack_18._5_1_ = (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.inited;
  uStack_18._6_2_ = *(undefined2 *)&(__this->fields)._AJBLFMPFEIO_k__BackingField.fields.field_0xe;
  local_20._0_4_ = (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.currentCryptoKey;
  local_20._4_4_ = (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.hiddenValue;
  __this_02.fields.fakeValue = 0;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields.inited = false;
  __this_02.fields._14_2_ = 0;
  __this_02.fields._0_8_ = &local_20;
                    /* try { // try from 031365c0 to 032365c7 has its CatchHandler @ 031366e4 */
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
                    /* try { // try from 031365c8 to 032365cf has its CatchHandler @ 031366b8 */
  return;
}


// ===== private void PKPLAKAMOPO(ObscuredInt CJNHFNHJHPE)  [RVA 0x30365D0]
// GGCMECLCOMJ$$PKPLAKAMOPO @ RVA 0x30365D0

void GGCMECLCOMJ__PKPLAKAMOPO
               (GGCMECLCOMJ_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
                    /* try { // try from 031365d0 to 032365d3 has its CatchHandler @ 031366e0 */
  (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.currentCryptoKey =
       (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.hiddenValue =
       (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.fakeValue = (int)uVar1;
  (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.inited =
       (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields)._AJBLFMPFEIO_k__BackingField.fields.field_0xe =
       (short)((ulong)uVar1 >> 0x30);
                    /* try { // try from 031365d4 to 032365d7 has its CatchHandler @ 031366d8 */
  return;
}


// ===== public ObscuredInt CNKOOLDMAGC()  [RVA 0x30365D8]
// GGCMECLCOMJ$$CNKOOLDMAGC @ RVA 0x30365D8

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
GGCMECLCOMJ__CNKOOLDMAGC(GGCMECLCOMJ_o *__this,MethodInfo *method)

{
                    /* try { // try from 031365d8 to 032365db has its CatchHandler @ 031366a8 */
                    /* try { // try from 031365dc to 032365e3 has its CatchHandler @ 031366c0 */
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
         (__this->fields)._AJBLFMPFEIO_k__BackingField.fields;
}


// ===== public bool CBPCNDJFEGO(int DLNKPJMDPJI)  [RVA 0x30365E4]
// GGCMECLCOMJ$$CBPCNDJFEGO @ RVA 0x30365E4

bool GGCMECLCOMJ__CBPCNDJFEGO(GGCMECLCOMJ_o *__this,int32_t DLNKPJMDPJI,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
                    /* try { // try from 031365e4 to 032365ef has its CatchHandler @ 031366e4 */
                    /* try { // try from 031365f0 to 032365fb has its CatchHandler @ 031366e0 */
                    /* try { // try from 031365fc to 032365ff has its CatchHandler @ 031366d0 */
                    /* try { // try from 03136600 to 03236603 has its CatchHandler @ 0313661c */
                    /* catch() { ... } // from try @ 0313653c with catch @ 03136604
                       try { // try from 03136604 to 03236663 has its CatchHandler @ 03136048 */
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).DDGIAHKNGEJ.fields,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031361e8 with catch @ 03136608 */
                    /* catch() { ... } // from try @ 03136550 with catch @ 0313660c */
  if (DLNKPJMDPJI < iVar2) {
                    /* catch() { ... } // from try @ 031362c8 with catch @ 03136610 */
    bVar1 = false;
                    /* catch() { ... } // from try @ 03136518 with catch @ 03136614 */
  }
  else {
                    /* catch() { ... } // from try @ 03136500 with catch @ 03136618 */
                    /* catch() { ... } // from try @ 03136600 with catch @ 0313661c */
                    /* catch() { ... } // from try @ 031361c8 with catch @ 03136620 */
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).KEJPPMKBOBN.fields,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03136478 with catch @ 03136624 */
                    /* catch() { ... } // from try @ 0313644c with catch @ 03136628 */
    bVar1 = DLNKPJMDPJI <= iVar2;
  }
                    /* catch() { ... } // from try @ 031363b0 with catch @ 0313662c */
                    /* catch() { ... } // from try @ 031361ec with catch @ 03136630 */
                    /* catch() { ... } // from try @ 0313648c with catch @ 03136634 */
  return bVar1;
}


// ===== public void .ctor(XmlNode JHMENEKPIBO)  [RVA 0x3036638]
// GGCMECLCOMJ$$.ctor @ RVA 0x3036638

void GGCMECLCOMJ___ctor(GGCMECLCOMJ_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  undefined8 uVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CVar7;
  
                    /* catch() { ... } // from try @ 0313642c with catch @ 03136644 */
                    /* catch() { ... } // from try @ 0313641c with catch @ 03136648 */
  if ((DAT_04565d46 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
                    /* try { // try from 03136664 to 03236667 has its CatchHandler @ 0313669c */
    FUN_01bab630(&StringLiteral_8891/*"MaxLevel"*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_9067/*"MinLevel"*/);
                    /* try { // try from 03136688 to 0323669b has its CatchHandler @ 031368d0 */
    DAT_04565d46 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03136664 with catch @ 0313669c
                       try { // try from 0313669c to 03236703 has its CatchHandler @ 03136048 */
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 031365d8 with catch @ 031366a8 */
                    /* catch() { ... } // from try @ 03136360 with catch @ 031366ac */
                    /* catch() { ... } // from try @ 03136344 with catch @ 031366b0 */
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 03136314 with catch @ 031366b4 */
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 031365c8 with catch @ 031366b8 */
                    /* catch() { ... } // from try @ 03136248 with catch @ 031366bc */
                    /* catch() { ... } // from try @ 031364cc with catch @ 031366c0
                       catch() { ... } // from try @ 031365dc with catch @ 031366c0 */
                    /* catch() { ... } // from try @ 0313618c with catch @ 031366c4 */
                    /* catch() { ... } // from try @ 03136380 with catch @ 031366c8 */
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03136200 with catch @ 031366cc */
                    /* catch() { ... } // from try @ 031363c0 with catch @ 031366d0
                       catch() { ... } // from try @ 031365fc with catch @ 031366d0 */
                    /* catch() { ... } // from try @ 03136234 with catch @ 031366d4
                       catch() { ... } // from try @ 03136408 with catch @ 031366d4 */
                    /* catch() { ... } // from try @ 03136330 with catch @ 031366d8
                       catch() { ... } // from try @ 031365d4 with catch @ 031366d8 */
                    /* catch() { ... } // from try @ 03136298 with catch @ 031366dc */
                    /* catch() { ... } // from try @ 031362cc with catch @ 031366e0
                       catch() { ... } // from try @ 031365d0 with catch @ 031366e0
                       catch() { ... } // from try @ 031365f0 with catch @ 031366e0 */
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 03136268 with catch @ 031366e4
                       catch() { ... } // from try @ 031365c0 with catch @ 031366e4
                       catch() { ... } // from try @ 031365e4 with catch @ 031366e4 */
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9067/*"MinLevel"*/,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
          CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            (iVar2,(MethodInfo *)0x0);
          (__this->fields).DDGIAHKNGEJ.fields = CVar6;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 0313675c to 03236793 has its CatchHandler @ 03136820 */
          if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031367e8;
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_8891/*"MaxLevel"*/,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0x7fffffff,(MethodInfo *)0x0);
          CVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            (iVar2,(MethodInfo *)0x0);
          uVar5 = CVar7.fields._8_8_;
          pCVar1 = &(__this->fields).KEJPPMKBOBN;
          (__this->fields).KEJPPMKBOBN.fields.currentCryptoKey = (int)CVar7.fields._0_8_;
          (__this->fields).KEJPPMKBOBN.fields.hiddenValue = (int)((ulong)CVar7.fields._0_8_ >> 0x20)
          ;
        }
        else {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                    /* try { // try from 03136704 to 03236707 has its CatchHandler @ 03136810 */
          CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            (iVar2,(MethodInfo *)0x0);
          uVar5 = CVar6._8_8_;
          (__this->fields).KEJPPMKBOBN.fields = CVar6;
          (__this->fields).DDGIAHKNGEJ.fields.currentCryptoKey = (int)CVar6._0_8_;
          (__this->fields).DDGIAHKNGEJ.fields.hiddenValue = (int)((ulong)CVar6._0_8_ >> 0x20);
          pCVar1 = &(__this->fields).DDGIAHKNGEJ;
        }
        (pCVar1->fields).fakeValue = (int)uVar5;
        (pCVar1->fields).fakeValueActive = (bool_conflict)(char)((ulong)uVar5 >> 0x20);
        (pCVar1->fields).inited = (bool_conflict)(char)((ulong)uVar5 >> 0x28);
        *(short *)&(pCVar1->fields).field_0xe = (short)((ulong)uVar5 >> 0x30);
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
          CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            (iVar2,(MethodInfo *)0x0);
          (__this->fields)._AJBLFMPFEIO_k__BackingField.fields = CVar6;
                    /* try { // try from 031367dc to 0323680f has its CatchHandler @ 031368d0 */
          return;
        }
      }
    }
  }
LAB_031367e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

