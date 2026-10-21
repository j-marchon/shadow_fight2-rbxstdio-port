// TypeDefIndex 2602
// Namespace: 
// public class GDKLJOEKBNF : LMJFCEPILNI
// Fields:
//   private string <IANGGJCONIH>k__BackingField; // 0x60
//   private bool <DICCMNCLCGC>k__BackingField; // 0x68
//   private bool <PFHCJJIBIBD>k__BackingField; // 0x69
//   private ObscuredInt <LJNEEIANKCI>k__BackingField; // 0x6C

// ===== public string KEKOFLIENFP()  [RVA 0x33AB838]
// GDKLJOEKBNF$$KEKOFLIENFP @ RVA 0x33AB838

System_String_o * GDKLJOEKBNF__KEKOFLIENFP(GDKLJOEKBNF_o *__this,MethodInfo *method)

{
  return (__this->fields)._IANGGJCONIH_k__BackingField;
}


// ===== public void .ctor(GDKLJOEKBNF IBKIPBJJCPG)  [RVA 0x33AB840]
// GDKLJOEKBNF$$.ctor @ RVA 0x33AB840

void GDKLJOEKBNF___ctor(GDKLJOEKBNF_o *__this,GDKLJOEKBNF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined2 uVar3;
  int32_t iVar4;
  int32_t iVar5;
  System_String_o **ppSVar6;
  
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(LMJFCEPILNI_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (GDKLJOEKBNF_o *)0x0) {
    ppSVar6 = &(__this->fields)._IANGGJCONIH_k__BackingField;
    *ppSVar6 = (IBKIPBJJCPG->fields)._IANGGJCONIH_k__BackingField;
    thunk_FUN_01c20e04(ppSVar6);
    (__this->fields)._PFHCJJIBIBD_k__BackingField =
         (IBKIPBJJCPG->fields)._PFHCJJIBIBD_k__BackingField;
    bVar1 = (IBKIPBJJCPG->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValueActive;
    bVar2 = (IBKIPBJJCPG->fields)._LJNEEIANKCI_k__BackingField.fields.inited;
    uVar3 = *(undefined2 *)&(IBKIPBJJCPG->fields)._LJNEEIANKCI_k__BackingField.fields.field_0xe;
    iVar4 = (IBKIPBJJCPG->fields)._LJNEEIANKCI_k__BackingField.fields.currentCryptoKey;
    iVar5 = (IBKIPBJJCPG->fields)._LJNEEIANKCI_k__BackingField.fields.hiddenValue;
    (__this->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValue =
         (IBKIPBJJCPG->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValue;
    (__this->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValueActive = bVar1;
    (__this->fields)._LJNEEIANKCI_k__BackingField.fields.inited = bVar2;
    *(undefined2 *)&(__this->fields)._LJNEEIANKCI_k__BackingField.fields.field_0xe = uVar3;
    (__this->fields)._LJNEEIANKCI_k__BackingField.fields.currentCryptoKey = iVar4;
    (__this->fields)._LJNEEIANKCI_k__BackingField.fields.hiddenValue = iVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034ab888 to 035ab8b3 has its CatchHandler @ 034aba4c */
  FUN_01bab8c8();
}


// ===== public ObscuredInt OJPELFGDFAL()  [RVA 0x33AB88C]
// GDKLJOEKBNF$$OJPELFGDFAL @ RVA 0x33AB88C

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
GDKLJOEKBNF__OJPELFGDFAL(GDKLJOEKBNF_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
         (__this->fields)._LJNEEIANKCI_k__BackingField.fields;
}


// ===== public bool IHBCEOEBOKG()  [RVA 0x33AB89C]
// GDKLJOEKBNF$$IHBCEOEBOKG @ RVA 0x33AB89C

bool GDKLJOEKBNF__IHBCEOEBOKG(GDKLJOEKBNF_o *__this,MethodInfo *method)

{
  return (__this->fields)._PFHCJJIBIBD_k__BackingField;
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x33AB8A4]
// GDKLJOEKBNF$$RandomizeObscuredVars @ RVA 0x33AB8A4

void GDKLJOEKBNF__RandomizeObscuredVars(GDKLJOEKBNF_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  undefined8 local_20;
  undefined8 uStack_18;
  
  HJNEOLCKEMD__RandomizeObscuredVars((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  uStack_18._0_4_ = (__this->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValue;
  uStack_18._4_1_ = (__this->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValueActive;
  uStack_18._5_1_ = (__this->fields)._LJNEEIANKCI_k__BackingField.fields.inited;
  uStack_18._6_2_ = *(undefined2 *)&(__this->fields)._LJNEEIANKCI_k__BackingField.fields.field_0xe;
  local_20._0_4_ = (__this->fields)._LJNEEIANKCI_k__BackingField.fields.currentCryptoKey;
  local_20._4_4_ = (__this->fields)._LJNEEIANKCI_k__BackingField.fields.hiddenValue;
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &local_20;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  return;
}


// ===== protected void OAKNDMACPCK(ObscuredInt CJNHFNHJHPE)  [RVA 0x33AB8D8]
// GDKLJOEKBNF$$OAKNDMACPCK @ RVA 0x33AB8D8

void GDKLJOEKBNF__OAKNDMACPCK
               (GDKLJOEKBNF_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields)._LJNEEIANKCI_k__BackingField.fields.currentCryptoKey =
       (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._LJNEEIANKCI_k__BackingField.fields.hiddenValue =
       (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValue = (int)uVar1;
  (__this->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields)._LJNEEIANKCI_k__BackingField.fields.inited =
       (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields)._LJNEEIANKCI_k__BackingField.fields.field_0xe =
       (short)((ulong)uVar1 >> 0x30);
  return;
}


// ===== protected void IDAKIHLDMKG(string CJNHFNHJHPE)  [RVA 0x33AB8E4]
// GDKLJOEKBNF$$IDAKIHLDMKG @ RVA 0x33AB8E4

void GDKLJOEKBNF__IDAKIHLDMKG(GDKLJOEKBNF_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IANGGJCONIH_k__BackingField = CJNHFNHJHPE;
                    /* try { // try from 034ab8e8 to 035ab8f3 has its CatchHandler @ 034aba44 */
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor()  [RVA 0x33AB8EC]
// GDKLJOEKBNF$$.ctor @ RVA 0x33AB8EC

void GDKLJOEKBNF___ctor(GDKLJOEKBNF_o *__this,MethodInfo *method)

{
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected void MDMCHLIGOBK(bool CJNHFNHJHPE)  [RVA 0x33AB8F4]
// GDKLJOEKBNF$$MDMCHLIGOBK @ RVA 0x33AB8F4

void GDKLJOEKBNF__MDMCHLIGOBK(GDKLJOEKBNF_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PFHCJJIBIBD_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool BBJECMMKMJA()  [RVA 0x33AB900]
// GDKLJOEKBNF$$BBJECMMKMJA @ RVA 0x33AB900

bool GDKLJOEKBNF__BBJECMMKMJA(GDKLJOEKBNF_o *__this,MethodInfo *method)

{
                    /* try { // try from 034ab904 to 035ab90b has its CatchHandler @ 034aba34 */
  return (__this->fields)._DICCMNCLCGC_k__BackingField;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x33AB908]
// GDKLJOEKBNF$$HNIHOIAMDPC @ RVA 0x33AB908

void GDKLJOEKBNF__HNIHOIAMDPC
               (GDKLJOEKBNF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t CJNHFNHJHPE;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar5;
  
                    /* try { // try from 034ab910 to 035ab917 has its CatchHandler @ 034aba40 */
  if ((DAT_04567d0d & 1) == 0) {
                    /* try { // try from 034ab928 to 035ab92f has its CatchHandler @ 034aba30 */
    FUN_01bab630(&StringLiteral_12093/*"ShowExpiration"*/);
                    /* try { // try from 034ab938 to 035ab93f has its CatchHandler @ 034aba24 */
    FUN_01bab630(&StringLiteral_6102/*"ExpirationVer"*/);
                    /* try { // try from 034ab940 to 035ab95f has its CatchHandler @ 034aba3c */
    FUN_01bab630(&StringLiteral_8852/*"MarkUsed"*/);
    FUN_01bab630(&StringLiteral_7340/*"Image"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 034ab960 to 035ab9fb has its CatchHandler @ 034ab6e0 */
    DAT_04567d0d = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,1,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_7340/*"Image"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields)._IANGGJCONIH_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ab9fc to 035aba03 has its CatchHandler @ 034aba48 */
                    /* try { // try from 034aba04 to 035aba07 has its CatchHandler @ 034aba38 */
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_8852/*"MarkUsed"*/,(MethodInfo *)0x0);
                    /* try { // try from 034aba08 to 035aba0b has its CatchHandler @ 034aba2c */
                    /* try { // try from 034aba0c to 035aba0f has its CatchHandler @ 034aba28 */
                    /* try { // try from 034aba10 to 035aba13 has its CatchHandler @ 034ab6e0 */
        bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,true,(MethodInfo *)0x0);
                    /* try { // try from 034aba14 to 035aba17 has its CatchHandler @ 034aba20 */
                    /* try { // try from 034aba18 to 035aba5f has its CatchHandler @ 034ab6e0 */
        (__this->fields)._DICCMNCLCGC_k__BackingField = bVar1;
                    /* catch() { ... } // from try @ 034aba14 with catch @ 034aba20 */
                    /* catch() { ... } // from try @ 034ab938 with catch @ 034aba24 */
                    /* catch() { ... } // from try @ 034aba0c with catch @ 034aba28 */
                    /* catch() { ... } // from try @ 034aba08 with catch @ 034aba2c */
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 034ab928 with catch @ 034aba30 */
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 034ab904 with catch @ 034aba34 */
                    /* catch() { ... } // from try @ 034aba04 with catch @ 034aba38 */
                    /* catch() { ... } // from try @ 034ab940 with catch @ 034aba3c */
                    /* catch() { ... } // from try @ 034ab910 with catch @ 034aba40 */
                    /* catch() { ... } // from try @ 034ab8e8 with catch @ 034aba44 */
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_12093/*"ShowExpiration"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034ab9fc with catch @ 034aba48 */
                    /* catch() { ... } // from try @ 034ab888 with catch @ 034aba4c */
                    /* catch() { ... } // from try @ 034ab82c with catch @ 034aba50 */
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
          (__this->fields)._PFHCJJIBIBD_k__BackingField = bVar1;
                    /* try { // try from 034aba60 to 035aba63 has its CatchHandler @ 034aba74 */
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 034aba60 with catch @ 034aba74 */
                    /* try { // try from 034aba7c to 035abae3 has its CatchHandler @ 034abaf8 */
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_6102/*"ExpirationVer"*/,(MethodInfo *)0x0);
            CJNHFNHJHPE = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
            CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              (CJNHFNHJHPE,(MethodInfo *)0x0);
            (__this->fields)._LJNEEIANKCI_k__BackingField.fields = CVar5;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void PNHLMBFKKJP(bool CJNHFNHJHPE)  [RVA 0x33ABAB4]
// GDKLJOEKBNF$$PNHLMBFKKJP @ RVA 0x33ABAB4

void GDKLJOEKBNF__PNHLMBFKKJP(GDKLJOEKBNF_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DICCMNCLCGC_k__BackingField = CJNHFNHJHPE;
  return;
}

