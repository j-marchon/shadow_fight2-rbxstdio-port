// TypeDefIndex 955
// Namespace: 
// public class FPEDBNDDLIM : QuestAction
// Fields:
//   private string MHDJAEILAJL; // 0x68
//   private string MNAGPACHBAI; // 0x70
//   private string FHCHDOILFGE; // 0x78
//   private string BOIAMEBDNHC; // 0x80
//   private string IHAENCOBJAM; // 0x88
//   private string OCHDIMEJMJO; // 0x90

// ===== public void .ctor()  [RVA 0x30ACD24]
// FPEDBNDDLIM$$.ctor @ RVA 0x30ACD24

void FPEDBNDDLIM___ctor(FPEDBNDDLIM_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x30ACD2C]
// FPEDBNDDLIM$$MAHFCKJGBPP @ RVA 0x30ACD2C

void FPEDBNDDLIM__MAHFCKJGBPP(FPEDBNDDLIM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  QuestCondition_o *__this_00;
  PKHMIGFEJCL_o **ppPVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  
  if ((DAT_045661b1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&QuestCondition_TypeInfo);
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_19209/*"item"*/);
    FUN_01bab630(&StringLiteral_20562/*"result"*/);
    FUN_01bab630(&StringLiteral_20187/*"percent"*/);
    FUN_01bab630(&StringLiteral_19738/*"money"*/);
    FUN_01bab630(&StringLiteral_21242/*"store"*/);
    FUN_01bab630(&StringLiteral_10661/*"QuestActionSendDiscountStats statistics - ported, need testing"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045661b1 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = (QuestCondition_o *)thunk_FUN_01bda818(QuestCondition_TypeInfo);
  QuestCondition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (QuestCondition_o *)0x0) {
    ppPVar1 = &(__this_00->fields).AAJBIMFNMBB;
    *ppPVar1 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar1,AAJBIMFNMBB);
    pEVar2 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar2,(MethodInfo *)0x0);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_00,(__this->fields).MHDJAEILAJL,pEVar2,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    pEVar2 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar2,(MethodInfo *)0x0);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_00,(__this->fields).MNAGPACHBAI,pEVar2,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    pEVar2 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar2,(MethodInfo *)0x0);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_00,(__this->fields).FHCHDOILFGE,pEVar2,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    pEVar2 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar2,(MethodInfo *)0x0);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_00,(__this->fields).BOIAMEBDNHC,pEVar2,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    pEVar2 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar2,(MethodInfo *)0x0);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_00,(__this->fields).IHAENCOBJAM,pEVar2,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    pEVar2 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar2,(MethodInfo *)0x0);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_00,(__this->fields).OCHDIMEJMJO,pEVar2,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_10661/*"QuestActionSendDiscountStats statistics - ported, need testing"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
    MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_01,StringLiteral_19209/*"item"*/,(Il2CppObject *)(__this->fields).MHDJAEILAJL,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_01,StringLiteral_20187/*"percent"*/,(Il2CppObject *)(__this->fields).BOIAMEBDNHC,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_01,StringLiteral_20562/*"result"*/,(Il2CppObject *)(__this->fields).MNAGPACHBAI,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_01,StringLiteral_21242/*"store"*/,(Il2CppObject *)(__this->fields).FHCHDOILFGE,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_01,StringLiteral_19738/*"money"*/,(Il2CppObject *)(__this->fields).IHAENCOBJAM,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
      NFNBHPOJFNJ__NOJIAJPLOKB(0xc,(MDNLIFLBFNO_o *)__this_01,false,(MethodInfo *)0x0);
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x30AD078]
// FPEDBNDDLIM$$HNIHOIAMDPC @ RVA 0x30AD078

void FPEDBNDDLIM__HNIHOIAMDPC
               (FPEDBNDDLIM_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_045661b2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3535/*"Bonus"*/);
    FUN_01bab630(&StringLiteral_5411/*"DiscountPercent"*/);
    FUN_01bab630(&StringLiteral_9186/*"Money"*/);
    FUN_01bab630(&StringLiteral_12423/*"Store"*/);
    FUN_01bab630(&StringLiteral_11345/*"Result"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    DAT_045661b2 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).MHDJAEILAJL = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_11345/*"Result"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this->fields).MNAGPACHBAI = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_12423/*"Store"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
          (__this->fields).FHCHDOILFGE = pSVar3;
          thunk_FUN_01c20e04();
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                             (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_5411/*"DiscountPercent"*/,(MethodInfo *)0x0);
            pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this->fields).BOIAMEBDNHC = pSVar3;
            thunk_FUN_01c20e04();
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                               (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_9186/*"Money"*/,(MethodInfo *)0x0);
              pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
              (__this->fields).IHAENCOBJAM = pSVar3;
              thunk_FUN_01c20e04();
              pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                       (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                                 (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar1,StringLiteral_3535/*"Bonus"*/,(MethodInfo *)0x0);
                pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
                ppSVar4 = &(__this->fields).OCHDIMEJMJO;
                *ppSVar4 = pSVar3;
                thunk_FUN_01c20e04(ppSVar4,pSVar3);
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

