// TypeDefIndex 2292
// Namespace: 
// public class NOGMFKIFAGJ : NKPJLEMPIKD
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x30

// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x330822C]
// NOGMFKIFAGJ$$HNIHOIAMDPC @ RVA 0x330822C

void NOGMFKIFAGJ__HNIHOIAMDPC
               (NOGMFKIFAGJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
                    /* catch() { ... } // from try @ 03408210 with catch @ 03408234 */
                    /* try { // try from 0340823c to 03508243 has its CatchHandler @ 03408258 */
                    /* try { // try from 03408244 to 0350824f has its CatchHandler @ 034080e0 */
  if ((DAT_04567770 & 1) == 0) {
                    /* try { // try from 03408250 to 03508257 has its CatchHandler @ 03408258 */
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0340823c with catch @ 03408258
                       catch(type#2 @ 00000000) { ... } // from try @ 03408250 with catch @ 03408258
                        */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567770 = 1;
  }
  NKPJLEMPIKD__HNIHOIAMDPC((NKPJLEMPIKD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(NOGMFKIFAGJ IBKIPBJJCPG)  [RVA 0x33082D8]
// NOGMFKIFAGJ$$.ctor @ RVA 0x33082D8

void NOGMFKIFAGJ___ctor(NOGMFKIFAGJ_o *__this,NOGMFKIFAGJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(NKPJLEMPIKD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (NOGMFKIFAGJ_o *)0x0) {
    ppSVar1 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
    *ppSVar1 = (IBKIPBJJCPG->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04(ppSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3308310]
// NOGMFKIFAGJ$$.ctor @ RVA 0x3308310

void NOGMFKIFAGJ___ctor(NOGMFKIFAGJ_o *__this,MethodInfo *method)

{
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3308318]
// NOGMFKIFAGJ$$KCHJCGEMCGE @ RVA 0x3308318

System_String_o * NOGMFKIFAGJ__KCHJCGEMCGE(NOGMFKIFAGJ_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== protected void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x3308320]
// NOGMFKIFAGJ$$HCOCAAIGNNL @ RVA 0x3308320

void NOGMFKIFAGJ__HCOCAAIGNNL(NOGMFKIFAGJ_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override bool EPBENPDCBFE(NKPJLEMPIKD.GBBCKIANDCN PHCGJGCHKCM)  [RVA 0x3308328]
// NOGMFKIFAGJ$$EPBENPDCBFE @ RVA 0x3308328

bool NOGMFKIFAGJ__EPBENPDCBFE
               (NOGMFKIFAGJ_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  ECENNHNBAME_o *__this_00;
  
  if ((DAT_04567771 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&StringLiteral_2968/*"Animation"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567771 = 1;
  }
  bVar2 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
  if (((PHCGJGCHKCM != (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) && (bVar2)) &&
     (__this_00 = (ECENNHNBAME_o *)(PHCGJGCHKCM->fields).IGMDDJFPIJL,
     __this_00 != (ECENNHNBAME_o *)0x0)) {
    bVar1 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment;
    if (((((System_Collections_Generic_Dictionary_object__object__c *)__this_00->klass)->_2).
         naturalAligment < bVar1) ||
       ((((System_Collections_Generic_Dictionary_object__object__c *)__this_00->klass)->_2).
        typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
LAB_03408468:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(__this_00);
    }
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       StringLiteral_2968/*"Animation"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar2) {
      __this_00 = (ECENNHNBAME_o *)
                  System_Collections_Generic_Dictionary<object,_object>__get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                             StringLiteral_2968/*"Animation"*/,
                             Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                            );
      if (__this_00 != (ECENNHNBAME_o *)0x0) {
        bVar1 = (ECENNHNBAME_TypeInfo->_2).naturalAligment;
        if (((((Il2CppClass *)__this_00->klass)->_2).naturalAligment < bVar1) ||
           ((((Il2CppClass *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)ECENNHNBAME_TypeInfo)) goto LAB_03408468;
      }
    }
    else {
      __this_00 = (ECENNHNBAME_o *)0x0;
    }
    bVar2 = System_String__op_Inequality
                      ((__this->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_1/*""*/,
                       (MethodInfo *)0x0);
    if ((!bVar2) ||
       ((__this_00 != (ECENNHNBAME_o *)0x0 &&
        (bVar2 = ECENNHNBAME__CBJGGDFAACP
                           (__this_00,(__this->fields)._COIPKAKHDFP_k__BackingField,
                            (MethodInfo *)0x0), bVar2)))) {
      return true;
    }
  }
  return false;
}

