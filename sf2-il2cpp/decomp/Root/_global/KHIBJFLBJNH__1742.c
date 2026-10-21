// TypeDefIndex 1742
// Namespace: 
// public class KHIBJFLBJNH : BOFEMGGNODC
// Fields:
//   private string KBMOPEKFNNN; // 0x68
//   private LCKCDEKNLOA PGLINMCHKGC; // 0x70
//   private LCKCDEKNLOA EBAHJECPAHA; // 0x78

// ===== private void FLEFGBHOBHP(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x31DC810]
// KHIBJFLBJNH$$FLEFGBHOBHP @ RVA 0x31DC810

void KHIBJFLBJNH__FLEFGBHOBHP(KHIBJFLBJNH_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  EEGDOGKBLNG_o *__this_00;
  MAEAAOFOANA_o *__this_01;
  ADJEBFOPFFF_o *__this_02;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar3;
  UnityEngine_Events_UnityAction_o *call;
  CPNHNIKFGFB_o *__this_03;
  System_Action_object__o *CPECAEHDDDB;
  MethodInfo *method_00;
  LabelButton_o *pLVar4;
  int32_t CEOLOKFCKIG;
  UnityEngine_Events_UnityEvent_o *__this_04;
  Il2CppClass *LLJHKLPGMGC;
  
  if ((DAT_04566d1e & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<BKMLILFFPIH>__);
    FUN_01bab630(&Method_KHIBJFLBJNH_DPHMBNEFAAI__);
    FUN_01bab630(&Method_KHIBJFLBJNH_NLMLNPPIMCJ__);
    FUN_01bab630(&MAEAAOFOANA_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566d1e = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    __this_03 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    CEOLOKFCKIG = 0x29c4;
  }
  else {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<BKMLILFFPIH>__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        LLJHKLPGMGC = pIVar2[2].klass;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
          EEGDOGKBLNG__JOMFHMDCMNG(__this_00,(KAMBBJFPLGM_o *)LLJHKLPGMGC,(MethodInfo *)0x0);
          __this_01 = (MAEAAOFOANA_o *)thunk_FUN_01bda818(MAEAAOFOANA_TypeInfo);
          MAEAAOFOANA___ctor(__this_01,(MethodInfo *)0x0);
          if (__this_01 != (MAEAAOFOANA_o *)0x0) {
            (__this_01->fields).EBBNAOLNKGD = pIVar2[1].monitor;
            thunk_FUN_01c20e04();
            __this_02 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
            if (__this_02 != (ADJEBFOPFFF_o *)0x0) {
              ADJEBFOPFFF__AEADCLCKCEL(__this_02,pIVar2[1].monitor,false,(MethodInfo *)0x0);
              pNVar3 = JJPNLEPEAFM__EFLNJLIDLEF(__this_01,(MethodInfo *)0x0);
              if ((pNVar3 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) &&
                 (pLVar4 = (pNVar3->fields)._btnOK, pLVar4 != (LabelButton_o *)0x0)) {
                __this_04 = (UnityEngine_Events_UnityEvent_o *)
                            (pLVar4->fields).super.super.super.m_OnClick;
                call = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (__this_04 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(__this_04,call,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto LAB_032dca38;
    }
    if ((IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField == 1) {
      KHIBJFLBJNH__OMIAMBPBEGA(__this,method_00);
      return;
    }
    __this_03 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    CEOLOKFCKIG = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
  }
  CPECAEHDDDB = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_03 != (CPNHNIKFGFB_o *)0x0) {
    CPNHNIKFGFB__DIGPCFKCCBK(__this_03,CEOLOKFCKIG,CPECAEHDDDB,(MethodInfo *)0x0);
    return;
  }
LAB_032dca38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDJAJHFFPKP()  [RVA 0x31DCA5C]
// KHIBJFLBJNH$$NDJAJHFFPKP @ RVA 0x31DCA5C

void KHIBJFLBJNH__NDJAJHFFPKP(KHIBJFLBJNH_o *__this,MethodInfo *method)

{
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void PKIFMKGDJJN()  [RVA 0x31DCA64]
// KHIBJFLBJNH$$PKIFMKGDJJN @ RVA 0x31DCA64

void KHIBJFLBJNH__PKIFMKGDJJN(KHIBJFLBJNH_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  MethodInfo *method_00;
  
  pLVar1 = (__this->fields).PGLINMCHKGC;
  if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,method);
    pLVar1 = (__this->fields).EBAHJECPAHA;
    if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(pLVar1,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x31DCA8C]
// KHIBJFLBJNH$$HNIHOIAMDPC @ RVA 0x31DCA8C

void KHIBJFLBJNH__HNIHOIAMDPC
               (KHIBJFLBJNH_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *NPLGCIFGFOK_00;
  System_Xml_XmlNode_o *NPLGCIFGFOK_01;
  System_Action_o *pSVar2;
  LCKCDEKNLOA_o *pLVar3;
  
  if ((DAT_04566d1f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KHIBJFLBJNH_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_12524/*"Success"*/);
    FUN_01bab630(&StringLiteral_5840/*"Error"*/);
    DAT_04566d1f = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).KBMOPEKFNNN = pSVar1;
      thunk_FUN_01c20e04();
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
      pLVar3 = (__this->fields).PGLINMCHKGC;
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      BOFEMGGNODC__KIBBEDPGMBB
                ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_00,pLVar3,pSVar2,(MethodInfo *)0x0);
      pLVar3 = (__this->fields).EBAHJECPAHA;
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      BOFEMGGNODC__KIBBEDPGMBB
                ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_01,pLVar3,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NLMLNPPIMCJ()  [RVA 0x31DCC30]
// KHIBJFLBJNH$$NLMLNPPIMCJ @ RVA 0x31DCC30

void KHIBJFLBJNH__NLMLNPPIMCJ(KHIBJFLBJNH_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  LCKCDEKNLOA_o *__this_00;
  
  __this_00 = (__this->fields).PGLINMCHKGC;
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x31DCC50]
// KHIBJFLBJNH$$OFPHPMGMCAL @ RVA 0x31DCC50

System_String_o * KHIBJFLBJNH__OFPHPMGMCAL(KHIBJFLBJNH_o *__this,MethodInfo *method)

{
  return (__this->fields).KBMOPEKFNNN;
}


// ===== private void DPHMBNEFAAI(object HBHPFKJMGCK)  [RVA 0x31DCC58]
// KHIBJFLBJNH$$DPHMBNEFAAI @ RVA 0x31DCC58

void KHIBJFLBJNH__DPHMBNEFAAI(KHIBJFLBJNH_o *__this,Il2CppObject *HBHPFKJMGCK,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  
  __this_00 = (__this->fields).EBAHJECPAHA;
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x31DCC5C]
// KHIBJFLBJNH$$MAHFCKJGBPP @ RVA 0x31DCC5C

void KHIBJFLBJNH__MAHFCKJGBPP(KHIBJFLBJNH_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int32_t iVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  PKHMIGFEJCL_o **ppPVar2;
  MethodInfo *method_00;
  KKLJIDJBFEI_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  Il2CppObject *pIVar3;
  
  if ((DAT_04566d20 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_KHIBJFLBJNH_FLEFGBHOBHP__);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_StringValue_TypeInfo);
    FUN_01bab630(&StringLiteral_20462/*"receive_gift"*/);
    DAT_04566d20 = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar2 = &(__this_01->fields).AAJBIMFNMBB;
    *ppPVar2 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar2,AAJBIMFNMBB);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,(__this->fields).KBMOPEKFNNN,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)
                thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_StringValue_TypeInfo);
    Google_Protobuf_WellKnownTypes_StringValue___ctor
              ((Google_Protobuf_WellKnownTypes_StringValue_o *)method_00,(MethodInfo *)0x0);
    if ((__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) && (method_00 != (MethodInfo *)0x0)) {
      Google_Protobuf_WellKnownTypes_StringValue__set_Value
                ((Google_Protobuf_WellKnownTypes_StringValue_o *)method_00,
                 (__this_00->fields).DFJBJLBLBGB,(MethodInfo *)0x0);
      __this_02 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>
                         (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      if ((pIVar3 != (Il2CppObject *)0x0) && (__this_02 != (KKLJIDJBFEI_o *)0x0)) {
        iVar1 = KDPDBGNOFEN__KLNMLOOCAAO
                          ((KDPDBGNOFEN_o *)__this_02,StringLiteral_20462/*"receive_gift"*/,
                           (Google_Protobuf_IMessage_o *)method_00,BLMFLPJJMPF,
                           (float)*(int *)&pIVar3[4].monitor,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (-1 < iVar1) {
          return;
        }
        KHIBJFLBJNH__FLEFGBHOBHP(__this,(KEFHDOHHHML_o *)0x0,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31DCE74]
// KHIBJFLBJNH$$.ctor @ RVA 0x31DCE74

void KHIBJFLBJNH___ctor(KHIBJFLBJNH_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  LCKCDEKNLOA_o **ppLVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_04566d21 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    DAT_04566d21 = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  pLVar1 = auVar3._0_8_;
  LCKCDEKNLOA___ctor(pLVar1,auVar3._8_8_);
  ppLVar2 = &(__this->fields).PGLINMCHKGC;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  auVar3 = thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  pLVar1 = auVar3._0_8_;
  LCKCDEKNLOA___ctor(pLVar1,auVar3._8_8_);
  ppLVar2 = &(__this->fields).EBAHJECPAHA;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OMIAMBPBEGA()  [RVA 0x31DCA3C]
// KHIBJFLBJNH$$OMIAMBPBEGA @ RVA 0x31DCA3C

void KHIBJFLBJNH__OMIAMBPBEGA(KHIBJFLBJNH_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  LCKCDEKNLOA_o *__this_00;
  
  __this_00 = (__this->fields).EBAHJECPAHA;
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

