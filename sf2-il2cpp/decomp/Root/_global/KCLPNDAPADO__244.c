// TypeDefIndex 244
// Namespace: 
// public class KCLPNDAPADO : IComparable<KCLPNDAPADO>
// Fields:
//   public string KPDPJONADPJ; // 0x10
//   public string JIJLBFGKNJK; // 0x18
//   public string MEHILFLIMCN; // 0x20
//   public string PMOIHBCFLLK; // 0x28
//   public int GKAGCIBKONM; // 0x30
//   public bool HAEBIACJLHP; // 0x34
//   public ECENNHNBAME FLIONKHMLLB; // 0x38

// ===== public static bool DGCODECJJCC(KCLPNDAPADO JELCKELNGBL, KCLPNDAPADO AAAEJFDFHBF)  [RVA 0x3227C04]
// KCLPNDAPADO$$DGCODECJJCC @ RVA 0x3227C04

bool KCLPNDAPADO__DGCODECJJCC
               (KCLPNDAPADO_o *JELCKELNGBL,KCLPNDAPADO_o *AAAEJFDFHBF,MethodInfo *method)

{
  if ((JELCKELNGBL != (KCLPNDAPADO_o *)0x0) && (AAAEJFDFHBF != (KCLPNDAPADO_o *)0x0)) {
    return (JELCKELNGBL->fields).GKAGCIBKONM < (AAAEJFDFHBF->fields).GKAGCIBKONM;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(string AHNCOKJAGPN, string DEKCPPOJFEH, ECENNHNBAME LEAPPPMIBLJ, int NKMPIFJLICH, string NLFLGPLBBAB, string AAKGNDJJKDM)  [RVA 0x3227C2C]
// KCLPNDAPADO$$.ctor @ RVA 0x3227C2C

void KCLPNDAPADO___ctor(KCLPNDAPADO_o *__this,System_String_o *AHNCOKJAGPN,
                       System_String_o *DEKCPPOJFEH,ECENNHNBAME_o *LEAPPPMIBLJ,int32_t NKMPIFJLICH,
                       System_String_o *NLFLGPLBBAB,System_String_o *AAKGNDJJKDM,MethodInfo *method)

{
  System_String_o **ppSVar1;
  ECENNHNBAME_o **ppEVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).KPDPJONADPJ = AHNCOKJAGPN;
  thunk_FUN_01c20e04(&__this->fields,AHNCOKJAGPN);
  ppSVar1 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar1 = DEKCPPOJFEH;
  thunk_FUN_01c20e04(ppSVar1,DEKCPPOJFEH);
  ppEVar2 = &(__this->fields).FLIONKHMLLB;
  *ppEVar2 = LEAPPPMIBLJ;
  thunk_FUN_01c20e04(ppEVar2,LEAPPPMIBLJ);
  (__this->fields).GKAGCIBKONM = NKMPIFJLICH;
  ppSVar1 = &(__this->fields).MEHILFLIMCN;
  *ppSVar1 = NLFLGPLBBAB;
  thunk_FUN_01c20e04(ppSVar1,NLFLGPLBBAB);
  ppSVar1 = &(__this->fields).PMOIHBCFLLK;
  *ppSVar1 = AAKGNDJJKDM;
  thunk_FUN_01c20e04(ppSVar1,AAKGNDJJKDM);
  (__this->fields).HAEBIACJLHP = false;
  return;
}


// ===== public int CompareTo(KCLPNDAPADO IBKIPBJJCPG)  [RVA 0x3227CCC]
// KCLPNDAPADO$$CompareTo @ RVA 0x3227CCC

int32_t KCLPNDAPADO__CompareTo(KCLPNDAPADO_o *__this,KCLPNDAPADO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  
  if (IBKIPBJJCPG != (KCLPNDAPADO_o *)0x0) {
    iVar1 = System_Int32__CompareTo
                      ((int)__this + 0x30,(IBKIPBJJCPG->fields).GKAGCIBKONM,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode MOINLMHNLAG, ECENNHNBAME LEAPPPMIBLJ)  [RVA 0x3227CEC]
// KCLPNDAPADO$$.ctor @ RVA 0x3227CEC

void KCLPNDAPADO___ctor(KCLPNDAPADO_o *__this,System_Xml_XmlNode_o *MOINLMHNLAG,
                       ECENNHNBAME_o *LEAPPPMIBLJ,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  ECENNHNBAME_o **ppEVar5;
  
  if ((DAT_04566f82 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11023/*"Rank"*/);
    FUN_01bab630(&StringLiteral_7289/*"Icon"*/);
    FUN_01bab630(&StringLiteral_8263/*"KeysDescription"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_5639/*"EffectDescription"*/);
    DAT_04566f82 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (MOINLMHNLAG != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(MOINLMHNLAG->klass->vtable)._16_get_Attributes.methodPtr)
                       (MOINLMHNLAG,(MOINLMHNLAG->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_7289/*"Icon"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).KPDPJONADPJ = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(MOINLMHNLAG->klass->vtable)._16_get_Attributes.methodPtr)
                         (MOINLMHNLAG,(MOINLMHNLAG->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_11023/*"Rank"*/,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
        (__this->fields).GKAGCIBKONM = iVar1;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(MOINLMHNLAG->klass->vtable)._16_get_Attributes.methodPtr)
                           (MOINLMHNLAG,(MOINLMHNLAG->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_8263/*"KeysDescription"*/,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          (__this->fields).MEHILFLIMCN = pSVar4;
          thunk_FUN_01c20e04();
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(MOINLMHNLAG->klass->vtable)._16_get_Attributes.methodPtr)
                             (MOINLMHNLAG,(MOINLMHNLAG->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_5639/*"EffectDescription"*/,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            (__this->fields).PMOIHBCFLLK = pSVar4;
            thunk_FUN_01c20e04();
            if (LEAPPPMIBLJ != (ECENNHNBAME_o *)0x0) {
              (__this->fields).JIJLBFGKNJK = (LEAPPPMIBLJ->fields).JIJLBFGKNJK;
              thunk_FUN_01c20e04();
              ppEVar5 = &(__this->fields).FLIONKHMLLB;
              *ppEVar5 = LEAPPPMIBLJ;
              thunk_FUN_01c20e04(ppEVar5,LEAPPPMIBLJ);
              (__this->fields).HAEBIACJLHP = false;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

