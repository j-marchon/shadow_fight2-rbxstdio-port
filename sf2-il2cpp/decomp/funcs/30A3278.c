// IGFGDDANEPE$$GIENGNEGHPJ @ RVA 0x30A3278

void IGFGDDANEPE__GIENGNEGHPJ
               (IGFGDDANEPE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *KGLJICLJHEL
               ,bool FCPLINEFDIO,int32_t DFIBGGDJPLM,int32_t JLAFGLDIFOC,int64_t LBAAJNDIEMD,
               int32_t BHAFBPOOLDK,bool DJMBGIPJDNA,System_String_o *NMABNFMBFJF,bool AFDAKILJHBK,
               MethodInfo *method)

{
  System_Xml_XmlNode_o **ppSVar1;
  AMJMGFCCAKN_o **ppAVar2;
  HOOAAGABMBL_o **ppHVar3;
  DOPEEDABNEK_o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  long lVar5;
  System_Xml_XmlNode_o *pSVar6;
  MethodInfo *pMVar7;
  MethodInfo *method_00;
  HOOAAGABMBL_o **ppHVar8;
  
  method_00 = (MethodInfo *)(ulong)FCPLINEFDIO;
  pMVar7 = (MethodInfo *)KGLJICLJHEL;
  if ((DAT_04566167 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11107);
    FUN_01bab630(&StringLiteral_5703);
    DAT_04566167 = 1;
  }
  ppSVar1 = &(__this->fields).DMLGJFCNNJF;
  *ppSVar1 = AHDGNOJPPIB;
  thunk_FUN_01c20e04(ppSVar1,AHDGNOJPPIB);
  (__this->fields).MMNCAIGLMJB = DJMBGIPJDNA;
  ppHVar8 = &(__this->fields).PCBECBEFJOI;
  *ppHVar8 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar8,0);
  ppAVar2 = &(__this->fields).HJLEJIJKJKD;
  *ppAVar2 = (AMJMGFCCAKN_o *)0x0;
  thunk_FUN_01c20e04(ppAVar2,0);
  ppHVar3 = &(__this->fields).EGAAAFHLNOE;
  *ppHVar3 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar3,0);
  ppHVar3 = &(__this->fields).LFPOIAJDMBK;
  *ppHVar3 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar3,0);
  (__this->fields).GOJELHDHCDP = false;
  (__this->fields).DKNFBKANNGN = false;
  (__this->fields).IIPJCIFKCIH = false;
  IGFGDDANEPE__HCOCAAIGNNL(__this,KGLJICLJHEL,pMVar7);
  IGFGDDANEPE__OEMBIADDDEE(__this,FCPLINEFDIO,pMVar7);
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 != (DOPEEDABNEK_o *)0x0) {
    pMVar7 = (MethodInfo *)0x0;
    pHVar4 = DOPEEDABNEK__CKKIPBAIEMN(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
    (__this->fields).PCBECBEFJOI = pHVar4;
    thunk_FUN_01c20e04(ppHVar8,pHVar4);
    IGFGDDANEPE__PICGGLNNJFA(__this,DFIBGGDJPLM,pMVar7);
    IGFGDDANEPE__DJJHOOKLHHL(__this,JLAFGLDIFOC,pMVar7);
    IGFGDDANEPE__DOOKHLFKCAI(__this,LBAAJNDIEMD,pMVar7);
    IGFGDDANEPE__FDAILKOHIKF(__this,BHAFBPOOLDK,pMVar7);
    IGFGDDANEPE__CCOEOCPGJBG(__this,NMABNFMBFJF,pMVar7);
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      lVar5 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                        (AHDGNOJPPIB,StringLiteral_5703,
                         (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      if (lVar5 != 0) {
        pSVar6 = (System_Xml_XmlNode_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                           (AHDGNOJPPIB,StringLiteral_5703,
                            (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                    /* try { // try from 031a3478 to 032a3513 has its CatchHandler @ 031a3478
                       catch() { ... } // from try @ 031a3478 with catch @ 031a3478
                       catch() { ... } // from try @ 031a3544 with catch @ 031a3478
                       catch() { ... } // from try @ 031a356c with catch @ 031a3478
                       catch() { ... } // from try @ 031a3590 with catch @ 031a3478
                       catch() { ... } // from try @ 031a35c0 with catch @ 031a3478 */
        IGFGDDANEPE__LPLGJMMAKJG(__this,pSVar6,AFDAKILJHBK,method_00);
      }
      lVar5 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                        (AHDGNOJPPIB,StringLiteral_11107,
                         (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      if (lVar5 != 0) {
        pMVar7 = (AHDGNOJPPIB->klass->vtable)._51_get_Item.method;
        pSVar6 = (System_Xml_XmlNode_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                           (AHDGNOJPPIB,StringLiteral_11107);
        IGFGDDANEPE__LGJMNCPJOML(__this,pSVar6,pMVar7);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

