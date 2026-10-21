// TypeDefIndex 533
// Namespace: 
// public class NIELMODLCLC : EAAHMDAMHNI
// Fields:
//   private LCAJGLLBBEC.ELJAALFNLIP AOIGHJKIBAA; // 0x20
//   private OLKKAIFGGAK AHGEJFDEJIF; // 0x28
//   private List<ObscuredString> DMEBCLCBAOE; // 0x30

// ===== public void .ctor()  [RVA 0x35976E8]
// NIELMODLCLC$$.ctor @ RVA 0x35976E8

void NIELMODLCLC___ctor(NIELMODLCLC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ObscuredString__o *__this_00;
  System_Collections_Generic_List_ObscuredString__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568da6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ObscuredString>_TypeInfo);
    DAT_04568da6 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ObscuredString__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ObscuredString>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ObscuredString>__ctor__);
  ppSVar1 = &(__this->fields).DMEBCLCBAOE;
                    /* try { // try from 0369774c to 03797753 has its CatchHandler @ 036977b8 */
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 0369775c to 03797767 has its CatchHandler @ 036977b4 */
                    /* try { // try from 03697768 to 037977ab has its CatchHandler @ 03697584 */
  EAAHMDAMHNI___ctor((EAAHMDAMHNI_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode IIBFFEPEHPF)  [RVA 0x3597770]
// NIELMODLCLC$$HNIHOIAMDPC @ RVA 0x3597770

void NIELMODLCLC__HNIHOIAMDPC
               (NIELMODLCLC_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_Char_array *separator;
  System_String_array *pSVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *item;
  ulong uVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *pCVar9;
  System_Collections_Generic_List_ObscuredString__o *__this_00;
  ulong uVar10;
  
  if ((DAT_04568da7 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_Add__);
                    /* try { // try from 036977ac to 037977af has its CatchHandler @ 03697814 */
                    /* try { // try from 036977b0 to 037977cf has its CatchHandler @ 03697584 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369775c with catch @ 036977b4
                        */
    FUN_01bab630(&string_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369774c with catch @ 036977b8
                        */
    FUN_01bab630(&StringLiteral_8907/*"Me"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
                    /* try { // try from 036977d0 to 037977d3 has its CatchHandler @ 036977f4 */
                    /* try { // try from 036977d4 to 037977fb has its CatchHandler @ 03697584 */
    FUN_01bab630(&StringLiteral_2983/*"Animations"*/);
    DAT_04568da7 = 1;
  }
  EAAHMDAMHNI__HNIHOIAMDPC((EAAHMDAMHNI_o *)__this,IIBFFEPEHPF,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036977d0 with catch @ 036977f4 */
  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 036977fc to 0379780f has its CatchHandler @ 03697878 */
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                       (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369769c with catch @ 03697810
                       try { // try from 03697810 to 0379782f has its CatchHandler @ 03697584 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036977ac with catch @ 03697814
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03697684 with catch @ 03697818
                        */
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
                    /* try { // try from 03697830 to 03797833 has its CatchHandler @ 03697854 */
                    /* try { // try from 03697834 to 0379785b has its CatchHandler @ 03697584 */
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_8907/*"Me"*/,(MethodInfo *)0x0);
      iVar3 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar6,(MethodInfo *)0x0);
      (__this->fields).AOIGHJKIBAA = iVar3;
                    /* catch() { ... } // from try @ 03697830 with catch @ 03697854 */
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                         (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0369785c to 03797863 has its CatchHandler @ 03697878 */
                    /* try { // try from 03697864 to 0379786f has its CatchHandler @ 03697584 */
                    /* try { // try from 03697870 to 03797877 has its CatchHandler @ 03697878 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036977fc with catch @ 03697878
                       catch(type#2 @ 00000000) { ... } // from try @ 0369785c with catch @ 03697878
                       catch(type#2 @ 00000000) { ... } // from try @ 03697870 with catch @ 03697878
                        */
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_2983/*"Animations"*/,(MethodInfo *)0x0);
        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar5,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        separator = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
        if (separator != (System_Char_array *)0x0) {
          if ((int)separator->max_length == 0) {
LAB_03697998:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          separator->m_Items[0] = 0x7c;
          if ((pSVar6 != (System_String_o *)0x0) &&
             (pSVar7 = System_String__Split(pSVar6,separator,1,(MethodInfo *)0x0),
             pSVar7 != (System_String_array *)0x0)) {
            if (0 < (int)pSVar7->max_length) {
              uVar10 = 0;
              uVar8 = pSVar7->max_length & 0xffffffff;
              do {
                if (uVar8 <= uVar10) goto LAB_03697998;
                __this_00 = (__this->fields).DMEBCLCBAOE;
                item = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                                 (pSVar7->m_Items[uVar10],(MethodInfo *)0x0);
                lVar2 = Method_System_Collections_Generic_List<ObscuredString>_Add__;
                if (__this_00 == (System_Collections_Generic_List_ObscuredString__o *)0x0)
                goto LAB_03697994;
                pCVar9 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pCVar9 == (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *)0x0)
                goto LAB_03697994;
                uVar1 = (__this_00->fields)._size;
                if (uVar1 < (uint)pCVar9->max_length) {
                  (__this_00->fields)._size = uVar1 + 1;
                  pCVar9->m_Items[(int)uVar1] = item;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                uVar1 = (uint)pSVar7->max_length;
                uVar8 = (ulong)uVar1;
                uVar10 = uVar10 + 1;
              } while ((long)uVar10 < (long)(int)uVar1);
            }
            return;
          }
        }
      }
    }
  }
LAB_03697994:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x359799C]
// NIELMODLCLC$$RandomizeObscuredVars @ RVA 0x359799C

void NIELMODLCLC__RandomizeObscuredVars(NIELMODLCLC_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ObscuredString__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568da8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
    DAT_04568da8 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DMEBCLCBAOE;
  if (__this_00 != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
        return;
      }
      if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)local_38.fields._current ==
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0) break;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredString__GPJJDLBJOAL
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)local_38.fields._current,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public override void GIENGNEGHPJ(ABMJNMFPDEJ APOLFFJGBEO)  [RVA 0x3597AE8]
// NIELMODLCLC$$GIENGNEGHPJ @ RVA 0x3597AE8

