// TypeDefIndex 1228
// Namespace: 
// internal class ABHILFLLPOD : HJNEOLCKEMD
// Fields:
//   private string <MMNODECCMJK>k__BackingField; // 0x60
//   private ABHILFLLPOD.FLPFPJJEJAB <EONJAHEIIFM>k__BackingField; // 0x68
//   private NILLKLHKLHG <IAAHMHGDMKI>k__BackingField; // 0x70

// ===== protected void KACADBDLMLK(string CJNHFNHJHPE)  [RVA 0x313572C]
// ABHILFLLPOD$$KACADBDLMLK @ RVA 0x313572C

void ABHILFLLPOD__KACADBDLMLK(ABHILFLLPOD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MMNODECCMJK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void PJDGEEMPECB(NILLKLHKLHG CJNHFNHJHPE)  [RVA 0x3135734]
// ABHILFLLPOD$$PJDGEEMPECB @ RVA 0x3135734

void ABHILFLLPOD__PJDGEEMPECB(ABHILFLLPOD_o *__this,NILLKLHKLHG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IAAHMHGDMKI_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public ABHILFLLPOD.FLPFPJJEJAB CGHLGFEDDJK()  [RVA 0x313573C]
// ABHILFLLPOD$$CGHLGFEDDJK @ RVA 0x313573C

int32_t ABHILFLLPOD__CGHLGFEDDJK(ABHILFLLPOD_o *__this,MethodInfo *method)

{
  return (__this->fields)._EONJAHEIIFM_k__BackingField;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3135744]
// ABHILFLLPOD$$HNIHOIAMDPC @ RVA 0x3135744

void ABHILFLLPOD__HNIHOIAMDPC
               (ABHILFLLPOD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  ABHILFLLPOD_o *__this_00;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *JEIGFGPCGMM;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *FGLEGAOAEAO;
  NILLKLHKLHG_o *__this_01;
  MethodInfo *method_00;
  NILLKLHKLHG_o **ppNVar6;
  
  if ((DAT_045666fc & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_12330/*"StackCount"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045666fc = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0xc,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar5 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields)._MMNODECCMJK_k__BackingField = pSVar5;
      thunk_FUN_01c20e04();
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        __this_00 = (ABHILFLLPOD_o *)
                    GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        iVar2 = ABHILFLLPOD__GKKINGGIKFI(__this_00,(System_String_o *)__this_00,method_00);
        (__this->fields)._EONJAHEIIFM_k__BackingField = iVar2;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_12330/*"StackCount"*/,(MethodInfo *)0x0);
          pSVar5 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
          bVar1 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
          if (bVar1) {
            return;
          }
          JEIGFGPCGMM = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                        thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
          System_Action<object>___ctor();
          FGLEGAOAEAO = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                        thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
          System_Action<object>___ctor();
          __this_01 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
          NILLKLHKLHG___ctor(__this_01,pSVar5,JEIGFGPCGMM,FGLEGAOAEAO,(Il2CppObject *)__this,
                             (MethodInfo *)0x0);
          ppNVar6 = &(__this->fields)._IAAHMHGDMKI_k__BackingField;
          *ppNVar6 = __this_01;
          thunk_FUN_01c20e04(ppNVar6,__this_01);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void PDFDAJDIDCB(ABHILFLLPOD.FLPFPJJEJAB CJNHFNHJHPE)  [RVA 0x3135A14]
// ABHILFLLPOD$$PDFDAJDIDCB @ RVA 0x3135A14

void ABHILFLLPOD__PDFDAJDIDCB(ABHILFLLPOD_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._EONJAHEIIFM_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private ABHILFLLPOD.FLPFPJJEJAB GKKINGGIKFI(string HCBBECJJIKK)  [RVA 0x3135980]
// ABHILFLLPOD$$GKKINGGIKFI @ RVA 0x3135980

int32_t ABHILFLLPOD__GKKINGGIKFI
                  (ABHILFLLPOD_o *__this,System_String_o *HCBBECJJIKK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_045666fd & 1) == 0) {
    FUN_01bab630(&StringLiteral_12327/*"Stack"*/);
    __this = (ABHILFLLPOD_o *)FUN_01bab630(&StringLiteral_10572/*"Pulse"*/);
    DAT_045666fd = 1;
  }
  if (HCBBECJJIKK == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  bVar1 = System_String__Equals(HCBBECJJIKK,StringLiteral_10572/*"Pulse"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__Equals(HCBBECJJIKK,StringLiteral_12327/*"Stack"*/,(MethodInfo *)0x0);
    iVar2 = 2;
    if (!bVar1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


// ===== public void .ctor()  [RVA 0x3135A1C]
// ABHILFLLPOD$$.ctor @ RVA 0x3135A1C

void ABHILFLLPOD___ctor(ABHILFLLPOD_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string HKFFLJHPOLM()  [RVA 0x3135A24]
// ABHILFLLPOD$$HKFFLJHPOLM @ RVA 0x3135A24

System_String_o * ABHILFLLPOD__HKFFLJHPOLM(ABHILFLLPOD_o *__this,MethodInfo *method)

{
  return (__this->fields)._MMNODECCMJK_k__BackingField;
}


// ===== public NILLKLHKLHG OIJKILIBNBO()  [RVA 0x3135A2C]
// ABHILFLLPOD$$OIJKILIBNBO @ RVA 0x3135A2C

NILLKLHKLHG_o * ABHILFLLPOD__OIJKILIBNBO(ABHILFLLPOD_o *__this,MethodInfo *method)

{
  return (__this->fields)._IAAHMHGDMKI_k__BackingField;
}


// ===== public void .ctor(ABHILFLLPOD IBKIPBJJCPG)  [RVA 0x3135A34]
// ABHILFLLPOD$$.ctor @ RVA 0x3135A34

void ABHILFLLPOD___ctor(ABHILFLLPOD_o *__this,ABHILFLLPOD_o *IBKIPBJJCPG,MethodInfo *method)

{
  NILLKLHKLHG_o **ppNVar1;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (ABHILFLLPOD_o *)0x0) {
    (__this->fields)._MMNODECCMJK_k__BackingField =
         (IBKIPBJJCPG->fields)._MMNODECCMJK_k__BackingField;
    thunk_FUN_01c20e04();
    (__this->fields)._EONJAHEIIFM_k__BackingField =
         (IBKIPBJJCPG->fields)._EONJAHEIIFM_k__BackingField;
    ppNVar1 = &(__this->fields)._IAAHMHGDMKI_k__BackingField;
    *ppNVar1 = (IBKIPBJJCPG->fields)._IAAHMHGDMKI_k__BackingField;
    thunk_FUN_01c20e04(ppNVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

