// TypeDefIndex 2607
// Namespace: 
// public class OLKPEJMEBPJ
// Fields:
//   private XmlNode HJKLIDCAEOE; // 0x10
//   public OOMHDDBCBJP MIFNFJDIPBL; // 0x18
//   private bool PABIMIFJJKF; // 0x20
//   private bool BFPMONAEFGM; // 0x21
//   public bool IAMLNMJMPIJ; // 0x22
//   public bool MEMNIKBPEJL; // 0x23
//   private DNELIPCHKLK BBELCDHPJIP; // 0x28
//   private long KOANEAEMOOP; // 0x30
//   private long IKGEDJDFCBA; // 0x38
//   private long DAJFCLOOMDM; // 0x40
//   private ObscuredInt EBIIDPEAEPH; // 0x48
//   private bool CHMOBJPGDBN; // 0x58
//   private bool LJNPEJNOIPB; // 0x59
//   private bool LCIGBGGCCAH; // 0x5A
//   private ObscuredInt ANOLCJDAGPJ; // 0x5C

// ===== public void DPLIHJEANGE(bool CJNHFNHJHPE)  [RVA 0x33AA7A0]
// OLKPEJMEBPJ$$DPLIHJEANGE @ RVA 0x33AA7A0

void OLKPEJMEBPJ__DPLIHJEANGE(OLKPEJMEBPJ_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
  if ((DAT_04567d11 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_7076/*"Hidden"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04567d11 = 1;
  }
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  (__this->fields).BFPMONAEFGM = CJNHFNHJHPE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_7076/*"Hidden"*/,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_7076/*"Hidden"*/,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if ((pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
           (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_7076/*"Hidden"*/,(MethodInfo *)0x0),
           pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
          puVar1 = &StringLiteral_1567/*"0"*/;
          if ((__this->fields).BFPMONAEFGM != false) {
            puVar1 = &StringLiteral_1606/*"1"*/;
          }
                    /* WARNING: Could not recover jumptable at 0x034aa88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar4,*puVar1,(pSVar4->klass->vtable)._10_set_Value.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MJDAFBEALIP(int CJNHFNHJHPE)  [RVA 0x33AC0FC]
// OLKPEJMEBPJ$$MJDAFBEALIP @ RVA 0x33AC0FC

void OLKPEJMEBPJ__MJDAFBEALIP(OLKPEJMEBPJ_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  
                    /* try { // try from 034ac114 to 035ac11b has its CatchHandler @ 034acc58 */
  if ((DAT_04567d12 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11237/*"ReplayCount"*/);
    DAT_04567d12 = 1;
  }
                    /* try { // try from 034ac12c to 035ac133 has its CatchHandler @ 034acc2c */
                    /* try { // try from 034ac134 to 035ac14f has its CatchHandler @ 034acc8c */
  CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  pCVar6 = &(__this->fields).EBIIDPEAEPH;
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  pCVar6->fields = CVar7;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 034ac15c to 035ac163 has its CatchHandler @ 034acc30 */
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11237/*"ReplayCount"*/,(MethodInfo *)0x0);
                    /* try { // try from 034ac174 to 035ac17b has its CatchHandler @ 034acc24 */
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 034ac17c to 035ac187 has its CatchHandler @ 034acc60 */
      if (bVar1) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_11237/*"ReplayCount"*/,(MethodInfo *)0x0)
        ;
      }
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034ac19c to 035ac1a3 has its CatchHandler @ 034acc34 */
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
                    /* try { // try from 034ac1b4 to 035ac1bb has its CatchHandler @ 034acc28 */
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_11237/*"ReplayCount"*/,(MethodInfo *)0x0);
          __this_00.fields.fakeValue = 0;
          __this_00.fields.fakeValueActive = false;
          __this_00.fields.inited = false;
          __this_00.fields._14_2_ = 0;
          __this_00.fields._0_8_ = pCVar6;
                    /* try { // try from 034ac1bc to 035ac1d7 has its CatchHandler @ 034acc84 */
          pSVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_00,method_00);
          if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034ac1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 034ac1e4 to 035ac1eb has its CatchHandler @ 034acc14 */
            (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar4,pSVar5,(pSVar4->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public DNELIPCHKLK IJKGMDECHJD()  [RVA 0x33AC1EC]
// OLKPEJMEBPJ$$IJKGMDECHJD @ RVA 0x33AC1EC

DNELIPCHKLK_o * OLKPEJMEBPJ__IJKGMDECHJD(OLKPEJMEBPJ_o *__this,MethodInfo *method)

{
  return (__this->fields).BBELCDHPJIP;
}


// ===== public int MMDJGCICIFP()  [RVA 0x33AC1F4]
// OLKPEJMEBPJ$$MMDJGCICIFP @ RVA 0x33AC1F4

int32_t OLKPEJMEBPJ__MMDJGCICIFP(OLKPEJMEBPJ_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
                    /* try { // try from 034ac1fc to 035ac203 has its CatchHandler @ 034acbf8 */
                    /* try { // try from 034ac204 to 035ac21f has its CatchHandler @ 034acc78 */
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).ANOLCJDAGPJ.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public long ONABMDALDLD()  [RVA 0x33AC208]
// OLKPEJMEBPJ$$ONABMDALDLD @ RVA 0x33AC208

int64_t OLKPEJMEBPJ__ONABMDALDLD(OLKPEJMEBPJ_o *__this,MethodInfo *method)

{
  return (__this->fields).IKGEDJDFCBA;
}


// ===== public void KCPGEFEMHJB(long CJNHFNHJHPE)  [RVA 0x33AC210]
// OLKPEJMEBPJ$$KCPGEFEMHJB @ RVA 0x33AC210

void OLKPEJMEBPJ__KCPGEFEMHJB(OLKPEJMEBPJ_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int64_t *__this_00;
  
  if ((DAT_04567d13 & 1) == 0) {
                    /* try { // try from 034ac22c to 035ac233 has its CatchHandler @ 034acc00 */
    FUN_01bab630(&StringLiteral_5750/*"EndTime"*/);
    DAT_04567d13 = 1;
  }
  __this_00 = &(__this->fields).DAJFCLOOMDM;
                    /* try { // try from 034ac244 to 035ac24b has its CatchHandler @ 034acbc4 */
  *__this_00 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034ac250 to 035ac267 has its CatchHandler @ 034acc88 */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac274 to 035ac27b has its CatchHandler @ 034acbcc */
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_5750/*"EndTime"*/,(MethodInfo *)0x0);
      if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_5750/*"EndTime"*/,(MethodInfo *)0x0);
      }
                    /* try { // try from 034ac28c to 035ac293 has its CatchHandler @ 034acbb0 */
      pSVar1 = (__this->fields).HJKLIDCAEOE;
      if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034ac298 to 035ac2af has its CatchHandler @ 034acc80 */
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_5750/*"EndTime"*/,(MethodInfo *)0x0);
                    /* try { // try from 034ac2bc to 035ac2c3 has its CatchHandler @ 034acbb8 */
          pSVar4 = System_Int64__ToString((int64_t)__this_00,(MethodInfo *)0x0);
          if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 034ac2d4 to 035ac2db has its CatchHandler @ 034acc1c */
                    /* WARNING: Could not recover jumptable at 0x034ac2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 034ac2e0 to 035ac2f7 has its CatchHandler @ 034acc74 */
            (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar3,pSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x33AC2E8]