void NIELMODLCLC__GIENGNEGHPJ(NIELMODLCLC_o *__this,ABMJNMFPDEJ_o APOLFFJGBEO,MethodInfo *method)

{
  OLKKAIFGGAK_o *pOVar1;
  OLKKAIFGGAK_o **ppOVar2;
  
  EAAHMDAMHNI__GIENGNEGHPJ((EAAHMDAMHNI_o *)__this,APOLFFJGBEO,(MethodInfo *)0x0);
  pOVar1 = (__this->fields).super.HMMEFNNMBJK;
  if (pOVar1 != (OLKKAIFGGAK_o *)0x0) {
    pOVar1 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar1,(__this->fields).AOIGHJKIBAA,(MethodInfo *)0x0);
    ppOVar2 = &(__this->fields).AHGEJFDEJIF;
    *ppOVar2 = pOVar1;
    thunk_FUN_01c20e04(ppOVar2,pOVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool DIOFJFMLOFK(ObscuredString KGLJICLJHEL)  [RVA 0x3597B24]
// NIELMODLCLC$$DIOFJFMLOFK @ RVA 0x3597B24

bool NIELMODLCLC__DIOFJFMLOFK
               (NIELMODLCLC_o *__this,
               CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_o *__this_00;
  ECENNHNBAME_o *__this_01;
  System_String_o *KGLJICLJHEL_00;
  
  __this_00 = (__this->fields).AHGEJFDEJIF;
  if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
    __this_01 = OLKKAIFGGAK__FMEOPPFIHCB(__this_00,(MethodInfo *)0x0);
    KGLJICLJHEL_00 =
         CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                   (KGLJICLJHEL,(MethodInfo *)0x0);
    if (__this_01 != (ECENNHNBAME_o *)0x0) {
      bVar1 = ECENNHNBAME__CBJGGDFAACP(__this_01,KGLJICLJHEL_00,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool DGCODECJJCC()  [RVA 0x3597B70]
// NIELMODLCLC$$DGCODECJJCC @ RVA 0x3597B70

bool NIELMODLCLC__DGCODECJJCC(NIELMODLCLC_o *__this,MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  ECENNHNBAME_o *pEVar3;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_ObscuredString__o *pSVar4;
  OLKKAIFGGAK_o **ppOVar5;
  
  if ((DAT_04568da9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_TrueForAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_get_Count__);
    FUN_01bab630(&Method_NIELMODLCLC_DIOFJFMLOFK__);
    FUN_01bab630(&System_Predicate<ObscuredString>_TypeInfo);
    DAT_04568da9 = 1;
  }
  ppOVar5 = &(__this->fields).AHGEJFDEJIF;
  if (*ppOVar5 == (OLKKAIFGGAK_o *)0x0) {
    pOVar2 = (__this->fields).super.HMMEFNNMBJK;
    if (pOVar2 == (OLKKAIFGGAK_o *)0x0) goto LAB_03697c78;
    pOVar2 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar2,(__this->fields).AOIGHJKIBAA,(MethodInfo *)0x0);
    (__this->fields).AHGEJFDEJIF = pOVar2;
    thunk_FUN_01c20e04(ppOVar5,pOVar2);
  }
  pSVar4 = (__this->fields).DMEBCLCBAOE;
  if (pSVar4 != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
    if ((pSVar4->fields)._size == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
      if ((*ppOVar5 != (OLKKAIFGGAK_o *)0x0) &&
         (pEVar3 = OLKKAIFGGAK__FMEOPPFIHCB(*ppOVar5,(MethodInfo *)0x0), bVar1 = false,
         pEVar3 != (ECENNHNBAME_o *)0x0)) {
        pSVar4 = (__this->fields).DMEBCLCBAOE;
        match = (System_Predicate_T__o *)
                thunk_FUN_01bda818(System_Predicate<ObscuredString>_TypeInfo);
        System_Predicate<object>___ctor();
        if (pSVar4 != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
          bVar1 = System_Collections_Generic_List<object>__TrueForAll
                            ((System_Collections_Generic_List_object__o *)pSVar4,match,
                             Method_System_Collections_Generic_List<ObscuredString>_TrueForAll__);
          return bVar1;
        }
        goto LAB_03697c78;
      }
    }
    return bVar1;
  }
LAB_03697c78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

