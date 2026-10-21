// TypeDefIndex 1149
// Namespace: 
// public class EJALJLHMDHM : QuestAction
// Fields:
//   private string DEKCPPOJFEH; // 0x68
//   private string IJONCLJPNDO; // 0x70
//   private KGNNFOHIBBD ONHENDPPLDI; // 0x78
//   private LCKCDEKNLOA FNOJIPMNDPJ; // 0x80
//   private LCKCDEKNLOA FNGNIKNIEMM; // 0x88

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x30FD05C]
// EJALJLHMDHM$$MAHFCKJGBPP @ RVA 0x30FD05C

void EJALJLHMDHM__MAHFCKJGBPP(EJALJLHMDHM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int ACCIHBHMFPN;
  int32_t ACCIHBHMFPN_00;
  bool bVar1;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  UnityEngine_Object_o *x;
  System_Action_CFEFALDOEMD__o *CJNHFNHJHPE;
  System_Action_BKLDKOMCOPN__o *CJNHFNHJHPE_00;
  LCKCDEKNLOA_o *__this_00;
  MethodInfo *method_00;
  DGGBFKNKEAH_o *pDVar2;
  
  if ((DAT_045664a1 & 1) == 0) {
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&Method_EJALJLHMDHM_IHKHIJONLCM__);
    FUN_01bab630(&Method_EJALJLHMDHM_JCLPLBEJHGM__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_045664a1 = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  method_00 = (MethodInfo *)0x0;
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  IKKAMAMLIKA = EJALJLHMDHM__DHKCDPPAFFC(__this,AAJBIMFNMBB,method_00);
  ACCIHBHMFPN = (__this->fields).ONHENDPPLDI;
  if (ACCIHBHMFPN != 3) {
    if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      GameUtils__IAGKBFCKFKB
                (IKKAMAMLIKA,ACCIHBHMFPN,1,(System_Action_BKKPAKHJDKB__o *)0x0,true,
                 (MethodInfo *)0x0);
    }
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    x = (UnityEngine_Object_o *)
        Nekki_SF2_GUI_UIModule__GetModule<object>
                  (Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      ACCIHBHMFPN_00 = (__this->fields).ONHENDPPLDI;
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = GameUtils__IAGKBFCKFKB
                        (IKKAMAMLIKA,ACCIHBHMFPN_00,1,(System_Action_BKKPAKHJDKB__o *)0x0,true,
                         (MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 031fd1c0 to 032fd1e7 has its CatchHandler @ 031fd388 */
        if (DAT_045655e8 == '\0') {
          FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
          DAT_045655e8 = '\x01';
        }
        pDVar2 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
        CJNHFNHJHPE = (System_Action_CFEFALDOEMD__o *)
                      thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
        System_Action<object>___ctor();
                    /* try { // try from 031fd21c to 032fd247 has its CatchHandler @ 031fd384 */
        if (pDVar2 != (DGGBFKNKEAH_o *)0x0) {
          DGGBFKNKEAH__OMNHIKEFCCG(pDVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
          if (DAT_045655e8 == '\0') {
            FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
            DAT_045655e8 = '\x01';
          }
          pDVar2 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
          CJNHFNHJHPE_00 =
               (System_Action_BKLDKOMCOPN__o *)
               thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo);
                    /* try { // try from 031fd278 to 032fd28b has its CatchHandler @ 031fd38c */
          System_Action<object>___ctor();
          if (pDVar2 != (DGGBFKNKEAH_o *)0x0) {
                    /* try { // try from 031fd28c to 032fd367 has its CatchHandler @ 031fd054 */
            DGGBFKNKEAH__AOMBGFMAOMJ(pDVar2,CJNHFNHJHPE_00,(MethodInfo *)0x0);
            return;
          }
        }
        goto LAB_031fd314;
      }
    }
  }
  __this_00 = (__this->fields).FNGNIKNIEMM;
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
LAB_031fd314:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x30FD518]
// EJALJLHMDHM$$HNIHOIAMDPC @ RVA 0x30FD518

void EJALJLHMDHM__HNIHOIAMDPC
               (EJALJLHMDHM_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_Xml_XmlNode_o *NPLGCIFGFOK_00;
  System_Xml_XmlNode_o *NPLGCIFGFOK_01;
  System_Action_o *pSVar5;
  int32_t iVar6;
  LCKCDEKNLOA_o *pLVar7;
  System_String_o **ppSVar8;
  
  if ((DAT_045664a2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_EJALJLHMDHM_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_4465/*"Coins"*/);
    FUN_01bab630(&StringLiteral_11072/*"Real"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_4921/*"Currency"*/);
    FUN_01bab630(&StringLiteral_12524/*"Success"*/);
    FUN_01bab630(&StringLiteral_11452/*"Ruby"*/);
    FUN_01bab630(&StringLiteral_5840/*"Error"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045664a2 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if ((NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    (__this->fields).DEKCPPOJFEH = pSVar4;
    thunk_FUN_01c20e04();
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_4921/*"Currency"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar8 = &(__this->fields).IJONCLJPNDO;
      *ppSVar8 = pSVar4;
      thunk_FUN_01c20e04(ppSVar8,pSVar4);
      bVar1 = System_String__op_Equality(*ppSVar8,StringLiteral_4465/*"Coins"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar6 = 1;
      }
      else {
        bVar1 = System_String__op_Equality(*ppSVar8,StringLiteral_11452/*"Ruby"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__op_Equality(*ppSVar8,StringLiteral_11072/*"Real"*/,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          (__this->fields).ONHENDPPLDI = 3;
          NPLGCIFGFOK_00 =
               (System_Xml_XmlNode_o *)
               (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                         (NPLGCIFGFOK,StringLiteral_12524/*"Success"*/,
                          (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
          NPLGCIFGFOK_01 =
               (System_Xml_XmlNode_o *)
               (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                         (NPLGCIFGFOK,StringLiteral_5840/*"Error"*/,
                          (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
          pLVar7 = (__this->fields).FNOJIPMNDPJ;
          pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          QuestAction__KIBBEDPGMBB
                    ((QuestAction_o *)__this,NPLGCIFGFOK_00,pLVar7,pSVar5,(MethodInfo *)0x0);
          pLVar7 = (__this->fields).FNGNIKNIEMM;
          pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          QuestAction__KIBBEDPGMBB
                    ((QuestAction_o *)__this,NPLGCIFGFOK_01,pLVar7,pSVar5,(MethodInfo *)0x0);
          return;
        }
        iVar6 = 2;
      }
      (__this->fields).ONHENDPPLDI = iVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void PKIFMKGDJJN()  [RVA 0x30FD7CC]
// EJALJLHMDHM$$PKIFMKGDJJN @ RVA 0x30FD7CC

void EJALJLHMDHM__PKIFMKGDJJN(EJALJLHMDHM_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  
  pLVar1 = (__this->fields).FNOJIPMNDPJ;
  if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).FNGNIKNIEMM;
    if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string OKKDNIDNKMB()  [RVA 0x30FD7FC]
// EJALJLHMDHM$$OKKDNIDNKMB @ RVA 0x30FD7FC

System_String_o * EJALJLHMDHM__OKKDNIDNKMB(EJALJLHMDHM_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public bool PBGAFPHPJCP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x30FD804]
// EJALJLHMDHM$$PBGAFPHPJCP @ RVA 0x30FD804

bool EJALJLHMDHM__PBGAFPHPJCP(EJALJLHMDHM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int32_t ACCIHBHMFPN;
  bool bVar1;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  
  if ((DAT_045664a3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045664a3 = 1;
  }
  IKKAMAMLIKA = EJALJLHMDHM__DHKCDPPAFFC(__this,AAJBIMFNMBB,method);
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    ACCIHBHMFPN = (__this->fields).ONHENDPPLDI;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = NLPJLHOEAOE__PBGAFPHPJCP(IKKAMAMLIKA,ACCIHBHMFPN,1,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== private void JCLPLBEJHGM(CFEFALDOEMD JNIBOOMFCEG)  [RVA 0x30FD88C]
// EJALJLHMDHM$$JCLPLBEJHGM @ RVA 0x30FD88C

void EJALJLHMDHM__JCLPLBEJHGM(EJALJLHMDHM_o *__this,CFEFALDOEMD_o *JNIBOOMFCEG,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  
  __this_00 = (__this->fields).FNOJIPMNDPJ;
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IHKHIJONLCM(BKLDKOMCOPN OPAEPDIIOEB)  [RVA 0x30FD8B0]
// EJALJLHMDHM$$IHKHIJONLCM @ RVA 0x30FD8B0

void EJALJLHMDHM__IHKHIJONLCM(EJALJLHMDHM_o *__this,BKLDKOMCOPN_o *OPAEPDIIOEB,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  
  __this_00 = (__this->fields).FNGNIKNIEMM;
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDJAJHFFPKP()  [RVA 0x30FD8D4]
// EJALJLHMDHM$$NDJAJHFFPKP @ RVA 0x30FD8D4

void EJALJLHMDHM__NDJAJHFFPKP(EJALJLHMDHM_o *__this,MethodInfo *method)

{
  System_Action_CFEFALDOEMD__o *CJNHFNHJHPE;
  System_Action_BKLDKOMCOPN__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  DGGBFKNKEAH_o *pDVar1;
  
  if ((DAT_045664a4 & 1) == 0) {
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&Method_EJALJLHMDHM_IHKHIJONLCM__);
    FUN_01bab630(&Method_EJALJLHMDHM_JCLPLBEJHGM__);
    DAT_045664a4 = 1;
    method = extraout_x1;
  }
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo,method);
    DAT_045655e8 = '\x01';
  }
  pDVar1 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  CJNHFNHJHPE = (System_Action_CFEFALDOEMD__o *)
                thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
  System_Action<object>___ctor();
  if (pDVar1 != (DGGBFKNKEAH_o *)0x0) {
    DGGBFKNKEAH__MJJEHFDLAHD(pDVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar1 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    CJNHFNHJHPE_00 =
         (System_Action_BKLDKOMCOPN__o *)thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo);
    System_Action<object>___ctor();
    if (pDVar1 != (DGGBFKNKEAH_o *)0x0) {
      DGGBFKNKEAH__AHKPBJGPOMH(pDVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30FDA28]
// EJALJLHMDHM$$.ctor @ RVA 0x30FDA28

void EJALJLHMDHM___ctor(EJALJLHMDHM_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  LCKCDEKNLOA_o **ppLVar2;
  
  if ((DAT_045664a5 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045664a5 = 1;
  }
  (__this->fields).DEKCPPOJFEH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).IJONCLJPNDO = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).FNOJIPMNDPJ;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).FNGNIKNIEMM;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public HOOAAGABMBL DHKCDPPAFFC(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x30FD318]
// EJALJLHMDHM$$DHKCDPPAFFC @ RVA 0x30FD318

HOOAAGABMBL_o *
EJALJLHMDHM__DHKCDPPAFFC(EJALJLHMDHM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Item_o *pDVar3;
  HOOAAGABMBL_o *pHVar4;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_String_o *OOGPLJBADCD;
  
  if ((DAT_045664a6 & 1) == 0) {
    FUN_01bab630(&Method_EJALJLHMDHM_DFFMDOOEIFL_GBDACKMAHHN__);
    FUN_01bab630(&EJALJLHMDHM_DFFMDOOEIFL_TypeInfo);
                    /* try { // try from 031fd368 to 032fd36f has its CatchHandler @ 031fd390 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
                    /* try { // try from 031fd370 to 032fd373 has its CatchHandler @ 031fd054 */
                    /* try { // try from 031fd374 to 032fd377 has its CatchHandler @ 031fd380 */
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
                    /* try { // try from 031fd378 to 032fd39f has its CatchHandler @ 031fd054 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031fd374 with catch @ 031fd380
                        */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031fd21c with catch @ 031fd384
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031fd1c0 with catch @ 031fd388
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031fd278 with catch @ 031fd38c
                        */
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031fd368 with catch @ 031fd390
                        */
    DAT_045664a6 = 1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(EJALJLHMDHM_DFFMDOOEIFL_TypeInfo);
                    /* try { // try from 031fd3a0 to 032fd3a3 has its CatchHandler @ 031fd3b8 */
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  OOGPLJBADCD = (__this->fields).DEKCPPOJFEH;
                    /* catch() { ... } // from try @ 031fd3a0 with catch @ 031fd3b8 */
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031fd3c0 to 032fd427 has its CatchHandler @ 031fd43c */
  pIVar2 = (Il2CppClass *)MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,OOGPLJBADCD,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar1 + 1;
    pIVar1->klass = pIVar2;
    thunk_FUN_01c20e04(pIVar1,pIVar2);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
                    /* try { // try from 031fd428 to 032fd433 has its CatchHandler @ 031fd054 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031fd434 to 032fd43b has its CatchHandler @ 031fd43c */
    pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031fd3c0 with catch @ 031fd43c
                       catch(type#2 @ 00000000) { ... } // from try @ 031fd434 with catch @ 031fd43c
                        */
    if (pDVar3 != (Item_o *)0x0) {
      pHVar4 = Item__CKKIPBAIEMN(pDVar3,(System_String_o *)pIVar1->klass,(MethodInfo *)0x0);
      if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
        if ((__this->fields).ONHENDPPLDI == 3) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04563eaa == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04563eaa = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
          if (pDVar3 != (Item_o *)0x0) {
            __this_00 = (pDVar3->fields)._MOCBNLFMNAL_k__BackingField;
            match = (System_Predicate_T__o *)
                    thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
            System_Predicate<object>___ctor();
            if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
              pHVar4 = (HOOAAGABMBL_o *)
                       System_Collections_Generic_List<object>__Find
                                 ((System_Collections_Generic_List_object__o *)__this_00,match,
                                  Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
              return pHVar4;
            }
          }
          goto LAB_031fd514;
        }
        pHVar4 = (HOOAAGABMBL_o *)0x0;
      }
      return pHVar4;
    }
  }
LAB_031fd514:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

