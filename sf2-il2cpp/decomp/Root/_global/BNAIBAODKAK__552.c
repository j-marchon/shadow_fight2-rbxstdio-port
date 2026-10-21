// TypeDefIndex 552
// Namespace: 
// public class BNAIBAODKAK
// Fields:
//   private string KGLJICLJHEL; // 0x10
//   public string PKJEMIDJPAG; // 0x18
//   public string DGGHNFBCNGI; // 0x20
//   public string NLAHDEDCAEI; // 0x28
//   public string MHBAKHIIJLP; // 0x30
//   public string MIIEAMDLCJA; // 0x38
//   public string FNFCJDKHLKK; // 0x40
//   public string ECEMFINPJFF; // 0x48
//   public string DPDCPMPDBKJ; // 0x50
//   private bool JFAEKJELFFN; // 0x58

// ===== public bool PLGBAOHOBLE()  [RVA 0x35A8B3C]
// BNAIBAODKAK$$PLGBAOHOBLE @ RVA 0x35A8B3C

bool BNAIBAODKAK__PLGBAOHOBLE(BNAIBAODKAK_o *__this,MethodInfo *method)

{
  return (__this->fields).MIIEAMDLCJA != (System_String_o *)0x0;
}


// ===== public void GEKCENMGCOC(bool CJNHFNHJHPE)  [RVA 0x35A8B4C]
// BNAIBAODKAK$$GEKCENMGCOC @ RVA 0x35A8B4C

void BNAIBAODKAK__GEKCENMGCOC(BNAIBAODKAK_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).JFAEKJELFFN = CJNHFNHJHPE;
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x35A8B58]
// BNAIBAODKAK$$KCHJCGEMCGE @ RVA 0x35A8B58

System_String_o * BNAIBAODKAK__KCHJCGEMCGE(BNAIBAODKAK_o *__this,MethodInfo *method)

{
  return (__this->fields).KGLJICLJHEL;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x35A8B60]
// BNAIBAODKAK$$.ctor @ RVA 0x35A8B60

void BNAIBAODKAK___ctor(BNAIBAODKAK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_04568e2d & 1) == 0) {
    FUN_01bab630(&StringLiteral_2682/*"AbilityDesc"*/);
    FUN_01bab630(&StringLiteral_5264/*"DefaultWeapon"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_7999/*"IsLocked"*/);
    FUN_01bab630(&StringLiteral_3475/*"BigPortrait"*/);
    FUN_01bab630(&StringLiteral_8603/*"LockedByBattleIDS"*/);
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
    FUN_01bab630(&StringLiteral_8604/*"LockedName"*/);
    FUN_01bab630(&StringLiteral_2683/*"AbilityHint"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_9072/*"MiniPortrait"*/);
    DAT_04568e2d = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 036a8c28 to 037a8c2f has its CatchHandler @ 036a8ca4 */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 036a8c40 to 037a8c4b has its CatchHandler @ 036a8ca0 */
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                    /* try { // try from 036a8c4c to 037a8c93 has its CatchHandler @ 036a8b30 */
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).KGLJICLJHEL = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0);
                    /* try { // try from 036a8c94 to 037a8c97 has its CatchHandler @ 036a8c9c */
                    /* try { // try from 036a8c98 to 037a8cbb has its CatchHandler @ 036a8b30 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036a8c94 with catch @ 036a8c9c
                        */
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036a8c40 with catch @ 036a8ca0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036a8c28 with catch @ 036a8ca4
                        */
        (__this->fields).PKJEMIDJPAG = pSVar4;
        thunk_FUN_01c20e04();
                    /* try { // try from 036a8cbc to 037a8cbf has its CatchHandler @ 036a8ce8 */
                    /* try { // try from 036a8cc0 to 037a8cf7 has its CatchHandler @ 036a8b30 */
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_9072/*"MiniPortrait"*/,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036a8cbc with catch @ 036a8ce8 */
          (__this->fields).DGGHNFBCNGI = pSVar4;
          thunk_FUN_01c20e04();
                    /* try { // try from 036a8cf8 to 037a8cff has its CatchHandler @ 036a8d14 */
                    /* try { // try from 036a8d00 to 037a8d0b has its CatchHandler @ 036a8b30 */
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 036a8d0c to 037a8d13 has its CatchHandler @ 036a8d14 */
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036a8cf8 with catch @ 036a8d14
                       catch(type#2 @ 00000000) { ... } // from try @ 036a8d0c with catch @ 036a8d14
                        */
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_3475/*"BigPortrait"*/,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            (__this->fields).NLAHDEDCAEI = pSVar4;
            thunk_FUN_01c20e04();
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_5264/*"DefaultWeapon"*/,(MethodInfo *)0x0);
              pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              (__this->fields).MHBAKHIIJLP = pSVar4;
              thunk_FUN_01c20e04();
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,StringLiteral_7999/*"IsLocked"*/,(MethodInfo *)0x0);
                iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
                if (iVar1 != 1) {
                  return;
                }
                pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar2,StringLiteral_8603/*"LockedByBattleIDS"*/,(MethodInfo *)0x0);
                  pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                  (__this->fields).MIIEAMDLCJA = pSVar4;
                  thunk_FUN_01c20e04();
                  pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar2,StringLiteral_8604/*"LockedName"*/,(MethodInfo *)0x0);
                    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    (__this->fields).FNFCJDKHLKK = pSVar4;
                    thunk_FUN_01c20e04();
                    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar2,StringLiteral_2682/*"AbilityDesc"*/,(MethodInfo *)0x0);
                      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                      (__this->fields).ECEMFINPJFF = pSVar4;
                      thunk_FUN_01c20e04();
                      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar2,StringLiteral_2683/*"AbilityHint"*/,(MethodInfo *)0x0);
                        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                        ppSVar5 = &(__this->fields).DPDCPMPDBKJ;
                        *ppSVar5 = pSVar4;
                        thunk_FUN_01c20e04(ppSVar5,pSVar4);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool FJIENBHMBHA()  [RVA 0x35A8F00]
// BNAIBAODKAK$$FJIENBHMBHA @ RVA 0x35A8F00

bool BNAIBAODKAK__FJIENBHMBHA(BNAIBAODKAK_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields).DPDCPMPDBKJ,(MethodInfo *)0x0);
  return (bool)(~bVar1 & 1);
}


// ===== public bool AAAMBLLDPHJ()  [RVA 0x35A8F20]
// BNAIBAODKAK$$AAAMBLLDPHJ @ RVA 0x35A8F20

bool BNAIBAODKAK__AAAMBLLDPHJ(BNAIBAODKAK_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568e2e & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    DAT_04568e2e = 1;
    method = extraout_x1;
  }
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo,method);
  }
  if ((DKEOKAONIIB_TypeInfo->static_fields->LDBHFHDLBND == false) &&
     ((__this->fields).MIIEAMDLCJA != (System_String_o *)0x0)) {
    bVar1 = (__this->fields).JFAEKJELFFN != false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

