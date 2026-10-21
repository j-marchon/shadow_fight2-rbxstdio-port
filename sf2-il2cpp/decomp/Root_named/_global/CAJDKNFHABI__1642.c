// TypeDefIndex 1642
// Namespace: 
// public class CAJDKNFHABI : HJNEOLCKEMD
// Fields:
//   private string <MMNODECCMJK>k__BackingField; // 0x60
//   private bool <DICCMNCLCGC>k__BackingField; // 0x68
//   private NILLKLHKLHG <AFNCBIALOOP>k__BackingField; // 0x70

// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x31BF59C]
// CAJDKNFHABI$$HNIHOIAMDPC @ RVA 0x31BF59C

void CAJDKNFHABI__HNIHOIAMDPC
               (CAJDKNFHABI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *JEIGFGPCGMM;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *FGLEGAOAEAO;
  NILLKLHKLHG_o *__this_00;
  NILLKLHKLHG_o **ppNVar5;
  
  if ((DAT_04566c0c & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_6584/*"Frames"*/);
    FUN_01bab630(&StringLiteral_8852/*"MarkUsed"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566c0c = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0xb,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields)._MMNODECCMJK_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_8852/*"MarkUsed"*/,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,true,(MethodInfo *)0x0);
        ppNVar5 = &(__this->fields)._AFNCBIALOOP_k__BackingField;
        *ppNVar5 = (NILLKLHKLHG_o *)0x0;
        (__this->fields)._DICCMNCLCGC_k__BackingField = bVar1;
        thunk_FUN_01c20e04(ppNVar5,0);
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_6584/*"Frames"*/,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
          if (bVar1) {
            return;
          }
          JEIGFGPCGMM = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                        thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
          System_Action<object>___ctor();
          FGLEGAOAEAO = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                        thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
          System_Action<object>___ctor();
          __this_00 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
          NILLKLHKLHG___ctor(__this_00,pSVar4,JEIGFGPCGMM,FGLEGAOAEAO,(Il2CppObject *)__this,
                             (MethodInfo *)0x0);
          (__this->fields)._AFNCBIALOOP_k__BackingField = __this_00;
          thunk_FUN_01c20e04(ppNVar5,__this_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void KACADBDLMLK(string CJNHFNHJHPE)  [RVA 0x31BF7F4]
// CAJDKNFHABI$$KACADBDLMLK @ RVA 0x31BF7F4

void CAJDKNFHABI__KACADBDLMLK(CAJDKNFHABI_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MMNODECCMJK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public NILLKLHKLHG JJFMPFCDKEN()  [RVA 0x31BF7FC]
// CAJDKNFHABI$$JJFMPFCDKEN @ RVA 0x31BF7FC

NILLKLHKLHG_o * CAJDKNFHABI__JJFMPFCDKEN(CAJDKNFHABI_o *__this,MethodInfo *method)

{
  return (__this->fields)._AFNCBIALOOP_k__BackingField;
}


// ===== public void .ctor(CAJDKNFHABI IBKIPBJJCPG)  [RVA 0x31BF804]
// CAJDKNFHABI$$.ctor @ RVA 0x31BF804

void CAJDKNFHABI___ctor(CAJDKNFHABI_o *__this,CAJDKNFHABI_o *IBKIPBJJCPG,MethodInfo *method)

{
  NILLKLHKLHG_o **ppNVar1;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (CAJDKNFHABI_o *)0x0) {
    (__this->fields)._MMNODECCMJK_k__BackingField =
         (IBKIPBJJCPG->fields)._MMNODECCMJK_k__BackingField;
    thunk_FUN_01c20e04();
    ppNVar1 = &(__this->fields)._AFNCBIALOOP_k__BackingField;
    *ppNVar1 = (IBKIPBJJCPG->fields)._AFNCBIALOOP_k__BackingField;
    thunk_FUN_01c20e04(ppNVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string HKFFLJHPOLM()  [RVA 0x31BF84C]
// CAJDKNFHABI$$HKFFLJHPOLM @ RVA 0x31BF84C

System_String_o * CAJDKNFHABI__HKFFLJHPOLM(CAJDKNFHABI_o *__this,MethodInfo *method)

{
  return (__this->fields)._MMNODECCMJK_k__BackingField;
}


// ===== public bool BBJECMMKMJA()  [RVA 0x31BF854]
// CAJDKNFHABI$$BBJECMMKMJA @ RVA 0x31BF854

bool CAJDKNFHABI__BBJECMMKMJA(CAJDKNFHABI_o *__this,MethodInfo *method)

{
  return (__this->fields)._DICCMNCLCGC_k__BackingField;
}


// ===== protected void PNHLMBFKKJP(bool CJNHFNHJHPE)  [RVA 0x31BF85C]
// CAJDKNFHABI$$PNHLMBFKKJP @ RVA 0x31BF85C

void CAJDKNFHABI__PNHLMBFKKJP(CAJDKNFHABI_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DICCMNCLCGC_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor()  [RVA 0x31BF868]
// CAJDKNFHABI$$.ctor @ RVA 0x31BF868

void CAJDKNFHABI___ctor(CAJDKNFHABI_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected void DCPOBDDJNBF(NILLKLHKLHG CJNHFNHJHPE)  [RVA 0x31BF870]
// CAJDKNFHABI$$DCPOBDDJNBF @ RVA 0x31BF870

void CAJDKNFHABI__DCPOBDDJNBF(CAJDKNFHABI_o *__this,NILLKLHKLHG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._AFNCBIALOOP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

