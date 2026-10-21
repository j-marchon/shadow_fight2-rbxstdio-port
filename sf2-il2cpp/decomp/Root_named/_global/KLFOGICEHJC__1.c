// TypeDefIndex 1
// Namespace: 
// public class KLFOGICEHJC : QuestAction
// Fields:
//   private readonly LCKCDEKNLOA KFJLNJDDGDO; // 0x68
//   private readonly LCKCDEKNLOA MJMJIDBBMON; // 0x70

// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x2FED3FC]
// KLFOGICEHJC$$HNIHOIAMDPC @ RVA 0x2FED3FC

void KLFOGICEHJC__HNIHOIAMDPC
               (KLFOGICEHJC_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Action_o *pSVar2;
  LCKCDEKNLOA_o *pLVar3;
  
  if ((DAT_04565a3f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KLFOGICEHJC_NKGIJKODGAN__);
    FUN_01bab630(&StringLiteral_12524/*"Success"*/);
    FUN_01bab630(&StringLiteral_5840/*"Error"*/);
    DAT_04565a3f = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                       (NPLGCIFGFOK,StringLiteral_12524/*"Success"*/,
                        (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
    pLVar3 = (__this->fields).KFJLNJDDGDO;
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    QuestAction__KIBBEDPGMBB((QuestAction_o *)__this,pSVar1,pLVar3,pSVar2,(MethodInfo *)0x0);
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                       (NPLGCIFGFOK,StringLiteral_5840/*"Error"*/,
                        (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
    pLVar3 = (__this->fields).MJMJIDBBMON;
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    QuestAction__KIBBEDPGMBB((QuestAction_o *)__this,pSVar1,pLVar3,pSVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ADOHFIPPDMD()  [RVA 0x2FED558]
// KLFOGICEHJC$$ADOHFIPPDMD @ RVA 0x2FED558

void KLFOGICEHJC__ADOHFIPPDMD(KLFOGICEHJC_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  
  __this_00 = (__this->fields).KFJLNJDDGDO;
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BLGOKAKEBAP()  [RVA 0x2FED57C]
// KLFOGICEHJC$$BLGOKAKEBAP @ RVA 0x2FED57C

void KLFOGICEHJC__BLGOKAKEBAP(KLFOGICEHJC_o *__this,MethodInfo *method)

{
  SFRequestSender_o *pKVar1;
  System_Action_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a40 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KLFOGICEHJC_ADOHFIPPDMD__);
    FUN_01bab630(&Method_KLFOGICEHJC_LJDAMLAADCG__);
    DAT_04565a40 = 1;
    method = extraout_x1;
  }
  KLFOGICEHJC__KNCDEHOMJKB(__this,method);
  pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pKVar1 != (SFRequestSender_o *)0x0) {
    SFRequestSender__KGJHOLAEPAI(pKVar1,pSVar2,(MethodInfo *)0x0);
    pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pKVar1 != (SFRequestSender_o *)0x0) {
      SFRequestSender__PJOBAFCNJAM(pKVar1,pSVar2,(MethodInfo *)0x0);
      pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pKVar1 != (SFRequestSender_o *)0x0) {
        SFRequestSender__HKAALOKPBPG(pKVar1,pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NKGIJKODGAN()  [RVA 0x2FED7E4]
// KLFOGICEHJC$$NKGIJKODGAN @ RVA 0x2FED7E4

void KLFOGICEHJC__NKGIJKODGAN(KLFOGICEHJC_o *__this,MethodInfo *method)

{
  KLFOGICEHJC__KNCDEHOMJKB(__this,method);
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void PKIFMKGDJJN()  [RVA 0x2FED800]
// KLFOGICEHJC$$PKIFMKGDJJN @ RVA 0x2FED800

void KLFOGICEHJC__PKIFMKGDJJN(KLFOGICEHJC_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  
  QuestAction__PKIFMKGDJJN((QuestAction_o *)__this,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).KFJLNJDDGDO;
  if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).MJMJIDBBMON;
    if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LJDAMLAADCG()  [RVA 0x2FED838]
// KLFOGICEHJC$$LJDAMLAADCG @ RVA 0x2FED838

void KLFOGICEHJC__LJDAMLAADCG(KLFOGICEHJC_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  
  __this_00 = (__this->fields).MJMJIDBBMON;
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x2FED85C]
// KLFOGICEHJC$$.ctor @ RVA 0x2FED85C

void KLFOGICEHJC___ctor(KLFOGICEHJC_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  LCKCDEKNLOA_o **ppLVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a41 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    DAT_04565a41 = 1;
    method = extraout_x1;
  }
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).KFJLNJDDGDO;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).MJMJIDBBMON;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void KNCDEHOMJKB()  [RVA 0x2FED6B4]
// KLFOGICEHJC$$KNCDEHOMJKB @ RVA 0x2FED6B4

void KLFOGICEHJC__KNCDEHOMJKB(KLFOGICEHJC_o *__this,MethodInfo *method)

{
  SFRequestSender_o *pKVar1;
  System_Action_o *pSVar2;
  
  if ((DAT_04565a42 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KLFOGICEHJC_ADOHFIPPDMD__);
    FUN_01bab630(&Method_KLFOGICEHJC_LJDAMLAADCG__);
    DAT_04565a42 = 1;
  }
  pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pKVar1 != (SFRequestSender_o *)0x0) {
    SFRequestSender__PILMCAFCLMN(pKVar1,pSVar2,(MethodInfo *)0x0);
    pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pKVar1 != (SFRequestSender_o *)0x0) {
      SFRequestSender__HGMNJNFOMDO(pKVar1,pSVar2,(MethodInfo *)0x0);
      pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pKVar1 != (SFRequestSender_o *)0x0) {
        SFRequestSender__JGNHEIICALL(pKVar1,pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x2FED8EC]
// KLFOGICEHJC$$MAHFCKJGBPP @ RVA 0x2FED8EC

void KLFOGICEHJC__MAHFCKJGBPP(KLFOGICEHJC_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  SFRequestSender_o *pKVar2;
  FKDLCJJOGIP_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  pKVar2 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  if (pKVar2 != (SFRequestSender_o *)0x0) {
    if ((pKVar2->fields).super._MGGBEPKMPCF_k__BackingField != false) {
      KLFOGICEHJC__ADOHFIPPDMD(__this,method_00);
      return;
    }
    bVar1 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0);
    if (!bVar1) {
      KLFOGICEHJC__KNCDEHOMJKB(__this,method_01);
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
      return;
    }
    KLFOGICEHJC__BLGOKAKEBAP(__this,method_01);
    __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
      FKDLCJJOGIP__LGBOGFICFPF(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

