// TypeDefIndex 274
// Namespace: 
// public class OHPOPCKPNDL : MANCHAFDGGG
// Fields:

// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3232318]
// OHPOPCKPNDL$$HNIHOIAMDPC @ RVA 0x3232318

void OHPOPCKPNDL__HNIHOIAMDPC
               (OHPOPCKPNDL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *ANGBPBINHBL;
  Il2CppObject **ppIVar1;
  NILLKLHKLHG_o *pNVar2;
  
  if ((DAT_04566fe4 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4249/*"Chance"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566fe4 = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_4249/*"Chance"*/,(MethodInfo *)0x0);
      ANGBPBINHBL = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).super.MBEHOEALEMP;
      if (pNVar2 != (NILLKLHKLHG_o *)0x0) {
        NILLKLHKLHG__HNIHOIAMDPC(pNVar2,ANGBPBINHBL,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).super.MBEHOEALEMP;
        if (pNVar2 != (NILLKLHKLHG_o *)0x0) {
          ppIVar1 = &(pNVar2->fields).KAEBCKDNFHH;
          *ppIVar1 = (Il2CppObject *)__this;
          thunk_FUN_01c20e04(ppIVar1,__this);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(OLKKAIFGGAK BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x32323E0]
// OHPOPCKPNDL$$EPBENPDCBFE @ RVA 0x32323E0

bool OHPOPCKPNDL__EPBENPDCBFE
               (OHPOPCKPNDL_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  NILLKLHKLHG_o *__this_00;
  MMFIDKMDADC_o *__this_01;
  float fVar2;
  
  if ((DAT_04566fe5 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04566fe5 = 1;
  }
  MANCHAFDGGG__EPBENPDCBFE((MANCHAFDGGG_o *)__this,BCKBBGCOMJD,FPEHEJBLCAO,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.MBEHOEALEMP;
  if ((__this_00 != (NILLKLHKLHG_o *)0x0) &&
     (__this_01 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0),
     __this_01 != (MMFIDKMDADC_o *)0x0)) {
    fVar2 = MMFIDKMDADC__OFFODGKLGOP(__this_01,(MethodInfo *)0x0);
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = LIIFLGALGNK__BCKBIGCEBFL(fVar2 * 100.0,100.0,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3232494]
// OHPOPCKPNDL$$.ctor @ RVA 0x3232494

void OHPOPCKPNDL___ctor(OHPOPCKPNDL_o *__this,MethodInfo *method)

{
  MANCHAFDGGG___ctor((MANCHAFDGGG_o *)__this,(MethodInfo *)0x0);
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,1,(MethodInfo *)0x0);
  return;
}

