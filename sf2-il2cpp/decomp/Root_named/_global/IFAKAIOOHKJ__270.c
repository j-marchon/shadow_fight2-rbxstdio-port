// TypeDefIndex 270
// Namespace: 
// public class IFAKAIOOHKJ : NKPJLEMPIKD
// Fields:
//   private string MHFJEFMNFPH; // 0x30

// ===== public void .ctor()  [RVA 0x3230CF8]
// IFAKAIOOHKJ$$.ctor @ RVA 0x3230CF8

void IFAKAIOOHKJ___ctor(IFAKAIOOHKJ_o *__this,MethodInfo *method)

{
  if ((DAT_04566fdb & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04566fdb = 1;
  }
  (__this->fields).MHFJEFMNFPH = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override bool EPBENPDCBFE(NKPJLEMPIKD.GBBCKIANDCN PHCGJGCHKCM)  [RVA 0x3230D58]
// IFAKAIOOHKJ$$EPBENPDCBFE @ RVA 0x3230D58

bool IFAKAIOOHKJ__EPBENPDCBFE
               (IFAKAIOOHKJ_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  System_String_o *CJNHFNHJHPE;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04566fdc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_3048/*"Area"*/);
    DAT_04566fdc = 1;
  }
  bVar2 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
  bVar3 = false;
  if ((PHCGJGCHKCM != (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) && (bVar2)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (PHCGJGCHKCM->fields).IGMDDJFPIJL;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar1 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CJNHFNHJHPE = (System_String_o *)
                      System_Collections_Generic_Dictionary<object,_object>__get_Item
                                (__this_00,StringLiteral_3048/*"Area"*/,
                                 Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                                );
        if (CJNHFNHJHPE == (System_String_o *)0x0) {
          CJNHFNHJHPE = (System_String_o *)0x0;
        }
        else if ((Il2CppClass *)CJNHFNHJHPE->klass != (Il2CppClass *)string_TypeInfo) {
          CJNHFNHJHPE = (System_String_o *)0x0;
        }
        bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
        if (!bVar2) {
          bVar2 = System_String__op_Equality
                            ((__this->fields).MHFJEFMNFPH,CJNHFNHJHPE,(MethodInfo *)0x0);
          return bVar2;
        }
      }
    }
    bVar3 = true;
  }
  return bVar3;
}


// ===== public void .ctor(IFAKAIOOHKJ IBKIPBJJCPG)  [RVA 0x3230E8C]
// IFAKAIOOHKJ$$.ctor @ RVA 0x3230E8C

void IFAKAIOOHKJ___ctor(IFAKAIOOHKJ_o *__this,IFAKAIOOHKJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  if ((DAT_04566fdd & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04566fdd = 1;
  }
  (__this->fields).MHFJEFMNFPH = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(NKPJLEMPIKD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3230EFC]
// IFAKAIOOHKJ$$HNIHOIAMDPC @ RVA 0x3230EFC

void IFAKAIOOHKJ__HNIHOIAMDPC
               (IFAKAIOOHKJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566fde & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_11456/*"RuleArea"*/);
    DAT_04566fde = 1;
  }
  NKPJLEMPIKD__HNIHOIAMDPC((NKPJLEMPIKD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_11456/*"RuleArea"*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).MHFJEFMNFPH;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