// OLKPEJMEBPJ$$.ctor @ RVA 0x33AC2E8

void OLKPEJMEBPJ___ctor(OLKPEJMEBPJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  DNELIPCHKLK_o *pDVar3;
  System_Xml_XmlNode_o *pSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *CJNHFNHJHPE;
  int64_t iVar7;
  DNELIPCHKLK_o **ppDVar8;
  OLKPEJMEBPJ_Fields *pOVar9;
  OOMHDDBCBJP_o **ppOVar10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar11;
  
                    /* try { // try from 034ac304 to 035ac30b has its CatchHandler @ 034acbac */
  if ((DAT_04567d14 & 1) == 0) {
                    /* try { // try from 034ac31c to 035ac323 has its CatchHandler @ 034acc0c */
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
                    /* try { // try from 034ac328 to 035ac33f has its CatchHandler @ 034acc70 */
    FUN_01bab630(&StringLiteral_8602/*"Locked"*/);
    FUN_01bab630(&StringLiteral_11010/*"RandomRuleSeed"*/);
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
                    /* try { // try from 034ac34c to 035ac353 has its CatchHandler @ 034acc10 */
    FUN_01bab630(&StringLiteral_5750/*"EndTime"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* try { // try from 034ac364 to 035ac36b has its CatchHandler @ 034acbd0 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 034ac36c to 035ac377 has its CatchHandler @ 034acbb4 */
    FUN_01bab630(&StringLiteral_11237/*"ReplayCount"*/);
    FUN_01bab630(&StringLiteral_7076/*"Hidden"*/);
                    /* try { // try from 034ac388 to 035ac38f has its CatchHandler @ 034acc18 */
    FUN_01bab630(&StringLiteral_11006/*"RandomGroupSeed"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
                    /* try { // try from 034ac3a0 to 035ac3a7 has its CatchHandler @ 034acbfc */
    DAT_04567d14 = 1;
  }
                    /* try { // try from 034ac3a8 to 035ac3b3 has its CatchHandler @ 034acbc0 */
  pDVar3 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
  DNELIPCHKLK___ctor(pDVar3,(MethodInfo *)0x0);
  ppDVar8 = &(__this->fields).BBELCDHPJIP;
  *ppDVar8 = pDVar3;
  thunk_FUN_01c20e04(ppDVar8,pDVar3);
                    /* try { // try from 034ac3cc to 035ac3d3 has its CatchHandler @ 034acb98 */
  (__this->fields).DAJFCLOOMDM = -1;
  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).EBIIDPEAEPH.fields = CVar11;
                    /* try { // try from 034ac3ec to 035ac3ef has its CatchHandler @ 034acb84 */
  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
                    /* try { // try from 034ac3f0 to 035ac417 has its CatchHandler @ 034acb9c */
  (__this->fields).ANOLCJDAGPJ.fields = CVar11;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pOVar9 = &__this->fields;
  pOVar9->HJKLIDCAEOE = AHDGNOJPPIB;
  thunk_FUN_01c20e04(pOVar9,AHDGNOJPPIB);
  ppOVar10 = &(__this->fields).MIFNFJDIPBL;
                    /* try { // try from 034ac418 to 035ac41f has its CatchHandler @ 034acb90 */
  *ppOVar10 = (OOMHDDBCBJP_o *)0x0;
  thunk_FUN_01c20e04(ppOVar10,0);
  (__this->fields).IAMLNMJMPIJ = false;
  (__this->fields).MEMNIKBPEJL = false;
  (__this->fields).DAJFCLOOMDM = -1;
                    /* try { // try from 034ac43c to 035ac443 has its CatchHandler @ 034acbbc */
  (__this->fields).KOANEAEMOOP = 0;
  (__this->fields).IKGEDJDFCBA = 0;
  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).EBIIDPEAEPH.fields = CVar11;
  (__this->fields).CHMOBJPGDBN = false;
  (__this->fields).LJNPEJNOIPB = false;
                    /* try { // try from 034ac454 to 035ac45b has its CatchHandler @ 034acc20 */
  (__this->fields).LCIGBGGCCAH = false;
  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(1,(MethodInfo *)0x0);
                    /* try { // try from 034ac45c to 035ac467 has its CatchHandler @ 034acc08 */
  (__this->fields).ANOLCJDAGPJ.fields = CVar11;
  pSVar4 = pOVar9->HJKLIDCAEOE;
  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac480 to 035ac487 has its CatchHandler @ 034acb94 */
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                    /* try { // try from 034ac4a0 to 035ac4a3 has its CatchHandler @ 034acb88 */
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 034ac4a4 to 035ac4cb has its CatchHandler @ 034acba0 */
      if (bVar1) {
        pSVar6 = EIABCPKDEBD__HBGAGFJBGKD(pOVar9->HJKLIDCAEOE,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_034ac848;
        (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar6,StringLiteral_1/*""*/,(pSVar6->klass->vtable)._10_set_Value.method);
      }
                    /* try { // try from 034ac4cc to 035ac4d3 has its CatchHandler @ 034acb8c */
      pSVar4 = pOVar9->HJKLIDCAEOE;
      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac4f0 to 035ac4f7 has its CatchHandler @ 034acc04 */
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_8602/*"Locked"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 034ac504 to 035ac507 has its CatchHandler @ 034acbc8 */
          if (bVar1) {
            pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                               (pOVar9->HJKLIDCAEOE,StringLiteral_8602/*"Locked"*/,(MethodInfo *)0x0);
            if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_034ac848;
            (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar6,StringLiteral_1567/*"0"*/,(pSVar6->klass->vtable)._10_set_Value.method);
          }
          pSVar4 = pOVar9->HJKLIDCAEOE;
          if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034ac540 to 035ac567 has its CatchHandler @ 034ac9b0 */
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_8602/*"Locked"*/,(MethodInfo *)0x0);
              bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
              pSVar4 = (__this->fields).HJKLIDCAEOE;
              (__this->fields).PABIMIFJJKF = bVar1;
              if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                 (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method),
                 pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 034ac59c to 035ac5c7 has its CatchHandler @ 034ac9ac */
                pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar5,StringLiteral_7076/*"Hidden"*/,(MethodInfo *)0x0);
                bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
                (__this->fields).BFPMONAEFGM = bVar1;
                pDVar3 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
                DNELIPCHKLK___ctor(pDVar3,(MethodInfo *)0x0);
                (__this->fields).BBELCDHPJIP = pDVar3;
                thunk_FUN_01c20e04(ppDVar8,pDVar3);
                pSVar4 = (__this->fields).HJKLIDCAEOE;
                if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                  pDVar3 = (__this->fields).BBELCDHPJIP;
                  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac5fc to 035ac607 has its CatchHandler @ 034ac9a0 */
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                    /* try { // try from 034ac610 to 035ac61f has its CatchHandler @ 034ac9a4 */
                    CJNHFNHJHPE = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0)
                    ;
                    if ((pDVar3 != (DNELIPCHKLK_o *)0x0) &&
                       (DNELIPCHKLK__LGOFNFEIKFB(pDVar3,CJNHFNHJHPE,(MethodInfo *)0x0),
                       AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) {
                    /* try { // try from 034ac630 to 035ac637 has its CatchHandler @ 034ac950 */
                      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac648 to 035ac64f has its CatchHandler @ 034ac944 */
                    /* try { // try from 034ac650 to 035ac65b has its CatchHandler @ 034ac948 */
                        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar5,StringLiteral_11006/*"RandomGroupSeed"*/,(MethodInfo *)0x0);
                        bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                        (__this->fields).LJNPEJNOIPB = (bool_conflict)(~bVar1 & 1);
                    /* try { // try from 034ac670 to 035ac677 has its CatchHandler @ 034ac974 */
                        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                           (AHDGNOJPPIB,
                                            (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac688 to 035ac68f has its CatchHandler @ 034ac990 */
                    /* try { // try from 034ac690 to 035ac69b has its CatchHandler @ 034ac988 */
                          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar5,StringLiteral_11010/*"RandomRuleSeed"*/,(MethodInfo *)0x0);
                          bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 034ac6ac to 035ac6b3 has its CatchHandler @ 034ac98c */
                          (__this->fields).CHMOBJPGDBN = (bool_conflict)(~bVar1 & 1);
                          if ((__this->fields).LJNPEJNOIPB != false) {
                    /* try { // try from 034ac6bc to 035ac6c3 has its CatchHandler @ 034ac954 */
                    /* try { // try from 034ac6c4 to 035ac6df has its CatchHandler @ 034ac998 */
                            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                               (AHDGNOJPPIB,
                                                (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                method);
                            if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0)
                            goto LAB_034ac848;
                            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar5,StringLiteral_11006/*"RandomGroupSeed"*/,(MethodInfo *)0x0);
                            iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
                            (__this->fields).IKGEDJDFCBA = (long)iVar2;
                          }
                    /* try { // try from 034ac6ec to 035ac6f3 has its CatchHandler @ 034ac980 */
                    /* try { // try from 034ac6fc to 035ac703 has its CatchHandler @ 034ac968 */
                          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                             (AHDGNOJPPIB,
                                              (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                             );
                          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac704 to 035ac71f has its CatchHandler @ 034ac994 */
                            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar5,StringLiteral_5750/*"EndTime"*/,(MethodInfo *)0x0);
                            iVar7 = EIABCPKDEBD__HNIGPBMJJOL(pSVar6,-1,(MethodInfo *)0x0);
                            (__this->fields).DAJFCLOOMDM = iVar7;
                    /* try { // try from 034ac72c to 035ac733 has its CatchHandler @ 034ac94c */
                            if ((__this->fields).CHMOBJPGDBN != false) {
                    /* try { // try from 034ac73c to 035ac743 has its CatchHandler @ 034ac95c */
                              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                                 (AHDGNOJPPIB,
                                                  (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                  method);
                    /* try { // try from 034ac744 to 035ac74f has its CatchHandler @ 034ac958 */
                              if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0)
                              goto LAB_034ac848;
                              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                 (pSVar5,StringLiteral_11010/*"RandomRuleSeed"*/,(MethodInfo *)0x0);
                              iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
                              (__this->fields).KOANEAEMOOP = (long)iVar2;
                            }
                            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                               (AHDGNOJPPIB,
                                                (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                method);
                            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                 (pSVar5,StringLiteral_11237/*"ReplayCount"*/,(MethodInfo *)0x0);
                    /* try { // try from 034ac798 to 035ac7bb has its CatchHandler @ 034ac940 */
                              iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
                              CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                                       CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                 (iVar2,(MethodInfo *)0x0);
                              (__this->fields).EBIIDPEAEPH.fields = CVar11;
                              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                                 (AHDGNOJPPIB,
                                                  (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                  method);
                              if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac7d4 to 035ac843 has its CatchHandler @ 034acc9c */
                                pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                   (pSVar5,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
                                bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                                (__this->fields).LCIGBGGCCAH = (bool_conflict)(~bVar1 & 1);
                                if (!bVar1) {
                                  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                             methodPtr)(AHDGNOJPPIB,
                                                        (AHDGNOJPPIB->klass->vtable).
                                                        _16_get_Attributes.method);
                                  if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0)
                                  goto LAB_034ac848;
                                  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                     (pSVar5,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
                                  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                     (iVar2,(MethodInfo *)0x0);
                                  (__this->fields).ANOLCJDAGPJ.fields = CVar11;
                                }
                                return;
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
LAB_034ac848:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool KFMAFEPOEIB()  [RVA 0x33AC84C]
// OLKPEJMEBPJ$$KFMAFEPOEIB @ RVA 0x33AC84C

bool OLKPEJMEBPJ__KFMAFEPOEIB(OLKPEJMEBPJ_o *__this,MethodInfo *method)

{
  return (__this->fields).PABIMIFJJKF;
}


// ===== public bool PNNNPHLOGBC()  [RVA 0x33AC854]
// OLKPEJMEBPJ$$PNNNPHLOGBC @ RVA 0x33AC854

bool OLKPEJMEBPJ__PNNNPHLOGBC(OLKPEJMEBPJ_o *__this,MethodInfo *method)

{
  return (__this->fields).CHMOBJPGDBN;
}


// ===== public void PPCDKKPGEGI(DNELIPCHKLK CJNHFNHJHPE)  [RVA 0x33AC85C]
// OLKPEJMEBPJ$$PPCDKKPGEGI @ RVA 0x33AC85C

void OLKPEJMEBPJ__PPCDKKPGEGI(OLKPEJMEBPJ_o *__this,DNELIPCHKLK_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  undefined8 uVar3;
  DNELIPCHKLK_o *pDVar4;
  DNELIPCHKLK_o **ppDVar5;
  
  if ((DAT_04567d15 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04567d15 = 1;
  }
  ppDVar5 = &(__this->fields).BBELCDHPJIP;
  *ppDVar5 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppDVar5,CJNHFNHJHPE);
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034ac8b0 to 035ac8db has its CatchHandler @ 034acba4 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pDVar4 = *ppDVar5;
                    /* try { // try from 034ac8e0 to 035ac8e7 has its CatchHandler @ 034ac9a8 */
      if ((pDVar4 != (DNELIPCHKLK_o *)0x0) &&
         (uVar3 = (*(pDVar4->klass->vtable)._3_ToString.methodPtr)
                            (pDVar4,(pDVar4->klass->vtable)._3_ToString.method),
         pSVar2 != (System_Xml_XmlAttribute_o *)0x0)) {
                    /* try { // try from 034ac8ec to 035ac8ef has its CatchHandler @ 034ac984 */
                    /* try { // try from 034ac8f4 to 035ac8f7 has its CatchHandler @ 034ac97c */
                    /* try { // try from 034ac8fc to 035ac8ff has its CatchHandler @ 034ac978 */
                    /* WARNING: Could not recover jumptable at 0x034ac904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 034ac904 to 035ac907 has its CatchHandler @ 034ac99c */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,uVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x33AC90C]
// OLKPEJMEBPJ$$RandomizeObscuredVars @ RVA 0x33AC90C

void OLKPEJMEBPJ__RandomizeObscuredVars(OLKPEJMEBPJ_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  
                    /* try { // try from 034ac90c to 035ac90f has its CatchHandler @ 034ac970 */
                    /* try { // try from 034ac914 to 035ac917 has its CatchHandler @ 034ac96c */
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).EBIIDPEAEPH;
                    /* try { // try from 034ac91c to 035ac91f has its CatchHandler @ 034ac964 */
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &(__this->fields).ANOLCJDAGPJ;
                    /* try { // try from 034ac924 to 035ac927 has its CatchHandler @ 034ac960 */
                    /* try { // try from 034ac92c to 035ac92f has its CatchHandler @ 034ac99c */
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  return;
}


// ===== public bool NGDILIDGCJN()  [RVA 0x33AC930]
// OLKPEJMEBPJ$$NGDILIDGCJN @ RVA 0x33AC930

bool OLKPEJMEBPJ__NGDILIDGCJN(OLKPEJMEBPJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  
                    /* try { // try from 034ac934 to 035ac937 has its CatchHandler @ 034ac93c */
                    /* try { // try from 034ac938 to 035ac9cb has its CatchHandler @ 034abafc */
                    /* catch() { ... } // from try @ 034ac934 with catch @ 034ac93c */
  if ((__this->fields).DAJFCLOOMDM == -1) {
                    /* catch() { ... } // from try @ 034ac630 with catch @ 034ac950 */
    bVar1 = false;
  }
  else {
                    /* catch() { ... } // from try @ 034ac798 with catch @ 034ac940 */
    iVar2 = OLKPEJMEBPJ__KPPFAPANAMH(__this,method);
                    /* catch() { ... } // from try @ 034ac648 with catch @ 034ac944 */
                    /* catch() { ... } // from try @ 034ac650 with catch @ 034ac948 */
    bVar1 = iVar2 < 1;
                    /* catch() { ... } // from try @ 034ac72c with catch @ 034ac94c */
  }
                    /* catch() { ... } // from try @ 034ac6bc with catch @ 034ac954 */
                    /* catch() { ... } // from try @ 034ac744 with catch @ 034ac958 */
  return bVar1;
}


// ===== public long KPPFAPANAMH()  [RVA 0x33AC95C]
// OLKPEJMEBPJ$$KPPFAPANAMH @ RVA 0x33AC95C

int64_t OLKPEJMEBPJ__KPPFAPANAMH(OLKPEJMEBPJ_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 034ac73c with catch @ 034ac95c */
                    /* catch() { ... } // from try @ 034ac924 with catch @ 034ac960 */
  lVar2 = (__this->fields).DAJFCLOOMDM;
                    /* catch() { ... } // from try @ 034ac91c with catch @ 034ac964 */
                    /* catch() { ... } // from try @ 034ac6fc with catch @ 034ac968 */
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034ac914 with catch @ 034ac96c */
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
                    /* catch() { ... } // from try @ 034ac90c with catch @ 034ac970 */
                    /* catch() { ... } // from try @ 034ac670 with catch @ 034ac974 */
    iVar1 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034ac8fc with catch @ 034ac978 */
                    /* catch() { ... } // from try @ 034ac8f4 with catch @ 034ac97c */
                    /* catch() { ... } // from try @ 034ac6ec with catch @ 034ac980 */
    return lVar2 - iVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034ac8ec with catch @ 034ac984 */
  FUN_01bab8c8();
}


// ===== public void NMPBPALANND(bool CJNHFNHJHPE)  [RVA 0x33AC988]
// OLKPEJMEBPJ$$NMPBPALANND @ RVA 0x33AC988

void OLKPEJMEBPJ__NMPBPALANND(OLKPEJMEBPJ_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
                    /* catch() { ... } // from try @ 034ac690 with catch @ 034ac988 */
                    /* catch() { ... } // from try @ 034ac6ac with catch @ 034ac98c */
                    /* catch() { ... } // from try @ 034ac688 with catch @ 034ac990 */
                    /* catch() { ... } // from try @ 034ac704 with catch @ 034ac994 */
                    /* catch() { ... } // from try @ 034ac6c4 with catch @ 034ac998 */
                    /* catch() { ... } // from try @ 034ac904 with catch @ 034ac99c
                       catch() { ... } // from try @ 034ac92c with catch @ 034ac99c */
                    /* catch() { ... } // from try @ 034ac5fc with catch @ 034ac9a0 */
  if ((DAT_04567d16 & 1) == 0) {
                    /* catch() { ... } // from try @ 034ac610 with catch @ 034ac9a4 */
                    /* catch() { ... } // from try @ 034ac8e0 with catch @ 034ac9a8 */
                    /* catch() { ... } // from try @ 034ac59c with catch @ 034ac9ac */
    FUN_01bab630(&StringLiteral_8602/*"Locked"*/);
                    /* catch() { ... } // from try @ 034ac540 with catch @ 034ac9b0 */
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
                    /* try { // try from 034ac9cc to 035ac9cf has its CatchHandler @ 034acb74 */
    DAT_04567d16 = 1;
  }
                    /* try { // try from 034ac9d0 to 035aca93 has its CatchHandler @ 034abafc */
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  (__this->fields).PABIMIFJJKF = CJNHFNHJHPE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_8602/*"Locked"*/,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_8602/*"Locked"*/,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if ((pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
           (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_8602/*"Locked"*/,(MethodInfo *)0x0),
           pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
          puVar1 = &StringLiteral_1567/*"0"*/;
          if ((__this->fields).PABIMIFJJKF != false) {
            puVar1 = &StringLiteral_1606/*"1"*/;
          }
                    /* WARNING: Could not recover jumptable at 0x034aca74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar4,*puVar1,(pSVar4->klass->vtable)._10_set_Value.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool EFLKILFFJKH()  [RVA 0x33AA764]
// OLKPEJMEBPJ$$EFLKILFFJKH @ RVA 0x33AA764

bool OLKPEJMEBPJ__EFLKILFFJKH(OLKPEJMEBPJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  
  if ((__this->fields).BFPMONAEFGM == false) {
    if ((__this->fields).DAJFCLOOMDM == -1) {
      bVar1 = false;
    }
    else {
      iVar2 = OLKPEJMEBPJ__KPPFAPANAMH(__this,method);
      bVar1 = iVar2 < 1;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// ===== public void CPIINGDCHIH(long CJNHFNHJHPE)  [RVA 0x33ACA7C]
// OLKPEJMEBPJ$$CPIINGDCHIH @ RVA 0x33ACA7C

void OLKPEJMEBPJ__CPIINGDCHIH(OLKPEJMEBPJ_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int64_t *__this_00;
  
                    /* try { // try from 034aca94 to 035acb0b has its CatchHandler @ 034acd6c */
  if ((DAT_04567d17 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11006/*"RandomGroupSeed"*/);
    DAT_04567d17 = 1;
  }
  __this_00 = &(__this->fields).IKGEDJDFCBA;
  *__this_00 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  (__this->fields).LJNPEJNOIPB = true;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_11006/*"RandomGroupSeed"*/,(MethodInfo *)0x0);
      if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_11006/*"RandomGroupSeed"*/,(MethodInfo *)0x0)
        ;
      }
      pSVar1 = (__this->fields).HJKLIDCAEOE;
      if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034acb0c to 035acb13 has its CatchHandler @ 034acca0 */
                    /* try { // try from 034acb14 to 035acb17 has its CatchHandler @ 034acc54 */
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 034acb18 to 035acb1b has its CatchHandler @ 034acc50 */
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034acb1c to 035acb1f has its CatchHandler @ 034acc4c */
                    /* try { // try from 034acb20 to 035acb23 has its CatchHandler @ 034acc48 */
                    /* try { // try from 034acb24 to 035acb27 has its CatchHandler @ 034acc44 */
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_11006/*"RandomGroupSeed"*/,(MethodInfo *)0x0);
                    /* try { // try from 034acb28 to 035acb2b has its CatchHandler @ 034acc40 */
                    /* try { // try from 034acb2c to 035acb2f has its CatchHandler @ 034acc3c */
                    /* try { // try from 034acb30 to 035acb33 has its CatchHandler @ 034acbf4 */
                    /* try { // try from 034acb34 to 035acb37 has its CatchHandler @ 034acbf0 */
          pSVar4 = System_Int64__ToString((int64_t)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 034acb38 to 035acb3b has its CatchHandler @ 034acbec */
          if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 034acb3c to 035acb3f has its CatchHandler @ 034acbe8 */
                    /* try { // try from 034acb40 to 035acb43 has its CatchHandler @ 034acbe4 */
                    /* try { // try from 034acb44 to 035acb47 has its CatchHandler @ 034acbe0 */
                    /* try { // try from 034acb48 to 035acb4b has its CatchHandler @ 034acbdc */
                    /* try { // try from 034acb4c to 035acb4f has its CatchHandler @ 034acbd8 */
                    /* try { // try from 034acb50 to 035acb53 has its CatchHandler @ 034acbd4 */
                    /* WARNING: Could not recover jumptable at 0x034acb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 034acb54 to 035acb5b has its CatchHandler @ 034acba8 */
            (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar3,pSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool GKILIHDGNOB()  [RVA 0x33ACB5C]
// OLKPEJMEBPJ$$GKILIHDGNOB @ RVA 0x33ACB5C

bool OLKPEJMEBPJ__GKILIHDGNOB(OLKPEJMEBPJ_o *__this,MethodInfo *method)

{
                    /* try { // try from 034acb5c to 035acb63 has its CatchHandler @ 034acc6c */
  return (__this->fields).LCIGBGGCCAH;
}


// ===== public long PCAEGBFIBEB()  [RVA 0x33ACB64]
// OLKPEJMEBPJ$$PCAEGBFIBEB @ RVA 0x33ACB64

int64_t OLKPEJMEBPJ__PCAEGBFIBEB(OLKPEJMEBPJ_o *__this,MethodInfo *method)

{
                    /* try { // try from 034acb64 to 035acb67 has its CatchHandler @ 034abafc */
                    /* try { // try from 034acb68 to 035acb6b has its CatchHandler @ 034acb80 */
  return (__this->fields).KOANEAEMOOP;
}


// ===== public void HMMOOLJEJOJ(long CJNHFNHJHPE)  [RVA 0x33ACB6C]
// OLKPEJMEBPJ$$HMMOOLJEJOJ @ RVA 0x33ACB6C

void OLKPEJMEBPJ__HMMOOLJEJOJ(OLKPEJMEBPJ_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int64_t *__this_00;
  
                    /* try { // try from 034acb6c to 035acccf has its CatchHandler @ 034abafc */
                    /* catch() { ... } // from try @ 034ac9cc with catch @ 034acb74 */
                    /* catch() { ... } // from try @ 034acb68 with catch @ 034acb80 */
                    /* catch() { ... } // from try @ 034ac3ec with catch @ 034acb84 */
  if ((DAT_04567d18 & 1) == 0) {
                    /* catch() { ... } // from try @ 034ac4a0 with catch @ 034acb88 */
                    /* catch() { ... } // from try @ 034ac4cc with catch @ 034acb8c */
                    /* catch() { ... } // from try @ 034ac418 with catch @ 034acb90 */
    FUN_01bab630(&StringLiteral_11010/*"RandomRuleSeed"*/);
                    /* catch() { ... } // from try @ 034ac480 with catch @ 034acb94 */
                    /* catch() { ... } // from try @ 034ac3cc with catch @ 034acb98 */
    DAT_04567d18 = 1;
  }
                    /* catch() { ... } // from try @ 034ac3f0 with catch @ 034acb9c */
  __this_00 = &(__this->fields).KOANEAEMOOP;
                    /* catch() { ... } // from try @ 034ac4a4 with catch @ 034acba0 */
  *__this_00 = CJNHFNHJHPE;
                    /* catch() { ... } // from try @ 034ac8b0 with catch @ 034acba4 */
  pSVar1 = (__this->fields).HJKLIDCAEOE;
                    /* catch() { ... } // from try @ 034acb54 with catch @ 034acba8 */
                    /* catch() { ... } // from try @ 034ac304 with catch @ 034acbac */
  (__this->fields).CHMOBJPGDBN = true;
                    /* catch() { ... } // from try @ 034ac28c with catch @ 034acbb0 */
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 034ac36c with catch @ 034acbb4 */
                    /* catch() { ... } // from try @ 034ac2bc with catch @ 034acbb8 */
                    /* catch() { ... } // from try @ 034ac43c with catch @ 034acbbc */
                    /* catch() { ... } // from try @ 034ac3a8 with catch @ 034acbc0 */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 034ac244 with catch @ 034acbc4 */
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 034ac504 with catch @ 034acbc8 */
                    /* catch() { ... } // from try @ 034ac274 with catch @ 034acbcc */
                    /* catch() { ... } // from try @ 034ac364 with catch @ 034acbd0 */
                    /* catch() { ... } // from try @ 034acb50 with catch @ 034acbd4 */
                    /* catch() { ... } // from try @ 034acb4c with catch @ 034acbd8 */
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_11010/*"RandomRuleSeed"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034acb48 with catch @ 034acbdc */
      if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* catch() { ... } // from try @ 034acb44 with catch @ 034acbe0 */
                    /* catch() { ... } // from try @ 034acb40 with catch @ 034acbe4 */
                    /* catch() { ... } // from try @ 034acb3c with catch @ 034acbe8 */
                    /* catch() { ... } // from try @ 034acb38 with catch @ 034acbec */
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_11010/*"RandomRuleSeed"*/,(MethodInfo *)0x0)
        ;
      }
                    /* catch() { ... } // from try @ 034acb34 with catch @ 034acbf0 */
      pSVar1 = (__this->fields).HJKLIDCAEOE;
                    /* catch() { ... } // from try @ 034acb30 with catch @ 034acbf4 */
      if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 034ac1fc with catch @ 034acbf8 */
                    /* catch() { ... } // from try @ 034ac3a0 with catch @ 034acbfc */
                    /* catch() { ... } // from try @ 034ac22c with catch @ 034acc00 */
                    /* catch() { ... } // from try @ 034ac4f0 with catch @ 034acc04 */
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 034ac45c with catch @ 034acc08 */
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 034ac31c with catch @ 034acc0c */
                    /* catch() { ... } // from try @ 034ac34c with catch @ 034acc10 */
                    /* catch() { ... } // from try @ 034ac1e4 with catch @ 034acc14 */
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_11010/*"RandomRuleSeed"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034ac388 with catch @ 034acc18 */
                    /* catch() { ... } // from try @ 034ac2d4 with catch @ 034acc1c */
                    /* catch() { ... } // from try @ 034ac454 with catch @ 034acc20 */
                    /* catch() { ... } // from try @ 034ac174 with catch @ 034acc24 */
          pSVar4 = System_Int64__ToString((int64_t)__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034ac1b4 with catch @ 034acc28 */
          if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* catch() { ... } // from try @ 034ac12c with catch @ 034acc2c */
                    /* catch() { ... } // from try @ 034ac15c with catch @ 034acc30 */
                    /* catch() { ... } // from try @ 034ac19c with catch @ 034acc34 */
                    /* catch() { ... } // from try @ 034ac0e4 with catch @ 034acc38 */
                    /* catch() { ... } // from try @ 034acb2c with catch @ 034acc3c */
                    /* catch() { ... } // from try @ 034acb28 with catch @ 034acc40 */
                    /* WARNING: Could not recover jumptable at 0x034acc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 034acb24 with catch @ 034acc44 */
            (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar3,pSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034acb20 with catch @ 034acc48 */
  FUN_01bab8c8();
}


// ===== public void KPFJEDDJKKH(int CJNHFNHJHPE)  [RVA 0x33ACC4C]
// OLKPEJMEBPJ$$KPFJEDDJKKH @ RVA 0x33ACC4C

void OLKPEJMEBPJ__KPFJEDDJKKH(OLKPEJMEBPJ_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  
                    /* catch() { ... } // from try @ 034acb1c with catch @ 034acc4c */
                    /* catch() { ... } // from try @ 034acb18 with catch @ 034acc50 */
                    /* catch() { ... } // from try @ 034acb14 with catch @ 034acc54 */
                    /* catch() { ... } // from try @ 034ac114 with catch @ 034acc58 */
                    /* catch() { ... } // from try @ 034ac098 with catch @ 034acc5c */
                    /* catch() { ... } // from try @ 034ac17c with catch @ 034acc60 */
                    /* catch() { ... } // from try @ 034ac0cc with catch @ 034acc64 */
  if ((DAT_04567d19 & 1) == 0) {
                    /* catch() { ... } // from try @ 034ac080 with catch @ 034acc68 */
                    /* catch() { ... } // from try @ 034acb5c with catch @ 034acc6c */
                    /* catch() { ... } // from try @ 034ac328 with catch @ 034acc70 */
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
                    /* catch() { ... } // from try @ 034ac2e0 with catch @ 034acc74 */
                    /* catch() { ... } // from try @ 034ac204 with catch @ 034acc78 */
    DAT_04567d19 = 1;
  }
                    /* catch() { ... } // from try @ 034ac0ec with catch @ 034acc7c */
                    /* catch() { ... } // from try @ 034ac298 with catch @ 034acc80 */
                    /* catch() { ... } // from try @ 034ac1bc with catch @ 034acc84 */
                    /* catch() { ... } // from try @ 034ac250 with catch @ 034acc88 */
  (__this->fields).LCIGBGGCCAH = true;
                    /* catch() { ... } // from try @ 034ac134 with catch @ 034acc8c */
  CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034ac0a0 with catch @ 034acc90 */
                    /* catch() { ... } // from try @ 034ac060 with catch @ 034acc94 */
  pCVar6 = &(__this->fields).ANOLCJDAGPJ;
                    /* catch() { ... } // from try @ 034ac044 with catch @ 034acc98 */
  pSVar2 = (__this->fields).HJKLIDCAEOE;
                    /* catch() { ... } // from try @ 034ac7d4 with catch @ 034acc9c */
  pCVar6->fields = CVar7;
                    /* catch() { ... } // from try @ 034acb0c with catch @ 034acca0 */
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 034abfe4 with catch @ 034acca4 */
                    /* catch() { ... } // from try @ 034abf88 with catch @ 034acca8 */
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
                    /* try { // try from 034accd0 to 035accd3 has its CatchHandler @ 034acce0 */
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
      if (bVar1) {
                    /* catch() { ... } // from try @ 034accd0 with catch @ 034acce0 */
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034accf0 to 035acd57 has its CatchHandler @ 034acd6c */
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
          __this_00.fields.fakeValue = 0;
          __this_00.fields.fakeValueActive = false;
          __this_00.fields.inited = false;
          __this_00.fields._14_2_ = 0;
          __this_00.fields._0_8_ = pCVar6;
          pSVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_00,method_00);
          if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034acd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar4,pSVar5,(pSVar4->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool KPHADIDEHBL()  [RVA 0x33ACD44]
// OLKPEJMEBPJ$$KPHADIDEHBL @ RVA 0x33ACD44

bool OLKPEJMEBPJ__KPHADIDEHBL(OLKPEJMEBPJ_o *__this,MethodInfo *method)

{
  return (__this->fields).LJNPEJNOIPB;
}


// ===== public int LIIDJOLDBBF()  [RVA 0x33ACD4C]
// OLKPEJMEBPJ$$LIIDJOLDBBF @ RVA 0x33ACD4C

int32_t OLKPEJMEBPJ__LIIDJOLDBBF(OLKPEJMEBPJ_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
                    /* try { // try from 034acd58 to 035acd63 has its CatchHandler @ 034abafc */
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).EBIIDPEAEPH.fields,(MethodInfo *)0x0);
  return iVar1;
}

