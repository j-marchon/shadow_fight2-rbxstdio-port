// TypeDefIndex 1128
// Namespace: 
// public class KMJDCOABCCG
// Fields:
//   public int EAFPDFHFBOM; // 0x10
//   public int ADHFHEJFJPK; // 0x14
//   public int ICOLJMCHFEC; // 0x18
//   public int DBDIDOBPFMC; // 0x1C
//   public string JIJLBFGKNJK; // 0x20
//   public string BPCADJLKKGA; // 0x28
//   private string <PGCEKJLODEJ>k__BackingField; // 0x30
//   public string FNJHCHIDALO; // 0x38
//   public bool DKHMDPIMHIJ; // 0x40
//   public bool AHKHDBIDDIH; // 0x41
//   public bool CHLMHEGKKNH; // 0x42
//   private bool IGHHPFFGOIM; // 0x43

// ===== private void FFHJDGPNCKJ(string CJNHFNHJHPE)  [RVA 0x30F52B0]
// KMJDCOABCCG$$FFHJDGPNCKJ @ RVA 0x30F52B0

void KMJDCOABCCG__FFHJDGPNCKJ(KMJDCOABCCG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PGCEKJLODEJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string IEOHBNIIMFL()  [RVA 0x30F52B8]
// KMJDCOABCCG$$IEOHBNIIMFL @ RVA 0x30F52B8

System_String_o * KMJDCOABCCG__IEOHBNIIMFL(KMJDCOABCCG_o *__this,MethodInfo *method)

{
  return (__this->fields)._PGCEKJLODEJ_k__BackingField;
}


// ===== public void DGLJCGNHLIG()  [RVA 0x30F52C0]
// KMJDCOABCCG$$DGLJCGNHLIG @ RVA 0x30F52C0

void KMJDCOABCCG__DGLJCGNHLIG(KMJDCOABCCG_o *__this,MethodInfo *method)

{
  (__this->fields).DKHMDPIMHIJ = false;
  (__this->fields).AHKHDBIDDIH = false;
  (__this->fields).IGHHPFFGOIM = false;
  return;
}


// ===== public void GEBIJFANLGH(bool CJNHFNHJHPE)  [RVA 0x30F52CC]
// KMJDCOABCCG$$GEBIJFANLGH @ RVA 0x30F52CC

void KMJDCOABCCG__GEBIJFANLGH(KMJDCOABCCG_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  
  if (CJNHFNHJHPE) {
    if ((__this->fields).ICOLJMCHFEC < 1) {
      bVar1 = 0 < (__this->fields).DBDIDOBPFMC;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (__this != (KMJDCOABCCG_o *)0x0) {
    (__this->fields).IGHHPFFGOIM = bVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool AHLDEJMKJFE()  [RVA 0x30F5314]
// KMJDCOABCCG$$AHLDEJMKJFE @ RVA 0x30F5314

bool KMJDCOABCCG__AHLDEJMKJFE(KMJDCOABCCG_o *__this,MethodInfo *method)

{
  return (__this->fields).IGHHPFFGOIM;
}


// ===== public string DNOMHOGFIFO()  [RVA 0x30F531C]
// KMJDCOABCCG$$DNOMHOGFIFO @ RVA 0x30F531C

System_String_o * KMJDCOABCCG__DNOMHOGFIFO(KMJDCOABCCG_o *__this,MethodInfo *method)

{
  return (__this->fields)._PGCEKJLODEJ_k__BackingField;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x30F5324]
// KMJDCOABCCG$$.ctor @ RVA 0x30F5324

void KMJDCOABCCG___ctor(KMJDCOABCCG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_0456644c & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&StringLiteral_3538/*"BonusPrize"*/);
    FUN_01bab630(&StringLiteral_6886/*"GooglePlayID"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_9189/*"MoneyPrize"*/);
    FUN_01bab630(&StringLiteral_6681/*"GameCenterID"*/);
    FUN_01bab630(&StringLiteral_7289/*"Icon"*/);
    FUN_01bab630(&StringLiteral_10470/*"Priority"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_5304/*"Description"*/);
    FUN_01bab630(&StringLiteral_7076/*"Hidden"*/);
    FUN_01bab630(&StringLiteral_4839/*"CounterValue"*/);
    DAT_0456644c = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_4839/*"CounterValue"*/,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
      (__this->fields).ADHFHEJFJPK = iVar2;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_10470/*"Priority"*/,(MethodInfo *)0x0);
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
        (__this->fields).EAFPDFHFBOM = iVar2;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
          pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          (__this->fields).JIJLBFGKNJK = pSVar5;
          thunk_FUN_01c20e04();
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_5304/*"Description"*/,(MethodInfo *)0x0);
            pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            (__this->fields).BPCADJLKKGA = pSVar5;
            thunk_FUN_01c20e04();
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_7289/*"Icon"*/,(MethodInfo *)0x0);
              pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              pSVar5 = OFFIONDOEPM__CNLBHLNMCCI(pSVar5,(MethodInfo *)0x0);
              (__this->fields)._PGCEKJLODEJ_k__BackingField = pSVar5;
              thunk_FUN_01c20e04();
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar3,StringLiteral_9189/*"MoneyPrize"*/,(MethodInfo *)0x0);
                iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                (__this->fields).ICOLJMCHFEC = iVar2;
                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar3,StringLiteral_3538/*"BonusPrize"*/,(MethodInfo *)0x0);
                  iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                  (__this->fields).DBDIDOBPFMC = iVar2;
                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar3,StringLiteral_7076/*"Hidden"*/,(MethodInfo *)0x0);
                    bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                    (__this->fields).DKHMDPIMHIJ = false;
                    (__this->fields).AHKHDBIDDIH = false;
                    (__this->fields).CHLMHEGKKNH = bVar1;
                    (__this->fields).IGHHPFFGOIM = false;
                    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar1 = EOAOCPLIKOI__IHBLLJEMHLM((MethodInfo *)0x0);
                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      if (bVar1) {
                        puVar6 = &StringLiteral_6886/*"GooglePlayID"*/;
                      }
                      else {
                        puVar6 = &StringLiteral_6681/*"GameCenterID"*/;
                      }
                      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar3,(System_String_o *)*puVar6,(MethodInfo *)0x0);
                      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                      ppSVar7 = &(__this->fields).FNJHCHIDALO;
                      *ppSVar7 = pSVar5;
                      thunk_FUN_01c20e04(ppSVar7,pSVar5);
                      return;
                    }
                  }
                }
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

