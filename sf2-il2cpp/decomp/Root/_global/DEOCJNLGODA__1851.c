// TypeDefIndex 1851
// Namespace: 
// public class DEOCJNLGODA : BOFEMGGNODC
// Fields:
//   private string ECOCLJPFDII; // 0x68

// ===== public override void HNIHOIAMDPC(XmlNode EGFFDFGGHGJ)  [RVA 0x32476EC]
// DEOCJNLGODA$$HNIHOIAMDPC @ RVA 0x32476EC

void DEOCJNLGODA__HNIHOIAMDPC
               (DEOCJNLGODA_o *__this,System_Xml_XmlNode_o *EGFFDFGGHGJ,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045670cd & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045670cd = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,EGFFDFGGHGJ,(MethodInfo *)0x0);
  if (EGFFDFGGHGJ != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(EGFFDFGGHGJ->klass->vtable)._16_get_Attributes.methodPtr)
                          (EGFFDFGGHGJ,(EGFFDFGGHGJ->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).ECOCLJPFDII;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x3247798]
// DEOCJNLGODA$$MAHFCKJGBPP @ RVA 0x3247798

void DEOCJNLGODA__MAHFCKJGBPP(DEOCJNLGODA_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  PKHMIGFEJCL_o **ppPVar1;
  DEKKGJNMFEB_o *__this_02;
  GGLKHCAIGDI_o *pGVar2;
  
  if ((DAT_045670ce & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    DAT_045670ce = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar1 = &(__this_01->fields).AAJBIMFNMBB;
    *ppPVar1 = MNBMHEAHIIA;
    thunk_FUN_01c20e04(ppPVar1,MNBMHEAHIIA);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,(__this->fields).ECOCLJPFDII,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_02 != (DEKKGJNMFEB_o *)0x0) {
      pGVar2 = DEKKGJNMFEB__LDGJEEGACHJ(__this_02,(__this->fields).ECOCLJPFDII,(MethodInfo *)0x0);
      if (pGVar2 != (GGLKHCAIGDI_o *)0x0) {
        (pGVar2->fields)._PDDCGLMFLJL_k__BackingField = true;
      }
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32478B4]
// DEOCJNLGODA$$.ctor @ RVA 0x32478B4

void DEOCJNLGODA___ctor(DEOCJNLGODA_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

