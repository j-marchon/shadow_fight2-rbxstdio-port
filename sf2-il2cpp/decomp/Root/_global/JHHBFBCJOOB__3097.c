// TypeDefIndex 3097
// Namespace: 
// public class JHHBFBCJOOB : JKHPOKJIMHC
// Fields:
//   private string DEKCPPOJFEH; // 0x10

// ===== private bool MLCLJJMKBEK(DNELIPCHKLK DBIAAJNKHLH)  [RVA 0x34CAA60]
// JHHBFBCJOOB$$MLCLJJMKBEK @ RVA 0x34CAA60

bool JHHBFBCJOOB__MLCLJJMKBEK(JHHBFBCJOOB_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = JHHBFBCJOOB__HMNGMOOOKBA(__this,(MethodInfo *)DBIAAJNKHLH);
  if (bVar1) {
    return true;
  }
  if (DBIAAJNKHLH != (DNELIPCHKLK_o *)0x0) {
    bVar1 = DNELIPCHKLK__LFHPFJOAJIO(DBIAAJNKHLH,(__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool HMNGMOOOKBA()  [RVA 0x34CAAA8]
// JHHBFBCJOOB$$HMNGMOOOKBA @ RVA 0x34CAAA8

bool JHHBFBCJOOB__HMNGMOOOKBA(JHHBFBCJOOB_o *__this,MethodInfo *method)

{
  bool bVar1;
  DNELIPCHKLK_o *__this_00;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar3;
  int index;
  System_Collections_Generic_List_PAMEPBLOLPB__o *__this_01;
  bool bVar4;
  
  if ((DAT_04568664 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568664 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    __this_01 = (pAVar3->fields).HDDNEKLMLMF;
    __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
    DNELIPCHKLK___ctor(__this_00,(MethodInfo *)0x0);
    if ((__this_00 != (DNELIPCHKLK_o *)0x0) &&
       (DNELIPCHKLK__LGOFNFEIKFB(__this_00,(__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0),
       __this_01 != (System_Collections_Generic_List_PAMEPBLOLPB__o *)0x0)) {
      if ((__this_01->fields)._size < 1) {
        bVar4 = false;
      }
      else {
        index = 0;
        bVar4 = false;
        do {
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index,
                              Method_System_Collections_Generic_List<PAMEPBLOLPB>_get_Item__);
          if (pIVar2 == (Il2CppObject *)0x0) goto LAB_035cabfc;
          bVar1 = DNELIPCHKLK__LFHPFJOAJIO
                            (__this_00,(System_String_o *)pIVar2[7].klass,(MethodInfo *)0x0);
          index = index + 1;
          bVar4 = (bool)(bVar4 | bVar1);
        } while (index < (__this_01->fields)._size);
      }
      return bVar4;
    }
  }
LAB_035cabfc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x34CAC00]
// JHHBFBCJOOB$$.ctor @ RVA 0x34CAC00

void JHHBFBCJOOB___ctor(JHHBFBCJOOB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  
  if ((DAT_04568665 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04568665 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).DEKCPPOJFEH = pSVar1;
      thunk_FUN_01c20e04(&__this->fields,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(string KGLJICLJHEL, int FLBLBILEGCK)  [RVA 0x34CAC94]
// JHHBFBCJOOB$$.ctor @ RVA 0x34CAC94

void JHHBFBCJOOB___ctor(JHHBFBCJOOB_o *__this,System_String_o *KGLJICLJHEL,int32_t FLBLBILEGCK,
                       MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).DEKCPPOJFEH = KGLJICLJHEL;
  thunk_FUN_01c20e04(&__this->fields,KGLJICLJHEL);
  return;
}

