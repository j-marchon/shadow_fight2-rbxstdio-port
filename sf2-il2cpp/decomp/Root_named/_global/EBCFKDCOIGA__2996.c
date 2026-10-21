// TypeDefIndex 2996
// Namespace: 
// public class EBCFKDCOIGA
// Fields:
//   private bool KLKKKGCPGNE; // 0x10
//   private DistancePointFollow DLCDMDDNFCP; // 0x18
//   private DistancePointFollow IPPMJFKOBLF; // 0x20
//   private PKHLGDMJPMF MLAJEAKHLBF; // 0x28
//   private PKHLGDMJPMF GAEHOPKMEKJ; // 0x30

// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x34A5A84]
// EBCFKDCOIGA$$HNIHOIAMDPC @ RVA 0x34A5A84

void EBCFKDCOIGA__HNIHOIAMDPC
               (EBCFKDCOIGA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  PKHLGDMJPMF_o *__this_00;
  undefined8 uVar3;
  DistancePointFollow_o *pEVar4;
  PKHLGDMJPMF_o **ppPVar5;
  float IKADKIPIIMD;
  float OKMABLDHNLJ;
  
                    /* catch() { ... } // from try @ 035a5a6c with catch @ 035a5a84 */
                    /* catch() { ... } // from try @ 035a5a10 with catch @ 035a5a88 */
                    /* catch() { ... } // from try @ 035a5974 with catch @ 035a5a8c */
                    /* catch() { ... } // from try @ 035a5a68 with catch @ 035a5a90 */
                    /* catch() { ... } // from try @ 035a59b0 with catch @ 035a5a94 */
                    /* catch() { ... } // from try @ 035a5990 with catch @ 035a5a98 */
                    /* catch() { ... } // from try @ 035a5a64 with catch @ 035a5a9c */
                    /* catch() { ... } // from try @ 035a5a60 with catch @ 035a5aa0 */
                    /* catch() { ... } // from try @ 035a5958 with catch @ 035a5aa4 */
  if ((DAT_045684ea & 1) == 0) {
    FUN_01bab630(&PKHLGDMJPMF_TypeInfo);
                    /* try { // try from 035a5abc to 036a5abf has its CatchHandler @ 035a5ae0 */
    FUN_01bab630(&StringLiteral_7516/*"InitDirX"*/);
                    /* try { // try from 035a5ac0 to 036a5ae7 has its CatchHandler @ 035a585c */
    FUN_01bab630(&StringLiteral_7517/*"InitDirY"*/);
    FUN_01bab630(&StringLiteral_13833/*"To"*/);
                    /* catch() { ... } // from try @ 035a5abc with catch @ 035a5ae0 */
    FUN_01bab630(&StringLiteral_6609/*"From"*/);
                    /* try { // try from 035a5ae8 to 036a5aef has its CatchHandler @ 035a5b04 */
    DAT_045684ea = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 035a5af0 to 036a5afb has its CatchHandler @ 035a585c */
                    /* try { // try from 035a5afc to 036a5b03 has its CatchHandler @ 035a5b04 */
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 035a5ae8 with catch @ 035a5b04
                       catch() { ... } // from try @ 035a5afc with catch @ 035a5b04 */
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 035a5b08 to 036a5c0f has its CatchHandler @ 035a5b08
                       catch() { ... } // from try @ 035a5b08 with catch @ 035a5b08
                       catch() { ... } // from try @ 035a5c50 with catch @ 035a5b08
                       catch() { ... } // from try @ 035a5c84 with catch @ 035a5b08
                       catch() { ... } // from try @ 035a5cb4 with catch @ 035a5b08
                       catch() { ... } // from try @ 035a5ce4 with catch @ 035a5b08 */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_7516/*"InitDirX"*/,(MethodInfo *)0x0);
      IKADKIPIIMD = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_7517/*"InitDirY"*/,(MethodInfo *)0x0);
        OKMABLDHNLJ = EIABCPKDEBD__GICIEKCGOHA(pSVar2,1.0,(MethodInfo *)0x0);
        __this_00 = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo);
        PKHLGDMJPMF___ctor(__this_00,IKADKIPIIMD,OKMABLDHNLJ,(MethodInfo *)0x0);
        ppPVar5 = &(__this->fields).GAEHOPKMEKJ;
        *ppPVar5 = __this_00;
        thunk_FUN_01c20e04(ppPVar5,__this_00);
        pEVar4 = (__this->fields).DLCDMDDNFCP;
        uVar3 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                          (AHDGNOJPPIB,StringLiteral_6609/*"From"*/,
                           (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        if (pEVar4 != (DistancePointFollow_o *)0x0) {
          (*(pEVar4->klass->vtable)._4_EOHMFJFFFIN.methodPtr)
                    (pEVar4,uVar3,(pEVar4->klass->vtable)._4_EOHMFJFFFIN.method);
          pEVar4 = (__this->fields).IPPMJFKOBLF;
          uVar3 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_13833/*"To"*/,
                             (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
          if (pEVar4 != (DistancePointFollow_o *)0x0) {
                    /* try { // try from 035a5c10 to 036a5c17 has its CatchHandler @ 035a5c98 */
            (*(pEVar4->klass->vtable)._4_EOHMFJFFFIN.methodPtr)
                      (pEVar4,uVar3,(pEVar4->klass->vtable)._4_EOHMFJFFFIN.method);
            (__this->fields).KLKKKGCPGNE = true;
                    /* try { // try from 035a5c24 to 036a5c37 has its CatchHandler @ 035a5c94 */
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34A5C38]
// EBCFKDCOIGA$$.ctor @ RVA 0x34A5C38

void EBCFKDCOIGA___ctor(EBCFKDCOIGA_o *__this,MethodInfo *method)

{
  DistancePointFollow_o *pEVar1;
  DistancePointFollow_o **ppEVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 035a5c48 to 036a5c4f has its CatchHandler @ 035a5c8c */
                    /* try { // try from 035a5c50 to 036a5c7b has its CatchHandler @ 035a5b08 */
  if ((DAT_045684eb & 1) == 0) {
    FUN_01bab630(&DistancePointFollow_TypeInfo);
    DAT_045684eb = 1;
    method = extraout_x1;
  }
  pEVar1 = (DistancePointFollow_o *)thunk_FUN_01bda818(DistancePointFollow_TypeInfo,method);
                    /* try { // try from 035a5c7c to 036a5c7f has its CatchHandler @ 035a5c90 */
  DistancePointFollow___ctor(pEVar1,(MethodInfo *)0x0);
  ppEVar2 = &(__this->fields).DLCDMDDNFCP;
                    /* try { // try from 035a5c80 to 036a5c83 has its CatchHandler @ 035a5c88 */
                    /* try { // try from 035a5c84 to 036a5caf has its CatchHandler @ 035a5b08 */
  *ppEVar2 = pEVar1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5c80 with catch @ 035a5c88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5c48 with catch @ 035a5c8c
                        */
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5c7c with catch @ 035a5c90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5c24 with catch @ 035a5c94
                        */
  pEVar1 = (DistancePointFollow_o *)thunk_FUN_01bda818(DistancePointFollow_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5c10 with catch @ 035a5c98
                        */
  DistancePointFollow___ctor(pEVar1,(MethodInfo *)0x0);
  ppEVar2 = &(__this->fields).IPPMJFKOBLF;
  *ppEVar2 = pEVar1;
                    /* try { // try from 035a5cb0 to 036a5cb3 has its CatchHandler @ 035a5cd4 */
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
                    /* try { // try from 035a5cb4 to 036a5cdb has its CatchHandler @ 035a5b08 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).KLKKKGCPGNE = false;
  return;
}


// ===== public PKHLGDMJPMF PFLKPLFOLHI()  [RVA 0x34A5CD0]
// EBCFKDCOIGA$$PFLKPLFOLHI @ RVA 0x34A5CD0

PKHLGDMJPMF_o * EBCFKDCOIGA__PFLKPLFOLHI(EBCFKDCOIGA_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 035a5cb0 with catch @ 035a5cd4 */
  return (__this->fields).GAEHOPKMEKJ;
}


// ===== public void GEMPFIAHOJB()  [RVA 0x34A5CD8]
// EBCFKDCOIGA$$GEMPFIAHOJB @ RVA 0x34A5CD8

void EBCFKDCOIGA__GEMPFIAHOJB(EBCFKDCOIGA_o *__this,MethodInfo *method)

{
  DistancePointFollow_o *pEVar1;
  
                    /* try { // try from 035a5cdc to 036a5ce3 has its CatchHandler @ 035a5cf8 */
  pEVar1 = (__this->fields).DLCDMDDNFCP;
                    /* try { // try from 035a5ce4 to 036a5cef has its CatchHandler @ 035a5b08 */
  if (pEVar1 != (DistancePointFollow_o *)0x0) {
    DistancePoint__NODBBDLAIHD((DistancePoint_o *)pEVar1,(MethodInfo *)0x0);
                    /* try { // try from 035a5cf0 to 036a5cf7 has its CatchHandler @ 035a5cf8 */
    pEVar1 = (__this->fields).IPPMJFKOBLF;
    if (pEVar1 != (DistancePointFollow_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a5cdc with catch @ 035a5cf8
                       catch(type#2 @ 00000000) { ... } // from try @ 035a5cf0 with catch @ 035a5cf8
                        */
      DistancePoint__NODBBDLAIHD((DistancePoint_o *)pEVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PKHLGDMJPMF APMIAJFIMCG(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x34A5D08]
// EBCFKDCOIGA$$APMIAJFIMCG @ RVA 0x34A5D08

PKHLGDMJPMF_o *
EBCFKDCOIGA__APMIAJFIMCG(EBCFKDCOIGA_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  DistancePointFollow_o *pEVar1;
  PKHLGDMJPMF_o *__this_00;
  PKHLGDMJPMF_o **ppPVar2;
  float fVar3;
  float fVar4;
  float in_s1;
  float fVar5;
  
  if ((DAT_045684ec & 1) == 0) {
    FUN_01bab630(&PKHLGDMJPMF_TypeInfo);
    DAT_045684ec = 1;
  }
  if ((__this->fields).KLKKKGCPGNE != false) {
    pEVar1 = (__this->fields).DLCDMDDNFCP;
    if (pEVar1 != (DistancePointFollow_o *)0x0) {
      fVar3 = (float)(*(pEVar1->klass->vtable)._7_KILOIOEILFL.methodPtr)
                               (pEVar1,AHEFOIOKDOK,(pEVar1->klass->vtable)._7_KILOIOEILFL.method);
      pEVar1 = (__this->fields).IPPMJFKOBLF;
      if (pEVar1 != (DistancePointFollow_o *)0x0) {
        fVar5 = in_s1;
        fVar4 = (float)(*(pEVar1->klass->vtable)._7_KILOIOEILFL.methodPtr)
                                 (pEVar1,AHEFOIOKDOK,(pEVar1->klass->vtable)._7_KILOIOEILFL.method);
        __this_00 = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo);
        fVar4 = fVar4 - fVar3;
        fVar5 = fVar5 - in_s1;
        goto LAB_035a5dbc;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo);
  fVar4 = 0.0;
  fVar5 = 0.0;
LAB_035a5dbc:
  PKHLGDMJPMF___ctor(__this_00,fVar4,fVar5,(MethodInfo *)0x0);
  ppPVar2 = &(__this->fields).MLAJEAKHLBF;
  *ppPVar2 = __this_00;
  thunk_FUN_01c20e04(ppPVar2,__this_00);
  return *ppPVar2;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x34A5DF0]
// EBCFKDCOIGA$$.ctor @ RVA 0x34A5DF0

void EBCFKDCOIGA___ctor(EBCFKDCOIGA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  DistancePointFollow_o *pEVar1;
  DistancePointFollow_o **ppEVar2;
  
  if ((DAT_045684ed & 1) == 0) {
    FUN_01bab630(&DistancePointFollow_TypeInfo);
    DAT_045684ed = 1;
  }
  pEVar1 = (DistancePointFollow_o *)thunk_FUN_01bda818(DistancePointFollow_TypeInfo);
  DistancePointFollow___ctor(pEVar1,(MethodInfo *)0x0);
  ppEVar2 = &(__this->fields).DLCDMDDNFCP;
  *ppEVar2 = pEVar1;
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
  pEVar1 = (DistancePointFollow_o *)thunk_FUN_01bda818(DistancePointFollow_TypeInfo);
  DistancePointFollow___ctor(pEVar1,(MethodInfo *)0x0);
  ppEVar2 = &(__this->fields).IPPMJFKOBLF;
  *ppEVar2 = pEVar1;
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  EBCFKDCOIGA__HNIHOIAMDPC(__this,AHDGNOJPPIB,method);
  return;
}


// ===== public void KHKLLNFCMME(ModelObject NCNGALIAHJL, bool FOFCAILEKJD, ModelNode IIBPJLKGEBP, bool BHKCLMLKLNB, ModelObject CHBJNMMEAPG)  [RVA 0x34A5E98]
// EBCFKDCOIGA$$KHKLLNFCMME @ RVA 0x34A5E98

void EBCFKDCOIGA__KHKLLNFCMME
               (EBCFKDCOIGA_o *__this,ModelObject_o *NCNGALIAHJL,bool FOFCAILEKJD,
               ModelNode_o *IIBPJLKGEBP,bool BHKCLMLKLNB,ModelObject_o *CHBJNMMEAPG,
               MethodInfo *method)

{
  DistancePointFollow_o *pEVar1;
  
  pEVar1 = (__this->fields).DLCDMDDNFCP;
  if (pEVar1 != (DistancePointFollow_o *)0x0) {
    DistancePoint__KEAKEIPABPP
              ((DistancePoint_o *)pEVar1,NCNGALIAHJL,FOFCAILEKJD,IIBPJLKGEBP,BHKCLMLKLNB,CHBJNMMEAPG,
               (MethodInfo *)0x0);
    pEVar1 = (__this->fields).IPPMJFKOBLF;
    if (pEVar1 != (DistancePointFollow_o *)0x0) {
      DistancePoint__KEAKEIPABPP
                ((DistancePoint_o *)pEVar1,NCNGALIAHJL,FOFCAILEKJD,IIBPJLKGEBP,BHKCLMLKLNB,CHBJNMMEAPG
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

