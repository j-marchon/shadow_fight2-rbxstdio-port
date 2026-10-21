// TypeDefIndex 1157
// Namespace: 
// public class MAOOAPJNNEO : HJNEOLCKEMD
// Fields:
//   private string <DAGHAOOANKJ>k__BackingField; // 0x60
//   private NILLKLHKLHG <AJBLFMPFEIO>k__BackingField; // 0x68

// ===== public void .ctor()  [RVA 0x31029E4]
// MAOOAPJNNEO$$.ctor @ RVA 0x31029E4

void MAOOAPJNNEO___ctor(MAOOAPJNNEO_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string CPBMKLGAANE()  [RVA 0x31029EC]
// MAOOAPJNNEO$$CPBMKLGAANE @ RVA 0x31029EC

System_String_o * MAOOAPJNNEO__CPBMKLGAANE(MAOOAPJNNEO_o *__this,MethodInfo *method)

{
  return (__this->fields)._DAGHAOOANKJ_k__BackingField;
}


// ===== public void .ctor(MAOOAPJNNEO IBKIPBJJCPG)  [RVA 0x31029F4]
// MAOOAPJNNEO$$.ctor @ RVA 0x31029F4

void MAOOAPJNNEO___ctor(MAOOAPJNNEO_o *__this,MAOOAPJNNEO_o *IBKIPBJJCPG,MethodInfo *method)

{
  NILLKLHKLHG_o **ppNVar1;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (MAOOAPJNNEO_o *)0x0) {
    (__this->fields)._DAGHAOOANKJ_k__BackingField =
         (IBKIPBJJCPG->fields)._DAGHAOOANKJ_k__BackingField;
    thunk_FUN_01c20e04();
    ppNVar1 = &(__this->fields)._AJBLFMPFEIO_k__BackingField;
    *ppNVar1 = (IBKIPBJJCPG->fields)._AJBLFMPFEIO_k__BackingField;
    thunk_FUN_01c20e04(ppNVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3102A3C]
// MAOOAPJNNEO$$HNIHOIAMDPC @ RVA 0x3102A3C

void MAOOAPJNNEO__HNIHOIAMDPC
               (MAOOAPJNNEO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *JEIGFGPCGMM;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *FGLEGAOAEAO;
  NILLKLHKLHG_o *__this_00;
  NILLKLHKLHG_o **ppNVar5;
  
                    /* try { // try from 03202a40 to 03302a67 has its CatchHandler @ 03202dc8 */
  if ((DAT_045664d1 & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&StringLiteral_3602/*"BulletType"*/);
                    /* try { // try from 03202a9c to 03302ac7 has its CatchHandler @ 03202dc4 */
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045664d1 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,8,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03202b04 to 03302b0b has its CatchHandler @ 03202dc0 */
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_3602/*"BulletType"*/,(MethodInfo *)0x0);
                    /* try { // try from 03202b10 to 03302b17 has its CatchHandler @ 03202dbc */
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields)._DAGHAOOANKJ_k__BackingField = pSVar4;
                    /* try { // try from 03202b28 to 03302b2f has its CatchHandler @ 03202d80 */
      thunk_FUN_01c20e04();
                    /* try { // try from 03202b38 to 03302b3f has its CatchHandler @ 03202d8c */
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03202b50 to 03302b57 has its CatchHandler @ 03202d88 */
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 03202b6c to 03302b7b has its CatchHandler @ 03202da8 */
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
        if (bVar1) {
          return;
        }
                    /* try { // try from 03202b88 to 03302c17 has its CatchHandler @ 03202dac */
        JEIGFGPCGMM = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                      thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
        System_Action<object>___ctor();
        FGLEGAOAEAO = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                      thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
        System_Action<object>___ctor();
        __this_00 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
        NILLKLHKLHG___ctor(__this_00,pSVar4,JEIGFGPCGMM,FGLEGAOAEAO,(Il2CppObject *)__this,
                           (MethodInfo *)0x0);
        ppNVar5 = &(__this->fields)._AJBLFMPFEIO_k__BackingField;
        *ppNVar5 = __this_00;
        thunk_FUN_01c20e04(ppNVar5,__this_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public NILLKLHKLHG CNKOOLDMAGC()  [RVA 0x3102C28]
// MAOOAPJNNEO$$CNKOOLDMAGC @ RVA 0x3102C28

NILLKLHKLHG_o * MAOOAPJNNEO__CNKOOLDMAGC(MAOOAPJNNEO_o *__this,MethodInfo *method)

{
  return (__this->fields)._AJBLFMPFEIO_k__BackingField;
}


// ===== protected void IMMDLNAPKPJ(string CJNHFNHJHPE)  [RVA 0x3102C30]
// MAOOAPJNNEO$$IMMDLNAPKPJ @ RVA 0x3102C30

void MAOOAPJNNEO__IMMDLNAPKPJ(MAOOAPJNNEO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 03202c30 to 03302c43 has its CatchHandler @ 03202d84 */
  (__this->fields)._DAGHAOOANKJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void PKPLAKAMOPO(NILLKLHKLHG CJNHFNHJHPE)  [RVA 0x3102C38]
// MAOOAPJNNEO$$PKPLAKAMOPO @ RVA 0x3102C38

void MAOOAPJNNEO__PKPLAKAMOPO(MAOOAPJNNEO_o *__this,NILLKLHKLHG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._AJBLFMPFEIO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

